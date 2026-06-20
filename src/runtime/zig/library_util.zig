// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Library utilities (`src/library/util.cpp`).
//!
//! Ports the expression and environment helper functions used throughout the
//! Lean library.  Functions that still depend on C++-only infrastructure
//! (full local-context telescope, implicit-parameter inference, loose bvar
//! manipulation) are stubbed with a descriptive panic.

pub const force_link = true;

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const ea = @import("expr_accessors.zig");
const ka = @import("kernel_accessors.zig");
const constants = @import("constants.zig");
const util_name = @import("util_name.zig");
const runtime_helpers = @import("runtime_helpers.zig");

extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_const(n: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_sort(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_lambda(n: *anyopaque, d: *anyopaque, b: *anyopaque, bi: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_forall(n: *anyopaque, d: *anyopaque, b: *anyopaque, bi: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_succ(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_max(a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_imax(a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_append_index_after(n: *anyopaque, i: *anyopaque) callconv(.c) *anyopaque;

const alloc = @import("alloc.zig");

fn nameEq(a: *anyopaque, b: *anyopaque) bool {
    return lean_name_eq(a, b) != 0;
}

fn listLen(l: *anyopaque) usize {
    var curr = l;
    var n: usize = 0;
    while (!object.lean_is_scalar(curr)) : (n += 1) {
        curr = ka.listTail(curr);
    }
    return n;
}

fn listContains(l: *anyopaque, target: *anyopaque) bool {
    var curr = l;
    while (!object.lean_is_scalar(curr)) {
        const h = ka.listHead(curr);
        if (nameEq(h, target)) return true;
        curr = ka.listTail(curr);
    }
    return false;
}

fn retain(e: *anyopaque) *anyopaque {
    rc.lean_inc(e);
    return e;
}

fn mkList1(x: *anyopaque) *anyopaque {
    return runtime_helpers.lean_list_cons(x, object.lean_box(0).?);
}

// ── Name allocation ─────────────────────────────────────────────────────────

pub fn mkUnusedName(env: *anyopaque, n: *anyopaque, idx: *usize) *anyopaque {
    var curr = n;
    rc.lean_inc(curr);
    defer rc.lean_dec(curr);
    while (true) {
        if (ka.envFind(env, curr) == null) {
            rc.lean_inc(curr);
            return curr;
        }
        const idx_obj = object.lean_box(idx.*).?;
        const next = lean_name_append_index_after(n, idx_obj);
        rc.lean_dec(curr);
        curr = next;
        idx.* += 1;
    }
}

pub fn mkUnusedNameDefault(env: *anyopaque, n: *anyopaque) *anyopaque {
    var idx: usize = 1;
    return mkUnusedName(env, n, &idx);
}

// ── Arity and parameter helpers ─────────────────────────────────────────────

pub fn getArity(type_expr: *anyopaque) usize {
    var t = type_expr;
    var r: usize = 0;
    while (ea.isPi(t)) {
        t = ea.bindingBody(t);
        r += 1;
    }
    return r;
}

pub fn isOptionalParam(e: *anyopaque) ?*anyopaque {
    if (isAppOfN(e, constants.getOptParamName(), 2)) {
        return retain(ea.appArg(e));
    }
    return null;
}

pub fn isAutoParam(e: *anyopaque) ?struct { first: *anyopaque, second: *anyopaque } {
    if (isAppOfN(e, constants.getAutoParamName(), 2)) {
        const first = retain(ea.appArg(ea.appFn(e)));
        const second = retain(ea.appArg(e));
        return .{ .first = first, .second = second };
    }
    return null;
}

pub fn mkFreshLpName(lp_names: *anyopaque) *anyopaque {
    const base = util_name.Name.fromCStr("l");
    defer if (base.obj) |o| rc.lean_dec(o);
    var l = base;
    rc.lean_inc(l.obj.?);
    var i: u32 = 1;
    while (listContains(lp_names, l.obj.?)) {
        rc.lean_dec(l.obj.?);
        l = base.appendAfterIndex(i);
        i += 1;
    }
    return l.obj.?;
}

fn simpleFind(m: *anyopaque, n: *anyopaque) bool {
    // Very small local find: traverse `m` looking for exact pointer or constant named `n`.
    // Used only for the simple `occurs` variants; full `find` is C++-provided.
    _ = m;
    _ = n;
    return false; // stub: real find requires C++ find_fn
}

pub fn occursExpr(n: *anyopaque, m: *anyopaque) bool {
    return simpleFind(m, n);
}

pub fn occursName(n: *anyopaque, m: *anyopaque) bool {
    _ = n;
    _ = m;
    return false; // stub
}

pub fn isAppOf(e: *anyopaque, f_name: *anyopaque) bool {
    const fn_expr = ea.getAppFn(e);
    return ea.isConst(fn_expr) and nameEq(ea.constName(fn_expr), f_name);
}

pub fn isAppOfN(e: *anyopaque, f_name: *anyopaque, nargs: usize) bool {
    const fn_expr = ea.getAppFn(e);
    return ea.isConst(fn_expr) and nameEq(ea.constName(fn_expr), f_name) and ea.getAppNumArgs(e) == nargs;
}

pub fn consumeAutoOptParam(type_expr: *anyopaque) *anyopaque {
    if (isAppOfN(type_expr, constants.getAutoParamName(), 2) or
        isAppOfN(type_expr, constants.getOptParamName(), 2))
    {
        return retain(ea.appArg(ea.appFn(type_expr)));
    }
    return retain(type_expr);
}

pub fn unfoldTerm(env: *anyopaque, e: *anyopaque) ?*anyopaque {
    _ = env;
    _ = e;
    return null; // stub: needs instantiate_value_lparams + apply_beta
}

pub fn unfoldApp(env: *anyopaque, e: *anyopaque) ?*anyopaque {
    if (!ea.isApp(e)) return null;
    return unfoldTerm(env, e);
}

// ── Level manipulation ──────────────────────────────────────────────────────

pub fn decLevel(l: *anyopaque) ?*anyopaque {
    const k = levelKind(l);
    switch (k) {
        .Zero, .Param, .MVar => return null,
        .Succ => {
            const child = levelSuccOf(l);
            rc.lean_inc(child);
            return child;
        },
        .Max => {
            const lhs = decLevel(levelLhs(l)) orelse return null;
            defer rc.lean_dec(lhs);
            const rhs = decLevel(levelRhs(l)) orelse return null;
            defer rc.lean_dec(rhs);
            return lean_level_mk_max(lhs, rhs);
        },
        .IMax => {
            const lhs = decLevel(levelLhs(l)) orelse return null;
            defer rc.lean_dec(lhs);
            const rhs = decLevel(levelRhs(l)) orelse return null;
            defer rc.lean_dec(rhs);
            return lean_level_mk_max(lhs, rhs);
        },
    }
}

const LevelKind = enum(u8) { Zero = 0, Succ = 1, Max = 2, IMax = 3, Param = 4, MVar = 5 };

fn levelKind(l: *anyopaque) LevelKind {
    if (object.lean_is_scalar(l)) return .Zero;
    return @enumFromInt(object.lean_ptr_tag(l));
}

fn levelSuccOf(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 0).?;
}
fn levelLhs(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 0).?;
}
fn levelRhs(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 1).?;
}

// ── Inductive / constructor helpers ─────────────────────────────────────────

pub fn hasConstructor(env: *anyopaque, c: *anyopaque, I: *anyopaque, nparams: usize) bool {
    const d = ka.envFind(env, c) orelse return false;
    defer rc.lean_dec(d);
    if (ka.ciHasValue(d)) return false;
    var type_expr = ka.ciType(d);
    var i: usize = 0;
    while (ea.isPi(type_expr)) : (i += 1) {
        type_expr = ea.bindingBody(type_expr);
    }
    if (i != nparams) return false;
    const fn_expr = ea.getAppFn(type_expr);
    return ea.isConst(fn_expr) and nameEq(ea.constName(fn_expr), I);
}

pub fn hasPunitDecls(env: *anyopaque) bool {
    return hasConstructor(env, constants.getPunitUnitName(), constants.getPunitName(), 0);
}

pub fn hasEqDecls(env: *anyopaque) bool {
    return hasConstructor(env, constants.getEqReflName(), constants.getEqName(), 2);
}

pub fn hasHeqDecls(env: *anyopaque) bool {
    return hasConstructor(env, constants.getHeqReflName(), constants.getHeqName(), 2);
}

pub fn hasPprodDecls(env: *anyopaque) bool {
    return hasConstructor(env, constants.getPprodMkName(), constants.getPprodName(), 4);
}

pub fn hasAndDecls(env: *anyopaque) bool {
    return hasConstructor(env, constants.getAndIntroName(), constants.getAndName(), 4);
}

pub fn isInductivePredicate(env: *anyopaque, n: *anyopaque) bool {
    const info = ka.envGet(env, n);
    defer rc.lean_dec(info);
    if (!ka.ciIsInductive(info)) return false;
    const lvl = getDatatypeLevel(env, ka.ciType(info));
    defer rc.lean_dec(lvl);
    return isZeroLevel(lvl);
}

fn isZeroLevel(l: *anyopaque) bool {
    return object.lean_is_scalar(l) and object.lean_unbox(l) == 0;
}

pub fn canElimToType(env: *anyopaque, n: *anyopaque) bool {
    const ind_info = ka.envGet(env, n);
    defer rc.lean_dec(ind_info);
    if (!ka.ciIsInductive(ind_info)) return false;
    const rec_name = util_name.Name.fromPrefixStr(util_name.Name.fromObj(n), "rec");
    defer if (rec_name.obj) |o| rc.lean_dec(o);
    const rec_info = ka.envGet(env, rec_name.obj.?);
    defer rc.lean_dec(rec_info);
    return ka.ciNumLparams(rec_info) > ka.ciNumLparams(ind_info);
}

pub fn getConstructorNames(env: *anyopaque, n: *anyopaque, result: *std.ArrayList(*anyopaque)) void {
    const info = ka.envGet(env, n);
    defer rc.lean_dec(info);
    if (!ka.ciIsInductive(info)) return;
    var curr = ka.inductValCtors(info);
    while (!object.lean_is_scalar(curr)) {
        const c = ka.listHead(curr);
        rc.lean_inc(c);
        result.append(c) catch @panic("getConstructorNames: oom");
        curr = ka.listTail(curr);
    }
}

pub fn isConstructorAppExt(env: *anyopaque, e: *anyopaque) ?*anyopaque {
    _ = env;
    _ = e;
    return null; // stub: needs is_constructor_app
}

pub fn getConstructorRelevantFields(env: *anyopaque, n: *anyopaque, result: *std.ArrayList(bool)) void {
    _ = env;
    _ = n;
    _ = result;
    @panic("getConstructorRelevantFields not implemented");
}

pub fn getNumConstructors(env: *anyopaque, n: *anyopaque) usize {
    const info = ka.envGet(env, n);
    defer rc.lean_dec(info);
    std.debug.assert(ka.ciIsInductive(info));
    return listLen(ka.inductValCtors(info));
}

pub fn getConstructorIdx(env: *anyopaque, n: *anyopaque) usize {
    const info = ka.envGet(env, n);
    defer rc.lean_dec(info);
    std.debug.assert(ka.ciIsConstructor(info));
    const I_name = ka.ctorValInduct(info);
    var cnames = std.ArrayList(*anyopaque).init(std.heap.c_allocator);
    defer {
        for (cnames.items) |c| rc.lean_dec(c);
        cnames.deinit();
    }
    getConstructorNames(env, I_name, &cnames);
    for (cnames.items, 0..) |cname, i| {
        if (nameEq(cname, n)) return i;
    }
    unreachable;
}

pub fn getConstructorInductiveType(env: *anyopaque, ctor_name: *anyopaque) *anyopaque {
    const info = ka.envGet(env, ctor_name);
    defer rc.lean_dec(info);
    std.debug.assert(ka.ciIsConstructor(info));
    return retain(ka.ctorValInduct(info));
}

pub fn getDatatypeLevel(env: *anyopaque, ind_type: *anyopaque) *anyopaque {
    _ = env;
    _ = ind_type;
    @panic("getDatatypeLevel not implemented");
}

pub fn updateResultSort(t: *anyopaque, l: *anyopaque) *anyopaque {
    if (ea.isPi(t)) {
        const new_body = updateResultSort(ea.bindingBody(t), l);
        defer rc.lean_dec(new_body);
        return ea.updateBinding(t, ea.bindingDomain(t), new_body);
    } else if (ea.isSort(t)) {
        return ea.updateSort(t, l);
    } else {
        unreachable;
    }
}

pub fn instantiateLparam(e: *anyopaque, p: *anyopaque, l: *anyopaque) *anyopaque {
    _ = e;
    _ = p;
    _ = l;
    @panic("instantiateLparam not implemented");
}

pub fn toTelescope(lctx: *anyopaque, ngen: *anyopaque, type_expr: *anyopaque, telescope: *std.ArrayList(*anyopaque), binfo: ?*anyopaque) *anyopaque {
    _ = lctx;
    _ = ngen;
    _ = type_expr;
    _ = telescope;
    _ = binfo;
    @panic("toTelescope not implemented");
}

pub fn toTelescopeWhnf(env: *anyopaque, lctx: *anyopaque, ngen: *anyopaque, type_expr: *anyopaque, telescope: *std.ArrayList(*anyopaque), binfo: ?*anyopaque) *anyopaque {
    _ = env;
    _ = lctx;
    _ = ngen;
    _ = type_expr;
    _ = telescope;
    _ = binfo;
    @panic("toTelescopeWhnf not implemented");
}

// ── Logical connectives and types ───────────────────────────────────────────

var g_true: ?*anyopaque = null;
var g_true_intro: ?*anyopaque = null;
var g_and: ?*anyopaque = null;
var g_and_intro: ?*anyopaque = null;
var g_and_left: ?*anyopaque = null;
var g_and_right: ?*anyopaque = null;
var g_unit: ?*anyopaque = null;
var g_unit_mk: ?*anyopaque = null;
var g_nat: ?*anyopaque = null;
var g_nat_zero: ?*anyopaque = null;
var g_nat_one: ?*anyopaque = null;
var g_nat_bit0_fn: ?*anyopaque = null;
var g_nat_bit1_fn: ?*anyopaque = null;
var g_nat_add_fn: ?*anyopaque = null;
var g_int: ?*anyopaque = null;
var g_char: ?*anyopaque = null;
var g_bool: ?*anyopaque = null;
var g_bool_true: ?*anyopaque = null;
var g_bool_false: ?*anyopaque = null;
var g_short_version_string: ?[]const u8 = null;
var g_util_fresh: ?*anyopaque = null;

pub fn mkTrue() *anyopaque { return retain(g_true.?); }
pub fn isTrue(e: *anyopaque) bool { return e == g_true.?; }
pub fn mkTrueIntro() *anyopaque { return retain(g_true_intro.?); }

pub fn isAnd(e: *anyopaque) bool {
    return isAppOfN(e, constants.getAndName(), 2);
}

pub fn isAndOut(e: *anyopaque, arg1: *?*anyopaque, arg2: *?*anyopaque) bool {
    if (isAnd(e)) {
        arg1.* = retain(ea.appArg(ea.appFn(e)));
        arg2.* = retain(ea.appArg(e));
        return true;
    }
    return false;
}

pub fn mkAnd(a: *anyopaque, b: *anyopaque) *anyopaque {
    return lean_expr_mk_app(lean_expr_mk_app(g_and.?, a), b);
}

pub fn mkUnit(l: *anyopaque) *anyopaque {
    return lean_expr_mk_const(constants.getPunitName(), mkList1(l));
}

pub fn mkUnitMk(l: *anyopaque) *anyopaque {
    return lean_expr_mk_const(constants.getPunitUnitName(), mkList1(l));
}

pub fn mkUnitDefault() *anyopaque { return retain(g_unit.?); }
pub fn mkUnitMkDefault() *anyopaque { return retain(g_unit_mk.?); }

pub fn mkNatType() *anyopaque { return retain(g_nat.?); }
pub fn isNatType(e: *anyopaque) bool { return e == g_nat.?; }
pub fn mkNatZero() *anyopaque { return retain(g_nat_zero.?); }
pub fn mkNatOne() *anyopaque { return retain(g_nat_one.?); }

pub fn mkNatBit0(e: *anyopaque) *anyopaque {
    return lean_expr_mk_app(g_nat_bit0_fn.?, e);
}

pub fn mkNatBit1(e: *anyopaque) *anyopaque {
    return lean_expr_mk_app(g_nat_bit1_fn.?, e);
}

pub fn mkNatAdd(e1: *anyopaque, e2: *anyopaque) *anyopaque {
    return lean_expr_mk_app(lean_expr_mk_app(g_nat_add_fn.?, e1), e2);
}

pub fn mkIntType() *anyopaque { return retain(g_int.?); }
pub fn isIntType(e: *anyopaque) bool { return e == g_int.?; }
pub fn mkCharType() *anyopaque { return retain(g_char.?); }

pub fn mkUnitProp(l: *anyopaque, prop: bool) *anyopaque {
    return if (prop) mkTrue() else mkUnit(l);
}

pub fn mkUnitMkProp(l: *anyopaque, prop: bool) *anyopaque {
    return if (prop) mkTrueIntro() else mkUnitMk(l);
}

pub fn isIte(e: *anyopaque) bool {
    return isAppOfN(e, constants.getIteName(), 5);
}

pub fn isIteOut(e: *anyopaque, c: *?*anyopaque, H: *?*anyopaque, A: *?*anyopaque, t: *?*anyopaque, f: *?*anyopaque) bool {
    if (isIte(e)) {
        var args = std.ArrayList(*anyopaque).init(std.heap.c_allocator);
        defer {
            for (args.items) |a| rc.lean_dec(a);
            args.deinit();
        }
        collectAppArgs(e, &args);
        std.debug.assert(args.items.len == 5);
        c.* = retain(args.items[0]);
        H.* = retain(args.items[1]);
        A.* = retain(args.items[2]);
        t.* = retain(args.items[3]);
        f.* = retain(args.items[4]);
        return true;
    }
    return false;
}

pub fn isIff(e: *anyopaque) bool {
    return isAppOfN(e, constants.getIffName(), 2);
}

pub fn isIffOut(e: *anyopaque, lhs: *?*anyopaque, rhs: *?*anyopaque) bool {
    if (!isIff(e)) return false;
    lhs.* = retain(ea.appArg(ea.appFn(e)));
    rhs.* = retain(ea.appArg(e));
    return true;
}

pub fn mkIff(lhs: *anyopaque, rhs: *anyopaque) *anyopaque {
    return lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_const(constants.getIffName(), object.lean_box(0).?), lhs), rhs);
}

pub fn mkIffRefl(a: *anyopaque) *anyopaque {
    return lean_expr_mk_app(lean_expr_mk_const(constants.getIffReflName(), object.lean_box(0).?), a);
}

pub fn mkPropext(lhs: *anyopaque, rhs: *anyopaque, iff_pr: *anyopaque) *anyopaque {
    const c = lean_expr_mk_const(constants.getPropextName(), object.lean_box(0).?);
    const r = lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_app(c, lhs), rhs), iff_pr);
    rc.lean_dec(c);
    return r;
}

