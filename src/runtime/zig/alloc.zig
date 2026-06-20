const std = @import("std");
const builtin = @import("builtin");
const testing = std.testing;
const lean = @import("lean_object.zig");
const mpz_zig = @import("mpz_zig");
const runtime_options = @import("runtime_options");
const allocprof = @import("allocprof.zig");

const export_allocator_symbols = runtime_options.export_allocator_symbols;
const external_allocator = struct {
    extern fn lean_alloc_object(sz: usize) callconv(.c) *anyopaque;
    extern fn lean_free_object(o: *anyopaque) callconv(.c) void;
    extern fn lean_alloc_small_object(sz: c_uint) callconv(.c) *anyopaque;
};
// mimalloc has been removed from the build. Use libc malloc/free directly.
// The Zig mimalloc_compat.zig module exports mi_* symbols for C++ callers
// (object.cpp, mpz.cpp, lean.h inline functions, mi_stl_allocator).
const mimalloc = struct {
    fn mi_malloc_small(sz: usize) callconv(.c) ?*anyopaque {
        return @ptrCast(std.c.malloc(sz));
    }
    fn mi_malloc(sz: usize) callconv(.c) ?*anyopaque {
        return @ptrCast(std.c.malloc(sz));
    }
    fn mi_free_size(ptr: ?*anyopaque, sz: usize) callconv(.c) void {
        _ = sz;
        if (ptr) |p| std.c.free(@ptrCast(p));
    }
    fn mi_free(ptr: ?*anyopaque) callconv(.c) void {
        if (ptr) |p| std.c.free(@ptrCast(p));
    }
};
const task_runtime = if (builtin.is_test)
    struct {
        fn leanrt_task_deactivate_promise_impl(o: *anyopaque) callconv(.c) void {
            _ = o;
            @panic("promise deactivation helper unavailable in alloc.zig unit tests");
        }
    }
else
    struct {
        extern fn leanrt_task_deactivate_promise_impl(o: *anyopaque) callconv(.c) void;
    };
extern fn leanrt_task_deactivate_task_impl(task_obj: *lean.lean_task_object) callconv(.c) void;

pub const LEAN_PAGE_SIZE: usize = 8192;
pub const LEAN_SEGMENT_SIZE: usize = 8 * 1024 * 1024;
pub const LEAN_MAX_SMALL_OBJECT_SIZE: usize = 4096;
pub const LEAN_OBJECT_SIZE_DELTA: usize = 8;

const small_slot_count = LEAN_MAX_SMALL_OBJECT_SIZE / LEAN_OBJECT_SIZE_DELTA;
const allocation_magic: u32 = 0x4C45414E;
const allocation_kind_small: u8 = 1;
const allocation_kind_large: u8 = 2;
pub const allocation_kind_mpz: u8 = 3;

const AllocationMeta = extern struct {
    payload_size: usize,
    slot_idx: u16,
    kind: u8,
    reserved: u8,
    magic: u32,
};

comptime {
    if (@sizeOf(AllocationMeta) != 16) @compileError("AllocationMeta must stay 16 bytes");
}

threadlocal var g_small_free_lists: [small_slot_count]?*anyopaque = [_]?*anyopaque{null} ** small_slot_count;
threadlocal var g_heartbeat: u64 = 0;
var g_test_alloc_count = std.atomic.Value(usize).init(0);
var g_test_free_count = std.atomic.Value(usize).init(0);
var g_task_object_alloc_count = std.atomic.Value(usize).init(0);
var g_task_object_free_count = std.atomic.Value(usize).init(0);

fn emptyFreeLists() [small_slot_count]?*anyopaque {
    return [_]?*anyopaque{null} ** small_slot_count;
}

pub fn initializeRuntimeAllocator() void {}

pub fn initializeThreadAllocator() void {
    g_small_free_lists = emptyFreeLists();
}

pub fn finalizeThreadAllocator() void {
    g_small_free_lists = emptyFreeLists();
}

fn checkedAdd(a: usize, b: usize) usize {
    const result = @addWithOverflow(a, b);
    if (result[1] != 0) @panic("integer overflow in runtime computation");
    return result[0];
}

