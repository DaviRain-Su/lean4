// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/bit_tricks.cpp`.
//!
//! Integer log2 and a poison overload for `int` to avoid accidentally calling
//! the libc `log2` from C++.

const std = @import("std");

pub fn log2u(v: u32) u32 {
    var r: u32 = 0;
    var x = v;
    if ((x & 0xFFFF0000) != 0) {
        x >>= 16;
        r |= 16;
    }
    if ((x & 0xFF00) != 0) {
        x >>= 8;
        r |= 8;
    }
    if ((x & 0xF0) != 0) {
        x >>= 4;
        r |= 4;
    }
    if ((x & 0xC) != 0) {
        x >>= 2;
        r |= 2;
    }
    if ((x & 0x2) != 0) {
        x >>= 1;
        r |= 1;
    }
    return r;
}

pub fn log2i(_: i32) noreturn {
    @panic("log2(int) is not implemented; use log2u to avoid libc log2");
}

test "log2u computes floor log2" {
    try std.testing.expectEqual(@as(u32, 0), log2u(1));
    try std.testing.expectEqual(@as(u32, 1), log2u(2));
    try std.testing.expectEqual(@as(u32, 1), log2u(3));
    try std.testing.expectEqual(@as(u32, 2), log2u(4));
    try std.testing.expectEqual(@as(u32, 31), log2u(0xFFFFFFFF));
}
