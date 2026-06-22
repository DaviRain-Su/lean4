// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ interrupt subsystem.
//!
//! First pass: POSIX (macOS/Linux). Windows is a no-op stub.

const std = @import("std");
const builtin = @import("builtin");
const testing = std.testing;

const lean = @import("lean_object.zig");
const object = @import("object.zig");
const exception = @import("exception.zig");
const stackinfo = @import("stackinfo.zig");
const memory = @import("memory.zig");

const POSIX = builtin.os.tag != .windows;

threadlocal var g_max_heartbeat: usize = 0;
threadlocal var g_heartbeat: usize = 0;
threadlocal var g_cancel_tk: ?*anyopaque = null;

export fn lean_internal_get_default_max_heartbeat() callconv(.c) ?*anyopaque {
    return object.lean_box(0);
}

export fn lean_internal_set_max_heartbeat(max: usize) callconv(.c) ?*anyopaque {
    setMaxHeartbeat(max);
    return object.lean_box(0);
}

pub fn incHeartbeat() void {
    g_heartbeat += 1;
}

pub fn resetHeartbeat() void {
    g_heartbeat = 0;
}

pub fn setMaxHeartbeat(max: usize) void {
    g_max_heartbeat = max;
}

pub fn getMaxHeartbeat() usize {
    return g_max_heartbeat;
}

pub fn setMaxHeartbeatThousands(max: c_uint) void {
    g_max_heartbeat = @as(usize, max) * 1000;
}

fn throwHeartbeatException() noreturn {
    exception.throwHeartbeatException();
}

pub fn checkHeartbeat() void {
    incHeartbeat();
    if (g_max_heartbeat > 0 and g_heartbeat > g_max_heartbeat) {
        throwHeartbeatException();
    }
}

pub fn setCancelToken(tk: ?*anyopaque) void {
    g_cancel_tk = tk;
}

pub fn clearCancelToken() void {
    g_cancel_tk = null;
}

fn cancelTokenIsSet(tk: ?*anyopaque) bool {
    const ctor: *lean.lean_ctor_object = @ptrCast(@alignCast(tk.?));
    const fields: [*]?*anyopaque = @ptrCast(&ctor.m_objs);
    const setRef = fields[1];
    const ref: *lean.lean_ref_object = @ptrCast(@alignCast(setRef.?));
    return object.lean_unbox(ref.m_value) != 0;
}

pub fn checkInterrupted() void {
    if (g_cancel_tk) |tk| {
        if (cancelTokenIsSet(tk)) {
            exception.throwInterruptedException();
        }
    }
}

pub fn checkSystem(component_name: [*:0]const u8, do_check_interrupted: bool) void {
    stackinfo.checkStack(component_name);
    memory.checkMemory(component_name);
    if (do_check_interrupted) {
        checkInterrupted();
        checkHeartbeat();
    }
}

fn sleepMs(ms: c_uint) void {
    if (ms == 0) return;
    if (builtin.os.tag == .windows) {
        std.os.windows.kernel32.Sleep(ms);
        return;
    }
    const ns = std.time.ns_per_ms * ms;
    const sec = ns / std.time.ns_per_s;
    const nsec = ns % std.time.ns_per_s;
    const delay = std.c.timespec{ .sec = @intCast(sec), .nsec = @intCast(nsec) };
    _ = std.c.nanosleep(&delay, null);
}

pub fn sleepFor(ms: c_uint, step_ms: c_uint) void {
    const actual_step: c_uint = if (step_ms == 0) 1 else step_ms;
    const rounds = ms / actual_step;
    const remainder = ms % actual_step;
    for (0..rounds) |_| {
        sleepMs(actual_step);
        checkInterrupted();
    }
    sleepMs(remainder);
    checkInterrupted();
}

export fn lean_set_max_heartbeat(max: usize) callconv(.c) void {
    setMaxHeartbeat(max);
}

export fn lean_get_max_heartbeat() callconv(.c) usize {
    return getMaxHeartbeat();
}

export fn lean_set_max_heartbeat_thousands(max: c_uint) callconv(.c) void {
    setMaxHeartbeatThousands(max);
}

export fn lean_check_heartbeat() callconv(.c) void {
    checkHeartbeat();
}

export fn lean_check_interrupted() callconv(.c) void {
    checkInterrupted();
}

export fn lean_check_system(component_name: [*:0]const u8, do_check_interrupted: bool) callconv(.c) void {
    checkSystem(component_name, do_check_interrupted);
}

export fn lean_sleep_for(ms: c_uint, step_ms: c_uint) callconv(.c) void {
    sleepFor(ms, step_ms);
}

