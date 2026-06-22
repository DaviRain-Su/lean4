// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `compact` subsystem.
//!
//! Supports v2 (no closures) and v3 (closures with fn-pointer relocation)
//! olean formats. No mmap, no structural hash-consing, identity-based
//! sharing map only.

const std = @import("std");
const builtin = @import("builtin");
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
    old_base: usize,
    delta: isize,
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
    const cs_sz: u16 = switch (tag) {
        lean.LeanArray, lean.LeanStructArray, lean.LeanScalarArray, lean.LeanString => 1,
        else => @intCast(sz),
    };
    h.* = .{
        .m_rc = 0,
        .m_cs_sz = cs_sz,
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
    closure_offsets: std.ArrayList(usize),
    libs: []LibInfo,

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
            .closure_offsets = .empty,
            .libs = if (allow_closures) getLoadedLibs() else &.{},
        };
    }

    pub fn deinit(self: *Compactor) void {
        std.heap.c_allocator.free(self.buffer[0..self.capacity]);
        self.map.deinit();
        self.closure_offsets.deinit(std.heap.c_allocator);
        if (self.libs.len > 0) freeLoadedLibs(self.libs);
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
        setNonHeapHeader(@ptrCast(dst), sz, ptrTag(o), ptrOther(o));
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
        const str: *lean.lean_string_object = @ptrCast(@alignCast(o));
        const sz = str.m_size;
        const len = str.m_length;
        const obj_sz = @sizeOf(lean.lean_string_object) + sz;
        const dst = self.allocBytes(obj_sz);
        const new_str: *lean.lean_string_object = @ptrCast(@alignCast(dst));
        setNonHeapHeader(@ptrCast(dst), obj_sz, lean.LeanString, 0);
        new_str.m_size = sz;
        new_str.m_capacity = sz;
        new_str.m_length = len;
        const src_data = @as([*]const u8, @ptrCast(&str.m_data));
        const dst_data = @as([*]u8, @ptrCast(&new_str.m_data));
        @memcpy(dst_data[0..sz], src_data[0..sz]);
        return self.toOffset(dst);
    }

    fn insertScalarArray(self: *Compactor, o: *anyopaque) usize {
        const arr: *lean.lean_sarray_object = @ptrCast(@alignCast(o));
        const sz = arr.m_size;
        const elem_sz: usize = ptrOther(o);
        const obj_sz = @sizeOf(lean.lean_sarray_object) + elem_sz * sz;
        const dst = self.allocBytes(obj_sz);
        const new_arr: *lean.lean_sarray_object = @ptrCast(@alignCast(dst));
        setNonHeapHeader(@ptrCast(dst), obj_sz, lean.LeanScalarArray, @intCast(elem_sz));
        new_arr.m_size = sz;
        new_arr.m_capacity = sz;
        const src_data = @as([*]const u8, @ptrCast(&arr.m_data));
        const dst_data = @as([*]u8, @ptrCast(&new_arr.m_data));
        @memcpy(dst_data[0 .. elem_sz * sz], src_data[0 .. elem_sz * sz]);
        return self.toOffset(dst);
    }

    fn insertArray(self: *Compactor, o: *anyopaque) usize {
        const arr: *lean.lean_array_object = @ptrCast(@alignCast(o));
        const sz = arr.m_size;
        const obj_sz = @sizeOf(lean.lean_array_object) + @sizeOf(Obj) * sz;
        const dst = self.allocBytes(obj_sz);
        const new_arr: *lean.lean_array_object = @ptrCast(@alignCast(dst));
        setNonHeapHeader(@ptrCast(dst), obj_sz, lean.LeanArray, 0);
        new_arr.m_size = sz;
        new_arr.m_capacity = sz;
        const slots: [*]Obj = @ptrCast(@alignCast(&arr.m_data));
        const new_slots: [*]Obj = @ptrCast(@alignCast(&new_arr.m_data));
        for (0..sz) |i| {
            new_slots[i] = @ptrFromInt(self.compact(slots[i]));
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
        if (!self.allow_closures) {
            @panic("closure in compacted region");
        }
        const closure: *lean.lean_closure_object = @ptrCast(@alignCast(o));
        const sz = object.lean_object_data_byte_size(o);
        const dst = self.copyObject(o, sz);
        const new_closure: *lean.lean_closure_object = @ptrCast(@alignCast(dst));
        const slots: [*]Obj = @ptrCast(@alignCast(&closure.m_objs));
        const new_slots: [*]Obj = @ptrCast(@alignCast(&new_closure.m_objs));
        for (0..closure.m_num_fixed) |i| {
            new_slots[i] = @ptrFromInt(self.compact(slots[i]));
        }
        // Record the buffer-relative offset of `m_fun` so the reader can patch
        // fn pointers on load without scanning the compacted region.
        const fn_field_off = @intFromPtr(&new_closure.m_fun) - @intFromPtr(self.buffer);
        self.closure_offsets.append(std.heap.c_allocator, fn_field_off) catch @panic("out of memory");
        return self.toOffset(dst);
    }

    /// Return the distinct loaded libraries that contain a compacted closure's
    /// `m_fun` pointer — the subset needed to relocate this region's closures
    /// on load. `m_fun` still holds the raw code pointer at this point.
    pub fn usedLibs(self: *Compactor) []LibInfo {
        if (self.closure_offsets.items.len == 0) return &.{};
        var used = std.heap.c_allocator.alloc(bool, self.libs.len) catch @panic("out of memory");
        defer std.heap.c_allocator.free(used);
        @memset(used, false);
        for (self.closure_offsets.items) |off| {
            const fn_ptr: *usize = @ptrCast(@alignCast(self.buffer + off));
            const fn_addr = fn_ptr.*;
            // Binary search for the last lib whose base_addr <= fn_addr.
            var lo: usize = 0;
            var hi: usize = self.libs.len;
            while (lo < hi) {
                const mid = (lo + hi) / 2;
                if (self.libs[mid].base_addr <= fn_addr) {
                    lo = mid + 1;
                } else {
                    hi = mid;
                }
            }
            if (lo == 0) @panic("closure function pointer does not belong to any loaded library");
            used[lo - 1] = true;
        }
        var result: std.ArrayList(LibInfo) = .empty;
        for (0..self.libs.len) |i| {
            if (used[i]) {
                result.append(std.heap.c_allocator, self.libs[i]) catch @panic("out of memory");
            }
        }
        return result.toOwnedSlice(std.heap.c_allocator) catch @panic("out of memory");
    }
};

