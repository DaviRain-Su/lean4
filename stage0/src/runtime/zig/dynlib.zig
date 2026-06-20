// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Dynamic library loading (dlopen/dlsym) for the Zig runtime.
//!
//! Ports src/library/dynlib.cpp. Uses external classes to wrap `void*`
//! handles so Lean can manage their lifetime via the RC system.

const std = @import("std");
const builtin = @import("builtin");
const lean = @import("lean_object.zig");
const rt_object = @import("object.zig");
const alloc = @import("alloc.zig");
const string = @import("string.zig");
const io_result = @import("io_result.zig");
const object = @import("object.zig");

pub const force_link = true;

const c = if (builtin.target.os.tag == .windows) struct {
    extern "kernel32" fn LoadLibraryA(lpLibFileName: [*:0]const u8) ?*anyopaque;
    extern "kernel32" fn FreeLibrary(hLibModule: *anyopaque) c_int;
    extern "kernel32" fn GetProcAddress(hModule: *anyopaque, lpProcName: [*:0]const u8) ?*anyopaque;
    extern "kernel32" fn GetLastError() u32;
} else struct {
    extern "c" fn dlopen(filename: [*:0]const u8, flag: c_int) ?*anyopaque;
    extern "c" fn dlerror() ?[*:0]const u8;
    extern "c" fn dlsym(handle: ?*anyopaque, symbol: [*:0]const u8) ?*anyopaque;
    extern "c" fn dlclose(handle: *anyopaque) c_int;
};

var g_dynlib_class: ?*lean.lean_external_class = null;
var g_dynlib_symbol_class: ?*lean.lean_external_class = null;

fn ensureDynlibClass() *lean.lean_external_class {
    if (g_dynlib_class == null) {
        g_dynlib_class = rt_object.lean_register_external_class(@ptrCast(&dynlibFinalize), @ptrCast(&noopForeach));
    }
    return g_dynlib_class.?;
}

fn ensureSymbolClass() *lean.lean_external_class {
    if (g_dynlib_symbol_class == null) {
        g_dynlib_symbol_class = rt_object.lean_register_external_class(@ptrCast(&noopFinalize), @ptrCast(&noopForeach));
    }
    return g_dynlib_symbol_class.?;
}

/// Eager registration matching `lean::initialize_dynlib()` in `src/library/dynlib.cpp`.
pub fn initializeDynlibClasses() void {
    _ = ensureDynlibClass();
    _ = ensureSymbolClass();
}

fn dynlibFinalize(h: *anyopaque) void {
    if (builtin.target.os.tag == .windows) {
        _ = c.FreeLibrary(h);
    } else {
        _ = c.dlclose(h);
    }
}

fn noopForeach(_: *anyopaque, _: ?*anyopaque) void {}
fn noopFinalize(_: *anyopaque) void {}

fn mkError(msg: []const u8) *anyopaque {
    return io_result.lean_io_result_mk_error(string.mkAsciiStringBytes(msg));
}

fn mkOk(v: *anyopaque) *anyopaque {
    return io_result.lean_io_result_mk_ok(v);
}

fn mkOptionSome(v: *anyopaque) *anyopaque {
    const some = alloc.lean_alloc_ctor(0, 1, 0);
    const ctor = @import("ctor.zig");
    ctor.lean_ctor_set(some, 0, v);
    return some;
}

fn mkOptionNone() *anyopaque {
    return alloc.lean_alloc_ctor(1, 0, 0);
}

pub export fn lean_dynlib_load(path: *anyopaque) callconv(.c) *anyopaque {
    const path_cstr: [*:0]const u8 = @ptrCast(&@as(*lean.lean_string_object, @ptrCast(@alignCast(path))).m_data);

    if (builtin.target.os.tag == .windows) {
        const h = c.LoadLibraryA(path_cstr);
        if (h == null) {
            return mkError("error loading library");
        }
        return mkOk(rt_object.lean_alloc_external(ensureDynlibClass(), h.?));
    } else {
        const RTLD_LAZY: c_int = 1;
        const RTLD_GLOBAL: c_int = 0x100;
        const h = c.dlopen(path_cstr, RTLD_LAZY | RTLD_GLOBAL);
        if (h == null) {
            const err_msg = if (c.dlerror()) |e| std.mem.span(e) else "unknown error";
            var buf: [256]u8 = undefined;
            const msg = std.fmt.bufPrint(&buf, "error loading library, {s}", .{err_msg}) catch "error loading library";
            return mkError(msg);
        }
        return mkOk(rt_object.lean_alloc_external(ensureDynlibClass(), h.?));
    }
}

pub export fn lean_dynlib_get(dynlib: *anyopaque, name: *anyopaque) callconv(.c) *anyopaque {
    const handle = rt_object.lean_get_external_data(dynlib).?;
    const name_cstr: [*:0]const u8 = @ptrCast(&@as(*lean.lean_string_object, @ptrCast(@alignCast(name))).m_data);

    if (builtin.target.os.tag == .windows) {
        const sym = c.GetProcAddress(handle, name_cstr);
        if (sym != null) {
            return mkOptionSome(rt_object.lean_alloc_external(ensureSymbolClass(), sym.?));
        }
        return mkOptionNone();
    } else {
        _ = c.dlerror();
        const sym = c.dlsym(handle, name_cstr);
        if (c.dlerror() != null) {
            return mkOptionNone();
        }
        if (sym != null) {
            return mkOptionSome(rt_object.lean_alloc_external(ensureSymbolClass(), sym.?));
        }
        return mkOptionNone();
    }
}

pub export fn lean_dynlib_symbol_run_as_init(_: *anyopaque, sym: *anyopaque) callconv(.c) ?*anyopaque {
    const ptr = rt_object.lean_get_external_data(sym).?;
    const init_fn: *const fn (u8) callconv(.c) ?*anyopaque = @ptrCast(@alignCast(ptr));
    return init_fn(1);
}

extern fn lean_io_result_is_ok(r: *anyopaque) callconv(.c) bool;

pub export fn lean_run_mod_init_core(sym: *anyopaque) callconv(.c) *anyopaque {
    const sym_cstr: [*:0]const u8 = @ptrCast(&@as(*lean.lean_string_object, @ptrCast(@alignCast(sym))).m_data);
    if (builtin.target.os.tag == .windows) {
        // Windows would need EnumProcessModules; not implemented yet.
        return mkOk(object.lean_box(0).?);
    } else {
        const RTLD_DEFAULT: ?*anyopaque = @ptrFromInt(@as(usize, @bitCast(@as(isize, -2))));
        _ = c.dlerror();
        const init_ptr = c.dlsym(RTLD_DEFAULT, sym_cstr);
        if (c.dlerror() != null or init_ptr == null) {
            return mkOk(object.lean_box(0).?);
        }
        const init_fn: *const fn (u8) callconv(.c) ?*anyopaque = @ptrCast(@alignCast(init_ptr.?));
        const r = init_fn(0);
        if (r != null and lean_io_result_is_ok(r.?)) {
            return mkOk(object.lean_box(1).?);
        }
        return r orelse mkOk(object.lean_box(0).?);
    }
}