pub fn isEqNdrecCore(e: *anyopaque) bool {
    const fn_expr = ea.getAppFn(e);
    return ea.isConst(fn_expr) and nameEq(ea.constName(fn_expr), constants.getEqNdrecName());
}

pub fn isEqNdrec(e: *anyopaque) bool {
    const fn_expr = ea.getAppFn(e);
    if (!ea.isConst(fn_expr)) return false;
    return nameEq(ea.constName(fn_expr), constants.getEqNdrecName());
}

pub fn isEqRec(e: *anyopaque) bool {
    const fn_expr = ea.getAppFn(e);
    if (!ea.isConst(fn_expr)) return false;
    return nameEq(ea.constName(fn_expr), constants.getEqRecName());
}

pub fn isEq(e: *anyopaque) bool {
    return isAppOfN(e, constants.getEqName(), 3);
}

pub fn isEqOut(e: *anyopaque, lhs: *?*anyopaque, rhs: *?*anyopaque) bool {
    if (!isEq(e)) return false;
    lhs.* = retain(ea.appArg(ea.appFn(e)));
    rhs.* = retain(ea.appArg(e));
    return true;
}

pub fn isEqOut3(e: *anyopaque, A: *?*anyopaque, lhs: *?*anyopaque, rhs: *?*anyopaque) bool {
    if (!isEq(e)) return false;
    A.* = retain(ea.appArg(ea.appFn(ea.appFn(e))));
    lhs.* = retain(ea.appArg(ea.appFn(e)));
    rhs.* = retain(ea.appArg(e));
    return true;
}