fn checkedMul(a: usize, b: usize) usize {
    const result = @mulWithOverflow(a, b);
    if (result[1] != 0) @panic("integer overflow in runtime computation");
    return result[0];
}

fn alignObjectSize(sz: usize) usize {
    if (sz == 0) return LEAN_OBJECT_SIZE_DELTA;
    const remainder = sz % LEAN_OBJECT_SIZE_DELTA;
    if (remainder == 0) return sz;
    return checkedAdd(sz, LEAN_OBJECT_SIZE_DELTA - remainder);
}

fn metaFromPayload(ptr: *anyopaque) *AllocationMeta {
    return @ptrFromInt(@intFromPtr(ptr) - @sizeOf(AllocationMeta));
}

fn payloadFromMeta(meta: *AllocationMeta) *anyopaque {
    return @ptrFromInt(@intFromPtr(meta) + @sizeOf(AllocationMeta));
}

fn payloadBytes(ptr: *anyopaque, len: usize) []u8 {
    const bytes: [*]u8 = @ptrFromInt(@intFromPtr(ptr));
    return bytes[0..len];
}

fn header(ptr: *anyopaque) *lean.lean_object {
    return @ptrCast(@alignCast(ptr));
}

fn mpzValue(obj: *lean.MpzObject) *mpz_zig.Mpz {
    return @ptrCast(@alignCast(&obj.m_value));
}

fn legacySmallPayloadSize(ptr: *anyopaque) usize {
    return header(ptr).m_cs_sz;
}

fn trackedMeta(payload_size: usize, slot_idx: usize, kind: u8) AllocationMeta {
    return .{
        .payload_size = payload_size,
        .slot_idx = @intCast(slot_idx),
        .kind = kind,
        .reserved = 0,
        .magic = allocation_magic,
    };
}

fn hasTrackedMeta(ptr: *anyopaque) bool {
    return metaFromPayload(ptr).magic == allocation_magic;
}

pub fn allocationPayloadSize(ptr: *anyopaque) ?usize {
    return if (hasTrackedMeta(ptr)) metaFromPayload(ptr).payload_size else null;
}

fn allocationKind(ptr: *anyopaque) ?u8 {
    return if (hasTrackedMeta(ptr)) metaFromPayload(ptr).kind else null;
}

pub fn allocTrackedPayload(payload_size: usize, kind: u8) *anyopaque {
    const total_size = checkedAdd(@sizeOf(AllocationMeta), payload_size);
    const lean_alloc = @import("lean_allocator");
    const raw = lean_alloc.leanAlloc(u8, total_size) orelse @panic("out of memory");
    const meta: *AllocationMeta = @ptrCast(@alignCast(raw));
    meta.* = trackedMeta(payload_size, 0, kind);
    const payload = payloadFromMeta(meta);
    zeroPayload(payload, payload_size);
    _ = g_test_alloc_count.fetchAdd(1, .acq_rel);
    return payload;
}

pub fn freeTrackedPayload(ptr: *anyopaque) void {
    const lean_alloc = @import("lean_allocator");
    const meta = metaFromPayload(ptr);
    const total_size = @sizeOf(AllocationMeta) + meta.payload_size;
    lean_alloc.leanFree(u8, @ptrCast(meta), total_size);
}

pub fn legacyPayloadSize(ptr: *anyopaque) usize {
    return legacySmallPayloadSize(ptr);
}

fn freeListWord(ptr: *anyopaque) *usize {
    return @ptrCast(@alignCast(ptr));
}

fn setFreeListNext(ptr: *anyopaque, next: ?*anyopaque) void {
    freeListWord(ptr).* = if (next) |value| @intFromPtr(value) else 0;
}

fn getFreeListNext(ptr: *anyopaque) ?*anyopaque {
    const raw = freeListWord(ptr).*;
    return if (raw == 0) null else @ptrFromInt(raw);
}

fn zeroPayload(ptr: *anyopaque, len: usize) void {
    @memset(payloadBytes(ptr, len), 0);
}

