// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/options.cpp`.
//!
//! Mirrors the C++ `options` class and the default verbose/options accessors.
//! The option names and default option values live in the Lean stdlib; this
//! module only provides the C entrypoints consumed by the C++ library.

const std = @import("std");
const object = @import("object.zig");
const runtime_options = @import("runtime_options");

const LEAN_DEFAULT_VERBOSE = true;

pub const Options = extern struct {
    obj: *anyopaque,

    pub fn init(obj: *anyopaque) Options {
        return .{ .obj = obj };
    }
};

extern fn lean_options_get_empty(u: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_options_get_bool(opts: *anyopaque, n: *anyopaque, default_value: bool) callconv(.c) bool;
extern fn lean_options_update_bool(opts: *anyopaque, n: *anyopaque, v: bool) callconv(.c) *anyopaque;
extern fn lean_internal_get_default_options(u: *anyopaque) callconv(.c) *anyopaque;

fn lean_internal_get_default_verbose(_: *anyopaque) callconv(.c) u8 {
    return if (LEAN_DEFAULT_VERBOSE) 1 else 0;
}

fn lean_internal_get_default_options_impl(_: *anyopaque) callconv(.c) *anyopaque {
    return lean_internal_get_default_options(object.lean_box(0).?);
}

pub fn optionsGetBool(opts: Options, n: *anyopaque, default_value: bool) bool {
    return lean_options_get_bool(opts.obj, n, default_value);
}

pub fn optionsUpdateBool(opts: Options, n: *anyopaque, v: bool) Options {
    return .{ .obj = lean_options_update_bool(opts.obj, n, v) };
}

pub fn getVerbose(opts: Options) bool {
    _ = opts;
    return LEAN_DEFAULT_VERBOSE;
}

comptime {
    if (runtime_options.export_lean_helpers) {
        @export(&lean_internal_get_default_verbose, .{ .name = "lean_internal_get_default_verbose" });
        @export(&lean_internal_get_default_options_impl, .{ .name = "lean_internal_get_default_options" });
    }
}

test "options module compiles" {
    _ = Options;
    _ = optionsGetBool;
    _ = optionsUpdateBool;
}