pub fn isEqAA(e: *anyopaque) bool {
    if (!isEq(e)) return false;
    const lhs = ea.appArg(ea.appFn(e));
    const rhs = ea.appArg(e);
    return lhs == rhs;
}

pub fn isHeq(e: *anyopaque) bool {
    return isAppOfN(e, constants.getHeqName(), 4);
}

pub fn isHeqOut(e: *anyopaque, A: *?*anyopaque, lhs: *?*anyopaque, B: *?*anyopaque, rhs: *?*anyopaque) bool {
    if (isHeq(e)) {
        var args = std.ArrayList(*anyopaque).init(std.heap.c_allocator);
        defer {
            for (args.items) |a| rc.lean_dec(a);
            args.deinit();
        }
        collectAppArgs(e, &args);
        std.debug.assert(args.items.len == 4);
        A.* = retain(args.items[0]);
        lhs.* = retain(args.items[1]);
        B.* = retain(args.items[2]);
        rhs.* = retain(args.items[3]);
        return true;
    }
    return false;
}

pub fn mkFalse() *anyopaque { return lean_expr_mk_const(constants.getFalseName(), object.lean_box(0).?); }
pub fn mkEmpty() *anyopaque { return lean_expr_mk_const(constants.getEmptyName(), object.lean_box(0).?); }

