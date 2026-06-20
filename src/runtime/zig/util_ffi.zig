// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/ffi.cpp`.
//!
//! Exports string constants used by the Lean compiler driver. The C++ build
//! substitutes these placeholders via CMake configure_file; the Zig runtime
//! keeps the same template literals so downstream tooling can replace them
//! if needed.

const std = @import("std");
const string = @import("string.zig");
const runtime_options = @import("runtime_options");

fn lean_mk_string(s: []const u8) *anyopaque {
    return string.lean_mk_string(@ptrCast(s.ptr));
}

fn lean_get_leanc_extra_flags(_: *anyopaque) callconv(.c) *anyopaque {
    return lean_mk_string("@LEANC_EXTRA_CC_FLAGS@");
}

fn lean_get_leanc_internal_flags(_: *anyopaque) callconv(.c) *anyopaque {
    return lean_mk_string("@LEANC_INTERNAL_FLAGS@");
}

fn lean_get_linker_flags(link_static: u8) callconv(.c) *anyopaque {
    if (link_static != 0) {
        return lean_mk_string("@LEANC_STATIC_LINKER_FLAGS@ @LEAN_EXTRA_LINKER_FLAGS@");
    } else {
        return lean_mk_string("@LEANC_SHARED_LINKER_FLAGS@ @LEAN_EXTRA_LINKER_FLAGS@");
    }
}

fn lean_get_internal_linker_flags(_: *anyopaque) callconv(.c) *anyopaque {
    return lean_mk_string("@LEANC_INTERNAL_LINKER_FLAGS@");
}

comptime {
    if (runtime_options.export_lean_helpers) {
        @export(&lean_get_leanc_extra_flags, .{ .name = "lean_get_leanc_extra_flags" });
        @export(&lean_get_leanc_internal_flags, .{ .name = "lean_get_leanc_internal_flags" });
        @export(&lean_get_linker_flags, .{ .name = "lean_get_linker_flags" });
        @export(&lean_get_internal_linker_flags, .{ .name = "lean_get_internal_linker_flags" });
    }
}

test "ffi module compiles" {
    _ = lean_mk_string;
}
