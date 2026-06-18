// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ memory subsystem.
//!
//! First pass: POSIX (macOS/Linux). Windows and jemalloc are stubbed/fallback.

const std = @import("std");
const builtin = @import("builtin");
const testing = std.testing;

const object = @import("object.zig");

const c = @cImport({
    @cInclude("stdio.h");
    @cInclude("sys/resource.h");
    @cInclude("unistd.h");
    if (builtin.os.tag == .macos) {
        @cInclude("mach/mach.h");
    }
});

const POSIX = builtin.os.tag != .windows;

const check_mem_threshold: usize = 200;

var g_max_memory: usize = 0;
threadlocal var g_counter: usize = 0;

fn getPeakRss() usize {
    if (!POSIX) return 0;
    var rusage: c.struct_rusage = undefined;
    if (c.getrusage(c.RUSAGE_SELF, &rusage) != 0) return 0;
    if (builtin.os.tag == .macos) {
        return @intCast(rusage.ru_maxrss);
    } else {
        return @as(usize, @intCast(rusage.ru_maxrss)) * 1024;
    }
}

fn getCurrentRss() usize {
    if (!POSIX) return 0;
    if (builtin.os.tag == .macos) {
        var info: c.mach_task_basic_info = undefined;
        var infoCount: c.mach_msg_type_number_t = c.MACH_TASK_BASIC_INFO_COUNT;
        if (c.task_info(c.mach_task_self(), c.MACH_TASK_BASIC_INFO, @ptrCast(&info), &infoCount) != c.KERN_SUCCESS) {
            return 0;
        }
        return @intCast(info.resident_size);
    } else {
        const fp = std.c.fopen("/proc/self/statm", "r") orelse return 0;
        defer _ = std.c.fclose(fp);
        var rss: c_long = 0;
        if (c.fscanf(fp, "%*s%ld", &rss) != 1) return 0;
        return @as(usize, @intCast(rss)) * @as(usize, @intCast(c.sysconf(c._SC_PAGESIZE)));
    }
}

pub fn setMaxMemory(max: usize) void {
    g_max_memory = max;
}

pub fn setMaxMemoryMegabyte(max: c_uint) void {
    const m: usize = max;
    setMaxMemory(m * 1024 * 1024);
}

fn throwMemoryException(component_name: [*:0]const u8) noreturn {
    std.debug.panic("excessive memory consumption detected at '{s}' (potential solution: increase memory consumption threshold using `set_option maxMemory=...`).", .{component_name});
}

pub fn checkMemory(component_name: [*:0]const u8) void {
    if (g_max_memory == 0) return;
    g_counter += 1;
    if (g_counter >= check_mem_threshold) {
        g_counter = 0;
        var r = getPeakRss();
        if (r > 0 and r < g_max_memory) return;
        r = getCurrentRss();
        if (r == 0 or r < g_max_memory) return;
        throwMemoryException(component_name);
    }
}

pub fn getAllocatedMemory() usize {
    return getCurrentRss();
}

export fn lean_internal_get_default_max_memory() callconv(.c) ?*anyopaque {
    return object.lean_box(0);
}

export fn lean_internal_set_max_memory(max: usize) callconv(.c) ?*anyopaque {
    setMaxMemory(max);
    return object.lean_box(0);
}

export fn lean_set_max_memory(max: usize) callconv(.c) void {
    setMaxMemory(max);
}

export fn lean_set_max_memory_megabyte(max: c_uint) callconv(.c) void {
    setMaxMemoryMegabyte(max);
}

export fn lean_check_memory(component_name: [*:0]const u8) callconv(.c) void {
    checkMemory(component_name);
}

export fn lean_get_allocated_memory() callconv(.c) usize {
    return getAllocatedMemory();
}

test "setMaxMemory and checkMemory do not panic with zero limit" {
    if (!POSIX) return error.SkipZigTest;
    setMaxMemory(0);
    checkMemory("test");
}

test "getAllocatedMemory returns a positive value" {
    if (!POSIX) return error.SkipZigTest;
    try testing.expect(getAllocatedMemory() > 0);
}

test "getPeakRss returns a positive value" {
    if (!POSIX) return error.SkipZigTest;
    try testing.expect(getPeakRss() > 0);
}
