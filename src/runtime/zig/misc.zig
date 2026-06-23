// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

const std = @import("std");
const builtin = @import("builtin");
const testing = std.testing;
const alloc = @import("alloc.zig");
const ctor = @import("ctor.zig");
const lean = @import("lean_object.zig");
const mpz_object = @import("mpz_object.zig");
const nat_constructors = @import("nat_constructors.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");
const rt_hash = @import("hash.zig");
const string = @import("string.zig");
const runtime_options = @import("runtime_options");

const pointer_bytes: c_uint = @sizeOf(?*anyopaque);
const murmur_hash_m: u64 = 0xc6a4a7935bd1e995;
const murmur_hash_r: u6 = 47;

const nat_big_eq = if (builtin.is_test)
    struct {
        fn call(a1: ?*anyopaque, a2: ?*anyopaque) bool {
            return a1 == a2;
        }
    }.call
else
    struct {
        extern fn lean_nat_big_eq(a1: ?*anyopaque, a2: ?*anyopaque) callconv(.c) bool;
    }.lean_nat_big_eq;
extern fn l_Lean_Name_hash___override(n: *anyopaque) callconv(.c) u64;

fn asString(o: *anyopaque) *lean.lean_string_object {
    return @ptrCast(@alignCast(o));
}

fn asObject(o: *anyopaque) *lean.lean_object {
    return @ptrCast(@alignCast(o));
}

fn stringSize(o: *anyopaque) usize {
    return asString(o).m_size;
}

fn stringData(o: *anyopaque) [*]const u8 {
    return @ptrCast(&asString(o).m_data);
}

fn stringBytes(o: *anyopaque) []const u8 {
    const size = stringSize(o);
    if (size == 0) return "";
    return stringData(o)[0 .. size - 1];
}

fn stringEq(s1: ?*anyopaque, s2: ?*anyopaque) bool {
    if (s1 == s2) return true;
    if (s1 == null or s2 == null) return false;
    const lhs = s1.?;
    const rhs = s2.?;
    const lhs_size = stringSize(lhs);
    return lhs_size == stringSize(rhs) and std.mem.eql(u8, stringData(lhs)[0..lhs_size], stringData(rhs)[0..lhs_size]);
}

fn natEq(a1: ?*anyopaque, a2: ?*anyopaque) bool {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        return a1 == a2;
    }
    return nat_big_eq(a1, a2);
}
const CompatNameKind = enum {
    invalid,
    anonymous,
    string,
    numeral,
};

fn compatNameKind(n: ?*anyopaque) CompatNameKind {
    if (n == null) return .invalid;
    if (object.lean_is_scalar(n)) {
        return if (object.lean_unbox(n.?) == 0) .anonymous else .invalid;
    }
    const o = n.?;
    if (ctor.ctorNumObjs(o) != 2) return .invalid;
    const prefix = ctor.lean_ctor_get(o, 0);
    const suffix = ctor.lean_ctor_get(o, 1);
    if (compatNameKind(prefix) == .invalid) return .invalid;
    return switch (object.lean_ptr_tag(o)) {
        1 => if (suffix != null and !object.lean_is_scalar(suffix.?) and object.lean_ptr_tag(suffix.?) == lean.LeanString) .string else .invalid,
        2 => if (suffix != null and (object.lean_is_scalar(suffix) or object.lean_ptr_tag(suffix.?) == lean.LeanMPZ)) .numeral else .invalid,
        else => .invalid,
    };
}


fn nameHashPtr(n: ?*anyopaque) u64 {
    std.debug.assert(n != null and !object.lean_is_scalar(n));
    const name = n.?;
    const kind = compatNameKind(name);
    if (kind == .string) {
        if (object.lean_ptr_tag(name) == 1 and ctor.ctorScalarBytes(name) >= @sizeOf(u64)) {
            return ctor.lean_ctor_get_uint64(name, pointer_bytes * 2);
        }
        return rt_hash.hash(nameHash(ctor.lean_ctor_get(name, 0)), stringHashObj(ctor.lean_ctor_get(name, 1).?));
    }
    if (kind == .numeral) {
        if (object.lean_ptr_tag(name) == 2 and ctor.ctorScalarBytes(name) >= @sizeOf(u64)) {
            return ctor.lean_ctor_get_uint64(name, pointer_bytes * 2);
        }
        return rt_hash.hash(nameHash(ctor.lean_ctor_get(name, 0)), natHashObj(ctor.lean_ctor_get(name, 1)));
    }
    return l_Lean_Name_hash___override(name);
}