pub const Reader = struct {
    size: usize,
    base_addr: usize,
    begin: [*]u8,
    next: [*]u8,
    end: [*]u8,
    dep_regions: []RegionView,
    // Sorted (old_base, delta) pairs for closure fn-pointer relocation.
    // Empty when no closures or same-process (all deltas zero).
    lib_relocs: []const LibReloc,
    // Data-relative byte offsets of every closure's `m_fun` field.
    closure_offsets: []const usize,

    pub fn init(
        data: [*]u8,
        sz: usize,
        base_addr: usize,
        dep_regions: []RegionView,
        lib_relocs: []const LibReloc,
        closure_offsets: []const usize,
    ) Reader {
        return .{
            .size = sz,
            .base_addr = base_addr,
            .begin = data,
            .next = data,
            .end = data + sz,
            .dep_regions = dep_regions,
            .lib_relocs = lib_relocs,
            .closure_offsets = closure_offsets,
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
        self.move(object.lean_object_byte_size(o));
    }

    fn fixArray(self: *Reader, o: *anyopaque) void {
        const arr: *lean.lean_array_object = @ptrCast(@alignCast(o));
        const slots: [*]Obj = @ptrCast(@alignCast(&arr.m_data));
        for (0..arr.m_size) |i| {
            slots[i] = self.fixObjectPtr(slots[i]);
        }
        self.move(object.lean_object_byte_size(o));
    }

    fn fixScalarArray(self: *Reader, o: *anyopaque) void {
        self.move(object.lean_object_byte_size(o));
    }

    fn fixString(self: *Reader, o: *anyopaque) void {
        self.move(object.lean_object_byte_size(o));
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
        const closure: *lean.lean_closure_object = @ptrCast(@alignCast(o));
        const slots: [*]Obj = @ptrCast(@alignCast(&closure.m_objs));
        for (0..closure.m_num_fixed) |i| {
            slots[i] = self.fixObjectPtr(slots[i]);
        }
        self.move(object.lean_object_data_byte_size(o));
    }

    fn fixExternal(self: *Reader, o: *anyopaque) void {
        _ = self;
        _ = o;
        @panic("external object in compacted region");
    }

    pub fn read(self: *Reader) ?*anyopaque {
        if (@intFromPtr(self.next) >= @intFromPtr(self.end)) return null;

        // Fast path: if the region is at its base address and no dep regions need
        // relocation, all saved pointers are already correct — return the root
        // directly without a structural walk.
        if (@intFromPtr(self.begin) == self.base_addr) {
            var needs_dep_reloc = false;
            for (self.dep_regions) |dep| {
                if (@intFromPtr(dep.begin) != dep.base_addr) {
                    needs_dep_reloc = true;
                    break;
                }
            }
            if (!needs_dep_reloc) {
                const root_slot: *align(1) Obj = @ptrCast(self.next);
                const root: ?*anyopaque = root_slot.*;
                self.end = self.next;
                return root;
            }
        }

        // Slow path: dep-region fixup needed. Sort dep regions by base_addr.
        std.mem.sort(RegionView, self.dep_regions, {}, cmpRegionViewByBaseAddr);

        // Apply closure fn-pointer relocations directly via the offset list
        // rather than scanning the compacted region for closure tags.
        if (self.closure_offsets.len > 0) {
            var needs_reloc = false;
            for (self.lib_relocs) |reloc| {
                if (reloc.delta != 0) {
                    needs_reloc = true;
                    break;
                }
            }
            if (needs_reloc) {
                for (self.closure_offsets) |off| {
                    const fn_field: *usize = @ptrCast(@alignCast(self.begin + off));
                    const fn_addr = fn_field.*;
                    // Binary search for the last reloc whose old_base <= fn_addr.
                    var lo: usize = 0;
                    var hi: usize = self.lib_relocs.len;
                    while (lo < hi) {
                        const mid = (lo + hi) / 2;
                        if (self.lib_relocs[mid].old_base <= fn_addr) {
                            lo = mid + 1;
                        } else {
                            hi = mid;
                        }
                    }
                    if (lo > 0) {
                        const delta = self.lib_relocs[lo - 1].delta;
                        if (delta != 0) {
                            fn_field.* = @intCast(@as(isize, @intCast(fn_addr)) + delta);
                        }
                    }
                }
            }
        }

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
        const root = ctor.lean_ctor_get(region, 1).?;
        const size = ctor.lean_ctor_get_usize(region, 2);
        const base_addr = ctor.lean_ctor_get_usize(region, 3);
        const buffer_offset = ctor.lean_ctor_get_usize(region, 4);
        const begin: [*]u8 = @ptrFromInt(@intFromPtr(root) -% buffer_offset);
        result.append(std.heap.c_allocator, .{
            .begin = begin,
            .size = size,
            .base_addr = base_addr,
        }) catch @panic("out of memory");
    }
    return result;
}

// Minimal view of `struct dl_phdr_info` — only the leading fields we need.
const DlPhdrInfo = extern struct {
    dlpi_addr: usize,
    dlpi_name: ?[*:0]const u8,
};

const dl = @cImport({
    if (builtin.os.tag == .macos) {
        @cInclude("mach-o/dyld.h");
    } else if (builtin.os.tag == .linux) {
        @cDefine("_GNU_SOURCE", "1");
        @cInclude("link.h");
    }
});

fn dlIterateCallback(info: ?*DlPhdrInfo, _: usize, data: ?*anyopaque) callconv(.c) c_int {
    if (info == null) return 0;
    const list: *std.ArrayList(LibInfo) = @ptrCast(@alignCast(data.?));
    const name_ptr = info.?.dlpi_name orelse @as([*:0]const u8, "");
    list.append(std.heap.c_allocator, .{
        .name = @constCast(name_ptr),
        .handle = null,
        .base_addr = info.?.dlpi_addr,
    }) catch @panic("out of memory");
    return 0;
}

fn cmpLibInfoByBaseAddr(_: void, a: LibInfo, b: LibInfo) bool {
    return a.base_addr < b.base_addr;
}

/// Return loaded shared libraries sorted by `base_addr`, for closure fn-pointer
/// relocation. The returned slice is heap-allocated; the caller must free it.
/// Names point into the dynamic linker's image table and are valid for the
/// process lifetime — no copy needed.
pub fn getLoadedLibs() []LibInfo {
    var list: std.ArrayList(LibInfo) = .empty;

    if (builtin.os.tag == .macos) {
        const n = dl._dyld_image_count();
        var i: u32 = 0;
        while (i < n) : (i += 1) {
            const hdr = dl._dyld_get_image_header(i);
            if (hdr == null) continue;
            const name = dl._dyld_get_image_name(i);
            if (name == null) continue;
            list.append(std.heap.c_allocator, .{
                .name = @constCast(name),
                .handle = @ptrCast(@constCast(hdr)),
                .base_addr = @intFromPtr(hdr),
            }) catch @panic("out of memory");
        }
    } else if (builtin.os.tag == .linux) {
        _ = dl.dl_iterate_phdr(@ptrCast(&dlIterateCallback), &list);
    }

    std.mem.sort(LibInfo, list.items, {}, cmpLibInfoByBaseAddr);
    return list.toOwnedSlice(std.heap.c_allocator) catch @panic("out of memory");
}

/// Free a slice returned by `getLoadedLibs`.
pub fn freeLoadedLibs(libs: []LibInfo) void {
    std.heap.c_allocator.free(libs);
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

    var reader = Reader.init(comp.data(), comp.size(), base_addr, &.{}, &.{}, &.{});
    const root = reader.read() orelse return error.ReadFailed;

    try testing.expectEqual(@as(u8, 0), ptrTag(root));
    try testing.expectEqual(@as(u8, 1), ptrOther(root));
    const root_header: *lean.lean_object = @ptrCast(@alignCast(root));
    try testing.expectEqual(@as(i32, 0), root_header.m_rc);
    const root_obj: *lean.lean_ctor_object = @ptrCast(@alignCast(root));
    const root_slots: [*]Obj = @ptrCast(@alignCast(&root_obj.m_objs));
    const str = root_slots[0];
    try testing.expect(str != null);
    try testing.expect(!object.lean_is_scalar(str));
    try testing.expectEqual(lean.LeanString, ptrTag(str.?));
    const str_header: *lean.lean_object = @ptrCast(@alignCast(str.?));
    try testing.expectEqual(@as(i32, 0), str_header.m_rc);
    try testing.expectEqual(@as(u16, 1), str_header.m_cs_sz);
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

    var reader = Reader.init(comp.data(), comp.size(), base_addr, &.{}, &.{}, &.{});
    const root = reader.read() orelse return error.ReadFailed;

    try testing.expect(object.lean_is_scalar(root));
    try testing.expectEqual(@as(usize, 37), object.lean_unbox(root));
}

fn compactClosureTestFn(_: Obj) callconv(.c) Obj {
    return object.lean_box(0);
}

fn testStringBytes(o: *anyopaque) []const u8 {
    const str_obj: *lean.lean_string_object = @ptrCast(@alignCast(o));
    const len = str_obj.m_size - 1;
    return @as([*]const u8, @ptrCast(&str_obj.m_data))[0..len];
}

test "compact round-trip closure with fixed argument when allowed" {
    const captured = string.lean_mk_string(@ptrCast(@alignCast("captured")));
    const closure_obj = alloc.lean_alloc_closure(@ptrCast(@constCast(&compactClosureTestFn)), 2, 1);
    defer rc.lean_dec(closure_obj);
    const closure: *lean.lean_closure_object = @ptrCast(@alignCast(closure_obj));
    const slots: [*]Obj = @ptrCast(@alignCast(&closure.m_objs));
    slots[0] = captured;

    const base_addr: usize = 0x10000000;
    var comp = Compactor.init(base_addr, &.{}, true);
    defer comp.deinit();
    _ = comp.compactRoot(closure_obj);

    var reader = Reader.init(comp.data(), comp.size(), base_addr, &.{}, &.{}, comp.closure_offsets.items);
    const root = reader.read() orelse return error.ReadFailed;
    const roundtrip: *lean.lean_closure_object = @ptrCast(@alignCast(root));
    const roundtrip_slots: [*]Obj = @ptrCast(@alignCast(&roundtrip.m_objs));

    try testing.expectEqual(lean.LeanClosure, ptrTag(root));
    const root_header: *lean.lean_object = @ptrCast(@alignCast(root));
    try testing.expectEqual(@as(i32, 0), root_header.m_rc);
    try testing.expectEqual(@as(u16, 2), roundtrip.m_arity);
    try testing.expectEqual(@as(u16, 1), roundtrip.m_num_fixed);
    try testing.expectEqual(closure.m_fun, roundtrip.m_fun);
    try testing.expectEqualStrings("captured", testStringBytes(roundtrip_slots[0].?));
}

test "compact closure fn-pointer relocation with non-zero delta" {
    const closure_obj = alloc.lean_alloc_closure(@ptrCast(@constCast(&compactClosureTestFn)), 1, 0);
    defer rc.lean_dec(closure_obj);
    const closure: *lean.lean_closure_object = @ptrCast(@alignCast(closure_obj));
    const original_fn = @intFromPtr(closure.m_fun);

    const base_addr: usize = 0x20000000;
    var comp = Compactor.init(base_addr, &.{}, true);
    defer comp.deinit();
    _ = comp.compactRoot(closure_obj);

    // Simulate the library loading at a different base address.
    // The reloc says: the lib that used to be at old_base is now at
    // old_base + delta. The fn pointer should be patched by delta.
    const delta: isize = 0x10000;
    var relocs = [_]LibReloc{.{ .old_base = 0, .delta = delta }};
    var reader = Reader.init(
        comp.data(),
        comp.size(),
        base_addr,
        &.{},
        &relocs,
        comp.closure_offsets.items,
    );
    const root = reader.read() orelse return error.ReadFailed;
    const roundtrip: *lean.lean_closure_object = @ptrCast(@alignCast(root));
    const relocated_fn = @intFromPtr(roundtrip.m_fun);

    // The fn pointer should have been shifted by delta.
    try testing.expectEqual(@as(usize, @intCast(@as(isize, @intCast(original_fn)) + delta)), relocated_fn);
}