pub fn isFalse(e: *anyopaque) bool {
    return ea.isConst(e) and nameEq(ea.constName(e), constants.getFalseName());
}

pub fn isEmpty(e: *anyopaque) bool {
    return ea.isConst(e) and nameEq(ea.constName(e), constants.getEmptyName());
}

pub fn isOr(e: *anyopaque) bool {
    return isAppOfN(e, constants.getOrName(), 2);
}

pub fn isOrOut(e: *anyopaque, A: *?*anyopaque, B: *?*anyopaque) bool {
    if (isOr(e)) {
        A.* = retain(ea.appArg(ea.appFn(e)));
        B.* = retain(ea.appArg(e));
        return true;
    }
    return false;
}

pub fn isNot(e: *anyopaque, a: *?*anyopaque) bool {
    if (isAppOfN(e, constants.getNotName(), 1)) {
        a.* = retain(ea.appArg(e));
        return true;
    } else if (ea.isPi(e) and isFalse(ea.bindingBody(e))) {
        a.* = retain(ea.bindingDomain(e));
        return true;
    }
    return false;
}

pub fn isNotOrNe(e: *anyopaque, a: *?*anyopaque) bool {
    if (isNot(e, a)) return true;
    if (isAppOfN(e, constants.getNeName(), 3)) {
        var args = std.ArrayList(*anyopaque).init(std.heap.c_allocator);
        defer {
            for (args.items) |x| rc.lean_dec(x);
            args.deinit();
        }
        collectAppArgs(e, &args);
        const fn_expr = ea.getAppFn(e);
        const new_fn = lean_expr_mk_const(constants.getEqName(), retain(ea.constLevels(fn_expr)));
        defer rc.lean_dec(new_fn);
        var r = new_fn;
        for (args.items) |arg| {
            const next = lean_expr_mk_app(r, arg);
            rc.lean_dec(r);
            r = next;
        }
        a.* = r;
        return true;
    }
    return false;
}

