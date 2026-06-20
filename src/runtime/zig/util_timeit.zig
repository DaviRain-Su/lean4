// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/timeit.cpp`.
//!
//! Formats a profiling duration as milliseconds or seconds.

const std = @import("std");

pub const DisplayProfilingTime = struct {
    time_secs: f64,

    pub fn init(time_secs: f64) DisplayProfilingTime {
        return .{ .time_secs = time_secs };
    }

    pub fn write(self: DisplayProfilingTime, writer: anytype) !void {
        if (self.time_secs < 1.0) {
            const ms = self.time_secs * 1000.0;
            try writer.print("{d:.3}ms", .{ms});
        } else {
            try writer.print("{d:.3}s", .{self.time_secs});
        }
    }
};

test "DisplayProfilingTime formats ms and s" {
    var buf: [64]u8 = undefined;
    var w = std.Io.Writer.fixed(&buf);
    try DisplayProfilingTime.init(0.5).write(&w);
    try std.testing.expectEqualStrings("500.000ms", w.buffered());

    var buf2: [64]u8 = undefined;
    var w2 = std.Io.Writer.fixed(&buf2);
    try DisplayProfilingTime.init(2.5).write(&w2);
    try std.testing.expectEqualStrings("2.500s", w2.buffered());
}
