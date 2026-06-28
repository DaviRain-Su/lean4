// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

const io_error = @import("io_error.zig");
const object = @import("object.zig");

pub fn initializeDecodeCache() void {}

pub export fn lean_decode_io_error(errnum: c_int, fname: ?*anyopaque) callconv(.c) *anyopaque {
    _ = errnum;
    _ = fname;
    return io_error.lean_mk_io_error_unsupported_operation(0, object.lean_box(0).?);
}

pub export fn lean_decode_uv_error(errnum: c_int, fname: ?*anyopaque) callconv(.c) *anyopaque {
    return lean_decode_io_error(errnum, fname);
}