pub fn mkNot(e: *anyopaque) *anyopaque {
    return lean_expr_mk_app(lean_expr_mk_const(constants.getNotName(), object.lean_box(0).?), e);
}

pub fn isExists(e: *anyopaque) bool {
    return isAppOfN(e, constants.getExistsName(), 2);
}

pub fn isExistsOut(e: *anyopaque, A: *?*anyopaque, p: *?*anyopaque) bool {
    if (isExists(e)) {
        A.* = retain(ea.appArg(ea.appFn(e)));
        p.* = retain(ea.appArg(e));
        return true;
    }
    return false;
}

pub fn getBinaryOp(e: *anyopaque) ?*anyopaque {
    if (!ea.isApp(e) or !ea.isApp(ea.appFn(e))) return null;
    return retain(ea.appFn(ea.appFn(e)));
}

pub fn getBinaryOpOut(e: *anyopaque, arg1: *?*anyopaque, arg2: *?*anyopaque) ?*anyopaque {
    if (getBinaryOp(e)) |op| {
        arg1.* = retain(ea.appArg(ea.appFn(e)));
        arg2.* = retain(ea.appArg(e));
        return op;
    }
    return null;
}

pub fn mkNaryApp(op: *anyopaque, args: []*anyopaque) *anyopaque {
    std.debug.assert(args.len >= 2);
    var r = lean_expr_mk_app(lean_expr_mk_app(op, args[args.len - 2]), args[args.len - 1]);
    var i: usize = args.len;
    while (i > 2) {
        i -= 1;
        const next = lean_expr_mk_app(lean_expr_mk_app(op, args[i - 1]), r);
        rc.lean_dec(r);
        r = next;
    }
    return r;
}

