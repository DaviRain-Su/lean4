// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/escaped.cpp`.
//!
//! Escapes a C string for output: quotes are backslash-escaped and newlines
//! are optionally trimmed or indented.

const std = @import("std");

pub const Escaped = struct {
    str: ?[*:0]const u8,
    indent: u32,
    trim_nl: bool,

    pub fn init(str: ?[*:0]const u8, indent: u32, trim_nl: bool) Escaped {
        return .{ .str = str, .indent = indent, .trim_nl = trim_nl };
    }

    pub fn end(self: Escaped) ?[*]const u8 {
        const s = self.str orelse return null;
        var it: [*]const u8 = @ptrCast(s);
        var e: [*]const u8 = it;
        while (it[0] != 0) {
            if (!self.trim_nl or it[0] != '\n') {
                it += 1;
                e = it;
            } else {
                it += 1;
            }
        }
        return e;
    }

    pub fn write(self: Escaped, writer: anytype) !void {
        const s = self.str orelse return;
        const e = self.end() orelse return;
        var it: [*]const u8 = @ptrCast(s);
        while (@intFromPtr(it) < @intFromPtr(e)) {
            const c = it[0];
            if (c == '"') try writer.writeAll("\\");
            try writer.writeByte(c);
            if (c == '\n') {
                var i: u32 = 0;
                while (i < self.indent) : (i += 1) try writer.writeByte(' ');
            }
            it += 1;
        }
    }

    pub fn toFixedBuffer(self: Escaped, buf: []u8) ![]const u8 {
        var fixed = std.Io.Writer.fixed(buf);
        try self.write(&fixed);
        return fixed.buffered();
    }
};

test "Escaped escapes quotes and indents newlines" {
    var buf: [256]u8 = undefined;
    const s = "line1\nline2\"quote";
    const esc = Escaped.init(s, 2, false);
    const out = try esc.toFixedBuffer(&buf);
    try std.testing.expectEqualStrings("line1\n  line2\\\"quote", out);
}

test "Escaped trims after first newline when requested" {
    var buf: [256]u8 = undefined;
    const s = "line1\nline2";
    const esc = Escaped.init(s, 0, true);
    const out = try esc.toFixedBuffer(&buf);
    try std.testing.expectEqualStrings("line1", out);
}