fn setHeapHeader(hdr: *lean.lean_object, tag: u8, other: u8) void {
    hdr.m_rc = 1;
    hdr.m_tag = tag;
    hdr.m_other = other;
    // Match C++ lean_set_st_header: in mimalloc mode (export_allocator_symbols=false),
    // do NOT overwrite m_cs_sz — it was set by lean_alloc_small_object to the
    // aligned total allocation size. In self-hosted mode, m_cs_sz is not used for
    // heap objects (allocationPayloadSize tracks the size), so zeroing is fine.
    if (export_allocator_symbols) {
        hdr.m_cs_sz = 0;
    }
}

fn allocSmallFresh(payload_size: usize, slot_idx: usize) *anyopaque {
    const total_size = checkedAdd(@sizeOf(AllocationMeta), payload_size);
    const lean_alloc = @import("lean_allocator");
    const raw = lean_alloc.leanAlloc(u8, total_size) orelse @panic("out of memory");
    const meta: *AllocationMeta = @ptrCast(@alignCast(raw));
    meta.* = trackedMeta(payload_size, slot_idx, allocation_kind_small);
    const payload = payloadFromMeta(meta);
    zeroPayload(payload, payload_size);
    return payload;
}

fn allocLarge(sz: usize) *anyopaque {
    const total_size = checkedAdd(@sizeOf(AllocationMeta), sz);
    const lean_alloc = @import("lean_allocator");
    const raw = lean_alloc.leanAlloc(u8, total_size) orelse @panic("out of memory");
    const meta: *AllocationMeta = @ptrCast(@alignCast(raw));
    meta.* = trackedMeta(sz, 0, allocation_kind_large);
    const payload = payloadFromMeta(meta);
    zeroPayload(payload, sz);
    return payload;
}

fn bumpHeartbeat() void {
    g_heartbeat += 1;
}

fn freeSmall(ptr: *anyopaque) void {
    const meta = metaFromPayload(ptr);
    if (meta.magic != allocation_magic) @panic("missing allocation record for small object");
    if (meta.kind != allocation_kind_small) @panic("lean_free_small on non-small allocation");
    const slot_idx: usize = meta.slot_idx;
    const next = g_small_free_lists[slot_idx];
    setFreeListNext(ptr, next);
    g_small_free_lists[slot_idx] = ptr;
    _ = g_test_free_count.fetchAdd(1, .acq_rel);
}

fn freeLarge(ptr: *anyopaque) void {
    if (metaFromPayload(ptr).magic != allocation_magic) @panic("missing allocation record for large object");
    _ = g_test_free_count.fetchAdd(1, .acq_rel);
    const lean_alloc = @import("lean_allocator");
    const meta = metaFromPayload(ptr);
    const total_size = @sizeOf(AllocationMeta) + meta.payload_size;
    lean_alloc.leanFree(u8, @ptrCast(meta), total_size);
}

fn freeLegacySmall(ptr: *anyopaque) void {
    const lean_alloc = @import("lean_allocator");
    lean_alloc.vtable.free(@ptrCast(ptr), 0, 1);
}

fn freeLegacyRaw(ptr: *anyopaque) void {
    _ = g_test_free_count.fetchAdd(1, .acq_rel);
    const lean_alloc = @import("lean_allocator");
    lean_alloc.vtable.free(@ptrCast(ptr), 0, 1);
}

fn freeDelegatedCppObject(ptr: *anyopaque) void {
    // Objects reaching this path were allocated by the legacy C++ runtime
    // (mimalloc). Free directly via mi_free to avoid recursion through
    // external_allocator.lean_free_object (which would resolve to the
    // Zig strong symbol after flipping).
    mimalloc.mi_free(ptr);
}

pub fn resetTestCounters() void {
    g_test_alloc_count.store(0, .release);
    g_test_free_count.store(0, .release);
    g_heartbeat = 0;
}

pub fn resetTaskObjectCounters() void {
    g_task_object_alloc_count.store(0, .release);
    g_task_object_free_count.store(0, .release);
}

pub fn testAllocCount() usize {
    return g_test_alloc_count.load(.acquire);
}

pub fn testFreeCount() usize {
    return g_test_free_count.load(.acquire);
}

pub fn heartbeatCount() u64 {
    return g_heartbeat;
}