test "heartbeat counter and limit" {
    if (!POSIX) return error.SkipZigTest;
    resetHeartbeat();
    setMaxHeartbeat(10);
    try testing.expectEqual(@as(usize, 0), g_heartbeat);
    try testing.expectEqual(@as(usize, 10), getMaxHeartbeat());
    incHeartbeat();
    try testing.expectEqual(@as(usize, 1), g_heartbeat);
    checkHeartbeat();
    try testing.expectEqual(@as(usize, 2), g_heartbeat);
    g_heartbeat = 9;
    checkHeartbeat(); // 10 <= 10, no panic
    try testing.expectEqual(@as(usize, 10), g_heartbeat);
}

test "checkSystem does not panic with defaults" {
    if (!POSIX) return error.SkipZigTest;
    resetHeartbeat();
    setMaxHeartbeat(0);
    g_cancel_tk = null;
    checkSystem("test", true);
}

test "sleepFor returns without error" {
    if (!POSIX) return error.SkipZigTest;
    sleepFor(10, 5);
}

/// C++ flet<T> layout: { T* m_ref; T m_old_value; }
const FletUsize = extern struct {
    m_ref: *usize,
    m_old_value: usize,
};

const FletObjPtr = extern struct {
    m_ref: *?*anyopaque,
    m_old_value: ?*anyopaque,
};

// C++ mangled: lean::scope_max_heartbeat::scope_max_heartbeat(unsigned long)
fn cpp_scope_max_heartbeat_ctor(this: *FletUsize, max: usize) callconv(.c) void {
    this.m_ref = &g_max_heartbeat;
    this.m_old_value = g_max_heartbeat;
    g_max_heartbeat = max;
}

// C++ mangled: lean::scope_max_heartbeat::~scope_max_heartbeat()
fn cpp_scope_max_heartbeat_dtor(this: *FletUsize) callconv(.c) void {
    g_max_heartbeat = this.m_old_value;
}

// C++ mangled: lean::scope_cancel_tk::scope_cancel_tk(lean_object*)
fn cpp_scope_cancel_tk_ctor(this: *FletObjPtr, o: ?*anyopaque) callconv(.c) void {
    this.m_ref = &g_cancel_tk;
    this.m_old_value = g_cancel_tk;
    g_cancel_tk = o;
}

// C++ mangled: lean::scope_cancel_tk::~scope_cancel_tk()
fn cpp_scope_cancel_tk_dtor(this: *FletObjPtr) callconv(.c) void {
    g_cancel_tk = this.m_old_value;
}

comptime {
    @export(&cpp_scope_max_heartbeat_ctor, .{ .name = "_ZN4lean19scope_max_heartbeatC1Em", .linkage = .weak });
    @export(&cpp_scope_max_heartbeat_dtor, .{ .name = "_ZN4lean19scope_max_heartbeatD1Ev", .linkage = .weak });
    @export(&cpp_scope_cancel_tk_ctor, .{ .name = "_ZN4lean15scope_cancel_tkC1EP11lean_object", .linkage = .weak });
    @export(&cpp_scope_cancel_tk_dtor, .{ .name = "_ZN4lean15scope_cancel_tkD1Ev", .linkage = .weak });
}

// C++ mangled: lean::check_system(char const*, bool)
fn cpp_check_system(component_name: [*:0]const u8, do_check_interrupted: bool) callconv(.c) void {
    checkSystem(component_name, do_check_interrupted);
}
comptime {
    @export(&cpp_check_system, .{ .name = "_ZN4lean12check_systemEPKcb", .linkage = .weak });
}

// C++ mangled: lean::reset_heartbeat()
fn cpp_reset_heartbeat() callconv(.c) void {
    resetHeartbeat();
}

// C++ mangled: lean::get_max_heartbeat()
fn cpp_get_max_heartbeat() callconv(.c) usize {
    return getMaxHeartbeat();
}

// C++ mangled: lean::set_max_heartbeat(unsigned long)
fn cpp_set_max_heartbeat(max: usize) callconv(.c) void {
    setMaxHeartbeat(max);
}

comptime {
    @export(&cpp_reset_heartbeat, .{ .name = "_ZN4lean15reset_heartbeatEv", .linkage = .weak });
    @export(&cpp_get_max_heartbeat, .{ .name = "_ZN4lean17get_max_heartbeatEv", .linkage = .weak });
    @export(&cpp_set_max_heartbeat, .{ .name = "_ZN4lean17set_max_heartbeatEm", .linkage = .weak });
}
