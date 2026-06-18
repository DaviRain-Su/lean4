// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ allocation profiler subsystem.
//!
//! First pass: the C++ version is a RAII helper that only prints meaningful
//! data when Lean is compiled with LEAN_RUNTIME_STATS. In the Zig runtime the
//! counters are kept as a stub for completeness and always report that runtime
//! stats are disabled. The actual allocation profiling API is exposed by
//! lean_io_allocprof in io_posix.zig.

const std = @import("std");
const testing = std.testing;

const runtime_stats = false;

var g_num_ctor: u64 = 0;
var g_num_closure: u64 = 0;
var g_num_string: u64 = 0;
var g_num_array: u64 = 0;
var g_num_thunk: u64 = 0;
var g_num_task: u64 = 0;
var g_num_ext: u64 = 0;

pub const AllocationProfile = struct {
    msg: [*:0]const u8,
    num_ctor: u64,
    num_closure: u64,
    num_string: u64,
    num_array: u64,
    num_thunk: u64,
    num_task: u64,
    num_ext: u64,

    pub fn init(msg: [*:0]const u8) AllocationProfile {
        return .{
            .msg = msg,
            .num_ctor = g_num_ctor,
            .num_closure = g_num_closure,
            .num_string = g_num_string,
            .num_array = g_num_array,
            .num_thunk = g_num_thunk,
            .num_task = g_num_task,
            .num_ext = g_num_ext,
        };
    }

    pub fn deinit(self: AllocationProfile) void {
        printReport(self.msg, self);
    }
};

fn printReport(msg: [*:0]const u8, profile: AllocationProfile) void {
    if (!runtime_stats) {
        std.debug.print("{s}\nAllocation profiling data is not available, compile lean using `-D RUNTIME_STATS=ON`\n", .{msg});
        return;
    }
    const num_ctor = g_num_ctor - profile.num_ctor;
    const num_closure = g_num_closure - profile.num_closure;
    const num_string = g_num_string - profile.num_string;
    const num_array = g_num_array - profile.num_array;
    const num_thunk = g_num_thunk - profile.num_thunk;
    const num_task = g_num_task - profile.num_task;
    const num_ext = g_num_ext - profile.num_ext;
    std.debug.print("{s}\n", .{msg});
    if (num_ctor > 0) std.debug.print("num. constructor: {d}\n", .{num_ctor});
    if (num_closure > 0) std.debug.print("num. closure:     {d}\n", .{num_closure});
    if (num_string > 0) std.debug.print("num. string:      {d}\n", .{num_string});
    if (num_array > 0) std.debug.print("num. array:       {d}\n", .{num_array});
    if (num_thunk > 0) std.debug.print("num. thunk:       {d}\n", .{num_thunk});
    if (num_task > 0) std.debug.print("num. task:        {d}\n", .{num_task});
    if (num_ext > 0) std.debug.print("num. external:    {d}\n", .{num_ext});
    if (num_ctor == 0 and num_closure == 0 and num_string == 0 and num_array == 0 and
        num_thunk == 0 and num_task == 0 and num_ext == 0)
    {
        std.debug.print("***no runtime object allocation has occurred**\n", .{});
    }
    std.debug.print("-------------\n", .{});
}

fn counterFromTag(tag: u8) ?*u64 {
    return switch (tag) {
        0 => &g_num_ctor,
        1 => &g_num_closure,
        2 => &g_num_string,
        3 => &g_num_array,
        4 => &g_num_thunk,
        5 => &g_num_task,
        6 => &g_num_ext,
        else => null,
    };
}

pub fn recordAlloc(tag: u8) void {
    if (!runtime_stats) return;
    const counter = counterFromTag(tag) orelse return;
    counter.* = counter.* + 1;
}

pub fn recordFree(tag: u8) void {
    if (!runtime_stats) return;
    const counter = counterFromTag(tag) orelse return;
    counter.* = if (counter.* > 0) counter.* - 1 else 0;
}

test "AllocationProfile can be created and finalized" {
    const profile = AllocationProfile.init("test");
    profile.deinit();
}

test "recordAlloc and recordFree are no-ops when stats are disabled" {
    recordAlloc(0);
    recordFree(0);
}
