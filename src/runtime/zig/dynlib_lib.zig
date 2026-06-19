// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! C++ library entrypoints from `src/library/dynlib.cpp` / `dynlib.h`.
//!
//! Lean `@[export]` symbols (`lean_load_dynlib`, `lean_load_plugin`) and the
//! `lean_dynlib_*` C API live in `dynlib.zig` and Lean sources respectively.
//! This module ports `lean::initialize_dynlib`, `lean::load_dynlib`, and
//! `lean::load_plugin` for hosts that link the Zig runtime against C++ callers.

pub const force_link = true;

const std = @import("std");
const builtin = @import("builtin");
const dynlib = @import("dynlib.zig");
const io_result = @import("io_result.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");

extern fn lean_mk_string_from_bytes_unchecked(s: [*:0]const u8, sz: usize) callconv(.c) *anyopaque;
extern fn lean_load_dynlib(path: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_load_plugin(path: *anyopaque, init_fn: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_io_error_to_string(err: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_panic(msg: [*:0]const u8, force_stderr: bool) callconv(.c) void;

fn stringObjectBytes(o: *anyopaque) []const u8 {
    const str: *lean.lean_string_object = @ptrCast(@alignCast(o));
    const size = if (str.m_size == 0) 0 else str.m_size - 1;
    const bytes: [*]const u8 = @ptrCast(&str.m_data);
    return bytes[0..size];
}

fn consumeIoResult(r: *anyopaque) void {
    if (io_result.lean_io_result_is_error(r)) {
        const err = io_result.lean_io_result_get_error(r).?;
        rc.lean_inc(err);
        rc.lean_dec(r);
        const msg_obj = lean_io_error_to_string(err);
        const msg = stringObjectBytes(msg_obj);
        var buf: [4096]u8 = undefined;
        const copy = if (msg.len < buf.len) msg else msg[0..buf.len];
        @memcpy(buf[0..copy.len], copy);
        buf[copy.len] = 0;
        rc.lean_dec(err);
        rc.lean_dec(msg_obj);
        lean_panic(@ptrCast(&buf), true);
        unreachable;
    }
    rc.lean_dec(r);
}

/// libc++ `std::string` / `std::basic_string<char>` layout (Darwin arm64/x86_64).
fn stdStringBytes(s: *const anyopaque) struct { ptr: [*]const u8, len: usize } {
    const raw: [*]const u8 = @ptrCast(s);
    if (builtin.os.tag != .macos and builtin.os.tag != .linux) {
        return .{ .ptr = raw, .len = std.mem.len(raw) };
    }
    const size_byte = raw[23];
    if ((size_byte & 0x80) == 0) {
        const len: usize = size_byte;
        return .{ .ptr = raw, .len = len };
    }
    const long_ptr: *const extern struct {
        cap: usize,
        size: usize,
        data: [*]const u8,
    } = @ptrCast(@alignCast(s));
    return .{ .ptr = long_ptr.data, .len = long_ptr.size };
}

fn mkStringFromStdString(s: *const anyopaque) *anyopaque {
    const parts = stdStringBytes(s);
    // lean_mk_string_from_bytes_unchecked requires a null-terminated pointer;
    // copy into a stack buffer with sentinel to satisfy the API.
    var buf: [4096]u8 = undefined;
    const len = @min(parts.len, buf.len - 1);
    @memcpy(buf[0..len], parts.ptr[0..len]);
    buf[len] = 0;
    return lean_mk_string_from_bytes_unchecked(@ptrCast(&buf), len);
}

// `void lean::initialize_dynlib()`
pub export fn initialize_dynlib() callconv(.c) void {
    dynlib.initializeDynlibClasses();
}

// `void lean::load_dynlib(std::string path)`
pub export fn load_dynlib(s: *const anyopaque) callconv(.c) void {
    const path_obj = mkStringFromStdString(s);
    defer rc.lean_dec(path_obj);
    consumeIoResult(lean_load_dynlib(path_obj));
}

// `void lean::load_plugin(std::string path)` — passes `none` for the init name (see dynlib.cpp).
pub export fn load_plugin(s: *const anyopaque) callconv(.c) void {
    const path_obj = mkStringFromStdString(s);
    defer rc.lean_dec(path_obj);
    consumeIoResult(lean_load_plugin(path_obj, object.lean_box(0).?));
}

// Export under Itanium mangled names used by `dynlib.h` when linked from C++.
comptime {
    if (builtin.os.tag == .macos) {
        @export(&initialize_dynlib, .{ .name = "_ZN4lean17initialize_dynlibEv" });
        @export(&load_dynlib, .{
            .name = "_ZN4lean11load_dynlibENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE",
        });
        @export(&load_plugin, .{
            .name = "_ZN4lean11load_pluginENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE",
        });
    } else if (builtin.os.tag == .linux) {
        @export(&initialize_dynlib, .{ .name = "_ZN4lean17initialize_dynlibEv" });
        @export(&load_dynlib, .{
            .name = "_ZN4lean11load_dynlibENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE",
        });
        @export(&load_plugin, .{
            .name = "_ZN4lean11load_pluginENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE",
        });
    }
}