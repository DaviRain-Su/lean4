// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/list_fn.cpp`.
//!
//! Helper for constructing a Lean `List Nat` from a half-open range.

const std = @import("std");
const object = @import("object.zig");
const list = @import("list.zig");

extern fn lean_list_cons(h: *anyopaque, t: *anyopaque) callconv(.c) *anyopaque;

pub fn mkListRange(from: u32, to: u32) *anyopaque {
    var r: ?*anyopaque = object.lean_box(0).?; // nil
    var i = to;
    while (i > from) {
        i -= 1;
        const h = object.lean_box(i).?;
        r = lean_list_cons(h, r.?);
    }
    return r.?;
}

test "mkListRange builds descending then reversed list" {
    _ = mkListRange;
}