fn nameHash(n: ?*anyopaque) u64 {
    return if (n == null or object.lean_is_scalar(n)) 1723 else nameHashPtr(n);
}

fn stringHashObj(s: *anyopaque) u64 {
    return murmurHash64A(stringBytes(s), 11);
}

fn natHashObj(n: ?*anyopaque) u64 {
    if (!object.lean_is_scalar(n)) return 17;
    const value = object.lean_unbox(n);
    return if (value < std.math.maxInt(u64)) @intCast(value) else 17;
}

fn mkNameNumObj(prefix: *anyopaque, nat_value: ?*anyopaque) *anyopaque {
    const h = rt_hash.hash(nameHash(prefix), natHashObj(nat_value));
    const result = alloc.lean_alloc_ctor(2, 2, @sizeOf(u64));
    ctor.lean_ctor_set(result, 0, prefix);
    ctor.lean_ctor_set(result, 1, nat_value);
    ctor.lean_ctor_set_uint64(result, pointer_bytes * 2, h);
    return result;
}

fn mkNameStrObj(prefix: *anyopaque, suffix: *anyopaque) *anyopaque {
    const h = rt_hash.hash(nameHash(prefix), stringHashObj(suffix));
    const result = alloc.lean_alloc_ctor(1, 2, @sizeOf(u64));
    ctor.lean_ctor_set(result, 0, prefix);
    ctor.lean_ctor_set(result, 1, suffix);
    ctor.lean_ctor_set_uint64(result, pointer_bytes * 2, h);
    return result;
}

fn mkStringConcat(a: []const u8, b: []const u8) *anyopaque {
    const buf = std.heap.c_allocator.alloc(u8, a.len + b.len) catch @panic("out of memory");
    defer std.heap.c_allocator.free(buf);
    @memcpy(buf[0..a.len], a);
    @memcpy(buf[a.len..], b);
    return string.mkStringFromBytes(buf);
}

fn appendAfterBase(n: *anyopaque, suffix: *anyopaque) *anyopaque {
    if (!object.lean_is_scalar(n) and object.lean_ptr_tag(n) == 1) {
        const prefix = ctor.lean_ctor_get(n, 0).?;
        const old = ctor.lean_ctor_get(n, 1).?;
        return mkNameStrObj(prefix, mkStringConcat(stringBytes(old), stringBytes(suffix)));
    }
    return mkNameStrObj(n, suffix);
}

fn appendBeforeBase(n: *anyopaque, prefix_str: *anyopaque) *anyopaque {
    if (object.lean_is_scalar(n)) {
        return mkNameStrObj(n, prefix_str);
    }
    if (object.lean_ptr_tag(n) == 1) {
        const prefix = ctor.lean_ctor_get(n, 0).?;
        const old = ctor.lean_ctor_get(n, 1).?;
        return mkNameStrObj(prefix, mkStringConcat(stringBytes(prefix_str), stringBytes(old)));
    }
    const prefix = ctor.lean_ctor_get(n, 0).?;
    const idx = ctor.lean_ctor_get(n, 1);
    return mkNameNumObj(mkNameStrObj(prefix, prefix_str), idx);
}

fn lean_name_append_after(n: *anyopaque, suffix: *anyopaque) callconv(.c) *anyopaque {
    return appendAfterBase(n, suffix);
}

fn lean_name_append_before(n: *anyopaque, prefix_str: *anyopaque) callconv(.c) *anyopaque {
    return appendBeforeBase(n, prefix_str);
}

