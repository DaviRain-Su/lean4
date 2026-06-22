// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/ascii.cpp`.
//!
//! Tracks a 256-entry table of "safe ASCII" characters used when printing
//! names and other compiler output.

const std = @import("std");

var g_safe_ascii: [256]bool = undefined;
var g_initialized: bool = false;

fn set(i: u8, v: bool) void {
    g_safe_ascii[i] = v;
}

pub fn initializeAscii() void {
    if (g_initialized) return;
    for (0..256) |i| {
        set(@intCast(i), false);
    }
    var c: u8 = '0';
    while (c <= '9') : (c +%= 1) set(c, true);
    c = 'a';
    while (c <= 'z') : (c +%= 1) set(c, true);
    c = 'A';
    while (c <= 'Z') : (c +%= 1) set(c, true);
    const safe_chars = [_]u8{ '_', ' ', '\t', '\r', '\n', '(', ')', '{', '}', ':', '.', ',', '"', '\'', '`', '!', '#', '=', '<', '>', '@', '^', '|', '&', '~', '+', '-', '*', '/', '\\', '$', '%', '?', ';', '[', ']' };
    for (safe_chars) |sc| set(sc, true);
    g_initialized = true;
}

pub fn finalizeAscii() void {
    // Nothing to do; the table is reset on the next initialize call.
}

pub fn isSafeAsciiChar(c: u8) bool {
    if (!g_initialized) initializeAscii();
    return g_safe_ascii[c];
}

pub fn isSafeAsciiStr(str: ?[*:0]const u8) bool {
    if (!g_initialized) initializeAscii();
    if (str == null) return true;
    var p = str.?;
    while (p[0] != 0) : (p += 1) {
        if (!g_safe_ascii[p[0]]) return false;
    }
    return true;
}

pub fn isSafeAsciiSlice(str: []const u8) bool {
    if (!g_initialized) initializeAscii();
    for (str) |c| {
        if (!g_safe_ascii[c]) return false;
    }
    return true;
}

test "safe ascii marks expected characters" {
    initializeAscii();
    try std.testing.expect(isSafeAsciiChar('a'));
    try std.testing.expect(isSafeAsciiChar('Z'));
    try std.testing.expect(isSafeAsciiChar('0'));
    try std.testing.expect(isSafeAsciiChar('_'));
    try std.testing.expect(!isSafeAsciiChar('\x01'));
    try std.testing.expect(!isSafeAsciiChar(0x7f));
}
