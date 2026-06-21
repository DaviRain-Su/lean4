// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Cumulative profiling timers (`lean_profileit`, `lean_display_cumulative_profiling_times`).
//!
//! Ports `src/library/time_task.cpp` for the Zig runtime.

pub const force_link = true;

const std = @import("std");
const builtin = @import("builtin");
const apply = @import("apply.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const string = @import("string.zig");

const gpa = std.heap.c_allocator;
const debug_io = std.Options.debug_io;

extern fn lean_get_profiler(opts: *anyopaque) callconv(.c) u8;
extern fn lean_get_profiler_threshold(opts: *anyopaque) callconv(.c) f64;
extern fn lean_io_eprint(s: *anyopaque) callconv(.c) *anyopaque;

var g_cum_times: std.StringHashMap(f64) = undefined;
var g_cum_mutex: std.Io.Mutex = .init;
var g_cum_initialized: bool = false;

const TimeTask = struct {
    category: []const u8,
    category_owned: bool,
    start_ns: i128,
    excluded_ns: i128,
    threshold_secs: f64,
    parent: ?*TimeTask,
};

threadlocal var g_current_time_task: ?*TimeTask = null;

fn ensureCumTimes() void {
    if (g_cum_initialized) return;
    g_cum_times = std.StringHashMap(f64).init(gpa);
    g_cum_initialized = true;
}

fn stringBytes(s: *anyopaque) []const u8 {
    const str: *lean.lean_string_object = @ptrCast(@alignCast(s));
    const raw: [*]const u8 = @ptrCast(&str.m_data);
    return raw[0 .. str.m_size - 1];
}

fn formatProfilingDuration(secs: f64, buf: []u8) []const u8 {
    if (secs < 1.0) {
        const ms = secs * 1000.0;
        return std.fmt.bufPrint(buf, "{d:.3}ms", .{ms}) catch "???";
    }
    return std.fmt.bufPrint(buf, "{d:.3}s", .{secs}) catch "???";
}

fn nameIsAnonymous(decl: *anyopaque) bool {
    return object.lean_is_scalar(decl) and object.lean_unbox(decl) == 0;
}

fn ioEprint(msg: []const u8) void {
    const s = string.mkAsciiStringBytes(msg);
    _ = lean_io_eprint(s);
}

fn appendFmt(list: *std.ArrayListUnmanaged(u8), comptime fmt: []const u8, args: anytype) void {
    const part = std.fmt.allocPrint(gpa, fmt, args) catch return;
    defer gpa.free(part);
    list.appendSlice(gpa, part) catch {};
}

fn displayCumulativeProfilingTimes() void {
    ensureCumTimes();
    g_cum_mutex.lockUncancelable(debug_io);
    defer g_cum_mutex.unlock(debug_io);
    if (g_cum_times.count() == 0) return;

    var msg: std.ArrayListUnmanaged(u8) = .empty;
    defer msg.deinit(gpa);
    msg.appendSlice(gpa, "cumulative profiling times:\n") catch return;

    var it = g_cum_times.iterator();
    while (it.next()) |entry| {
        var dur_buf: [32]u8 = undefined;
        const dur = formatProfilingDuration(entry.value_ptr.*, &dur_buf);
        appendFmt(&msg, "\t{s} {s}\n", .{ entry.key_ptr.*, dur });
    }
    ioEprint(msg.items);
}

fn reportProfilingTime(category: []const u8, time_secs: f64) void {
    ensureCumTimes();
    g_cum_mutex.lockUncancelable(debug_io);
    defer g_cum_mutex.unlock(debug_io);
    const gop = g_cum_times.getOrPut(category) catch return;
    if (!gop.found_existing) {
        const owned = gpa.dupe(u8, category) catch return;
        gop.key_ptr.* = owned;
        gop.value_ptr.* = 0;
    }
    gop.value_ptr.* += time_secs;
}

fn elapsedExclusive(task: *const TimeTask) f64 {
    const now = std.Io.Clock.awake.now(debug_io).nanoseconds;
    const inclusive: f64 = @floatFromInt(now - task.start_ns);
    const excluded: f64 = @floatFromInt(task.excluded_ns);
    return (inclusive - excluded) / @as(f64, @floatFromInt(std.time.ns_per_s));
}

fn elapsedInclusive(task: *const TimeTask) f64 {
    const now = std.Io.Clock.awake.now(debug_io).nanoseconds;
    const inclusive: f64 = @floatFromInt(now - task.start_ns);
    return inclusive / @as(f64, @floatFromInt(std.time.ns_per_s));
}

fn finishTimeTask(task: *TimeTask) void {
    const elapsed = elapsedExclusive(task);
    reportProfilingTime(task.category, elapsed);
    if (task.parent) |parent| {
        const child_inclusive_ns: i128 = @intFromFloat(elapsedInclusive(task) * @as(f64, @floatFromInt(std.time.ns_per_s)));
        parent.excluded_ns += child_inclusive_ns;
    }
    if (task.category_owned) gpa.free(@constCast(task.category));
    gpa.destroy(task);
}

fn emitProfileLine(category: []const u8, decl: *anyopaque, elapsed: f64) void {
    var dur_buf: [32]u8 = undefined;
    const dur = formatProfilingDuration(elapsed, &dur_buf);
    const line = if (nameIsAnonymous(decl))
        std.fmt.allocPrint(gpa, "{s} took {s}\n", .{ category, dur }) catch return
    else
        std.fmt.allocPrint(gpa, "{s} of _ took {s}\n", .{ category, dur }) catch return;
    defer gpa.free(line);
    ioEprint(line);
}

pub export fn lean_display_cumulative_profiling_times() callconv(.c) *anyopaque {
    displayCumulativeProfilingTimes();
    return object.lean_box(0).?;
}

pub export fn lean_profileit(category: *anyopaque, opts: *anyopaque, fn_obj: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque {
    const unit = object.lean_box(0).?;
    if (lean_get_profiler(opts) == 0) {
        return apply.lean_apply_1(fn_obj, unit) orelse @panic("lean_profileit: apply returned null");
    }

    const cat_bytes = stringBytes(category);
    const category_owned = gpa.dupe(u8, cat_bytes) catch @panic("lean_profileit: oom");
    const threshold_secs = lean_get_profiler_threshold(opts);

    const task = gpa.create(TimeTask) catch @panic("lean_profileit: oom");
    task.* = .{
        .category = category_owned,
        .category_owned = true,
        .start_ns = std.Io.Clock.awake.now(debug_io).nanoseconds,
        .excluded_ns = 0,
        .threshold_secs = threshold_secs,
        .parent = g_current_time_task,
    };
    g_current_time_task = task;

    const result = apply.lean_apply_1(fn_obj, unit) orelse @panic("lean_profileit: apply returned null");

    const elapsed = elapsedExclusive(task);
    if (elapsed >= task.threshold_secs) {
        emitProfileLine(task.category, decl, elapsed);
    }

    g_current_time_task = task.parent;
    finishTimeTask(task);
    return result;
}

/// libc++ `std::string` / `std::basic_string<char>` layout (Darwin arm64/x86_64).
/// Duplicates the helper in `dynlib_lib.zig` so this module stays self-contained.
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

const SecondDuration = extern struct { rep: f64 };

fn cppHasNoBlockProfilingTask() callconv(.c) bool {
    return g_current_time_task != null and !std.mem.eql(u8, g_current_time_task.?.category, "blocked");
}

fn cppReportProfilingTime(category: *const anyopaque, time: SecondDuration) callconv(.c) void {
    const parts = stdStringBytes(category);
    reportProfilingTime(parts.ptr[0..parts.len], time.rep);
}

fn cppExcludeProfilingTimeFromCurrentTask(time: SecondDuration) callconv(.c) void {
    if (g_current_time_task) |task| {
        const child_inclusive_ns: i128 = @intFromFloat(time.rep * @as(f64, @floatFromInt(std.time.ns_per_s)));
        task.excluded_ns += child_inclusive_ns;
    }
}

// Export under Itanium mangled names used by `time_task.h` / `profiling.h` when
// linked from C++. We provide both libc++ (macOS / clang -stdlib=libc++) and
// libstdc++ (Linux / GCC-style) manglings.
comptime {
    if (builtin.os.tag == .macos) {
        @export(&cppHasNoBlockProfilingTask, .{ .name = "_ZN4lean27has_no_block_profiling_taskEv", .linkage = .strong });
        @export(&cppReportProfilingTime, .{
            .name = "_ZN4lean21report_profiling_timeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS0_6chrono8durationIdNS0_5ratioILl1ELl1EEEEE",
            .linkage = .strong,
        });
        @export(&cppExcludeProfilingTimeFromCurrentTask, .{
            .name = "_ZN4lean40exclude_profiling_time_from_current_taskENSt3__16chrono8durationIdNS0_5ratioILl1ELl1EEEEE",
            .linkage = .strong,
        });
    } else if (builtin.os.tag == .linux) {
        @export(&cppHasNoBlockProfilingTask, .{ .name = "_ZN4lean27has_no_block_profiling_taskEv", .linkage = .strong });
        @export(&cppReportProfilingTime, .{
            .name = "_ZN4lean21report_profiling_timeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENSt6chrono8durationIdSt5ratioILl1ELl1EEEE",
            .linkage = .strong,
        });
        @export(&cppExcludeProfilingTimeFromCurrentTask, .{
            .name = "_ZN4lean40exclude_profiling_time_from_current_taskENSt6chrono8durationIdSt5ratioILl1ELl1EEEE",
            .linkage = .strong,
        });
    }
}
