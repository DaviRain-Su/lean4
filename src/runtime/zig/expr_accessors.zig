// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Expression object accessors for the Zig runtime.
//!
//! These mirror the inline accessors in `src/kernel/expr.h`. Lean `Expr`
//! constructor tags: BVar=0, FVar=1, MVar=2, Sort=3, Const=4, App=5,
//! Lambda=6, Pi=7, Let=8, Lit=9, MData=10, Proj=11.
//!
//! The computed `data` field (a packed u64) is stored as the first scalar
//! field (index `num_objs`). Bit layout (from `lean_expr_mk_data`):
//!   bits  0-31: hash
//!   bits 32-39: approxDepth
//!   bit     40: hasFVar
//!   bit     41: hasExprMVar
//!   bit     42: hasLevelMVar
//!   bit     43: hasLevelParam
//!   bits 44-63: looseBVarRange

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");

pub const ExprKind = enum(u8) {
    BVar = 0,
    FVar = 1,
    MVar = 2,
    Sort = 3,
    Const = 4,
    App = 5,
    Lambda = 6,
    Pi = 7,
    Let = 8,
    Lit = 9,
    MData = 10,
    Proj = 11,
};

pub inline fn kind(e: *anyopaque) ExprKind {
    return @enumFromInt(object.lean_ptr_tag(e));
}

pub inline fn isBVar(e: *anyopaque) bool {
    return kind(e) == .BVar;
}
pub inline fn isFVar(e: *anyopaque) bool {
    return kind(e) == .FVar;
}
pub inline fn isMVar(e: *anyopaque) bool {
    return kind(e) == .MVar;
}
pub inline fn isSort(e: *anyopaque) bool {
    return kind(e) == .Sort;
}
pub inline fn isConst(e: *anyopaque) bool {
    return kind(e) == .Const;
}
pub inline fn isApp(e: *anyopaque) bool {
    return kind(e) == .App;
}
pub inline fn isLambda(e: *anyopaque) bool {
    return kind(e) == .Lambda;
}
pub inline fn isPi(e: *anyopaque) bool {
    return kind(e) == .Pi;
}
pub inline fn isLet(e: *anyopaque) bool {
    return kind(e) == .Let;
}
pub inline fn isLit(e: *anyopaque) bool {
    return kind(e) == .Lit;
}
pub inline fn isMData(e: *anyopaque) bool {
    return kind(e) == .MData;
}
pub inline fn isProj(e: *anyopaque) bool {
    return kind(e) == .Proj;
}
pub inline fn isBinding(e: *anyopaque) bool {
    const k = kind(e);
    return k == .Lambda or k == .Pi;
}

// ── Field accessors ──────────────────────────────────────────────────────────

pub inline fn appFn(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("app_fn on malformed expr");
}
pub inline fn appArg(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("app_arg on malformed expr");
}
pub inline fn sortLevel(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("sort_level on malformed expr");
}
pub inline fn constName(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("const_name on malformed expr");
}
pub inline fn constLevels(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("const_levels on malformed expr");
}
pub inline fn bvarIdx(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("bvar_idx on malformed expr");
}
pub inline fn fvarName(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("fvar_name on malformed expr");
}
pub inline fn mvarName(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("mvar_name on malformed expr");
}
pub inline fn litValue(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("lit_value on malformed expr");
}
pub inline fn mdataData(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("mdata_data on malformed expr");
}
pub inline fn mdataExpr(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("mdata_expr on malformed expr");
}
pub inline fn projSname(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("proj_sname on malformed expr");
}
pub inline fn projIdx(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("proj_idx on malformed expr");
}
pub inline fn projExpr(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 2) orelse @panic("proj_expr on malformed expr");
}

// Bindings (Lambda/Pi): field 0 = name, field 1 = domain, field 2 = body,
// field 3 = binderInfo, field 4 (Let only) = nondep.
pub inline fn bindingName(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("binding_name on malformed expr");
}
pub inline fn bindingDomain(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("binding_domain on malformed expr");
}
pub inline fn bindingBody(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 2) orelse @panic("binding_body on malformed expr");
}
pub inline fn bindingInfo(e: *anyopaque) u8 {
    return ctor.lean_ctor_get_uint8(e, @intCast(3 * @sizeOf(*anyopaque) + @sizeOf(u64)));
}