pub fn setHeartbeatCount(value: u64) void {
    g_heartbeat = value;
}

pub fn noteTaskObjectAllocation() void {
    _ = g_task_object_alloc_count.fetchAdd(1, .acq_rel);
}

pub fn noteTaskObjectFree() void {
    _ = g_task_object_free_count.fetchAdd(1, .acq_rel);
}

pub fn taskObjectAllocCount() usize {
    return g_task_object_alloc_count.load(.acquire);
}

pub fn taskObjectFreeCount() usize {
    return g_task_object_free_count.load(.acquire);
}

pub export fn leanrt_test_allocator_reset_counters() callconv(.c) void {
    resetTestCounters();
}

pub export fn leanrt_test_allocator_alloc_count() callconv(.c) usize {
    return testAllocCount();
}

pub export fn leanrt_test_allocator_free_count() callconv(.c) usize {
    return testFreeCount();
}

pub export fn leanrt_test_task_object_counter_reset() callconv(.c) void {
    resetTaskObjectCounters();
}

pub export fn leanrt_test_task_object_alloc_count() callconv(.c) usize {
    return taskObjectAllocCount();
}

pub export fn leanrt_test_task_object_free_count() callconv(.c) usize {
    return taskObjectFreeCount();
}

fn slotIndexForSize(sz: usize) usize {
    const aligned = alignObjectSize(sz);
    std.debug.assert(aligned <= LEAN_MAX_SMALL_OBJECT_SIZE);
    std.debug.assert(aligned >= LEAN_OBJECT_SIZE_DELTA);
    return aligned / LEAN_OBJECT_SIZE_DELTA - 1;
}

fn isLargeAllocation(ptr: *anyopaque) bool {
    return metaFromPayload(ptr).kind == allocation_kind_large;
}

pub fn lean_alloc_small(sz: c_uint, slot_idx: c_uint) callconv(.c) *anyopaque {
    if (!export_allocator_symbols) {
        @panic("lean_alloc_small unavailable when allocator exports are disabled");
    }

    const payload_size = alignObjectSize(sz);
    if (payload_size > LEAN_MAX_SMALL_OBJECT_SIZE) @panic("small allocator size class overflow");

    const index: usize = slot_idx;
    if (index != slotIndexForSize(payload_size)) @panic("small allocator slot mismatch");

    bumpHeartbeat();
    _ = g_test_alloc_count.fetchAdd(1, .acq_rel);

    if (g_small_free_lists[index]) |ptr| {
        g_small_free_lists[index] = getFreeListNext(ptr);
        zeroPayload(ptr, payload_size);
        metaFromPayload(ptr).* = trackedMeta(payload_size, index, allocation_kind_small);
        return ptr;
    }

    return allocSmallFresh(payload_size, index);
}

pub fn lean_free_small(p: *anyopaque) callconv(.c) void {
    if (!export_allocator_symbols) {
        @panic("lean_free_small unavailable when allocator exports are disabled");
    }

    freeSmall(p);
}

pub fn lean_small_mem_size(p: *anyopaque) callconv(.c) c_uint {
    if (!export_allocator_symbols) {
        @panic("lean_small_mem_size unavailable when allocator exports are disabled");
    }

    if (allocationPayloadSize(p)) |payload_size| {
        return @intCast(payload_size);
    }

    switch (header(p).m_tag) {
        lean.LeanArray, lean.LeanScalarArray, lean.LeanString, lean.LeanClosure => {
            @panic("lean_small_mem_size on non-small allocation");
        },
        else => return @intCast(legacySmallPayloadSize(p)),
    }
}

pub fn lean_inc_heartbeat() callconv(.c) void {
    bumpHeartbeat();
}