fn lean_name_append_index_after(n: *anyopaque, idx: ?*anyopaque) callconv(.c) *anyopaque {
    const idx_bytes = if (object.lean_is_scalar(idx))
        std.fmt.allocPrint(std.heap.c_allocator, "_{}", .{object.lean_unbox(idx)}) catch @panic("out of memory")
    else blk: {
        const digits = mpz_object.mpzValue(idx.?).toString(std.heap.c_allocator, 10) catch @panic("out of memory");
        defer std.heap.c_allocator.free(digits);
        break :blk std.fmt.allocPrint(std.heap.c_allocator, "_{s}", .{digits}) catch @panic("out of memory");
    };
    defer std.heap.c_allocator.free(idx_bytes);
    const suffix = string.mkStringFromBytes(idx_bytes);
    return appendAfterBase(n, suffix);
}
comptime {
    if (runtime_options.export_lean_helpers) {
        @export(&lean_name_append_after, .{ .name = "lean_name_append_after" });
        @export(&lean_name_append_before, .{ .name = "lean_name_append_before" });
        @export(&lean_name_append_index_after, .{ .name = "lean_name_append_index_after" });
    }
}

fn sliceBounds(slice: *anyopaque) struct { start: usize, end: usize } {
    const start_obj = ctor.lean_ctor_get(slice, 1) orelse @panic("slice start missing");
    const end_obj = ctor.lean_ctor_get(slice, 2) orelse @panic("slice end missing");
    std.debug.assert(object.lean_is_scalar(start_obj));
    std.debug.assert(object.lean_is_scalar(end_obj));
    return .{
        .start = object.lean_unbox(start_obj),
        .end = object.lean_unbox(end_obj),
    };
}

fn sliceBytes(slice: *anyopaque) []const u8 {
    const source = ctor.lean_ctor_get(slice, 0) orelse @panic("slice source missing");
    const bounds = sliceBounds(slice);
    std.debug.assert(bounds.end >= bounds.start);
    return stringData(source)[bounds.start..bounds.end];
}

fn murmurHash64A(bytes: []const u8, seed: u64) u64 {
    var h = seed ^ (@as(u64, bytes.len) *% murmur_hash_m);
    var index: usize = 0;
    while (index + 8 <= bytes.len) : (index += 8) {
        var k: u64 = 0;
        @memcpy(std.mem.asBytes(&k), bytes[index .. index + 8]);
        k *%= murmur_hash_m;
        k ^= k >> murmur_hash_r;
        k *%= murmur_hash_m;
        h ^= k;
        h *%= murmur_hash_m;
    }

    const tail = bytes[index..];
    switch (tail.len) {
        7 => h ^= @as(u64, tail[6]) << 48,
        else => {},
    }
    switch (tail.len) {
        7, 6 => h ^= @as(u64, tail[5]) << 40,
        else => {},
    }
    switch (tail.len) {
        7, 6, 5 => h ^= @as(u64, tail[4]) << 32,
        else => {},
    }
    switch (tail.len) {
        7, 6, 5, 4 => h ^= @as(u64, tail[3]) << 24,
        else => {},
    }
    switch (tail.len) {
        7, 6, 5, 4, 3 => h ^= @as(u64, tail[2]) << 16,
        else => {},
    }
    switch (tail.len) {
        7, 6, 5, 4, 3, 2 => h ^= @as(u64, tail[1]) << 8,
        else => {},
    }
    switch (tail.len) {
        7, 6, 5, 4, 3, 2, 1 => {
            h ^= @as(u64, tail[0]);
            h *%= murmur_hash_m;
        },
        else => {},
    }

    h ^= h >> murmur_hash_r;
    h *%= murmur_hash_m;
    h ^= h >> murmur_hash_r;
    return h;
}

