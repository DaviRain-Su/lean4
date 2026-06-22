// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/lbool.cpp`.
//!
//! Three-valued boolean with a string representation.

const std = @import("std");

pub const LBool = enum(u8) {
    l_false = 0,
    l_true = 1,
    l_undef = 2,

    pub fn toString(self: LBool) []const u8 {
        return switch (self) {
            .l_false => "l_false",
            .l_true => "l_true",
            .l_undef => "l_undef",
        };
    }

    pub fn write(self: LBool, writer: anytype) !void {
        try writer.writeAll(self.toString());
    }
};

test "LBool string values" {
    try std.testing.expectEqualStrings("l_false", LBool.l_false.toString());
    try std.testing.expectEqualStrings("l_true", LBool.l_true.toString());
    try std.testing.expectEqualStrings("l_undef", LBool.l_undef.toString());
}