pub fn lean_alloc_object(sz: usize) callconv(.c) *anyopaque {
    if (export_allocator_symbols) {
        const aligned = alignObjectSize(sz);
        if (aligned <= LEAN_MAX_SMALL_OBJECT_SIZE) {
            return lean_alloc_small(@intCast(aligned), @intCast(slotIndexForSize(aligned)));
        }
        bumpHeartbeat();
        _ = g_test_alloc_count.fetchAdd(1, .acq_rel);
        return allocLarge(sz);
    }

    // export_allocator_symbols=false: delegate directly to mimalloc,
    // matching C++ lean_alloc_object behavior (mi_malloc + m_cs_sz=0).
    const r = mimalloc.mi_malloc(sz) orelse @panic("lean_alloc_object: out of memory");
    const obj: *lean.lean_object = @ptrCast(@alignCast(r));
    obj.m_cs_sz = 0;
    return obj;
}

pub fn lean_free_object(o: *anyopaque) callconv(.c) void {
    if (!export_allocator_symbols) {
        // Delegate directly to mimalloc (mi_free), matching C++
        // lean_free_object behavior in mimalloc mode. Do NOT call
        // external_allocator.lean_free_object — after flipping, that
        // resolves to this same Zig strong symbol and would recurse.
        // mimalloc's mi_free is equivalent to mi_free_size (it ignores
        // the size hint internally).
        mimalloc.mi_free(o);
        return;
    }

    if (header(o).m_tag == lean.LeanMPZ) {
        if (allocationKind(o) == allocation_kind_mpz) {
            const mpz_obj: *lean.MpzObject = @ptrCast(@alignCast(o));
            mpzValue(mpz_obj).deinit();
            _ = g_test_free_count.fetchAdd(1, .acq_rel);
            std.c.free(metaFromPayload(o));
        } else {
            freeDelegatedCppObject(o);
        }
        return;
    }

    if (header(o).m_tag == lean.LeanExternal) {
        const ext: *lean.lean_external_object = @ptrCast(@alignCast(o));
        if (ext.m_data) |data| {
            ext.m_class.m_finalize(data);
        }
        if (allocationPayloadSize(o)) |_| {
            freeSmall(o);
        } else {
            freeLegacySmall(o);
        }
        return;
    }

    if (header(o).m_tag == lean.LeanTask and allocationPayloadSize(o) != null) {
        const task: *lean.lean_task_object = @ptrCast(@alignCast(o));
        leanrt_task_deactivate_task_impl(task);
        return;
    }

    if (allocationPayloadSize(o)) |_| {
        if (isLargeAllocation(o)) {
            freeLarge(o);
        } else {
            freeSmall(o);
        }
        return;
    }

    if (header(o).m_tag == lean.LeanPromise) {
        task_runtime.leanrt_task_deactivate_promise_impl(o);
        return;
    }

    switch (header(o).m_tag) {
        lean.LeanArray, lean.LeanScalarArray, lean.LeanString, lean.LeanClosure => freeLegacyRaw(o),
        lean.LeanTask, lean.LeanPromise => freeDelegatedCppObject(o),
        lean.LeanThunk, lean.LeanRef => freeLegacySmall(o),
        else => freeLegacySmall(o),
    }
}
pub fn lean_free_small_object(o: *anyopaque) void {
    if (!export_allocator_symbols) {
        // Same rationale as lean_free_object: call mi_free directly
        // to avoid recursion through external_allocator after flipping.
        mimalloc.mi_free(o);
        return;
    }

    if (allocationPayloadSize(o)) |_| {
        freeSmall(o);
    } else {
        freeLegacySmall(o);
    }
}
pub fn allocCtorMemory(sz: usize) *anyopaque {
    return lean_alloc_object(sz);
}

pub fn allocSmallObject(sz: usize) *anyopaque {
    if (!export_allocator_symbols) {
        // In mimalloc mode, use mi_malloc_small (not mi_malloc) and set m_cs_sz
        // to the aligned allocation size, matching C++ lean_alloc_small_object.
        const aligned = alignObjectSize(sz);
        const mem = mimalloc.mi_malloc_small(aligned);
        if (mem == null) @panic("out of memory");
        const o: *lean.lean_object = @ptrCast(@alignCast(mem.?));
        o.m_cs_sz = @intCast(aligned);
        return @ptrCast(o);
    }
    return lean_alloc_object(sz);
}

pub fn freeSmallObject(o: *anyopaque) void {
    lean_free_small_object(o);
}