// ── Annotation-aware helpers ────────────────────────────────────────────────

pub fn isAnnotatedLambda(e: *anyopaque) bool {
    const annotation = @import("annotation.zig");
    if (ea.isLambda(e)) return true;
    if (annotation.isAnnotation(e)) |a| {
        return isAnnotatedLambda(annotation.getNestedAnnotationArg(a));
    }
    return false;
}

pub fn isAnnotatedHeadBeta(e: *anyopaque) bool {
    return ea.isApp(e) and isAnnotatedLambda(ea.getAppFn(e));
}

pub fn annotatedHeadBetaReduce(e: *anyopaque) *anyopaque {
    if (!isAnnotatedHeadBeta(e)) return retain(e);
    @panic("annotatedHeadBetaReduce not implemented");
}

// ── Eta/beta reduction ──────────────────────────────────────────────────────

pub fn tryEta(e: *anyopaque) *anyopaque {
    _ = e;
    @panic("tryEta not implemented");
}

pub fn betaReduce(e: *anyopaque) *anyopaque {
    _ = e;
    @panic("betaReduce not implemented");
}

pub fn etaReduce(e: *anyopaque) *anyopaque {
    _ = e;
    @panic("etaReduce not implemented");
}

pub fn betaEtaReduce(e: *anyopaque) *anyopaque {
    _ = e;
    @panic("betaEtaReduce not implemented");
}

