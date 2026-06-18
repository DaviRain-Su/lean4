// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ openssl subsystem.
//!
//! First pass: exposes OpenSSL version number. Emscripten returns 0.

const std = @import("std");
const builtin = @import("builtin");
const testing = std.testing;
const object = @import("object.zig");
const compat = @import("compat.zig");

const EMSC = builtin.os.tag == .emscripten;

const c = if (!EMSC) @cImport({
    @cInclude("openssl/opensslv.h");
}) else struct {};

pub export fn lean_initialize_openssl() callconv(.c) void {}

pub export fn lean_finalize_openssl() callconv(.c) void {}

pub export fn lean_openssl_version(_: ?*anyopaque) callconv(.c) *anyopaque {
    if (EMSC) return object.lean_box(0);
    return compat.lean_usize_to_nat(@intCast(c.OPENSSL_VERSION_NUMBER));
}

test "lean_openssl_version returns a non-zero scalar for non-Emscripten" {
    if (EMSC) return error.SkipZigTest;
    const v = lean_openssl_version(object.lean_box(0));
    try testing.expect(object.lean_is_scalar(v));
    try testing.expect(object.lean_unbox(v) != 0);
}
