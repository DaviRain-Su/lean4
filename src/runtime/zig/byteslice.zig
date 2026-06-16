// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

const std = @import("std");
const testing = std.testing;
const alloc = @import("alloc.zig");
const ctor = @import("ctor.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");

fn asSArray(o: *anyopaque) *lean.lean_sarray_object {
    return @ptrCast(@alignCast(o));
}

fn sarrayBytes(o: *anyopaque) [*]u8 {
    return @ptrCast(&asSArray(o).m_data);
}

fn byteSliceField(s: *anyopaque, i: c_uint) *anyopaque {
    return ctor.lean_ctor_get(s, i) orelse @panic("malformed ByteSlice object");
}

pub export fn lean_byteslice_beq(a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    if (a == b) return 1;

    const bytearray_a = byteSliceField(a, 0);
    const start_a = object.lean_unbox(byteSliceField(a, 1));
    const end_a = object.lean_unbox(byteSliceField(a, 2));

    const bytearray_b = byteSliceField(b, 0);
    const start_b = object.lean_unbox(byteSliceField(b, 1));
    const end_b = object.lean_unbox(byteSliceField(b, 2));

    const size_a = end_a - start_a;
    const size_b = end_b - start_b;

    if (size_a != size_b) return 0;
    if (size_a == 0) return 1;

    const ptr_a = sarrayBytes(bytearray_a) + start_a;
    const ptr_b = sarrayBytes(bytearray_b) + start_b;
    return @intFromBool(std.mem.eql(u8, ptr_a[0..size_a], ptr_b[0..size_a]));
}

fn allocByteArray(bytes: []const u8) *anyopaque {
    const result = alloc.lean_alloc_sarray(1, bytes.len, bytes.len);
    @memcpy(sarrayBytes(result)[0..bytes.len], bytes);
    return result;
}

fn allocByteSlice(byte_array: *anyopaque, start: usize, stop: usize) *anyopaque {
    const result = alloc.lean_alloc_ctor(0, 3, 0);
    ctor.lean_ctor_set(result, 0, byte_array);
    ctor.lean_ctor_set(result, 1, object.lean_box(start));
    ctor.lean_ctor_set(result, 2, object.lean_box(stop));
    return result;
}

test "lean_byteslice_beq compares only selected ranges" {
    const a = allocByteArray(&.{ 1, 2, 3, 4 });
    defer alloc.lean_free_object(a);
    const b = allocByteArray(&.{ 9, 2, 3, 8 });
    defer alloc.lean_free_object(b);

    const a_slice = allocByteSlice(a, 1, 3);
    defer alloc.lean_free_object(a_slice);
    const b_matching_slice = allocByteSlice(b, 1, 3);
    defer alloc.lean_free_object(b_matching_slice);
    const b_other_slice = allocByteSlice(b, 0, 2);
    defer alloc.lean_free_object(b_other_slice);

    try testing.expectEqual(@as(u8, 1), lean_byteslice_beq(a_slice, b_matching_slice));
    try testing.expectEqual(@as(u8, 0), lean_byteslice_beq(a_slice, b_other_slice));
}