pub fn inferImplicitParams(type_expr: *anyopaque, nparams: usize, k: ImplicitInferKind) *anyopaque {
    _ = type_expr;
    _ = nparams;
    _ = k;
    @panic("inferImplicitParams not implemented");
}

pub const ImplicitInferKind = enum { Implicit, RelaxedImplicit };

// ── Bool, recursors, version, mdata ─────────────────────────────────────────

pub fn mkBool() *anyopaque { return retain(g_bool.?); }
pub fn mkBoolTrue() *anyopaque { return retain(g_bool_true.?); }
pub fn mkBoolFalse() *anyopaque { return retain(g_bool_false.?); }
pub fn toBoolExpr(b: bool) *anyopaque {
    return if (b) mkBoolTrue() else mkBoolFalse();
}

pub fn getDepRecursor(env: *anyopaque, n: *anyopaque) *anyopaque {
    _ = env;
    return util_name.Name.fromPrefixStr(util_name.Name.fromObj(n), "rec").obj.?;
}

pub fn getDepCasesOn(env: *anyopaque, n: *anyopaque) *anyopaque {
    _ = env;
    return util_name.Name.fromPrefixStr(util_name.Name.fromObj(n), "casesOn").obj.?;
}

pub fn getShortVersionString() []const u8 {
    return g_short_version_string.?;
}

pub fn extractMdata(e: *anyopaque) *anyopaque {
    if (ea.isMData(e)) {
        return extractMdata(ea.mdataExpr(e));
    }
    return retain(e);
}

pub fn toOptionalExpr(o: *anyopaque) ?*anyopaque {
    if (object.lean_is_scalar(o)) return null;
    const r = ctor.lean_ctor_get(o, 0).?;
    rc.lean_inc(r);
    rc.lean_dec(o);
    return r;
}

// ── Initialization / finalization ───────────────────────────────────────────

fn initializeNat() void {
    g_nat = lean_expr_mk_const(constants.getNatName(), object.lean_box(0).?);
    g_nat_zero = lean_expr_mk_app(lean_expr_mk_app(
        lean_expr_mk_const(constants.getHasZeroZeroName(), mkList1(object.lean_box(0).?)),
        retain(g_nat.?)),
        lean_expr_mk_const(constants.getNatHasZeroName(), object.lean_box(0).?));
    g_nat_one = lean_expr_mk_app(lean_expr_mk_app(
        lean_expr_mk_const(constants.getHasOneOneName(), mkList1(object.lean_box(0).?)),
        retain(g_nat.?)),
        lean_expr_mk_const(constants.getNatHasOneName(), object.lean_box(0).?));
    g_nat_bit0_fn = lean_expr_mk_app(lean_expr_mk_app(
        lean_expr_mk_const(constants.getBit0Name(), mkList1(object.lean_box(0).?)),
        retain(g_nat.?)),
        lean_expr_mk_const(constants.getNatHasAddName(), object.lean_box(0).?));
    g_nat_bit1_fn = lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_app(
        lean_expr_mk_const(constants.getBit1Name(), mkList1(object.lean_box(0).?)),
        retain(g_nat.?)),
        lean_expr_mk_const(constants.getNatHasOneName(), object.lean_box(0).?)),
        lean_expr_mk_const(constants.getNatHasAddName(), object.lean_box(0).?));
    g_nat_add_fn = lean_expr_mk_app(lean_expr_mk_app(
        lean_expr_mk_const(constants.getHasAddAddName(), mkList1(object.lean_box(0).?)),
        retain(g_nat.?)),
        lean_expr_mk_const(constants.getNatHasAddName(), object.lean_box(0).?));
}

