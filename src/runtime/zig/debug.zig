// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ debug/notification subsystem.
//!
//! First pass: assertion notification and debug tags. Interactive debugger
//! invocation is simplified to a panic in this pass.

const std = @import("std");
const builtin = @import("builtin");
const testing = std.testing;

const lean = @import("lean_object.zig");
const object = @import("object.zig");
const sync = @import("sync.zig");
const exception = @import("exception.zig");
const rc = @import("rc.zig");
const string = @import("string.zig");

const POSIX = builtin.os.tag != .windows;

var g_has_violations: bool = false;
var g_enable_assertions: bool = true;
var g_debug_dialog: bool = false;
var g_enabled_debug_tags: std.BufSet = undefined;
var g_debug_tags_initialized: bool = false;

var g_debug_tags_mutex: sync.Mutex = .{};

fn initDebugTags() void {
    if (g_debug_tags_initialized) return;
    g_debug_tags_mutex.lock();
    defer g_debug_tags_mutex.unlock();
    if (g_debug_tags_initialized) return;
    g_enabled_debug_tags = std.BufSet.init(std.heap.page_allocator);
    g_debug_tags_initialized = true;
}

pub fn initializeDebug() void {
    // lazy initialization
}

pub fn finalizeDebug() void {
    if (g_debug_tags_initialized) {
        g_enabled_debug_tags.deinit();
        g_debug_tags_initialized = false;
    }
}

pub fn hasViolations() bool {
    return g_has_violations;
}

pub fn enableAssertions(f: bool) void {
    g_enable_assertions = f;
}

pub fn assertionsEnabled() bool {
    return g_enable_assertions;
}

pub fn notifyAssertionViolation(file_name: [*:0]const u8, line: c_int, condition: [*:0]const u8) void {
    std.debug.print("LEAN ASSERTION VIOLATION\nFile: {s}\nLine: {d}\n{s}\n", .{ file_name, line, condition });
}

pub fn enableDebug(tag: [*:0]const u8) void {
    initDebugTags();
    g_enabled_debug_tags.insert(std.mem.span(tag)) catch |err| {
        std.debug.panic("failed to enable debug tag: {}", .{err});
    };
}

pub fn disableDebug(tag: [*:0]const u8) void {
    if (!g_debug_tags_initialized) return;
    g_enabled_debug_tags.remove(std.mem.span(tag));
}

pub fn isDebugEnabled(tag: [*:0]const u8) bool {
    if (!g_debug_tags_initialized) return false;
    return g_enabled_debug_tags.contains(std.mem.span(tag));
}

pub fn enableDebugDialog(flag: bool) void {
    g_debug_dialog = flag;
}

pub fn invokeDebugger() noreturn {
    g_has_violations = true;
    if (!g_debug_dialog) {
        exception.throwUnreachableException();
    }
    if (builtin.os.tag == .windows) {
        std.os.windows.kernel32.DebugBreak();
        unreachable;
    }
    // Interactive debugger prompt is not implemented in the first pass.
    std.debug.panic("interactive debugger invocation is not implemented in the Zig first pass", .{});
}

fn leanStringCstr(o: *anyopaque) [*:0]const u8 {
    const str: *lean.lean_string_object = @ptrCast(@alignCast(o));
    return @ptrCast(&str.m_data);
}

export fn lean_internal_enable_debug(tag: ?*anyopaque) callconv(.c) ?*anyopaque {
    enableDebug(leanStringCstr(tag.?));
    return object.lean_box(0);
}

export fn lean_notify_assert(file_name: [*:0]const u8, line: c_int, condition: [*:0]const u8) callconv(.c) void {
    notifyAssertionViolation(file_name, line, condition);
    invokeDebugger();
}

test "enableDebug and isDebugEnabled" {
    if (!POSIX) return error.SkipZigTest;
    finalizeDebug();
    g_debug_tags_initialized = false;
    try testing.expect(!isDebugEnabled("test_tag"));
    enableDebug("test_tag");
    try testing.expect(isDebugEnabled("test_tag"));
    try testing.expect(!isDebugEnabled("other_tag"));
    disableDebug("test_tag");
    try testing.expect(!isDebugEnabled("test_tag"));
}

test "assertionsEnabled defaults to true" {
    if (!POSIX) return error.SkipZigTest;
    try testing.expect(assertionsEnabled());
    enableAssertions(false);
    try testing.expect(!assertionsEnabled());
    enableAssertions(true);
}

test "hasViolations tracks debugger invocation" {
    if (!POSIX) return error.SkipZigTest;
    try testing.expect(!hasViolations());
    g_has_violations = true;
    try testing.expect(hasViolations());
    g_has_violations = false;
}

// Weak stub for lean_demangle_bt_line_cstr.
// The real implementation is @[export] from Lean.Compiler.NameDemangling.
// When the Lean demangler is linked (libleanshared), it overrides this stub.
// In zigrt mode (no Lean linked), this stub returns an empty string.
fn lean_demangle_bt_line_cstr_impl(s: ?*anyopaque) callconv(.c) *anyopaque {
    rc.lean_dec(s);
    return string.lean_mk_string("");
}
comptime {
    @export(&lean_demangle_bt_line_cstr_impl, .{ .name = "lean_demangle_bt_line_cstr", .linkage = .weak });
}
