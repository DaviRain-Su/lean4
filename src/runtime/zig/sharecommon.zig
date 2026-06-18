// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `sharecommon` subsystem.
//!
//! Implements `lean_sharecommon_eq`, `lean_sharecommon_hash`, and the local-state
//! `lean_sharecommon_quick` function used by `ShareCommon.shareCommon'`.
//! The stateful `lean_state_sharecommon` is still provided by the C++ runtime.

const std = @import("std");
const testing = std.testing;
const alloc = @import("alloc.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const mpz_object = @import("mpz_object.zig");
const rc = @import("rc.zig");
const array = @import("array.zig");
const ctor = @import("ctor.zig");

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

// Matches `lean::hash` in `src/runtime/hash.h`.
fn leanHash(h: u64, k: u64) u64 {
    const m: u64 = 0xc6a4a7935bd1e995;
    const r: u6 = 47;
    var k2 = k;
    k2 *%= m;
    k2 ^= k2 >> r;
    k2 ^= m;
    return (h ^ k2) *% m;
}

// MurmurHash64A, matches `src/runtime/hash.cpp`.
fn murmurHash64A(key: []const u8, seed: u64) u64 {
    const m: u64 = 0xc6a4a7935bd1e995;
    const r: u6 = 47;
    var h: u64 = seed ^ (key.len *% m);
    var i: usize = 0;
    while (i + 8 <= key.len) : (i += 8) {
        var k: u64 = 0;
        for (0..8) |j| {
            k |= @as(u64, key[i + j]) << @intCast(j * 8);
        }
        k *%= m;
        k ^= k >> r;
        k *%= m;
        h ^= k;
        h *%= m;
    }
    const remaining = key.len - i;
    if (remaining >= 7) h ^= @as(u64, key[i + 6]) << 48;
    if (remaining >= 6) h ^= @as(u64, key[i + 5]) << 40;
    if (remaining >= 5) h ^= @as(u64, key[i + 4]) << 32;
    if (remaining >= 4) h ^= @as(u64, key[i + 3]) << 24;
    if (remaining >= 3) h ^= @as(u64, key[i + 2]) << 16;
    if (remaining >= 2) h ^= @as(u64, key[i + 1]) << 8;
    if (remaining >= 1) {
        h ^= @as(u64, key[i]);
        h *%= m;
    }
    h ^= h >> r;
    h *%= m;
    h ^= h >> r;
    return h;
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

    fn arraySlots(o: *anyopaque) [*]Obj {
        const arr: *lean.lean_array_object = @ptrCast(@alignCast(o));
        return @ptrCast(&arr.m_data);
    }

    fn ctorSlots(o: *anyopaque) [*]Obj {
        const ctor_obj: *lean.lean_ctor_object = @ptrCast(@alignCast(o));
        return @ptrCast(&ctor_obj.m_objs);
    }

    fn ctorNumObjs(o: *anyopaque) usize {
        return header(o).m_other;
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

test "lean_sharecommon_quick on array of scalars" {
    const n = object.lean_box(42);
    var a1 = alloc.lean_alloc_array(1, 1);
    a1 = array.lean_array_set(a1, object.lean_box(0), n);
    defer rc.lean_dec(a1);

    const shared = lean_sharecommon_quick(a1);
    defer rc.lean_dec(shared);

    try testing.expectEqual(@as(u8, 1), lean_sharecommon_eq(a1, shared));
}