pub fn lean_alloc_ctor(tag: c_uint, num_objs: c_uint, scalar_sz: c_uint) *anyopaque {
    if (tag > lean.LeanMaxCtorTag) @panic("constructor tag out of range");
    if (num_objs > std.math.maxInt(u8)) @panic("constructor object slot overflow");
    if (scalar_sz > std.math.maxInt(u16)) @panic("constructor scalar size overflow");

    const object_bytes = checkedMul(@sizeOf(?*anyopaque), num_objs);
    const total_size = checkedAdd(checkedAdd(@sizeOf(lean.lean_ctor_object), object_bytes), scalar_sz);

    if (!export_allocator_symbols) {
        // In mimalloc mode, use C++ lean_alloc_small_object (not lean_alloc_object)
        // because lean_alloc_small_object calls mi_malloc_small and sets m_cs_sz to
        // the aligned allocation size. This matches C++ lean_alloc_ctor_memory behavior.
        // setHeapHeader preserves m_cs_sz in mimalloc mode.
        const aligned = alignObjectSize(total_size);
        if (aligned > std.math.maxInt(c_uint)) @panic("constructor size overflow");
        const ptr = external_allocator.lean_alloc_small_object(@intCast(aligned));
        const ctor: *lean.lean_ctor_object = @ptrCast(@alignCast(ptr));
        setHeapHeader(&ctor.m_header, @intCast(tag), @intCast(num_objs));
        // C++ lean_alloc_ctor_memory zeroes the last word of padding when aligned > sz.
        // We replicate that behavior to match C++ semantics for sharecommon.
        if (aligned > total_size) {
            const end = @as([*]usize, @ptrCast(@alignCast(ptr)));
            const end_idx = (aligned / @sizeOf(usize)) - 1;
            end[end_idx] = 0;
        }
        allocprof.recordAlloc(@intCast(tag));
        return ptr;
    }

    const ptr = lean_alloc_object(total_size);
    const ctor: *lean.lean_ctor_object = @ptrCast(@alignCast(ptr));
    setHeapHeader(&ctor.m_header, @intCast(tag), @intCast(num_objs));
    ctor.m_header.m_cs_sz = @intCast(scalar_sz);
    allocprof.recordAlloc(@intCast(tag));
    return ptr;
}

pub fn lean_alloc_closure(fun: ?*anyopaque, arity: c_uint, num_fixed: c_uint) *anyopaque {
    if (arity == 0) @panic("closure arity must be positive");
    if (num_fixed >= arity) @panic("closure fixed arguments must be less than arity");

    const object_bytes = checkedMul(@sizeOf(?*anyopaque), num_fixed);
    const total_size = checkedAdd(@sizeOf(lean.lean_closure_object), object_bytes);
    const ptr = lean_alloc_object(total_size);
    const closure: *lean.lean_closure_object = @ptrCast(@alignCast(ptr));
    setHeapHeader(&closure.m_header, lean.LeanClosure, 0);
    closure.m_fun = fun;
    closure.m_arity = @intCast(arity);
    closure.m_num_fixed = @intCast(num_fixed);
    allocprof.recordAlloc(lean.LeanClosure);
    return ptr;
}

pub fn lean_alloc_array(size: usize, capacity: usize) *anyopaque {
    if (size > capacity) @panic("array size exceeds capacity");

    const object_bytes = checkedMul(@sizeOf(?*anyopaque), capacity);
    const total_size = checkedAdd(@sizeOf(lean.lean_array_object), object_bytes);
    const ptr = lean_alloc_object(total_size);
    const array: *lean.lean_array_object = @ptrCast(@alignCast(ptr));
    setHeapHeader(&array.m_header, lean.LeanArray, 0);
    array.m_size = size;
    allocprof.recordAlloc(lean.LeanArray);
    array.m_capacity = capacity;
    return ptr;
}

