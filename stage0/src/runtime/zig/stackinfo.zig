// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ stack-info subsystem.
//!
//! First pass: POSIX (macOS/Linux). Windows is a no-op stub.

const std = @import("std");
const builtin = @import("builtin");
const testing = std.testing;

const exception = @import("exception.zig");

const c = @cImport({
    @cInclude("pthread.h");
    @cInclude("sys/resource.h");
    @cInclude("unistd.h");
});

const POSIX = builtin.os.tag != .windows;

const stack_buffer_space: usize = 128 * 1024;

threadlocal var g_stack_info_init: bool = false;
threadlocal var g_stack_size: usize = 0;
threadlocal var g_stack_base: usize = 0;
threadlocal var g_stack_threshold: usize = 0;

fn getStackPointer() *anyopaque {
    return @ptrFromInt(@frameAddress());
}

fn getMainThreadStackSize() usize {
    if (!POSIX) return 8 * 1024 * 1024;
    var limit: c.struct_rlimit = undefined;
    if (c.getrlimit(c.RLIMIT_STACK, &limit) != 0) {
        std.debug.panic("failed to retrieve main thread stack size", .{});
    }
    return limit.rlim_cur;
}

fn getCurrentThreadStackSize() usize {
    if (!POSIX) return 8 * 1024 * 1024;
    if (builtin.os.tag == .macos) {
        return c.pthread_get_stacksize_np(c.pthread_self());
    } else if (builtin.os.tag == .linux) {
        var attr: c.pthread_attr_t = undefined;
        if (c.pthread_attr_init(&attr) != 0) return 8 * 1024 * 1024;
        defer _ = c.pthread_attr_destroy(&attr);
        var stackaddr: ?*anyopaque = null;
        var stacksize: usize = 0;
        if (c.pthread_getattr_np(c.pthread_self(), &attr) != 0) return 8 * 1024 * 1024;
        if (c.pthread_attr_getstack(&attr, &stackaddr, &stacksize) != 0) return 8 * 1024 * 1024;
        return stacksize;
    }
    return 8 * 1024 * 1024;
}

pub fn getStackSize(main: bool) usize {
    return if (main) getMainThreadStackSize() else getCurrentThreadStackSize();
}

pub fn saveStackInfo(main: bool) void {
    g_stack_info_init = true;
    g_stack_size = getStackSize(main);
    g_stack_base = @intFromPtr(getStackPointer());
    g_stack_threshold = g_stack_base + stack_buffer_space - g_stack_size;
    if (g_stack_threshold > g_stack_base + stack_buffer_space) {
        // negative overflow
        g_stack_threshold = 0;
    }
}

pub fn getUsedStackSize() usize {
    const current = @intFromPtr(getStackPointer());
    if (current > g_stack_base) return 0;
    return g_stack_base - current;
}

pub fn getAvailableStackSize() usize {
    const used = getUsedStackSize();
    if (used > g_stack_size) return 0;
    return g_stack_size - used;
}

fn throwStackSpaceException(component_name: [*:0]const u8) noreturn {
    exception.throwStackSpaceException(component_name);
}

pub fn checkStack(component_name: [*:0]const u8) void {
    if (!g_stack_info_init) {
        saveStackInfo(false);
    }
    const current = @intFromPtr(getStackPointer());
    if (current < g_stack_threshold) {
        throwStackSpaceException(component_name);
    }
}

pub fn resetStackInfo() void {
    g_stack_info_init = false;
    g_stack_size = 0;
    g_stack_base = 0;
    g_stack_threshold = 0;
}

export fn lean_save_stack_info(main: bool) callconv(.c) void {
    saveStackInfo(main);
}

export fn lean_check_stack(component_name: [*:0]const u8) callconv(.c) void {
    checkStack(component_name);
}

test "saveStackInfo records a positive stack size and base" {
    if (!POSIX) return error.SkipZigTest;
    resetStackInfo();
    saveStackInfo(true);
    try testing.expect(g_stack_info_init);
    try testing.expect(g_stack_size > 0);
    try testing.expect(g_stack_base > 0);
}

test "getUsedStackSize and getAvailableStackSize are consistent" {
    if (!POSIX) return error.SkipZigTest;
    resetStackInfo();
    saveStackInfo(true);
    const used = getUsedStackSize();
    const available = getAvailableStackSize();
    try testing.expect(used <= g_stack_size);
    try testing.expect(available <= g_stack_size);
    try testing.expect(used + available <= g_stack_size);
    try testing.expect(available > 0);
}

test "checkStack does not panic with plenty of stack remaining" {
    if (!POSIX) return error.SkipZigTest;
    resetStackInfo();
    checkStack("test");
    // If we get here, no panic occurred.
    try testing.expect(g_stack_info_init);
}
