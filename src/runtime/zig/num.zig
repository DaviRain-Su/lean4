// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Numeral expression utilities (`num.cpp`).

pub const force_link = true;

const std = @import("std");
const ea = @import("expr_accessors.zig");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const constants = @import("constants.zig");
const mpz_zig = @import("mpz_zig");

extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_const(n: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;

fn isConstApp(e: *anyopaque, n: *anyopaque, nargs: usize) bool {
    const f = ea.getAppFn(e);
    return ea.isConst(f) and lean_name_eq(ea.constName(f), n) != 0 and ea.getAppNumArgs(e) == nargs;
}

pub fn isZero(e: *anyopaque) bool {
    return isConstApp(e, constants.getHasZeroZeroName(), 2) or
        (ea.isConst(e) and lean_name_eq(ea.constName(e), constants.getNatZeroName()) != 0);
}

pub fn isOne(e: *anyopaque) bool {
    if (isConstApp(e, constants.getHasOneOneName(), 2)) return true;
    if (!isConstApp(e, constants.getNatSuccName(), 1)) return false;
    return isZero(ea.appArg(e));
}

pub fn isBit0(e: *anyopaque) ?*anyopaque {
    if (!isConstApp(e, constants.getBit0Name(), 3)) return null;
    const r = ea.appArg(e);
    rc.lean_inc(r);
    return r;
}

pub fn isBit1(e: *anyopaque) ?*anyopaque {
    if (!isConstApp(e, constants.getBit1Name(), 4)) return null;
    const r = ea.appArg(e);
    rc.lean_inc(r);
    return r;
}

pub fn isNeg(e: *anyopaque) ?*anyopaque {
    if (!isConstApp(e, constants.getHasNegNegName(), 3)) return null;
    const r = ea.appArg(e);
    rc.lean_inc(r);
    return r;
}

pub fn isOfNat(e: *anyopaque) ?*anyopaque {
    if (!isConstApp(e, constants.getHasOfNatOfNatName(), 3)) return null;
    const r = ea.appArg(e);
    rc.lean_inc(r);
    return r;
}

pub fn isNumeralConstName(n: *anyopaque) bool {
    return lean_name_eq(n, constants.getHasZeroZeroName()) != 0 or
        lean_name_eq(n, constants.getHasOneOneName()) != 0 or
        lean_name_eq(n, constants.getBit0Name()) != 0 or
        lean_name_eq(n, constants.getBit1Name()) != 0;
}

fn isNumInternal(e: *anyopaque, first: bool) bool {
    var args = std.ArrayList(*anyopaque).init(std.heap.c_allocator);
    defer {
        for (args.items) |a| rc.lean_dec(a);
        args.deinit();
    }
    const f = collectAppArgs(e, &args);
    if (!ea.isConst(f)) return false;
    const fn_name = ea.constName(f);
    const nargs = args.items.len;
    if (lean_name_eq(fn_name, constants.getHasOneOneName()) != 0) return nargs == 2;
    if (lean_name_eq(fn_name, constants.getHasZeroZeroName()) != 0) return first and nargs == 2;
    if (lean_name_eq(fn_name, constants.getNatZeroName()) != 0) return first and nargs == 0;
    if (lean_name_eq(fn_name, constants.getBit0Name()) != 0) return nargs == 3 and isNumInternal(args.items[2], false);
    if (lean_name_eq(fn_name, constants.getBit1Name()) != 0) return nargs == 4 and isNumInternal(args.items[3], false);
    return false;
}

fn collectAppArgs(e: *anyopaque, out: *std.ArrayList(*anyopaque)) *anyopaque {
    var curr = e;
    while (ea.isApp(curr)) {
        const arg = ea.appArg(curr);
        rc.lean_inc(arg);
        out.append(arg) catch @panic("collectAppArgs: oom");
        curr = ea.appFn(curr);
    }
    // args are in reverse order; reverse them
    std.mem.reverse(*anyopaque, out.items);
    return curr;
}

pub fn isNum(e: *anyopaque) bool {
    return isNumInternal(e, true);
}

pub fn isSignedNum(e: *anyopaque) bool {
    if (isNum(e)) return true;
    if (isNeg(e)) |r| {
        defer rc.lean_dec(r);
        return isNum(r);
    }
    return false;
}

pub fn toNum(e: *anyopaque) ?mpz_zig.Mpz {
    return toNumInternal(e, true);
}

fn toNumInternal(e: *anyopaque, first: bool) ?mpz_zig.Mpz {
    if (isZero(e)) {
        if (!first) return null;
        return mpz_zig.Mpz.initSet(std.heap.c_allocator, 0) catch @panic("toNum: oom");
    }
    if (isOne(e)) {
        return mpz_zig.Mpz.initSet(std.heap.c_allocator, 1) catch @panic("toNum: oom");
    }
    if (isOfNat(e)) |a| {
        defer rc.lean_dec(a);
        return toNumInternal(a, false);
    }
    if (ea.isLit(e)) {
        const lv = ea.litValue(e);
        // lit_value kind check would go here; for now assume nat
        _ = lv;
        // TODO: extract nat from literal object
        return null;
    }
    if (isBit0(e)) |a| {
        defer rc.lean_dec(a);
        if (toNumInternal(a, false)) |r| {
            defer r.deinit();
            const two = mpz_zig.Mpz.initSet(std.heap.c_allocator, 2) catch @panic("toNum: oom");
            defer two.deinit();
            var result = mpz_zig.Mpz.init(std.heap.c_allocator) catch @panic("toNum: oom");
            result.mul(&r, &two) catch @panic("toNum: oom");
            return result;
        }
    }
    if (isBit1(e)) |a| {
        defer rc.lean_dec(a);
        if (toNumInternal(a, false)) |r| {
            defer r.deinit();
            const two = mpz_zig.Mpz.initSet(std.heap.c_allocator, 2) catch @panic("toNum: oom");
            defer two.deinit();
            const one = mpz_zig.Mpz.initSet(std.heap.c_allocator, 1) catch @panic("toNum: oom");
            defer one.deinit();
            var doubled = mpz_zig.Mpz.init(std.heap.c_allocator) catch @panic("toNum: oom");
            doubled.mul(&r, &two) catch @panic("toNum: oom");
            var result = mpz_zig.Mpz.init(std.heap.c_allocator) catch @panic("toNum: oom");
            result.add(&doubled, &one) catch @panic("toNum: oom");
            doubled.deinit();
            return result;
        }
    }
    if (first) {
        if (isNeg(e)) |a| {
            defer rc.lean_dec(a);
            if (toNumInternal(a, false)) |r| {
                defer r.deinit();
                var result = mpz_zig.Mpz.init(std.heap.c_allocator) catch @panic("toNum: oom");
                result.neg(&r) catch @panic("toNum: oom");
                return result;
            }
        }
    }
    return null;
}

pub fn isNumLeafConstant(n: *anyopaque) bool {
    return lean_name_eq(n, constants.getHasZeroZeroName()) != 0 or
        lean_name_eq(n, constants.getHasOneOneName()) != 0;
}

fn mkNatZeroExpr() *anyopaque {
    const nat = lean_expr_mk_const(constants.getNatName(), object.lean_box(0).?);
    const has_zero = lean_expr_mk_const(constants.getHasZeroZeroName(), mkList1(object.lean_box(0).?));
    const nat_has_zero = lean_expr_mk_const(constants.getNatHasZeroName(), object.lean_box(0).?);
    return lean_expr_mk_app(lean_expr_mk_app(has_zero, nat), nat_has_zero);
}

fn mkNatOneExpr() *anyopaque {
    const nat = lean_expr_mk_const(constants.getNatName(), object.lean_box(0).?);
    const has_one = lean_expr_mk_const(constants.getHasOneOneName(), mkList1(object.lean_box(0).?));
    const nat_has_one = lean_expr_mk_const(constants.getNatHasOneName(), object.lean_box(0).?);
    return lean_expr_mk_app(lean_expr_mk_app(has_one, nat), nat_has_one);
}

fn mkNatBit0FnExpr() *anyopaque {
    const nat = lean_expr_mk_const(constants.getNatName(), object.lean_box(0).?);
    const bit0 = lean_expr_mk_const(constants.getBit0Name(), mkList1(object.lean_box(0).?));
    const nat_has_add = lean_expr_mk_const(constants.getNatHasAddName(), object.lean_box(0).?);
    return lean_expr_mk_app(lean_expr_mk_app(bit0, nat), nat_has_add);
}

fn mkNatBit1FnExpr() *anyopaque {
    const nat = lean_expr_mk_const(constants.getNatName(), object.lean_box(0).?);
    const bit1 = lean_expr_mk_const(constants.getBit1Name(), mkList1(object.lean_box(0).?));
    const nat_has_one = lean_expr_mk_const(constants.getNatHasOneName(), object.lean_box(0).?);
    const nat_has_add = lean_expr_mk_const(constants.getNatHasAddName(), object.lean_box(0).?);
    return lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_app(bit1, nat), nat_has_one), nat_has_add);
}

