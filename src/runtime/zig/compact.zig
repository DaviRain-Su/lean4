// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `compact` subsystem.
//!
//! First pass: v2 format, no closures, no mmap, no structural hash-consing,
//! identity-based sharing map only. Correct but larger files than C++.

const std = @import("std");
const testing = std.testing;
const alloc = @import("alloc.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const mpz_object = @import("mpz_object.zig");
const rc = @import("rc.zig");
const array = @import("array.zig");
const ctor = @import("ctor.zig");
const string = @import("string.zig");
const sharecommon = @import("sharecommon.zig");

const Obj = ?*anyopaque;
const WORD_SIZE = @sizeOf(usize);
const ALIGN = 1 << 16;
const g_null_offset: usize = 0x7fff_ffff_ffff_ffff;

pub const RegionView = struct {
    begin: [*]u8,
    size: usize,
    base_addr: usize,
};

pub const LibInfo = struct {
    name: [*:0]u8,
    handle: ?*anyopaque,
    base_addr: usize,
};

pub const LibReloc = struct {
    obj_offset: usize,
    fn_idx: usize,
};

pub fn ptrTag(o: *anyopaque) u8 {
    return object.lean_ptr_tag(o);
}

pub fn ptrOther(o: *anyopaque) u8 {
    const h: *align(1) lean.lean_object = @ptrCast(o);
    return h.m_other;
}

pub fn setNonHeapHeader(o: *anyopaque, sz: usize, tag: u8, other: u8) void {
    const h: *align(1) lean.lean_object = @ptrCast(o);
    h.* = .{
        .m_rc = 1,
        .m_cs_sz = @intCast(sz),
        .m_other = other,
        .m_tag = tag,
    };
}

fn isDepRegionPtr(dep_regions: []RegionView, p: *anyopaque) bool {
    const addr = @intFromPtr(p);
    for (dep_regions) |region| {
        const begin = @intFromPtr(region.begin);
        if (addr >= begin and addr < begin + region.size) return true;
    }
    return false;
}

fn alignUp(n: usize, a: usize) usize {
    const rem = n % a;
    return if (rem == 0) n else n + (a - rem);
}

pub const Compactor = struct {
    base_addr: usize,
    buffer: [*]u8,
    capacity: usize,
    next_offset: usize,
    map: std.AutoHashMap(usize, usize),
    dep_regions: []RegionView,
    allow_closures: bool,

    pub fn init(base_addr: usize, dep_regions: []RegionView, allow_closures: bool) Compactor {
        const initial = 4096;
        const buffer = std.heap.c_allocator.alloc(u8, initial) catch @panic("out of memory");
        return .{
            .base_addr = base_addr,
            .buffer = buffer.ptr,
            .capacity = initial,
            .next_offset = 0,
            .map = std.AutoHashMap(usize, usize).init(std.heap.c_allocator),
            .dep_regions = dep_regions,
            .allow_closures = allow_closures,
        };
    }

    pub fn deinit(self: *Compactor) void {
        std.heap.c_allocator.free(self.buffer[0..self.capacity]);
        self.map.deinit();
    }

    fn grow(self: *Compactor, need: usize) void {
        const min_new = self.capacity * 2;
        const new_cap = if (need > min_new) alignUp(need, ALIGN) else min_new;
        const new_buffer = std.heap.c_allocator.realloc(self.buffer[0..self.capacity], new_cap) catch @panic("out of memory");
        self.buffer = new_buffer.ptr;
        self.capacity = new_cap;
    }

    pub fn allocBytes(self: *Compactor, sz: usize) [*]u8 {
        const aligned = alignUp(sz, WORD_SIZE);
        if (self.next_offset + aligned > self.capacity) {
            self.grow(self.next_offset + aligned);
        }
        const result = self.buffer + self.next_offset;
        self.next_offset += aligned;
        return result;
    }

    pub fn size(self: *Compactor) usize {
        return self.next_offset;
    }

    pub fn data(self: *Compactor) [*]u8 {
        return self.buffer;
    }

    fn toOffset(self: *Compactor, p: [*]u8) usize {
        return @intFromPtr(p) - @intFromPtr(self.buffer);
    }

    fn toBasePtr(self: *Compactor, offset: usize) usize {
        return self.base_addr + offset;
    }

    fn copyObject(self: *Compactor, o: *anyopaque, sz: usize) [*]u8 {
        const dst = self.allocBytes(sz);
        const src = @as([*]const u8, @ptrCast(o));
        @memcpy(dst[0..sz], src[0..sz]);
        return dst;
    }

    fn save(self: *Compactor, o: *anyopaque, offset: usize) void {
        self.map.put(@intFromPtr(o), offset) catch @panic("out of memory");
    }

    fn compact(self: *Compactor, o: ?*anyopaque) usize {
        if (o == null) return @intFromPtr(object.lean_box(0));
        if (object.lean_is_scalar(o)) return @intFromPtr(o);
        const addr = @intFromPtr(o);
        if (self.map.get(addr)) |offset| return self.toBasePtr(offset);
        if (isDepRegionPtr(self.dep_regions, o.?)) return addr; // preserve dep-region pointer

        const tag = ptrTag(o.?);
        const offset = switch (tag) {
            lean.LeanString => self.insertString(o.?),
            lean.LeanScalarArray => self.insertScalarArray(o.?),
            lean.LeanArray => self.insertArray(o.?),
            lean.LeanMPZ => self.insertMPZ(o.?),
            lean.LeanThunk => self.insertThunk(o.?),
            lean.LeanRef => self.insertRef(o.?),
            lean.LeanTask => self.insertTask(o.?),
            lean.LeanPromise => self.insertPromise(o.?),
            lean.LeanClosure => self.insertClosure(o.?),
            lean.LeanExternal => @panic("external object in compacted region"),
            else => self.insertConstructor(o.?),
        };
        self.save(o.?, offset);
        return self.toBasePtr(offset);
    }

    pub fn compactRoot(self: *Compactor, o: *anyopaque) usize {
        const root_slot = self.allocBytes(@sizeOf(usize));
        const root_offset = self.toOffset(root_slot);
        const root = self.compact(o);
        const slot: *usize = @ptrCast(@alignCast(root_slot));
        slot.* = root;
        return self.toBasePtr(root_offset);
    }

    fn insertConstructor(self: *Compactor, o: *anyopaque) usize {
        const num_objs = ptrOther(o);
        const sz = object.lean_object_data_byte_size(o);
        const dst = self.copyObject(o, sz);
        const slots: [*]Obj = @ptrCast(@alignCast(dst + @sizeOf(lean.lean_object)));
        for (0..num_objs) |i| {
            slots[i] = @ptrFromInt(self.compact(slots[i]));
        }
        const offset = self.toOffset(dst);
        return offset;
    }

    fn insertString(self: *Compactor, o: *anyopaque) usize {
        const sz = object.lean_object_data_byte_size(o);
        const dst = self.copyObject(o, sz);
        return self.toOffset(dst);
    }

    fn insertScalarArray(self: *Compactor, o: *anyopaque) usize {
        const sz = object.lean_object_data_byte_size(o);
        const dst = self.copyObject(o, sz);
        return self.toOffset(dst);
    }

    fn insertArray(self: *Compactor, o: *anyopaque) usize {
        const sz = object.lean_object_data_byte_size(o);
        const dst = self.copyObject(o, sz);
        const arr: *lean.lean_array_object = @ptrCast(@alignCast(dst));
        const slots: [*]Obj = @ptrCast(@alignCast(&arr.m_data));
        for (0..arr.m_size) |i| {
            slots[i] = @ptrFromInt(self.compact(slots[i]));
        }
        return self.toOffset(dst);
    }

    fn insertMPZ(self: *Compactor, o: *anyopaque) usize {
        const mpz = mpz_object.mpzValue(o);
        const nlimbs = @as(usize, @intCast(@abs(mpz._mp_size)));
        const data_sz = WORD_SIZE * nlimbs;
        const obj_sz = @sizeOf(lean.MpzObject) + data_sz;
        const dst = self.allocBytes(obj_sz);
        const src = @as([*]const u8, @ptrCast(o));
        @memcpy(dst[0..@sizeOf(lean.MpzObject)], src[0..@sizeOf(lean.MpzObject)]);
        setNonHeapHeader(@ptrCast(dst), obj_sz, lean.LeanMPZ, 0);
        const data_ptr = dst + @sizeOf(lean.MpzObject);
        const old_data = mpz._mp_d;
        @memcpy(data_ptr[0..data_sz], @as([*]const u8, @ptrCast(old_data))[0..data_sz]);
        const new_mpz = mpz_object.mpzValue(@ptrCast(dst));
        new_mpz._mp_d = @ptrFromInt(self.toBasePtr(@intFromPtr(data_ptr) - @intFromPtr(self.buffer)));
        new_mpz._mp_alloc = @intCast(nlimbs);
        return self.toOffset(dst);
    }

    fn insertThunk(self: *Compactor, o: *anyopaque) usize {
        const thunk: *lean.lean_thunk_object = @ptrCast(@alignCast(o));
        if (thunk.m_closure != null) {
            @panic("closure in compacted region");
        }
        const sz = @sizeOf(lean.lean_thunk_object);
        const dst = self.copyObject(o, sz);
        const new_thunk: *lean.lean_thunk_object = @ptrCast(@alignCast(dst));
        new_thunk.m_value = @ptrFromInt(self.compact(thunk.m_value));
        return self.toOffset(dst);
    }

    fn insertRef(self: *Compactor, o: *anyopaque) usize {
        const ref: *lean.lean_ref_object = @ptrCast(@alignCast(o));
        const sz = @sizeOf(lean.lean_ref_object);
        const dst = self.copyObject(o, sz);
        const new_ref: *lean.lean_ref_object = @ptrCast(@alignCast(dst));
        new_ref.m_value = @ptrFromInt(self.compact(ref.m_value));
        return self.toOffset(dst);
    }

    fn insertTask(self: *Compactor, o: *anyopaque) usize {
        const task: *lean.lean_task_object = @ptrCast(@alignCast(o));
        const sz = @sizeOf(lean.lean_task_object);
        const dst = self.copyObject(o, sz);
        const new_task: *lean.lean_task_object = @ptrCast(@alignCast(dst));
        new_task.m_value = @ptrFromInt(self.compact(task.m_value));
        new_task.m_imp = null;
        return self.toOffset(dst);
    }

    fn insertPromise(self: *Compactor, o: *anyopaque) usize {
        const promise: *lean.lean_promise_object = @ptrCast(@alignCast(o));
        const sz = @sizeOf(lean.lean_promise_object);
        const dst = self.copyObject(o, sz);
        const new_promise: *lean.lean_promise_object = @ptrCast(@alignCast(dst));
        new_promise.m_result = @ptrCast(@alignCast(@as(?*anyopaque, @ptrFromInt(self.compact(promise.m_result)))));
        return self.toOffset(dst);
    }

    fn insertClosure(self: *Compactor, o: *anyopaque) usize {
        _ = o;
        if (self.allow_closures) {
            @panic("closures not yet supported in Zig compact port");
        } else {
            @panic("closure in compacted region");
        }
    }
};

pub const Reader = struct {
    size: usize,
    base_addr: usize,
    begin: [*]u8,
    next: [*]u8,
    end: [*]u8,
    dep_regions: []RegionView,

    pub fn init(data: [*]u8, sz: usize, base_addr: usize, dep_regions: []RegionView) Reader {
        return .{
            .size = sz,
            .base_addr = base_addr,
            .begin = data,
            .next = data,
            .end = data + sz,
            .dep_regions = dep_regions,
        };
    }

    fn fixObjectPtr(self: *Reader, p: ?*anyopaque) ?*anyopaque {
        if (p == null) return object.lean_box(0);
        if (object.lean_is_scalar(p)) return p;
        const addr = @intFromPtr(p);
        if (addr >= self.base_addr and addr < self.base_addr + self.size) {
            return @ptrCast(self.begin + (addr - self.base_addr));
        }
        // binary search dep_regions by base_addr
        var lo: usize = 0;
        var hi: usize = self.dep_regions.len;
        while (lo < hi) {
            const mid = (lo + hi) / 2;
            if (self.dep_regions[mid].base_addr <= addr) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        if (lo > 0) {
            const dep = self.dep_regions[lo - 1];
            if (addr < dep.base_addr + dep.size) {
                return @ptrCast(dep.begin + (addr - dep.base_addr));
            }
        }
        @panic("object pointer not in any region");
    }

    fn move(self: *Reader, d: usize) void {
        const aligned = alignUp(d, WORD_SIZE);
        self.next += aligned;
    }

    fn fixConstructor(self: *Reader, o: *anyopaque) void {
        const num_objs = ptrOther(o);
        const slots: [*]Obj = @ptrCast(@alignCast(@as([*]u8, @ptrCast(o)) + @sizeOf(lean.lean_object)));
        for (0..num_objs) |i| {
            slots[i] = self.fixObjectPtr(slots[i]);
        }
        self.move(@sizeOf(lean.lean_object) + num_objs * @sizeOf(Obj));
    }

    fn fixArray(self: *Reader, o: *anyopaque) void {
        const arr: *lean.lean_array_object = @ptrCast(@alignCast(o));
        const slots: [*]Obj = @ptrCast(@alignCast(&arr.m_data));
        for (0..arr.m_size) |i| {
            slots[i] = self.fixObjectPtr(slots[i]);
        }
        self.move(object.lean_object_data_byte_size(o));
    }

    fn fixScalarArray(self: *Reader, o: *anyopaque) void {
        self.move(object.lean_object_data_byte_size(o));
    }

    fn fixString(self: *Reader, o: *anyopaque) void {
        self.move(object.lean_object_data_byte_size(o));
    }

    fn fixMPZ(self: *Reader, o: *anyopaque) void {
        const mpz = mpz_object.mpzValue(o);
        const nlimbs = @as(usize, @intCast(@abs(mpz._mp_size)));
        mpz._mp_d = @ptrFromInt(@intFromPtr(self.begin) + (@intFromPtr(mpz._mp_d) - self.base_addr));
        mpz._mp_alloc = @intCast(nlimbs);
        self.move(@sizeOf(lean.MpzObject) + WORD_SIZE * nlimbs);
    }

    fn fixThunk(self: *Reader, o: *anyopaque) void {
        const thunk: *lean.lean_thunk_object = @ptrCast(@alignCast(o));
        thunk.m_value = self.fixObjectPtr(thunk.m_value);
        thunk.m_closure = null;
        self.move(@sizeOf(lean.lean_thunk_object));
    }

    fn fixRef(self: *Reader, o: *anyopaque) void {
        const ref: *lean.lean_ref_object = @ptrCast(@alignCast(o));
        ref.m_value = self.fixObjectPtr(ref.m_value);
        self.move(@sizeOf(lean.lean_ref_object));
    }

    fn fixTask(self: *Reader, o: *anyopaque) void {
        const task: *lean.lean_task_object = @ptrCast(@alignCast(o));
        task.m_value = self.fixObjectPtr(task.m_value);
        task.m_imp = null;
        self.move(@sizeOf(lean.lean_task_object));
    }

    fn fixPromise(self: *Reader, o: *anyopaque) void {
        const promise: *lean.lean_promise_object = @ptrCast(@alignCast(o));
        promise.m_result = @ptrCast(@alignCast(self.fixObjectPtr(promise.m_result)));
        self.move(@sizeOf(lean.lean_promise_object));
    }

    fn fixClosure(self: *Reader, o: *anyopaque) void {
        _ = self;
        _ = o;
        @panic("closure in compacted region");
    }

    fn fixExternal(self: *Reader, o: *anyopaque) void {
        _ = self;
        _ = o;
        @panic("external object in compacted region");
    }

    pub fn read(self: *Reader) ?*anyopaque {
        if (@intFromPtr(self.next) >= @intFromPtr(self.end)) return null;
        const root_slot: *align(1) Obj = @ptrCast(self.next);
        const root = self.fixObjectPtr(root_slot.*);
        self.move(@sizeOf(Obj));
        while (@intFromPtr(self.next) < @intFromPtr(self.end)) {
            const curr = self.next;
            const tag = ptrTag(@ptrCast(curr));
            switch (tag) {
                lean.LeanString => self.fixString(@ptrCast(curr)),
                lean.LeanScalarArray => self.fixScalarArray(@ptrCast(curr)),
                lean.LeanArray => self.fixArray(@ptrCast(curr)),
                lean.LeanMPZ => self.fixMPZ(@ptrCast(curr)),
                lean.LeanThunk => self.fixThunk(@ptrCast(curr)),
                lean.LeanRef => self.fixRef(@ptrCast(curr)),
                lean.LeanTask => self.fixTask(@ptrCast(curr)),
                lean.LeanPromise => self.fixPromise(@ptrCast(curr)),
                lean.LeanClosure => self.fixClosure(@ptrCast(curr)),
                lean.LeanExternal => self.fixExternal(@ptrCast(curr)),
                else => self.fixConstructor(@ptrCast(curr)),
            }
            if (@intFromPtr(self.next) == @intFromPtr(curr)) {
                @panic("reader did not advance");
            }
        }
        return root;
    }
};

fn cmpRegionViewByBaseAddr(_: void, a: RegionView, b: RegionView) bool {
    return a.base_addr < b.base_addr;
}

pub fn sortRegionsByBaseAddr(regions: []RegionView) void {
    std.mem.sort(RegionView, regions, {}, cmpRegionViewByBaseAddr);
}

pub fn extractDepRegions(o: *anyopaque) std.ArrayList(RegionView) {
    var result: std.ArrayList(RegionView) = .empty;
    const sz = array.lean_array_size(o);
    for (0..sz) |i| {
        const region = array.lean_array_fget_borrowed(o, object.lean_box(i)).?;
        const region_ptr: *anyopaque = @ptrCast(@alignCast(region));
        const root_ptr_ptr: *usize = @ptrCast(@alignCast(@as([*]u8, @ptrCast(region_ptr)) + WORD_SIZE * 1));
        const size_ptr: *usize = @ptrCast(@alignCast(@as([*]u8, @ptrCast(region_ptr)) + WORD_SIZE * 2));
        const base_addr_ptr: *usize = @ptrCast(@alignCast(@as([*]u8, @ptrCast(region_ptr)) + WORD_SIZE * 3));
        const buffer_offset_ptr: *usize = @ptrCast(@alignCast(@as([*]u8, @ptrCast(region_ptr)) + WORD_SIZE * 4));
        const is_mmap_ptr: *u8 = @ptrCast(@alignCast(@as([*]u8, @ptrCast(region_ptr)) + WORD_SIZE * 5));

        const root = root_ptr_ptr.*;
        const size = size_ptr.*;
        const base_addr = base_addr_ptr.*;
        const buffer_offset = buffer_offset_ptr.*;
        _ = is_mmap_ptr.*;
        const begin: [*]u8 = @ptrFromInt(root - buffer_offset);
        result.append(std.heap.c_allocator, .{
            .begin = begin,
            .size = size,
            .base_addr = base_addr,
        }) catch @panic("out of memory");
    }
    return result;
}

pub fn getLoadedLibs() []LibInfo {
    return &.{};
}

test "compact round-trip simple constructor with string" {
    const s = string.lean_mk_string(@ptrCast(@alignCast("hello")));
    defer rc.lean_dec(s);
    const obj = alloc.lean_alloc_ctor(0, 1, 0);
    defer rc.lean_dec(obj);
    ctor.lean_ctor_set(obj, 0, s);

    const base_addr: usize = 0x10000000;
    var comp = Compactor.init(base_addr, &.{}, false);
    defer comp.deinit();
    _ = comp.compactRoot(obj);

    var reader = Reader.init(comp.data(), comp.size(), base_addr, &.{});
    const root = reader.read() orelse return error.ReadFailed;

    try testing.expectEqual(@as(u8, 0), ptrTag(root));
    try testing.expectEqual(@as(u8, 1), ptrOther(root));
    const root_obj: *lean.lean_ctor_object = @ptrCast(@alignCast(root));
    const root_slots: [*]Obj = @ptrCast(@alignCast(&root_obj.m_objs));
    const str = root_slots[0];
    try testing.expect(str != null);
    try testing.expect(!object.lean_is_scalar(str));
    try testing.expectEqual(lean.LeanString, ptrTag(str.?));
    const str_obj: *lean.lean_string_object = @ptrCast(@alignCast(str.?));
    const len = str_obj.m_size - 1;
    const bytes = @as([*]const u8, @ptrCast(&str_obj.m_data))[0..len];
    try testing.expectEqualStrings("hello", bytes);
}

test "compact round-trip scalar root" {
    const base_addr: usize = 0x10000000;
    var comp = Compactor.init(base_addr, &.{}, false);
    defer comp.deinit();
    _ = comp.compactRoot(object.lean_box(37).?);

    var reader = Reader.init(comp.data(), comp.size(), base_addr, &.{});
    const root = reader.read() orelse return error.ReadFailed;

    try testing.expect(object.lean_is_scalar(root));
    try testing.expectEqual(@as(usize, 37), object.lean_unbox(root));
}
