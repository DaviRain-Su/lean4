// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ allocation profiler subsystem.
//!
//! Tracks per-category allocation counts (constructor, closure, string, array,
//! thunk, task, external). `lean_io_allocprof` snapshots the counters, runs a
//! thunk, and reports the delta to stderr.

const std = @import("std");
const testing = std.testing;
const lean = @import("lean_object.zig");

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

    pub fn report(self: AllocationProfile) void {
        const ctor = g_num_ctor - self.num_ctor;
        const closure = g_num_closure - self.num_closure;
        const string = g_num_string - self.num_string;
        const array = g_num_array - self.num_array;
        const thunk = g_num_thunk - self.num_thunk;
        const task = g_num_task - self.num_task;
        const ext = g_num_ext - self.num_ext;
        printDelta(self.msg, ctor, closure, string, array, thunk, task, ext);
    }
};

fn printDelta(msg: [*:0]const u8, ctor: u64, closure: u64, string: u64, array: u64, thunk: u64, task: u64, ext: u64) void {
    std.debug.print("{s}\n", .{std.mem.span(msg)});
    if (ctor > 0) std.debug.print("num. constructor: {d}\n", .{ctor});
    if (closure > 0) std.debug.print("num. closure:     {d}\n", .{closure});
    if (string > 0) std.debug.print("num. string:      {d}\n", .{string});
    if (array > 0) std.debug.print("num. array:       {d}\n", .{array});
    if (thunk > 0) std.debug.print("num. thunk:       {d}\n", .{thunk});
    if (task > 0) std.debug.print("num. task:        {d}\n", .{task});
    if (ext > 0) std.debug.print("num. external:    {d}\n", .{ext});
    if (ctor == 0 and closure == 0 and string == 0 and array == 0 and thunk == 0 and task == 0 and ext == 0) {
        std.debug.print("***no runtime object allocation has occurred**\n", .{});
    }
    std.debug.print("-------------\n", .{});
}

/// Increment the allocation counter for the given Lean object tag.
pub fn recordAlloc(tag: u8) void {
    switch (tag) {
        lean.LeanClosure => g_num_closure += 1,
        lean.LeanArray, lean.LeanStructArray, lean.LeanScalarArray => g_num_array += 1,
        lean.LeanString => g_num_string += 1,
        lean.LeanThunk => g_num_thunk += 1,
        lean.LeanTask => g_num_task += 1,
        lean.LeanExternal => g_num_ext += 1,
        else => {
            if (tag <= lean.LeanMaxCtorTag) g_num_ctor += 1;
        },
    }
}

pub fn recordFree(tag: u8) void {
    // Freed objects are not tracked per-category; the profiler reports
    // gross allocations only, matching the C++ behavior.
    _ = tag;
}

/// Current snapshot of all counters for testing.
pub fn snapshot() struct { ctor: u64, closure: u64, string: u64, array: u64, thunk: u64, task: u64, ext: u64 } {
    return .{
        .ctor = g_num_ctor,
        .closure = g_num_closure,
        .string = g_num_string,
        .array = g_num_array,
        .thunk = g_num_thunk,
        .task = g_num_task,
        .ext = g_num_ext,
    };
}

test "recordAlloc increments the correct counter by tag" {
    const before = snapshot();
    recordAlloc(0); // constructor tag
    recordAlloc(lean.LeanClosure);
    recordAlloc(lean.LeanString);
    recordAlloc(lean.LeanArray);
    recordAlloc(lean.LeanExternal);
    const after = snapshot();
    try testing.expectEqual(before.ctor + 1, after.ctor);
    try testing.expectEqual(before.closure + 1, after.closure);
    try testing.expectEqual(before.string + 1, after.string);
    try testing.expectEqual(before.array + 1, after.array);
    try testing.expectEqual(before.ext + 1, after.ext);
}

test "AllocationProfile snapshots and reports delta" {
    const profile = AllocationProfile.init("test region");
    recordAlloc(0);
    recordAlloc(lean.LeanClosure);
    // report() writes to stderr; we verify no panic.
    profile.report();
}
