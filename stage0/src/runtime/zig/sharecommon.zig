// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `sharecommon` subsystem.
//!
//! Implements `lean_sharecommon_eq`, `lean_sharecommon_hash`, `lean_sharecommon_quick`,
//! and the stateful `lean_state_sharecommon` used by `ShareCommon.shareCommon`.

const std = @import("std");
const testing = std.testing;
const alloc = @import("alloc.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const mpz_object = @import("mpz_object.zig");
const rc = @import("rc.zig");
const array = @import("array.zig");
const ctor = @import("ctor.zig");
const hash = @import("hash.zig");

const Obj = ?*anyopaque;

fn header(o: *anyopaque) *align(1) lean.lean_object {
    return @ptrCast(o);
}

fn ptrTag(o: *anyopaque) u8 {
    return header(o).m_tag;
}

fn ptrOther(o: *anyopaque) u8 {
    return header(o).m_other;
}

fn objDataByteSize(o: *anyopaque) usize {
    return object.lean_object_data_byte_size(o);
}

fn arraySlots(o: *anyopaque) [*]Obj {
    const arr: *lean.lean_array_object = @ptrCast(@alignCast(o));
    return @ptrCast(&arr.m_data);
}

fn ctorNumObjs(o: *anyopaque) usize {
    return header(o).m_other;
}

fn mkPair(a: *anyopaque, b: *anyopaque) *anyopaque {
    const result = alloc.lean_alloc_ctor(0, 2, 0);
    ctor.lean_ctor_set(result, 0, a);
    ctor.lean_ctor_set(result, 1, b);
    return result;
}

fn checkedAdd(a: usize, b: usize) usize {
    const result = @addWithOverflow(a, b);
    if (result[1] != 0) @panic("integer overflow in sharecommon");
    return result[0];
}

fn allocString(size: usize, capacity: usize, len: usize) *anyopaque {
    if (size == 0) @panic("Lean strings must include a trailing NUL");
    if (capacity < size) @panic("string capacity must cover string size");
    const total_size = checkedAdd(@sizeOf(lean.lean_string_object), capacity);
    const ptr = alloc.lean_alloc_object(total_size);
    const str: *lean.lean_string_object = @ptrCast(@alignCast(ptr));
    str.m_header = .{ .m_rc = 1, .m_cs_sz = 0, .m_other = 0, .m_tag = lean.LeanString };
    str.m_size = size;
    str.m_capacity = capacity;
    str.m_length = len;
    return ptr;
}

// Matches `lean::hash` in `src/runtime/hash.h`.
fn leanHash(h: u64, k: u64) u64 {
    return hash.hash(h, k);
}

// MurmurHash64A, matches `src/runtime/hash.cpp`.
fn murmurHash64A(key: []const u8, seed: u64) u64 {
    return hash.murmurHash64A(key, seed);
}

pub export fn lean_sharecommon_hash(o: *anyopaque) callconv(.c) u64 {
    const sz = objDataByteSize(o);
    const tag = ptrTag(o);
    if (tag == lean.LeanMPZ) {
        const value = mpz_object.mpzValue(o).getInt() catch 0;
        const mpz_hash: u32 = @bitCast(@as(i32, @intCast(value)));
        return leanHash(tag, mpz_hash);
    } else {
        const other = ptrOther(o);
        const init = leanHash(tag, other);
        const header_sz = @sizeOf(lean.lean_object);
        const body = @as([*]const u8, @ptrCast(o))[header_sz..sz];
        return murmurHash64A(body, init);
    }
}

pub export fn lean_sharecommon_eq(o1: *anyopaque, o2: *anyopaque) callconv(.c) u8 {
    if (object.lean_is_scalar(o1) or object.lean_is_scalar(o2)) return 0;
    const sz1 = objDataByteSize(o1);
    const sz2 = objDataByteSize(o2);
    if (sz1 != sz2) return 0;
    const tag1 = ptrTag(o1);
    const tag2 = ptrTag(o2);
    if (tag1 != tag2) return 0;
    if (ptrOther(o1) != ptrOther(o2)) return 0;
    if (tag1 == lean.LeanMPZ) {
        return @intFromBool(mpz_object.mpzValue(o1).cmp(mpz_object.mpzValue(o2)) == 0);
    }
    const header_sz = @sizeOf(lean.lean_object);
    const body1 = @as([*]const u8, @ptrCast(o1))[header_sz..sz1];
    const body2 = @as([*]const u8, @ptrCast(o2))[header_sz..sz2];
    return @intFromBool(std.mem.eql(u8, body1, body2));
}

const ShareCommonContext = struct {
    pub fn hash(_: @This(), key: *anyopaque) u64 {
        return lean_sharecommon_hash(key);
    }
    pub fn eql(_: @This(), a: *anyopaque, b: *anyopaque) bool {
        return lean_sharecommon_eq(a, b) != 0;
    }
};

const CacheMap = std.AutoHashMap(*anyopaque, *anyopaque);
const SetMap = std.HashMap(*anyopaque, void, ShareCommonContext, std.hash_map.default_max_load_percentage);

const ShareCommonQuick = struct {
    cache: CacheMap,
    set: SetMap,

    fn init() ShareCommonQuick {
        return .{
            .cache = CacheMap.init(std.heap.c_allocator),
            .set = SetMap.init(std.heap.c_allocator),
        };
    }

    fn deinit(self: *ShareCommonQuick) void {
        self.cache.deinit();
        self.set.deinit();
    }

    fn checkCache(self: *ShareCommonQuick, a: *anyopaque) ?*anyopaque {
        if (rc.lean_is_exclusive(a)) return null;
        if (self.cache.get(a)) |result| {
            rc.lean_inc_ref(result);
            return result;
        }
        return null;
    }

    fn save(self: *ShareCommonQuick, a: *anyopaque, new_a: *anyopaque) *anyopaque {
        const result = self.set.getOrPut(new_a) catch @panic("out of memory");
        if (result.found_existing) {
            const existing = result.key_ptr.*;
            rc.lean_dec_ref(new_a);
            rc.lean_inc_ref(existing);
            if (!rc.lean_is_exclusive(a)) {
                self.cache.put(a, existing) catch @panic("out of memory");
            }
            return existing;
        } else {
            result.value_ptr.* = {};
            if (!rc.lean_is_exclusive(a)) {
                self.cache.put(a, new_a) catch @panic("out of memory");
            }
            return new_a;
        }
    }

    fn visitTerminal(self: *ShareCommonQuick, a: *anyopaque) *anyopaque {
        const result = self.set.getOrPut(a) catch @panic("out of memory");
        const key_ptr = result.key_ptr.*;
        if (result.found_existing) {
            rc.lean_inc_ref(key_ptr);
            return key_ptr;
        } else {
            result.value_ptr.* = {};
            rc.lean_inc_ref(a);
            return a;
        }
    }

    fn visitArray(self: *ShareCommonQuick, a: *anyopaque) *anyopaque {
        if (self.checkCache(a)) |cached| return cached;
        const sz = array.lean_array_size(a);
        const new_a = alloc.lean_alloc_array(sz, sz);
        for (0..sz) |i| {
            const elem = array.lean_array_fget_borrowed(a, object.lean_box(i));
            const shared = self.visit(elem);
            arraySlots(new_a)[i] = shared;
        }
        return self.save(a, new_a);
    }

    fn visitCtor(self: *ShareCommonQuick, a: *anyopaque) *anyopaque {
        if (self.checkCache(a)) |cached| return cached;
        const num_objs = ctorNumObjs(a);
        const tag = ptrTag(a);
        const sz = object.lean_object_byte_size(a);
        const scalar_offset = @sizeOf(lean.lean_ctor_object) + num_objs * @sizeOf(?*anyopaque);
        const scalar_sz = sz - scalar_offset;
        const new_a = alloc.lean_alloc_ctor(tag, @intCast(num_objs), @intCast(scalar_sz));
        for (0..num_objs) |i| {
            const elem = ctor.lean_ctor_get(a, @intCast(i));
            const shared = self.visit(elem);
            ctor.lean_ctor_set(new_a, @intCast(i), shared);
        }
        if (scalar_sz > 0) {
            const src = @as([*]const u8, @ptrCast(a))[scalar_offset..sz];
            const dst = @as([*]u8, @ptrCast(new_a))[scalar_offset..sz];
            @memcpy(dst, src);
        }
        return self.save(a, new_a);
    }

    fn visit(self: *ShareCommonQuick, a: Obj) Obj {
        if (a == null) @panic("null object in sharecommon");
        if (object.lean_is_scalar(a)) return a;
        const ptr = a.?;
        const tag = ptrTag(ptr);
        switch (tag) {
            lean.LeanClosure,
            lean.LeanThunk,
            lean.LeanTask,
            lean.LeanRef,
            lean.LeanExternal,
            lean.LeanPromise,
            lean.LeanReserved => {
                rc.lean_inc_ref(ptr);
                return a;
            },
            lean.LeanMPZ,
            lean.LeanScalarArray,
            lean.LeanString => return self.visitTerminal(ptr),
            lean.LeanArray => return self.visitArray(ptr),
            else => return self.visitCtor(ptr),
        }
    }
};

pub export fn lean_sharecommon_quick(a: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a)) return a;
    var self = ShareCommonQuick.init();
    defer self.deinit();
    return self.visit(a).?;
}