fn mkList1(x: *anyopaque) *anyopaque {
    const nil = object.lean_box(0).?;
    const cons = @import("runtime_helpers.zig").lean_list_cons(x, nil);
    return cons;
}

fn toNatExprCore(n: *const mpz_zig.Mpz) *anyopaque {
    const zero = mpz_zig.Mpz.initSet(std.heap.c_allocator, 0) catch @panic("toNatExpr: oom");
    defer zero.deinit();
    const one = mpz_zig.Mpz.initSet(std.heap.c_allocator, 1) catch @panic("toNatExpr: oom");
    defer one.deinit();
    const two = mpz_zig.Mpz.initSet(std.heap.c_allocator, 2) catch @panic("toNatExpr: oom");
    defer two.deinit();

    if (n.cmp(&one) == 0) {
        return mkNatOneExpr();
    }
    var rem = mpz_zig.Mpz.init(std.heap.c_allocator) catch @panic("toNatExpr: oom");
    defer rem.deinit();
    var half = mpz_zig.Mpz.init(std.heap.c_allocator) catch @panic("toNatExpr: oom");
    defer half.deinit();
    rem.divExact(n, &two) catch @panic("toNatExpr: oom");
    // remainder now holds n/2; check if n was even
    var tmp = mpz_zig.Mpz.initSet(std.heap.c_allocator, 0) catch @panic("toNatExpr: oom");
    defer tmp.deinit();
    tmp.mul(&rem, &two) catch @panic("toNatExpr: oom");
    const is_even = n.cmp(&tmp) == 0;
    half.copy(&rem) catch @panic("toNatExpr: oom");

    const sub = toNatExpr(&half);
    if (is_even) {
        return lean_expr_mk_app(mkNatBit0FnExpr(), sub);
    } else {
        return lean_expr_mk_app(mkNatBit1FnExpr(), sub);
    }
}

pub fn toNatExpr(n: *const mpz_zig.Mpz) *anyopaque {
    const zero = mpz_zig.Mpz.initSet(std.heap.c_allocator, 0) catch @panic("toNatExpr: oom");
    defer zero.deinit();
    if (n.cmp(&zero) == 0) {
        return mkNatZeroExpr();
    }
    return toNatExprCore(n);
}

pub fn initializeNum() void {}
pub fn finalizeNum() void {}

test "isZero recognizes Nat.zero" {
    constants.initializeConstants();
    defer constants.finalizeConstants();
    const z = lean_expr_mk_const(constants.getNatZeroName(), object.lean_box(0).?);
    defer rc.lean_dec(z);
    try std.testing.expect(isZero(z));
}