pub export fn lean_name_eq(n1: ?*anyopaque, n2: ?*anyopaque) callconv(.c) u8 {
    var lhs: ?*anyopaque = n1;
    var rhs: ?*anyopaque = n2;

    if (lhs == rhs) return 1;
    if (lhs == null or rhs == null) return 0;
    if (object.lean_is_scalar(lhs) or object.lean_is_scalar(rhs)) return 0;
    const lhs_kind = compatNameKind(lhs);
    const rhs_kind = compatNameKind(rhs);
    if (lhs_kind == .invalid or rhs_kind == .invalid or lhs_kind != rhs_kind) return 0;
    if (nameHashPtr(lhs) != nameHashPtr(rhs)) {
        return 0;
    }

    while (true) {
        std.debug.assert(lhs != null and rhs != null);
        std.debug.assert(!object.lean_is_scalar(lhs));
        std.debug.assert(!object.lean_is_scalar(rhs));

        const lhs_kind_loop = compatNameKind(lhs);
        const rhs_kind_loop = compatNameKind(rhs);
        if (lhs_kind_loop == .invalid or lhs_kind_loop != rhs_kind_loop) {
            return 0;
        }

        switch (lhs_kind_loop) {
            .string => {
                if (!stringEq(ctor.lean_ctor_get(lhs.?, 1), ctor.lean_ctor_get(rhs.?, 1))) {
                    return 0;
                }
            },
            .numeral => {
                if (!natEq(ctor.lean_ctor_get(lhs.?, 1), ctor.lean_ctor_get(rhs.?, 1))) {
                    return 0;
                }
            },
            else => return 0,
        }

        lhs = ctor.lean_ctor_get(lhs.?, 0);
        rhs = ctor.lean_ctor_get(rhs.?, 0);
        if (lhs == rhs) return 1;
        if (lhs == null or rhs == null) return 0;
        if (object.lean_is_scalar(lhs) or object.lean_is_scalar(rhs)) {
            return 0;
        }
    }
}

pub export fn lean_slice_hash(slice: *anyopaque) callconv(.c) u64 {
    return murmurHash64A(sliceBytes(slice), 11);
}

pub export fn lean_slice_dec_lt(s1: *anyopaque, s2: *anyopaque) callconv(.c) u8 {
    return @intFromBool(std.mem.order(u8, sliceBytes(s1), sliceBytes(s2)) == .lt);
}

pub export fn lean_option_get_or_block(o_opt: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(o_opt)) {
        @panic("PANIC: Promise.result!: promise has been dropped without ever being resolved");
    }

    const value = ctor.lean_ctor_get(o_opt, 0) orelse @panic("option some missing value");
    const hdr = asObject(o_opt);
    if (hdr.m_rc == 1) {
        hdr.m_other = 0;
        alloc.lean_free_small_object(o_opt);
    } else {
        rc.lean_inc(value);
        rc.lean_dec(o_opt);
    }
    return value;
}

test "lean_name_append_index_after supports big Nat indexes" {
    const idx = nat_constructors.lean_cstr_to_nat("10000000000000000000000000000000000000000").?;
    defer rc.lean_dec(idx);

    const name = lean_name_append_index_after(object.lean_box(0).?, idx);
    defer rc.lean_dec(name);

    try testing.expectEqual(@as(u8, 1), object.lean_ptr_tag(name));
    const suffix = ctor.lean_ctor_get(name, 1).?;
    try testing.expectEqualStrings("_10000000000000000000000000000000000000000", stringBytes(suffix));
}

fn mkCanonicalNameNum(prefix: *anyopaque, nat_value: usize) *anyopaque {
    const nat = object.lean_box(nat_value);
    const hash = rt_hash.hash(nameHash(prefix), natHashObj(nat));
    const result = alloc.lean_alloc_ctor(2, 2, @sizeOf(u64));
    ctor.lean_ctor_set(result, 0, prefix);
    ctor.lean_ctor_set(result, 1, nat);
    ctor.lean_ctor_set_uint64(result, pointer_bytes * 2, hash);
    return result;
}

fn mkNameGeneratorLikeState(prefix: *anyopaque, nat_value: usize) *anyopaque {
    const result = alloc.lean_alloc_ctor(0, 2, 0);
    ctor.lean_ctor_set(result, 0, prefix);
    ctor.lean_ctor_set(result, 1, object.lean_box(nat_value));
    return result;
}