test "lean_sharecommon_eq/hash on identical empty arrays" {
    const a1 = alloc.lean_alloc_array(0, 0);
    defer rc.lean_dec(a1);
    const a2 = alloc.lean_alloc_array(0, 0);
    defer rc.lean_dec(a2);
    const a3 = alloc.lean_alloc_array(1, 1);
    defer rc.lean_dec(a3);

    try testing.expectEqual(@as(u8, 1), lean_sharecommon_eq(a1, a2));
    try testing.expectEqual(lean_sharecommon_hash(a1), lean_sharecommon_hash(a2));
    try testing.expectEqual(@as(u8, 0), lean_sharecommon_eq(a1, a3));
}

extern fn lean_apply_2(f: *anyopaque, a1: *anyopaque, a2: *anyopaque) callconv(.c) ?*anyopaque;
extern fn lean_apply_3(f: *anyopaque, a1: *anyopaque, a2: *anyopaque, a3: *anyopaque) callconv(.c) ?*anyopaque;

const ShareCommonState = struct {
    map_find: *anyopaque,
    map_insert: *anyopaque,
    set_find: *anyopaque,
    set_insert: *anyopaque,
    map: *anyopaque,
    set: *anyopaque,

    fn init(tc: *anyopaque, s: *anyopaque) ShareCommonState {
        const map_find = ctor.lean_ctor_get(tc, 1).?;
        const map_insert = ctor.lean_ctor_get(tc, 2).?;
        const set_find = ctor.lean_ctor_get(tc, 3).?;
        const set_insert = ctor.lean_ctor_get(tc, 4).?;
        const map = ctor.lean_ctor_get(s, 0).?;
        const set = ctor.lean_ctor_get(s, 1).?;
        rc.lean_inc(map_find);
        rc.lean_inc(map_insert);
        rc.lean_inc(set_find);
        rc.lean_inc(set_insert);
        rc.lean_inc(map);
        rc.lean_inc(set);
        rc.lean_dec(s);
        return .{
            .map_find = map_find,
            .map_insert = map_insert,
            .set_find = set_find,
            .set_insert = set_insert,
            .map = map,
            .set = set,
        };
    }

    fn deinit(self: *ShareCommonState) void {
        rc.lean_dec(self.map);
        rc.lean_dec(self.set);
        rc.lean_dec(self.map_find);
        rc.lean_dec(self.map_insert);
        rc.lean_dec(self.set_find);
        rc.lean_dec(self.set_insert);
    }

    fn pack(self: *ShareCommonState, a: *anyopaque) *anyopaque {
        const pair = mkPair(self.map, self.set);
        self.map = object.lean_box(0).?;
        self.set = object.lean_box(0).?;
        return mkPair(a, pair);
    }

    fn mapFind(self: *ShareCommonState, k: *anyopaque) *anyopaque {
        rc.lean_inc(self.map_find);
        rc.lean_inc(self.map);
        rc.lean_inc(k);
        return lean_apply_2(self.map_find, self.map, k).?;
    }

    fn mapInsert(self: *ShareCommonState, k: *anyopaque, v: *anyopaque) void {
        rc.lean_inc(self.map_insert);
        self.map = lean_apply_3(self.map_insert, self.map, k, v).?;
    }

    fn setFind(self: *ShareCommonState, o: *anyopaque) *anyopaque {
        rc.lean_inc(self.set_find);
        rc.lean_inc(self.set);
        rc.lean_inc(o);
        return lean_apply_2(self.set_find, self.set, o).?;
    }

    fn setInsert(self: *ShareCommonState, o: *anyopaque) void {
        rc.lean_inc(self.set_insert);
        self.set = lean_apply_2(self.set_insert, self.set, o).?;
    }
};