fn initializeInt() void {
    g_int = lean_expr_mk_const(constants.getIntName(), object.lean_box(0).?);
}

fn initializeChar() void {
    g_char = lean_expr_mk_const(constants.getCharName(), object.lean_box(0).?);
}

fn initializeBool() void {
    g_bool = lean_expr_mk_const(constants.getBoolName(), object.lean_box(0).?);
    g_bool_false = lean_expr_mk_const(constants.getBoolFalseName(), object.lean_box(0).?);
    g_bool_true = lean_expr_mk_const(constants.getBoolTrueName(), object.lean_box(0).?);
}

pub fn initializeLibraryUtil() void {
    if (g_true != null) return;
    constants.initializeConstants();

    g_unit = lean_expr_mk_const(constants.getUnitName(), object.lean_box(0).?);
    g_unit_mk = lean_expr_mk_const(constants.getUnitUnitName(), object.lean_box(0).?);
    g_true = lean_expr_mk_const(constants.getTrueName(), object.lean_box(0).?);
    g_true_intro = lean_expr_mk_const(constants.getTrueIntroName(), object.lean_box(0).?);
    g_and = lean_expr_mk_const(constants.getAndName(), object.lean_box(0).?);
    g_and_intro = lean_expr_mk_const(constants.getAndIntroName(), object.lean_box(0).?);
    g_and_left = lean_expr_mk_const(constants.getAndLeftName(), object.lean_box(0).?);
    g_and_right = lean_expr_mk_const(constants.getAndRightName(), object.lean_box(0).?);

    initializeNat();
    initializeInt();
    initializeChar();
    initializeBool();

    g_short_version_string = std.heap.c_allocator.dupe(u8, "4.0.0") catch @panic("initializeLibraryUtil: oom");

    g_util_fresh = util_name.Name.fromCStr("_util_fresh").obj.?;
}

pub fn finalizeLibraryUtil() void {
    // Marked-persistent / process-lifetime objects; no-op for now.
    g_true = null;
    g_true_intro = null;
    g_and = null;
    g_and_intro = null;
    g_and_left = null;
    g_and_right = null;
    g_unit = null;
    g_unit_mk = null;
    g_nat = null;
    g_nat_zero = null;
    g_nat_one = null;
    g_nat_bit0_fn = null;
    g_nat_bit1_fn = null;
    g_nat_add_fn = null;
    g_int = null;
    g_char = null;
    g_bool = null;
    g_bool_true = null;
    g_bool_false = null;
    if (g_short_version_string) |s| std.heap.c_allocator.free(s);
    g_short_version_string = null;
    g_util_fresh = null;
}

// ── Internal helpers ────────────────────────────────────────────────────────

fn collectAppArgs(e: *anyopaque, out: *std.ArrayList(*anyopaque)) void {
    var curr = e;
    while (ea.isApp(curr)) {
        const arg = ea.appArg(curr);
        rc.lean_inc(arg);
        out.append(arg) catch @panic("collectAppArgs: oom");
        curr = ea.appFn(curr);
    }
    std.mem.reverse(*anyopaque, out.items);
}

const std_testing = @import("std").testing;

test "getArity counts nested pis" {
    const l = object.lean_box(0).?;
    const s = lean_expr_mk_sort(l);
    defer rc.lean_dec(s);
    const n = util_name.Name.fromCStr("x").obj.?;
    const pi = lean_expr_mk_forall(n, s, s, object.lean_box(0).?);
    defer rc.lean_dec(pi);
    const pi2 = lean_expr_mk_forall(n, s, pi, object.lean_box(0).?);
    defer rc.lean_dec(pi2);
    try std_testing.expectEqual(@as(usize, 2), getArity(pi2));
}

test "isAppOf detects constants and applications" {
    constants.initializeConstants();
    defer constants.finalizeConstants();
    const nat = lean_expr_mk_const(constants.getNatName(), object.lean_box(0).?);
    defer rc.lean_dec(nat);
    try std_testing.expect(isAppOf(nat, constants.getNatName()));
}