fn mkNameStr(prefix: *anyopaque, suffix: []const u8, hash: u64) *anyopaque {
    const result = alloc.lean_alloc_ctor(1, 2, @sizeOf(u64));
    ctor.lean_ctor_set(result, 0, prefix);
    ctor.lean_ctor_set(result, 1, string.mkAsciiStringBytes(suffix));
    ctor.lean_ctor_set_uint64(result, pointer_bytes * 2, hash);
    return result;
}

fn mkSlice(source: *anyopaque, start: usize, end: usize) *anyopaque {
    const result = alloc.lean_alloc_ctor(0, 3, 0);
    ctor.lean_ctor_set(result, 0, source);
    ctor.lean_ctor_set(result, 1, object.lean_box(start));
    ctor.lean_ctor_set(result, 2, object.lean_box(end));
    return result;
}

fn decIfHeap(o: ?*anyopaque) void {
    if (o) |value| {
        if (!object.lean_is_scalar(value)) {
            rc.lean_dec(value);
        }
    }
}

test "lean_name_eq walks the Lean.Name ctor spine" {
    const anonymous = object.lean_box(0).?;
    const lhs = mkNameStr(mkCanonicalNameNum(anonymous, 7), "leaf", 0xbbbb);
    const rhs = mkNameStr(mkCanonicalNameNum(anonymous, 7), "leaf", 0xbbbb);
    const diff = mkNameStr(mkCanonicalNameNum(anonymous, 8), "leaf", 0xbbbb);
    defer decIfHeap(lhs);
    defer decIfHeap(rhs);
    defer decIfHeap(diff);

    try testing.expectEqual(@as(u8, 1), lean_name_eq(lhs, rhs));
    try testing.expectEqual(@as(u8, 0), lean_name_eq(lhs, diff));
    try testing.expectEqual(@as(u8, 0), lean_name_eq(anonymous, lhs));
    try testing.expectEqual(@as(u8, 0), lean_name_eq(null, lhs));
}

test "lean_name_eq rejects NameGenerator-shaped state objects" {
    const anonymous = object.lean_box(0).?;
    const valid = mkCanonicalNameNum(anonymous, 7);
    const state = mkNameGeneratorLikeState(anonymous, 7);
    defer decIfHeap(valid);
    defer decIfHeap(state);

    try testing.expectEqual(@as(u8, 2), object.lean_ptr_tag(valid));
    try testing.expectEqual(CompatNameKind.numeral, compatNameKind(valid));
    try testing.expectEqual(CompatNameKind.invalid, compatNameKind(state));
    try testing.expectEqual(@as(u8, 0), lean_name_eq(valid, state));
}

test "lean_slice_hash uses slice bytes rather than the backing string" {
    const slice1 = mkSlice(string.mkAsciiStringBytes("zzleanzz"), 2, 6);
    const slice2 = mkSlice(string.mkAsciiStringBytes("lean"), 0, 4);
    const slice3 = mkSlice(string.mkAsciiStringBytes("leao"), 0, 4);
    defer decIfHeap(slice1);
    defer decIfHeap(slice2);
    defer decIfHeap(slice3);

    try testing.expectEqual(lean_slice_hash(slice1), lean_slice_hash(slice2));
    try testing.expect(lean_slice_hash(slice1) != lean_slice_hash(slice3));
}

test "lean_slice_dec_lt uses lexicographic order and slice length" {
    const less = mkSlice(string.mkAsciiStringBytes("abc"), 0, 3);
    const greater = mkSlice(string.mkAsciiStringBytes("abd"), 0, 3);
    const prefix = mkSlice(string.mkAsciiStringBytes("ab"), 0, 2);
    defer decIfHeap(less);
    defer decIfHeap(greater);
    defer decIfHeap(prefix);

    try testing.expectEqual(@as(u8, 1), lean_slice_dec_lt(less, greater));
    try testing.expectEqual(@as(u8, 0), lean_slice_dec_lt(greater, less));
    try testing.expectEqual(@as(u8, 1), lean_slice_dec_lt(prefix, less));
}

test "lean_option_get_or_block returns the some payload" {
    const payload = string.mkAsciiStringBytes("ready");
    const option = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(option, 0, payload);

    const result = lean_option_get_or_block(option);
    defer decIfHeap(result);

    try testing.expectEqual(payload, result);
}