const ShareCommonStateful = struct {
    allocator: std.mem.Allocator,
    state: ShareCommonState,
    children: std.ArrayList(*anyopaque),
    todo: std.ArrayList(*anyopaque),

    fn init(tc: *anyopaque, s: *anyopaque, allocator: std.mem.Allocator) ShareCommonStateful {
        return .{
            .allocator = allocator,
            .state = ShareCommonState.init(tc, s),
            .children = .empty,
            .todo = .empty,
        };
    }

    fn deinit(self: *ShareCommonStateful) void {
        self.state.deinit();
        self.children.deinit(self.allocator);
        self.todo.deinit(self.allocator);
    }

    fn clearChildren(self: *ShareCommonStateful) void {
        self.children.clearRetainingCapacity();
    }

    fn pushChild(self: *ShareCommonStateful, a: Obj) bool {
        if (a == null) @panic("null object in sharecommon");
        if (object.lean_is_scalar(a)) {
            self.children.append(self.allocator, a.?) catch @panic("out of memory");
            return true;
        }
        const ptr = a.?;
        const tag = ptrTag(ptr);
        switch (tag) {
            lean.LeanClosure,
            lean.LeanThunk,
            lean.LeanTask,
            lean.LeanRef,
            lean.LeanExternal,
            lean.LeanPromise,
            lean.LeanReserved => {
                self.children.append(self.allocator, ptr) catch @panic("out of memory");
                return true;
            },
            else => {},
        }

        const opt = self.state.mapFind(ptr);
        if (!object.lean_is_scalar(opt)) {
            const r = ctor.lean_ctor_get(opt, 0).?;
            rc.lean_inc(r);
            rc.lean_dec(opt);
            self.children.append(self.allocator, r) catch @panic("out of memory");
            return true;
        }
        rc.lean_dec(opt);
        self.todo.append(self.allocator, ptr) catch @panic("out of memory");
        return false;
    }

    fn save(self: *ShareCommonStateful, a: *anyopaque, new_a: *anyopaque) void {
        const popped = self.todo.pop().?;
        std.debug.assert(popped == a);
        const opt_new_r = self.state.setFind(new_a);
        if (!object.lean_is_scalar(opt_new_r)) {
            rc.lean_dec(new_a);
            const existing = ctor.lean_ctor_get(opt_new_r, 0).?;
            rc.lean_inc(existing);
            rc.lean_dec(opt_new_r);
            rc.lean_inc(a);
            self.state.mapInsert(a, existing);
        } else {
            rc.lean_dec(opt_new_r);
            rc.lean_inc(a);
            rc.lean_inc_n(new_a, 3);
            self.state.setInsert(new_a);
            self.state.mapInsert(a, new_a);
            self.state.mapInsert(new_a, new_a);
        }
    }

    fn visitArray(self: *ShareCommonStateful, a: *anyopaque) void {
        self.clearChildren();
        var missing_children = false;
        const sz = array.lean_array_size(a);
        for (0..sz) |i| {
            const elem = array.lean_array_fget_borrowed(a, object.lean_box(i));
            if (!self.pushChild(elem)) {
                missing_children = true;
            }
        }
        if (missing_children) return;
        const new_a = alloc.lean_alloc_array(sz, sz);
        for (0..sz) |i| {
            rc.lean_inc(self.children.items[i]);
            arraySlots(new_a)[i] = self.children.items[i];
        }
        self.save(a, new_a);
    }

    fn visitSArray(self: *ShareCommonStateful, a: *anyopaque) void {
        const sa: *lean.lean_sarray_object = @ptrCast(@alignCast(a));
        const sz = sa.m_size;
        const elem_sz = sa.m_header.m_other;
        const new_a = alloc.lean_alloc_sarray(elem_sz, sz, sz);
        const new_sa: *lean.lean_sarray_object = @ptrCast(@alignCast(new_a));
        const src = @as([*]const u8, @ptrCast(&sa.m_data));
        const dst = @as([*]u8, @ptrCast(&new_sa.m_data));
        @memcpy(dst[0 .. elem_sz * sz], src[0 .. elem_sz * sz]);
        self.save(a, new_a);
    }

    fn visitString(self: *ShareCommonStateful, a: *anyopaque) void {
        const str: *lean.lean_string_object = @ptrCast(@alignCast(a));
        const sz = str.m_size;
        const len = str.m_length;
        const new_a = allocString(sz, sz, len);
        const new_str: *lean.lean_string_object = @ptrCast(@alignCast(new_a));
        const src = @as([*]const u8, @ptrCast(&str.m_data));
        const dst = @as([*]u8, @ptrCast(&new_str.m_data));
        @memcpy(dst[0..sz], src[0..sz]);
        self.save(a, new_a);
    }

    fn visitMPZ(self: *ShareCommonStateful, a: *anyopaque) void {
        const new_a = mpz_object.lean_alloc_mpz();
        const src = mpz_object.mpzValue(a);
        const dst = mpz_object.mpzValue(new_a);
        dst.copy(src) catch @panic("out of memory");
        self.save(a, new_a);
    }

    fn visitCtor(self: *ShareCommonStateful, a: *anyopaque) void {
        self.clearChildren();
        const num_objs = ctorNumObjs(a);
        var missing_child = false;
        for (0..num_objs) |i| {
            const elem = ctor.lean_ctor_get(a, @intCast(i));
            if (!self.pushChild(elem)) {
                missing_child = true;
            }
        }
        if (missing_child) return;
        const tag = ptrTag(a);
        const sz = object.lean_object_byte_size(a);
        const scalar_offset = @sizeOf(lean.lean_ctor_object) + num_objs * @sizeOf(?*anyopaque);
        const scalar_sz = sz - scalar_offset;
        const new_a = alloc.lean_alloc_ctor(tag, @intCast(num_objs), @intCast(scalar_sz));
        for (0..num_objs) |i| {
            rc.lean_inc(self.children.items[i]);
            ctor.lean_ctor_set(new_a, @intCast(i), self.children.items[i]);
        }
        if (scalar_sz > 0) {
            const src = @as([*]const u8, @ptrCast(a))[scalar_offset..sz];
            const dst = @as([*]u8, @ptrCast(new_a))[scalar_offset..sz];
            @memcpy(dst, src);
        }
        self.save(a, new_a);
    }

    fn visit(self: *ShareCommonStateful, a: Obj) Obj {
        if (a == null) @panic("null object in sharecommon");
        if (object.lean_is_scalar(a)) return a;
        const ptr = a.?;
        const tag = ptrTag(ptr);
        switch (tag) {
            lean.LeanClosure,
            lean.LeanThunk,
            lean.LeanTask,
            lean.LeanRef,
            lean.LeanExternal,
            lean.LeanPromise,
            lean.LeanReserved => {
                rc.lean_inc_ref(ptr);
                return a;
            },
            lean.LeanMPZ => self.visitMPZ(ptr),
            lean.LeanScalarArray => self.visitSArray(ptr),
            lean.LeanString => self.visitString(ptr),
            lean.LeanArray => self.visitArray(ptr),
            else => self.visitCtor(ptr),
        }
        unreachable;
    }

    fn run(self: *ShareCommonStateful, a: Obj) Obj {
        if (self.pushChild(a)) {
            const r = self.children.items[self.children.items.len - 1];
            rc.lean_inc(r);
            rc.lean_dec(a.?);
            return self.state.pack(r);
        }
        while (self.todo.items.len > 0) {
            const curr = self.todo.items[self.todo.items.len - 1];
            switch (ptrTag(curr)) {
                lean.LeanClosure => std.debug.panic("unexpected closure in sharecommon", .{}),
                lean.LeanArray => self.visitArray(curr),
                lean.LeanScalarArray => self.visitSArray(curr),
                lean.LeanString => self.visitString(curr),
                lean.LeanMPZ => self.visitMPZ(curr),
                lean.LeanThunk => std.debug.panic("unexpected thunk in sharecommon", .{}),
                lean.LeanTask => std.debug.panic("unexpected task in sharecommon", .{}),
                lean.LeanPromise => std.debug.panic("unexpected promise in sharecommon", .{}),
                lean.LeanRef => std.debug.panic("unexpected ref in sharecommon", .{}),
                lean.LeanExternal => std.debug.panic("unexpected external in sharecommon", .{}),
                lean.LeanReserved => std.debug.panic("unexpected reserved in sharecommon", .{}),
                else => self.visitCtor(curr),
            }
        }
        const opt = self.state.mapFind(a.?);
        std.debug.assert(!object.lean_is_scalar(opt));
        const r = ctor.lean_ctor_get(opt, 0).?;
        rc.lean_inc(r);
        rc.lean_dec(opt);
        rc.lean_dec(a.?);
        return self.state.pack(r);
    }
};

pub export fn lean_state_sharecommon(tc: *anyopaque, s: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque {
    var self = ShareCommonStateful.init(tc, s, std.heap.c_allocator);
    defer self.deinit();
    return self.run(a).?;
}

test "lean_sharecommon_quick on array of scalars" {
    const n = object.lean_box(42);
    var a1 = alloc.lean_alloc_array(1, 1);
    a1 = array.lean_array_set(a1, object.lean_box(0), n);
    defer rc.lean_dec(a1);

    const shared = lean_sharecommon_quick(a1);
    defer rc.lean_dec(shared);

    try testing.expectEqual(@as(u8, 1), lean_sharecommon_eq(a1, shared));
}