pub fn lean_alloc_sarray(elem_size: c_uint, size: usize, capacity: usize) *anyopaque {
    if (size > capacity) @panic("scalar array size exceeds capacity");
    if (elem_size > std.math.maxInt(u8)) @panic("scalar element size overflow");

    const data_bytes = checkedMul(elem_size, capacity);
    const total_size = checkedAdd(@sizeOf(lean.lean_sarray_object), data_bytes);
    const ptr = lean_alloc_object(total_size);
    const array: *lean.lean_sarray_object = @ptrCast(@alignCast(ptr));
    setHeapHeader(&array.m_header, lean.LeanScalarArray, @intCast(elem_size));
    array.m_size = size;
    array.m_capacity = capacity;
    return ptr;
}

comptime {
    if (export_allocator_symbols) {
        @export(&lean_alloc_small, .{ .name = "lean_alloc_small" });
        @export(&lean_free_small, .{ .name = "lean_free_small" });
        @export(&lean_small_mem_size, .{ .name = "lean_small_mem_size" });
        // lean_inc_heartbeat, lean_alloc_object, lean_free_object
        // moved outside export_allocator_symbols gate below
    }
}

comptime {
    @export(&lean_inc_heartbeat, .{ .name = "lean_inc_heartbeat" });
    @export(&lean_alloc_object, .{ .name = "lean_alloc_object" });
    @export(&lean_free_object, .{ .name = "lean_free_object" });
}
test "lean_alloc_object returns aligned non-null pointers" {
    resetTestCounters();
    const ptr = lean_alloc_object(64);
    defer lean_free_object(ptr);

    try testing.expect(@intFromPtr(ptr) % LEAN_OBJECT_SIZE_DELTA == 0);
    try testing.expectEqual(@as(usize, 1), testAllocCount());
}

test "small allocations across size classes balance counters" {
    const sizes = [_]usize{ 16, 32, 64, 128, 256, 512, 1024, 2048, 4096 };

    resetTestCounters();
    for (sizes) |size| {
        var ptrs: [1000]*anyopaque = undefined;
        for (&ptrs) |*ptr| {
            ptr.* = lean_alloc_object(size);
        }
        for (ptrs) |ptr| {
            lean_free_object(ptr);
        }
    }

    try testing.expectEqual(testAllocCount(), testFreeCount());
}

test "large allocations use the fallback path and free cleanly" {
    resetTestCounters();
    const ptr = lean_alloc_object(LEAN_MAX_SMALL_OBJECT_SIZE + 1);
    defer lean_free_object(ptr);

    try testing.expect(isLargeAllocation(ptr));
}

test "heartbeat counter advances on each allocation" {
    resetTestCounters();

    var i: usize = 0;
    while (i < 10_000) : (i += 1) {
        const ptr = lean_alloc_object(16);
        lean_free_object(ptr);
    }

    try testing.expectEqual(@as(u64, 10_000), heartbeatCount());
}

test "small allocator tracks slot size" {
    resetTestCounters();
    const ptr = lean_alloc_small(24, @intCast(slotIndexForSize(24)));
    defer lean_free_small(ptr);

    try testing.expectEqual(@as(c_uint, 24), lean_small_mem_size(ptr));
}

test "lean_alloc_ctor initializes the constructor header" {
    const ptr = lean_alloc_ctor(7, 3, 16);
    defer lean_free_object(ptr);

    const ctor: *lean.lean_ctor_object = @ptrCast(@alignCast(ptr));
    try testing.expectEqual(@as(i32, 1), ctor.m_header.m_rc);
    try testing.expectEqual(@as(u16, 16), ctor.m_header.m_cs_sz);
    try testing.expectEqual(@as(u8, 3), ctor.m_header.m_other);
    try testing.expectEqual(@as(u8, 7), ctor.m_header.m_tag);
}

test "lean_alloc_closure initializes closure metadata" {
    const fn_ptr = @as(?*anyopaque, @ptrFromInt(0x12340));
    const ptr = lean_alloc_closure(fn_ptr, 4, 2);
    defer lean_free_object(ptr);

    const closure: *lean.lean_closure_object = @ptrCast(@alignCast(ptr));
    try testing.expectEqual(@as(i32, 1), closure.m_header.m_rc);
    try testing.expectEqual(lean.LeanClosure, closure.m_header.m_tag);
    try testing.expectEqual(fn_ptr, closure.m_fun);
    try testing.expectEqual(@as(u16, 4), closure.m_arity);
    try testing.expectEqual(@as(u16, 2), closure.m_num_fixed);
}

