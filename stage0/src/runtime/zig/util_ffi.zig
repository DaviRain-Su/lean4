// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/ffi.cpp`.
//!
//! Exports string constants used by the Lean compiler driver. The actual flag
//! values are injected at build time via the `runtime_options` module.

const string = @import("string.zig");
const runtime_options = @import("runtime_options");

fn lean_mk_string(s: []const u8) *anyopaque {
    return string.lean_mk_string(@ptrCast(s.ptr));
}

fn lean_get_leanc_extra_flags(_: *anyopaque) callconv(.c) *anyopaque {
    return lean_mk_string(runtime_options.leanc_extra_cc_flags);
}

fn lean_get_leanc_internal_flags(_: *anyopaque) callconv(.c) *anyopaque {
    return lean_mk_string(runtime_options.leanc_internal_flags);
}

fn lean_get_linker_flags(link_static: u8) callconv(.c) *anyopaque {
    if (link_static != 0) {
        return lean_mk_string(runtime_options.leanc_static_linker_flags ++ " " ++ runtime_options.lean_extra_linker_flags);
    } else {
        return lean_mk_string(runtime_options.leanc_shared_linker_flags ++ " " ++ runtime_options.lean_extra_linker_flags);
    }
}

fn lean_get_internal_linker_flags(_: *anyopaque) callconv(.c) *anyopaque {
    return lean_mk_string(runtime_options.leanc_internal_linker_flags);
}

comptime {
    @export(&lean_get_leanc_extra_flags, .{ .name = "lean_get_leanc_extra_flags", .linkage = .strong });
    @export(&lean_get_leanc_internal_flags, .{ .name = "lean_get_leanc_internal_flags", .linkage = .strong });
    @export(&lean_get_linker_flags, .{ .name = "lean_get_linker_flags", .linkage = .strong });
    @export(&lean_get_internal_linker_flags, .{ .name = "lean_get_internal_linker_flags", .linkage = .strong });
}

test "ffi module compiles" {
    _ = lean_mk_string;
}
