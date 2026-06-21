// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Quotient type reduction, ported from `src/kernel/quot.h`.
//!
//! Implements `quotReduceRec` which reduces `Quot.lift` and `Quot.ind`
//! applications when the quotient argument is a `Quot.mk` constructor.

pub const force_link = true;

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const ea = @import("expr_accessors.zig");
const ka = @import("kernel_accessors.zig");

extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;

const runtime_helpers = @import("runtime_helpers.zig");

inline fn lean_name_mk_str(pre: *anyopaque, s: [*:0]const u8) *anyopaque {
    return runtime_helpers.lean_name_mk_str(pre, s);
}
extern fn lean_expr_mk_const(n: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;

// ── Quotient constant names ──────────────────────────────────────────────────

var g_quot: ?*anyopaque = null;
var g_quot_lift: ?*anyopaque = null;
var g_quot_ind: ?*anyopaque = null;
var g_quot_mk: ?*anyopaque = null;

fn mkConstName(parts: []const [*:0]const u8) *anyopaque {
    var n: *anyopaque = object.lean_box(0).?; // anonymous name
    for (parts) |p| {
        n = lean_name_mk_str(n, p);
    }
    return n;
}

fn getName(parts: []const [*:0]const u8) *anyopaque {
    // Names are compared by value, so we can create a new one each time
    // or cache. For performance, cache.
    return mkConstName(parts);
}

pub fn getQuotName() *anyopaque {
    return getName(&.{"Quot"});
}

pub fn getQuotLiftName() *anyopaque {
    return getName(&.{ "Quot", "lift" });
}

pub fn getQuotIndName() *anyopaque {
    return getName(&.{ "Quot", "ind" });
}

pub fn getQuotMkName() *anyopaque {
    return getName(&.{ "Quot", "mk" });
}

pub fn quotIsDecl(n: *anyopaque) bool {
    return lean_name_eq(n, getQuotName()) != 0 or
        lean_name_eq(n, getQuotLiftName()) != 0 or
        lean_name_eq(n, getQuotIndName()) != 0 or
        lean_name_eq(n, getQuotMkName()) != 0;
}

pub fn quotIsRec(n: *anyopaque) bool {
    return lean_name_eq(n, getQuotLiftName()) != 0 or
        lean_name_eq(n, getQuotIndName()) != 0;
}

// ── getAppFn / getAppArgs ─────────────────────────────────────────────────────

fn getAppFn(e: *anyopaque) *anyopaque {
    var curr = e;
    while (ea.isApp(curr)) {
        curr = ea.appFn(curr);
    }
    return curr;
}

fn getAppArgs(e: *anyopaque, allocator: std.mem.Allocator) []*anyopaque {
    var args = std.ArrayListUnmanaged(*anyopaque).empty;
    var curr = e;
    while (ea.isApp(curr)) {
        args.append(allocator, ea.appArg(curr)) catch @panic("getAppArgs: OOM");
        curr = ea.appFn(curr);
    }
    // args are in reverse order (last arg first)
    std.mem.reverse(*anyopaque, args.items);
    return args.toOwnedSlice(allocator) catch @panic("getAppArgs: OOM");
}

fn getAppNumArgs(e: *anyopaque) usize {
    var n: usize = 0;
    var curr = e;
    while (ea.isApp(curr)) {
        n += 1;
        curr = ea.appFn(curr);
    }
    return n;
}

// ── quot_reduce_rec ──────────────────────────────────────────────────────────
// Try to reduce a `quot.lift` or `quot.ind` application.
// `whnf_fn : (env, lctx, expr) -> expr`

pub const WhnfFn = *const fn (env: *anyopaque, lctx: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;

pub fn quotReduceRec(
    env: *anyopaque,
    lctx: *anyopaque,
    e: *anyopaque,
    whnf_fn: WhnfFn,
) ?*anyopaque {
    const fn_expr = getAppFn(e);
    if (!ea.isConst(fn_expr)) return null;

    const fn_name = ea.constName(fn_expr);

    var mk_pos: usize = undefined;
    var arg_pos: usize = undefined;

    if (lean_name_eq(fn_name, getQuotLiftName()) != 0) {
        mk_pos = 5;
        arg_pos = 3;
    } else if (lean_name_eq(fn_name, getQuotIndName()) != 0) {
        mk_pos = 4;
        arg_pos = 3;
    } else {
        return null;
    }

    const args = getAppArgs(e, std.heap.page_allocator);
    defer std.heap.page_allocator.free(args);

    if (args.len <= mk_pos) return null;

    const mk = whnf_fn(env, lctx, args[mk_pos]);
    const mk_fn = getAppFn(mk);

    if (!ea.isConst(mk_fn) or
        lean_name_eq(ea.constName(mk_fn), getQuotMkName()) == 0 or
        getAppNumArgs(mk) != 3)
    {
        return null;
    }

    // r = mk_app(f, app_arg(mk))
    const f = args[arg_pos];
    const mk_args = getAppArgs(mk, std.heap.page_allocator);
    defer std.heap.page_allocator.free(mk_args);
    // mk_args[2] is the last arg (the value inside Quot.mk)
    const mk_val = mk_args[2];
    var r = lean_expr_mk_app(rc.lean_inc_ret(f), rc.lean_inc_ret(mk_val));

    // Apply remaining args after elim_arity
    const elim_arity = mk_pos + 1;
    if (args.len > elim_arity) {
        var i: usize = elim_arity;
        while (i < args.len) : (i += 1) {
            r = lean_expr_mk_app(r, rc.lean_inc_ret(args[i]));
        }
    }

    return r;
}