// Let: field 0 = name, field 1 = type, field 2 = value, field 3 = body,
// field 4 = nondep.
pub inline fn letType(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("let_type on malformed expr");
}
pub inline fn letValue(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 2) orelse @panic("let_value on malformed expr");
}
pub inline fn letBody(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 3) orelse @panic("let_body on malformed expr");
}
pub inline fn letNonDep(e: *anyopaque) u8 {
    return ctor.lean_ctor_get_uint8(e, @intCast(4 * @sizeOf(*anyopaque) + @sizeOf(u64)));
}


// ── Metadata accessors (from packed data field) ─────────────────────────────

inline fn dataField(e: *anyopaque) u64 {
    const num_objs = ctor.ctorNumObjs(e);
    return ctor.lean_ctor_get_usize(e, @intCast(num_objs));
}

pub inline fn hasExprMVar(e: *anyopaque) bool {
    return ((dataField(e) >> 41) & 1) == 1;
}
pub inline fn hasFVar(e: *anyopaque) bool {
    return ((dataField(e) >> 40) & 1) == 1;
}
pub inline fn hasLevelMVar(e: *anyopaque) bool {
    return ((dataField(e) >> 42) & 1) == 1;
}
pub inline fn hasLevelParam(e: *anyopaque) bool {
    return ((dataField(e) >> 43) & 1) == 1;
}

// ── App spine helpers ────────────────────────────────────────────────────────

pub fn getAppFn(e: *anyopaque) *anyopaque {
    var curr = e;
    while (isApp(curr)) {
        curr = appFn(curr);
    }
    return curr;
}

pub fn getAppNumArgs(e: *anyopaque) usize {
    var curr = e;
    var n: usize = 0;
    while (isApp(curr)) {
        curr = appFn(curr);
        n += 1;
    }
    return n;
}

// ── Lean-exported constructors (provided by stdlib in helperless) ───────────

extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_sort(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_const(n: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_lambda(n: *anyopaque, t: *anyopaque, e: *anyopaque, bi: u8) callconv(.c) *anyopaque;
extern fn lean_expr_mk_forall(n: *anyopaque, t: *anyopaque, e: *anyopaque, bi: u8) callconv(.c) *anyopaque;
extern fn lean_expr_mk_let(n: *anyopaque, t: *anyopaque, v: *anyopaque, b: *anyopaque, nd: u8) callconv(.c) *anyopaque;
extern fn lean_expr_mk_mdata(m: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_proj(s: *anyopaque, i: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;

// ── Update functions (reuse if unchanged) ───────────────────────────────────
//
// These mirror the C++ `update_*` functions: only allocate a new constructor
// if the relevant sub-expression changed (pointer equality check).

pub fn updateApp(e: *anyopaque, new_fn: *anyopaque, new_arg: *anyopaque) *anyopaque {
    const old_fn = appFn(e);
    const old_arg = appArg(e);
    if (old_fn == new_fn and old_arg == new_arg) {
        return e;
    }
    return lean_expr_mk_app(new_fn, new_arg);
}

pub fn updateSort(e: *anyopaque, new_level: *anyopaque) *anyopaque {
    if (sortLevel(e) == new_level) return e;
    return lean_expr_mk_sort(new_level);
}

pub fn updateConst(e: *anyopaque, new_levels: *anyopaque) *anyopaque {
    if (constLevels(e) == new_levels) return e;
    return lean_expr_mk_const(constName(e), new_levels);
}

pub fn updateBinding(e: *anyopaque, new_domain: *anyopaque, new_body: *anyopaque) *anyopaque {
    if (bindingDomain(e) == new_domain and bindingBody(e) == new_body) return e;
    const name = bindingName(e);
    const bi = bindingInfo(e);
    return if (isLambda(e))
        lean_expr_mk_lambda(name, new_domain, new_body, bi)
    else
        lean_expr_mk_forall(name, new_domain, new_body, bi);
}

pub fn updateLet(e: *anyopaque, new_type: *anyopaque, new_value: *anyopaque, new_body: *anyopaque) *anyopaque {
    if (letType(e) == new_type and letValue(e) == new_value and letBody(e) == new_body) return e;
    const name = ctor.lean_ctor_get(e, 0) orelse @panic("update_let: name missing");
    const nd = letNonDep(e);
    return lean_expr_mk_let(name, new_type, new_value, new_body, nd);
}

pub fn updateMData(e: *anyopaque, new_expr: *anyopaque) *anyopaque {
    if (mdataExpr(e) == new_expr) return e;
    return lean_expr_mk_mdata(mdataData(e), new_expr);
}

pub fn updateProj(e: *anyopaque, new_expr: *anyopaque) *anyopaque {
    if (projExpr(e) == new_expr) return e;
    return lean_expr_mk_proj(projSname(e), projIdx(e), new_expr);
}