test "lean_alloc_array initializes size and capacity" {
    const ptr = lean_alloc_array(2, 5);
    defer lean_free_object(ptr);

    const array: *lean.lean_array_object = @ptrCast(@alignCast(ptr));
    try testing.expectEqual(@as(i32, 1), array.m_header.m_rc);
    try testing.expectEqual(lean.LeanArray, array.m_header.m_tag);
    try testing.expectEqual(@as(usize, 2), array.m_size);
    try testing.expectEqual(@as(usize, 5), array.m_capacity);
}

test "lean_alloc_sarray initializes scalar array metadata" {
    const ptr = lean_alloc_sarray(4, 3, 8);
    defer lean_free_object(ptr);

    const array: *lean.lean_sarray_object = @ptrCast(@alignCast(ptr));
    try testing.expectEqual(@as(i32, 1), array.m_header.m_rc);
    try testing.expectEqual(lean.LeanScalarArray, array.m_header.m_tag);
    try testing.expectEqual(@as(u8, 4), array.m_header.m_other);
    try testing.expectEqual(@as(usize, 3), array.m_size);
    try testing.expectEqual(@as(usize, 8), array.m_capacity);
}

fn allocLegacySmallObject(payload_size: usize, tag: u8) *anyopaque {
    // hasTrackedMeta reads @sizeOf(AllocationMeta) bytes before the payload.
    // For real legacy objects those bytes sit inside a mimalloc heap; for
    // these malloc-backed test objects they are only guaranteed mapped when
    // they do not cross a page boundary, so retry until the prefix is
    // page-safe. The underlying unconditional read is tracked in
    // docs/ROADMAP.md (M8).
    var rejected: [8]*anyopaque = undefined;
    var rejected_len: usize = 0;
    defer for (rejected[0..rejected_len]) |p| std.c.free(p);
    const payload = while (true) {
        const candidate = std.c.malloc(payload_size) orelse @panic("out of memory");
        if (@intFromPtr(candidate) % std.heap.pageSize() >= @sizeOf(AllocationMeta)) break candidate;
        if (rejected_len == rejected.len) @panic("cannot place legacy test object off a page start");
        rejected[rejected_len] = candidate;
        rejected_len += 1;
    };
    zeroPayload(payload, payload_size);

    const hdr: *lean.lean_object = @ptrCast(@alignCast(payload));
    hdr.* = .{
        .m_rc = 1,
        .m_cs_sz = @intCast(payload_size),
        .m_other = 0,
        .m_tag = tag,
    };
    return payload;
}

test "lean_free_object accepts legacy small allocations" {
    const ptr = allocLegacySmallObject(@sizeOf(lean.lean_object), 0);
    lean_free_object(ptr);
}

test "lean_small_mem_size accepts legacy small allocations" {
    const ptr = allocLegacySmallObject(@sizeOf(lean.lean_ref_object), lean.LeanRef);
    defer std.c.free(ptr);

    try testing.expectEqual(@as(c_uint, @intCast(@sizeOf(lean.lean_ref_object))), lean_small_mem_size(ptr));
}

// C++ mangled: lean::add_heartbeats(unsigned long long)
fn cpp_add_heartbeats(count: u64) callconv(.c) void {
    g_heartbeat += count;
}
comptime {
    @export(&cpp_add_heartbeats, .{ .name = "_ZN4lean14add_heartbeatsEy", .linkage = .strong });
}

// C++ mangled: lean::set_heartbeats(unsigned long long)
fn cpp_set_heartbeats(count: u64) callconv(.c) void {
    g_heartbeat = count;
}

// C++ mangled: lean::get_num_heartbeats()
fn cpp_get_num_heartbeats() callconv(.c) u64 {
    return g_heartbeat;
}

comptime {
    @export(&cpp_set_heartbeats, .{ .name = "_ZN4lean14set_heartbeatsEy", .linkage = .strong });
    @export(&cpp_get_num_heartbeats, .{ .name = "_ZN4lean18get_num_heartbeatsEv", .linkage = .strong });
}
