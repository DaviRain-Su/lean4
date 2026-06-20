// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Binary application helpers (`bin_app.cpp`).

pub const force_link = true;

const ea = @import("expr_accessors.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");

extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;

/// Return true iff `t` is of the form `((f s1) s2)`.
pub fn isBinApp(t: *anyopaque, f: *anyopaque) bool {
    return ea.isApp(t) and ea.isApp(ea.appFn(t)) and ea.appFn(ea.appFn(t)) == f;
}

/// Return true iff `t` is of the form `((f lhs) rhs)`.
/// On success, writes owned references to `lhs_out` and `rhs_out`.
pub fn isBinAppOut(t: *anyopaque, f: *anyopaque, lhs_out: *?*anyopaque, rhs_out: *?*anyopaque) bool {
    if (isBinApp(t, f)) {
        const lhs = ea.appArg(ea.appFn(t));
        const rhs = ea.appArg(t);
        rc.lean_inc(lhs);
        rc.lean_inc(rhs);
        lhs_out.* = lhs;
        rhs_out.* = rhs;
        return true;
    }
    return false;
}

/// Return `unit` if `args` is empty, otherwise right-fold `args` with `op`.
pub fn mkBinRop(op: *anyopaque, unit: *anyopaque, args: []*anyopaque) *anyopaque {
    if (args.len == 0) {
        rc.lean_inc(unit);
        return unit;
    }
    var r = args[args.len - 1];
    rc.lean_inc(r);
    var i: usize = args.len - 1;
    while (i > 0) {
        i -= 1;
        const new_r = lean_expr_mk_app(lean_expr_mk_app(op, args[i]), r);
        rc.lean_dec(r);
        r = new_r;
    }
    return r;
}

/// Return `unit` if `args` is empty, otherwise left-fold `args` with `op`.
pub fn mkBinLop(op: *anyopaque, unit: *anyopaque, args: []*anyopaque) *anyopaque {
    if (args.len == 0) {
        rc.lean_inc(unit);
        return unit;
    }
    var r = args[0];
    rc.lean_inc(r);
    for (args[1..]) |a| {
        const new_r = lean_expr_mk_app(lean_expr_mk_app(op, r), a);
        rc.lean_dec(r);
        r = new_r;
    }
    return r;
}

const std = @import("std");

test "isBinApp recognizes ((f a) b)" {
    const f = object.lean_box(100).?;
    const a = object.lean_box(101).?;
    const b = object.lean_box(102).?;
    const app = lean_expr_mk_app(lean_expr_mk_app(f, a), b);
    defer rc.lean_dec(app);
    try std.testing.expect(isBinApp(app, f));
}

test "isBinAppOut returns lhs and rhs" {
    const f = object.lean_box(100).?;
    const a = object.lean_box(101).?;
    const b = object.lean_box(102).?;
    const app = lean_expr_mk_app(lean_expr_mk_app(f, a), b);
    defer rc.lean_dec(app);
    var lhs: ?*anyopaque = null;
    var rhs: ?*anyopaque = null;
    try std.testing.expect(isBinAppOut(app, f, &lhs, &rhs));
    defer {
        if (lhs) |l| rc.lean_dec(l);
        if (rhs) |r| rc.lean_dec(r);
    }
    try std.testing.expectEqual(a, lhs.?);
    try std.testing.expectEqual(b, rhs.?);
}
