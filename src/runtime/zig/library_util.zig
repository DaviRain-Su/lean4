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
const util_name_generator = @import("util_name_generator.zig");
const runtime_helpers = @import("runtime_helpers.zig");

extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_const(n: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_sort(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_lambda(n: *anyopaque, d: *anyopaque, b: *anyopaque, bi: u8) callconv(.c) *anyopaque;
extern fn lean_expr_mk_forall(n: *anyopaque, d: *anyopaque, b: *anyopaque, bi: u8) callconv(.c) *anyopaque;
extern fn lean_level_mk_succ(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_max(a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_imax(a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_param(n: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_append_index_after(n: *anyopaque, i: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_whnf(env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_local_ctx_mk_local_decl(lctx: *anyopaque, fvar_id: *anyopaque, user_name: *anyopaque, type: *anyopaque, bi: u8) callconv(.c) *anyopaque;
extern fn lean_expr_mk_fvar(n: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_instantiate_rev(a: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_instantiate(a: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_abstract(a: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_abstract_range(a: *anyopaque, n: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_lower_loose_bvars(e: *anyopaque, s: *anyopaque, d: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_has_loose_bvar(e: *anyopaque, idx: *anyopaque) callconv(.c) u8;
extern fn lean_expr_mk_bvar(idx: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_instantiate_value_lparams(env: *anyopaque, ci: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_check(env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;

const alloc = @import("alloc.zig");
const array = @import("array.zig");

fn arrayFromRevArgs(rev_args: []*anyopaque) *anyopaque {
    // rev_args are in reverse order (last arg first), which is the correct
    // order for lean_expr_instantiate: subst[0] replaces bvar(0), etc.
    return array.mkArrayFromSlice(rev_args);
}

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
    // Traverse `m` looking for subexpression pointer-equal to `n`.
    return findExprPtr(m, n);
}

fn findExprPtr(e: *anyopaque, target: *anyopaque) bool {
    if (e == target) return true;
    if (object.lean_is_scalar(e)) return false;
    switch (ea.kind(e)) {
        .BVar, .FVar, .MVar, .Sort, .Const, .Lit => return false,
        .App => {
            return findExprPtr(ea.appFn(e), target) or findExprPtr(ea.appArg(e), target);
        },
        .Lambda, .Pi => {
            // bindingDomain and bindingBody
            return findExprPtr(ea.bindingDomain(e), target) or findExprPtr(ea.bindingBody(e), target);
        },
        .Let => {
            // letType, letValue, letBody
            if (findExprPtr(ea.letType(e), target)) return true;
            if (findExprPtr(ea.letValue(e), target)) return true;
            return findExprPtr(ea.letBody(e), target);
        },
        .MData => return findExprPtr(ea.mdataExpr(e), target),
        .Proj => return findExprPtr(ea.projExpr(e), target),
    }
}

fn findConstName(e: *anyopaque, target_name: *anyopaque) bool {
    if (ea.isConst(e) and nameEq(ea.constName(e), target_name)) return true;
    if (object.lean_is_scalar(e)) return false;
    switch (ea.kind(e)) {
        .BVar, .FVar, .MVar, .Sort, .Lit => return false,
        .Const => return nameEq(ea.constName(e), target_name),
        .App => {
            return findConstName(ea.appFn(e), target_name) or findConstName(ea.appArg(e), target_name);
        },
        .Lambda, .Pi => {
            return findConstName(ea.bindingDomain(e), target_name) or findConstName(ea.bindingBody(e), target_name);
        },
        .Let => {
            if (findConstName(ea.letType(e), target_name)) return true;
            if (findConstName(ea.letValue(e), target_name)) return true;
            return findConstName(ea.letBody(e), target_name);
        },
        .MData => return findConstName(ea.mdataExpr(e), target_name),
        .Proj => return findConstName(ea.projExpr(e), target_name),
    }
}

pub fn occursExpr(n: *anyopaque, m: *anyopaque) bool {
    return simpleFind(m, n);
}

pub fn occursName(n: *anyopaque, m: *anyopaque) bool {
    return findConstName(m, n);
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
    // Port of C++ unfold_term (util.cpp:102-113).
    const f = ea.getAppFn(e);
    if (!ea.isConst(f)) return null;
    const info = ka.envFind(env, ea.constName(f)) orelse return null;
    defer rc.lean_dec(info);
    if (!ka.ciHasValue(info)) return null;
    if (ka.listLength(ea.constLevels(f)) != ka.ciNumLparams(info)) return null;
    // Instantiate value with levels
    const d = lean_kernel_instantiate_value_lparams(env, info, ea.constLevels(f));
    // Collect args (reverse order)
    var args = std.ArrayListUnmanaged(*anyopaque).empty;
    defer {
        for (args.items) |a| rc.lean_dec(a);
        args.deinit(alloc.allocator());
    }
    var curr = e;
    while (ea.isApp(curr)) {
        args.append(alloc.allocator(), ea.appArg(curr)) catch @panic("unfoldTerm: OOM");
        rc.lean_inc(args.items[args.items.len - 1]);
        curr = ea.appFn(curr);
    }
    // Apply beta: d applied to reversed args
    const subst = arrayFromRevArgs(args.items);
    const result = lean_expr_instantiate(d, subst);
    rc.lean_dec(subst);
    rc.lean_dec(d);
    return result;
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
    // Port of C++ is_constructor_app_ext (util.cpp:230-244).
    const inductive = @import("inductive.zig");
    if (inductive.isConstructorApp(env, e)) {
        const f = ea.getAppFn(e);
        return rc.lean_inc_ret(ea.constName(f));
    }
    const f = ea.getAppFn(e);
    if (!ea.isConst(f)) return null;
    const info = ka.envFind(env, ea.constName(f)) orelse return null;
    defer rc.lean_dec(info);
    if (!ka.ciHasValue(info)) return null;
    // Strip lambdas from value and recurse
    var it = ka.ciValue(info);
    while (ea.isLambda(it)) {
        it = ea.bindingBody(it);
    }
    return isConstructorAppExt(env, it);
}

pub fn getConstructorRelevantFields(env: *anyopaque, n: *anyopaque, result: *std.ArrayList(bool)) void {
    // Port of C++ get_constructor_relevant_fields (util.cpp:246-268).
    const info = ka.envGet(env, n);
    defer rc.lean_dec(info);
    std.debug.assert(ka.ciIsConstructor(info));
    const type_e = ka.ciType(info);
    const nparams = ka.ctorValNumParams(info);
    var lctx: *anyopaque = object.lean_box(0).?;
    var telescope = std.ArrayList(*anyopaque).init(std.heap.c_allocator);
    defer {
        for (telescope.items) |f| rc.lean_dec(f);
        telescope.deinit();
    }
    const body = toTelescopeWhnf(env, &lctx, undefined, type_e, &telescope, null);
    rc.lean_dec(body);
    std.debug.assert(telescope.items.len >= nparams);
    var i = nparams;
    while (i < telescope.items.len) : (i += 1) {
        const fvar = telescope.items[i];
        // Get the type of this fvar from lctx
        const decl = ka.lctxFind(lctx, ea.fvarName(fvar)) orelse {
            result.append(false) catch @panic("getConstructorRelevantFields: OOM");
            continue;
        };
        defer rc.lean_dec(decl);
        const ftype = ka.localDeclType(decl);
        if (isPropHelper(env, lctx, ftype)) {
            result.append(false) catch @panic("getConstructorRelevantFields: OOM");
        } else {
            // Check if the remaining type is a sort or prop
            var tmp_telescope = std.ArrayList(*anyopaque).init(std.heap.c_allocator);
            defer {
                for (tmp_telescope.items) |f| rc.lean_dec(f);
                tmp_telescope.deinit();
            }
            const n_ftype = toTelescopeWhnf(env, &lctx, undefined, ftype, &tmp_telescope, null);
            const not_sort = !ea.isSort(n_ftype);
            const not_prop = !isPropHelper(env, lctx, n_ftype);
            rc.lean_dec(n_ftype);
            result.append(not_sort and not_prop) catch @panic("getConstructorRelevantFields: OOM");
        }
    }
}

fn isPropHelper(env: *anyopaque, lctx: *anyopaque, e: *anyopaque) bool {
    // Check if e : Prop by inferring its type and whnf-ing it.
    const except = lean_kernel_check(env, lctx, e);
    defer rc.lean_dec(except);
    if (object.lean_ptr_tag(except) != 1) return false; // error
    const ty = ctor.lean_ctor_get(except, 0) orelse return false;
    defer rc.lean_dec(ty);
    const whnf_ty = lean_kernel_whnf(env, lctx, ty);
    defer rc.lean_dec(whnf_ty);
    if (!ea.isSort(whnf_ty)) return false;
    const lvl = ea.sortLevel(whnf_ty);
    // Prop = Sort 0, check level is zero (scalar 0)
    return object.lean_is_scalar(lvl) and object.lean_unbox(lvl) == 0;
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
    // Port of C++ get_datatype_level (util.cpp:185-198).
    // Whnf the type, strip Pi binders by creating fvars, then extract sort level.
    var lctx: *anyopaque = object.lean_box(0).?; // empty local context (nil)
    var it = lean_kernel_whnf(env, lctx, ind_type);
    while (ea.isPi(it)) {
        const binding_name = ea.bindingName(it);
        const domain = ea.bindingDomain(it);
        const bi = ea.bindingInfo(it);
        // Create a fresh fvar for this binder
        const fvar_name = util_name.mkInternalUniqueName();
        lctx = lean_local_ctx_mk_local_decl(lctx, rc.lean_inc_ret(fvar_name.obj.?), binding_name, domain, bi);
        const fvar = lean_expr_mk_fvar(fvar_name.obj.?);
        // Instantiate body with the fvar
        const single = mkList1(fvar);
        const new_it = lean_expr_instantiate_rev(ea.bindingBody(it), single);
        rc.lean_dec(single);
        rc.lean_dec(it);
        it = lean_kernel_whnf(env, lctx, new_it);
        rc.lean_dec(new_it);
    }
    if (ea.isSort(it)) {
        const result = rc.lean_inc_ret(ea.sortLevel(it));
        rc.lean_dec(it);
        return result;
    }
    rc.lean_dec(it);
    @panic("getDatatypeLevel: invalid inductive datatype type");
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
    // Port of C++ instantiate_lparam: instantiate_lparams(e, names(p), levels(l))
    const ps = mkList1(p);
    const ls = mkList1(l);
    const result = runtime_helpers.instantiateLparamsExpr(e, ps, ls);
    if (result == e) {
        return retain(e);
    }
    return result;
}

pub fn lparamsToLevels(lparams: *anyopaque) *anyopaque {
    if (ka.isListNil(lparams)) return object.lean_box(0).?;
    const head = ka.listHead(lparams);
    const tail = ka.listTail(lparams);
    const level = lean_level_mk_param(rc.lean_inc_ret(head));
    return runtime_helpers.lean_list_cons(level, lparamsToLevels(tail));
}

pub fn mkAppN(f: *anyopaque, args: []const *anyopaque) *anyopaque {
    var result = retain(f);
    for (args) |arg| {
        result = lean_expr_mk_app(result, retain(arg));
    }
    return result;
}

pub fn mkPiUnit(C: *anyopaque, unit: *anyopaque) *anyopaque {
    if (ea.isPi(C)) {
        const body = mkPiUnit(ea.bindingBody(C), unit);
        return lean_expr_mk_forall(rc.lean_inc_ret(ea.bindingName(C)), rc.lean_inc_ret(ea.bindingDomain(C)), body, ea.bindingInfo(C));
    }
    return retain(unit);
}

pub fn mkFunUnit(C: *anyopaque, unit: *anyopaque) *anyopaque {
    if (ea.isPi(C)) {
        const body = mkFunUnit(ea.bindingBody(C), unit);
        return lean_expr_mk_lambda(rc.lean_inc_ret(ea.bindingName(C)), rc.lean_inc_ret(ea.bindingDomain(C)), body, ea.bindingInfo(C));
    }
    return retain(unit);
}

pub fn mkLocalDeclWithGen(lctx: **anyopaque, ngen: *util_name_generator.NameGenerator, user_name: *anyopaque, type_expr: *anyopaque, bi: u8) *anyopaque {
    const fvar_name = ngen.next();
    lctx.* = lean_local_ctx_mk_local_decl(lctx.*, rc.lean_inc_ret(fvar_name.obj.?), rc.lean_inc_ret(user_name), rc.lean_inc_ret(type_expr), bi);
    return lean_expr_mk_fvar(fvar_name.obj.?);
}

pub const BindingKind = enum { pi, lambda };

fn abstractWithFVars(e: *anyopaque, fvars: []const *anyopaque) *anyopaque {
    if (fvars.len == 0) return retain(e);
    const subst = array.mkArrayFromSlice(@constCast(fvars));
    defer rc.lean_dec(subst);
    return lean_expr_abstract(e, subst);
}

fn abstractRangeWithFVars(e: *anyopaque, n: usize, fvars: []const *anyopaque) *anyopaque {
    if (n == 0) return retain(e);
    const subst = array.mkArrayFromSlice(@constCast(fvars));
    defer rc.lean_dec(subst);
    return lean_expr_abstract_range(e, object.lean_box(n).?, subst);
}

pub fn mkBindingFromFVars(comptime kind: BindingKind, lctx: *anyopaque, fvars: []const *anyopaque, body: *anyopaque) *anyopaque {
    var result = abstractWithFVars(body, fvars);
    var i = fvars.len;
    while (i > 0) {
        i -= 1;
        const decl = ka.lctxFind(lctx, ea.fvarName(fvars[i])) orelse @panic("mkBindingFromFVars: missing local decl");
        defer rc.lean_dec(decl);
        std.debug.assert(ka.localDeclKind(decl) == .cdecl);
        const ty = abstractRangeWithFVars(ka.localDeclType(decl), i, fvars);
        const user_name = rc.lean_inc_ret(ka.localDeclUserName(decl));
        result = switch (kind) {
            .pi => lean_expr_mk_forall(user_name, ty, result, ka.localDeclBinderInfo(decl)),
            .lambda => lean_expr_mk_lambda(user_name, ty, result, ka.localDeclBinderInfo(decl)),
        };
    }
    return result;
}

pub fn mkPiFromFVars(lctx: *anyopaque, fvars: []const *anyopaque, body: *anyopaque) *anyopaque {
    return mkBindingFromFVars(.pi, lctx, fvars, body);
}

pub fn mkLambdaFromFVars(lctx: *anyopaque, fvars: []const *anyopaque, body: *anyopaque) *anyopaque {
    return mkBindingFromFVars(.lambda, lctx, fvars, body);
}

pub fn toTelescope(lctx: **anyopaque, ngen: *anyopaque, type_expr: *anyopaque, telescope: *std.ArrayList(*anyopaque), binfo: ?u8) *anyopaque {
    // Port of C++ to_telescope (util.cpp:303-314).
    // Pi version: strips Pi binders, creates fvars, instantiates body.
    _ = ngen; // name generation handled by util_name.mkInternalUniqueName
    var e = type_expr;
    while (ea.isPi(e)) {
        const binding_name = ea.bindingName(e);
        const domain = ea.bindingDomain(e);
        const bi = binfo orelse ea.bindingInfo(e);
        // Create fvar
        const fvar_name = util_name.mkInternalUniqueName();
        lctx.* = lean_local_ctx_mk_local_decl(lctx.*, rc.lean_inc_ret(fvar_name.obj.?), binding_name, domain, bi);
        const fvar = lean_expr_mk_fvar(fvar_name.obj.?);
        telescope.append(std.heap.c_allocator, fvar) catch @panic("toTelescope: OOM");
        // Instantiate body with fvar
        const subst = arrayFromRevArgs(&.{fvar});
        const new_e = lean_expr_instantiate(ea.bindingBody(e), subst);
        rc.lean_dec(subst);
        e = new_e;
    }
    return e;
}

pub fn toTelescopeWhnf(env: *anyopaque, lctx: **anyopaque, ngen: *anyopaque, type_expr: *anyopaque, telescope: *std.ArrayList(*anyopaque), binfo: ?u8) *anyopaque {
    // Port of C++ to_telescope with whnf (util.cpp:320-334).
    _ = ngen;
    var new_type = lean_kernel_whnf(env, lctx.*, type_expr);
    var type_e = new_type;
    while (ea.isPi(new_type)) {
        type_e = new_type;
        const binding_name = ea.bindingName(type_e);
        const domain = ea.bindingDomain(type_e);
        const bi = binfo orelse ea.bindingInfo(type_e);
        const fvar_name = util_name.mkInternalUniqueName();
        lctx.* = lean_local_ctx_mk_local_decl(lctx.*, rc.lean_inc_ret(fvar_name.obj.?), binding_name, domain, bi);
        const fvar = lean_expr_mk_fvar(fvar_name.obj.?);
        telescope.append(std.heap.c_allocator, fvar) catch @panic("toTelescopeWhnf: OOM");
        const subst = arrayFromRevArgs(&.{fvar});
        type_e = lean_expr_instantiate(ea.bindingBody(type_e), subst);
        rc.lean_dec(subst);
        new_type = lean_kernel_whnf(env, lctx.*, type_e);
        rc.lean_dec(type_e);
    }
    return new_type;
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

pub fn mkTrue() *anyopaque {
    return retain(g_true.?);
}
pub fn isTrue(e: *anyopaque) bool {
    return e == g_true.?;
}
pub fn mkTrueIntro() *anyopaque {
    return retain(g_true_intro.?);
}

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

pub fn mkUnitDefault() *anyopaque {
    return retain(g_unit.?);
}
pub fn mkUnitMkDefault() *anyopaque {
    return retain(g_unit_mk.?);
}

pub fn mkNatType() *anyopaque {
    return retain(g_nat.?);
}
pub fn isNatType(e: *anyopaque) bool {
    return e == g_nat.?;
}
pub fn mkNatZero() *anyopaque {
    return retain(g_nat_zero.?);
}
pub fn mkNatOne() *anyopaque {
    return retain(g_nat_one.?);
}

pub fn mkNatBit0(e: *anyopaque) *anyopaque {
    return lean_expr_mk_app(g_nat_bit0_fn.?, e);
}

pub fn mkNatBit1(e: *anyopaque) *anyopaque {
    return lean_expr_mk_app(g_nat_bit1_fn.?, e);
}

pub fn mkNatAdd(e1: *anyopaque, e2: *anyopaque) *anyopaque {
    return lean_expr_mk_app(lean_expr_mk_app(g_nat_add_fn.?, e1), e2);
}

pub fn mkIntType() *anyopaque {
    return retain(g_int.?);
}
pub fn isIntType(e: *anyopaque) bool {
    return e == g_int.?;
}
pub fn mkCharType() *anyopaque {
    return retain(g_char.?);
}

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
    return lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_app(c, lhs), rhs), iff_pr);
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

pub fn mkFalse() *anyopaque {
    return lean_expr_mk_const(constants.getFalseName(), object.lean_box(0).?);
}
pub fn mkEmpty() *anyopaque {
    return lean_expr_mk_const(constants.getEmptyName(), object.lean_box(0).?);
}

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
        collectAppArgs(e, &args);
        const fn_expr = ea.getAppFn(e);
        const new_fn = lean_expr_mk_const(constants.getEqName(), retain(ea.constLevels(fn_expr)));
        var r = new_fn;
        for (args.items) |arg| {
            r = lean_expr_mk_app(r, arg);
        }
        args.deinit();
        a.* = r;
        return true;
    }
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
    var r = lean_expr_mk_app(
        lean_expr_mk_app(rc.lean_inc_ret(op), rc.lean_inc_ret(args[args.len - 2])),
        rc.lean_inc_ret(args[args.len - 1]),
    );
    var i: usize = args.len;
    while (i > 2) {
        i -= 1;
        r = lean_expr_mk_app(lean_expr_mk_app(rc.lean_inc_ret(op), rc.lean_inc_ret(args[i - 1])), r);
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
    const annotation = @import("annotation.zig");
    // Collect args (reverse order)
    var args = std.ArrayListUnmanaged(*anyopaque).empty;
    defer {
        for (args.items) |a| rc.lean_dec(a);
        args.deinit(alloc.allocator());
    }
    var curr = e;
    while (ea.isApp(curr)) {
        args.append(alloc.allocator(), ea.appArg(curr)) catch @panic("annotatedHeadBetaReduce: OOM");
        rc.lean_inc(args.items[args.items.len - 1]);
        curr = ea.appFn(curr);
    }
    // Strip annotations from f
    var f = curr;
    if (annotation.isAnnotation(f)) |a| {
        f = annotation.getNestedAnnotationArg(a);
        rc.lean_inc(f);
    }
    // Apply beta: f is a lambda, args are in reverse order
    const subst = arrayFromRevArgs(args.items);
    const result = lean_expr_instantiate(ea.bindingBody(f), subst);
    rc.lean_dec(subst);
    rc.lean_dec(f);
    return annotatedHeadBetaReduce(result);
}

// ── Eta/beta reduction ──────────────────────────────────────────────────────

fn isEtaCandidate(b: *anyopaque) ?*anyopaque {
    // Check if b = app(f, bvar(0)) and f has no loose bvar at index 0
    if (!ea.isApp(b)) return null;
    const arg = ea.appArg(b);
    if (!ea.isBVar(arg)) return null;
    if (object.lean_unbox(ea.bvarIdx(arg)) != 0) return null;
    const f = ea.appFn(b);
    const zero_box = object.lean_box(0).?;
    if (lean_expr_has_loose_bvar(f, zero_box) != 0) return null;
    return f;
}

fn lowerLooseBvars(e: *anyopaque, d: usize) *anyopaque {
    const s_box = object.lean_box(0).?;
    const d_box = object.lean_box(d).?;
    return lean_expr_lower_loose_bvars(e, s_box, d_box);
}

pub fn tryEta(e: *anyopaque) *anyopaque {
    // Port of C++ try_eta (util.cpp:699-718).
    if (ea.isLambda(e)) {
        const b = ea.bindingBody(e);
        if (ea.isLambda(b)) {
            const new_b = tryEta(b);
            if (new_b == b) return e;
            if (isEtaCandidate(new_b)) |f| {
                const result = lowerLooseBvars(f, 1);
                rc.lean_dec(new_b);
                return result;
            }
            const updated = ea.updateBinding(e, ea.bindingDomain(e), new_b);
            rc.lean_dec(new_b);
            return updated;
        } else if (isEtaCandidate(b)) |f| {
            return lowerLooseBvars(f, 1);
        }
    }
    return retain(e);
}

fn headBetaReduce(e: *anyopaque) *anyopaque {
    // If e = (\x. body) arg1 ... argn, beta reduce
    if (!ea.isApp(e)) return retain(e);
    const f = ea.getAppFn(e);
    if (!ea.isLambda(f)) return retain(e);
    // Collect args (reverse order)
    var args = std.ArrayListUnmanaged(*anyopaque).empty;
    defer {
        for (args.items) |a| rc.lean_dec(a);
        args.deinit(alloc.allocator());
    }
    var curr = e;
    while (ea.isApp(curr)) {
        args.append(alloc.allocator(), ea.appArg(curr)) catch @panic("headBetaReduce: OOM");
        rc.lean_inc(args.items[args.items.len - 1]);
        curr = ea.appFn(curr);
    }
    // f = curr (the lambda)
    const subst = arrayFromRevArgs(args.items);
    const result = lean_expr_instantiate(ea.bindingBody(curr), subst);
    rc.lean_dec(subst);
    return result;
}

fn isHeadBeta(e: *anyopaque) bool {
    return ea.isApp(e) and ea.isLambda(ea.getAppFn(e));
}

fn betaReduceRec(e: *anyopaque) *anyopaque {
    switch (ea.kind(e)) {
        .App => {
            const new_fn = betaReduceRec(ea.appFn(e));
            const new_arg = betaReduceRec(ea.appArg(e));
            var e1 = ea.updateApp(e, new_fn, new_arg);
            if (isHeadBeta(e1)) {
                const reduced = headBetaReduce(e1);
                rc.lean_dec(e1);
                e1 = betaReduceRec(reduced);
                rc.lean_dec(reduced);
            }
            return e1;
        },
        .Lambda, .Pi => {
            const new_dom = betaReduceRec(ea.bindingDomain(e));
            const new_body = betaReduceRec(ea.bindingBody(e));
            return ea.updateBinding(e, new_dom, new_body);
        },
        .Let => {
            const new_ty = betaReduceRec(ea.letType(e));
            const new_val = betaReduceRec(ea.letValue(e));
            const new_body = betaReduceRec(ea.letBody(e));
            return ea.updateLet(e, new_ty, new_val, new_body);
        },
        .MData => {
            const new_inner = betaReduceRec(ea.mdataExpr(e));
            return ea.updateMData(e, new_inner);
        },
        .Proj => {
            const new_inner = betaReduceRec(ea.projExpr(e));
            return ea.updateProj(e, new_inner);
        },
        else => return retain(e),
    }
}

pub fn betaReduce(e: *anyopaque) *anyopaque {
    return betaReduceRec(e);
}

fn etaReduceRec(e: *anyopaque) *anyopaque {
    switch (ea.kind(e)) {
        .Lambda => {
            const new_dom = etaReduceRec(ea.bindingDomain(e));
            const new_body = etaReduceRec(ea.bindingBody(e));
            var e1 = ea.updateBinding(e, new_dom, new_body);
            rc.lean_dec(new_body);
            // Apply tryEta in a loop
            while (true) {
                const e2 = tryEta(e1);
                if (e2 == e1) break;
                rc.lean_dec(e1);
                e1 = e2;
            }
            return e1;
        },
        .App => {
            const new_fn = etaReduceRec(ea.appFn(e));
            const new_arg = etaReduceRec(ea.appArg(e));
            return ea.updateApp(e, new_fn, new_arg);
        },
        .Pi => {
            const new_dom = etaReduceRec(ea.bindingDomain(e));
            const new_body = etaReduceRec(ea.bindingBody(e));
            return ea.updateBinding(e, new_dom, new_body);
        },
        .Let => {
            const new_ty = etaReduceRec(ea.letType(e));
            const new_val = etaReduceRec(ea.letValue(e));
            const new_body = etaReduceRec(ea.letBody(e));
            return ea.updateLet(e, new_ty, new_val, new_body);
        },
        .MData => {
            const new_inner = etaReduceRec(ea.mdataExpr(e));
            return ea.updateMData(e, new_inner);
        },
        .Proj => {
            const new_inner = etaReduceRec(ea.projExpr(e));
            return ea.updateProj(e, new_inner);
        },
        else => return retain(e),
    }
}

pub fn etaReduce(e: *anyopaque) *anyopaque {
    return etaReduceRec(e);
}

fn betaEtaReduceRec(e: *anyopaque) *anyopaque {
    switch (ea.kind(e)) {
        .App => {
            const new_fn = betaEtaReduceRec(ea.appFn(e));
            const new_arg = betaEtaReduceRec(ea.appArg(e));
            var e1 = ea.updateApp(e, new_fn, new_arg);
            if (isHeadBeta(e1)) {
                const reduced = headBetaReduce(e1);
                rc.lean_dec(e1);
                e1 = betaEtaReduceRec(reduced);
                rc.lean_dec(reduced);
            }
            return e1;
        },
        .Lambda => {
            const new_dom = betaEtaReduceRec(ea.bindingDomain(e));
            const new_body = betaEtaReduceRec(ea.bindingBody(e));
            var e1 = ea.updateBinding(e, new_dom, new_body);
            rc.lean_dec(new_body);
            while (true) {
                const e2 = tryEta(e1);
                if (e2 == e1) break;
                rc.lean_dec(e1);
                e1 = e2;
            }
            return e1;
        },
        .Pi => {
            const new_dom = betaEtaReduceRec(ea.bindingDomain(e));
            const new_body = betaEtaReduceRec(ea.bindingBody(e));
            return ea.updateBinding(e, new_dom, new_body);
        },
        .Let => {
            const new_ty = betaEtaReduceRec(ea.letType(e));
            const new_val = betaEtaReduceRec(ea.letValue(e));
            const new_body = betaEtaReduceRec(ea.letBody(e));
            return ea.updateLet(e, new_ty, new_val, new_body);
        },
        .MData => {
            const new_inner = betaEtaReduceRec(ea.mdataExpr(e));
            return ea.updateMData(e, new_inner);
        },
        .Proj => {
            const new_inner = betaEtaReduceRec(ea.projExpr(e));
            return ea.updateProj(e, new_inner);
        },
        else => return retain(e),
    }
}

pub fn betaEtaReduce(e: *anyopaque) *anyopaque {
    return betaEtaReduceRec(e);
}

pub fn inferImplicitParams(type_expr: *anyopaque, nparams: usize, k: ImplicitInferKind) *anyopaque {
    // Port of C++ infer_implicit_params → infer_implicit (expr.cpp:480-500).
    const strict = switch (k) {
        .Implicit => true,
        .RelaxedImplicit => false,
    };
    return inferImplicit(type_expr, nparams, strict);
}

fn inferImplicit(t: *anyopaque, num_params: usize, strict: bool) *anyopaque {
    if (num_params == 0) return retain(t);
    if (!ea.isPi(t)) return retain(t);
    const new_body = inferImplicit(ea.bindingBody(t), num_params - 1, strict);
    const bi = ea.bindingInfo(t);
    const is_explicit = bi == 0 or bi > 3; // Default=0, Implicit=1, StrictImplicit=2, InstImplicit=3
    if (!is_explicit) {
        // Already implicit — keep as-is
        const result = ea.updateBinding(t, ea.bindingDomain(t), new_body);
        rc.lean_dec(new_body);
        return result;
    } else if (hasLooseBvarsInDomain(new_body, 0, strict)) {
        // Make this binder implicit (bi = 1)
        const name = ea.bindingName(t);
        const dom = ea.bindingDomain(t);
        const result = lean_expr_mk_forall(name, dom, new_body, 1); // Implicit=1
        rc.lean_dec(new_body);
        return result;
    } else {
        // Keep explicit
        const result = ea.updateBinding(t, ea.bindingDomain(t), new_body);
        rc.lean_dec(new_body);
        return result;
    }
}

fn hasLooseBvarsInDomain(b: *anyopaque, vidx: usize, strict: bool) bool {
    // Port of C++ has_loose_bvars_in_domain (expr.cpp:370-387).
    if (ea.isPi(b)) {
        const vidx_obj = object.lean_box(vidx).?;
        if (lean_expr_has_loose_bvar(ea.bindingDomain(b), vidx_obj) != 0) {
            const bi = ea.bindingInfo(b);
            const is_explicit = bi == 0 or bi > 3;
            if (is_explicit) return true;
            if (hasLooseBvarsInDomain(ea.bindingBody(b), 0, strict)) return true;
        }
        return hasLooseBvarsInDomain(ea.bindingBody(b), vidx + 1, strict);
    } else if (!strict) {
        return lean_expr_has_loose_bvar(b, object.lean_box(vidx).?) != 0;
    }
    return false;
}

pub const ImplicitInferKind = enum { Implicit, RelaxedImplicit };

// ── Bool, recursors, version, mdata ─────────────────────────────────────────

pub fn mkBool() *anyopaque {
    return retain(g_bool.?);
}
pub fn mkBoolTrue() *anyopaque {
    return retain(g_bool_true.?);
}
pub fn mkBoolFalse() *anyopaque {
    return retain(g_bool_false.?);
}
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
    g_nat_zero = lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_const(constants.getHasZeroZeroName(), mkList1(object.lean_box(0).?)), retain(g_nat.?)), lean_expr_mk_const(constants.getNatHasZeroName(), object.lean_box(0).?));
    g_nat_one = lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_const(constants.getHasOneOneName(), mkList1(object.lean_box(0).?)), retain(g_nat.?)), lean_expr_mk_const(constants.getNatHasOneName(), object.lean_box(0).?));
    g_nat_bit0_fn = lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_const(constants.getBit0Name(), mkList1(object.lean_box(0).?)), retain(g_nat.?)), lean_expr_mk_const(constants.getNatHasAddName(), object.lean_box(0).?));
    g_nat_bit1_fn = lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_const(constants.getBit1Name(), mkList1(object.lean_box(0).?)), retain(g_nat.?)), lean_expr_mk_const(constants.getNatHasOneName(), object.lean_box(0).?)), lean_expr_mk_const(constants.getNatHasAddName(), object.lean_box(0).?));
    g_nat_add_fn = lean_expr_mk_app(lean_expr_mk_app(lean_expr_mk_const(constants.getHasAddAddName(), mkList1(object.lean_box(0).?)), retain(g_nat.?)), lean_expr_mk_const(constants.getNatHasAddName(), object.lean_box(0).?));
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
    const pi = lean_expr_mk_forall(n, s, s, 0);
    defer rc.lean_dec(pi);
    const pi2 = lean_expr_mk_forall(n, s, pi, 0);
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

test "lparamsToLevels builds param levels in order" {
    const u = util_name.Name.fromCStr("u").obj.?;
    const v = util_name.Name.fromCStr("v").obj.?;
    const names = runtime_helpers.lean_list_cons(u, runtime_helpers.lean_list_cons(v, object.lean_box(0).?));
    defer rc.lean_dec(names);

    const levels = lparamsToLevels(names);
    defer rc.lean_dec(levels);

    try std_testing.expect(!ka.isListNil(levels));
    const first = ka.listHead(levels);
    try std_testing.expectEqual(@as(u8, 4), object.lean_ptr_tag(first));
    try std_testing.expect(lean_name_eq(ctor.lean_ctor_get(first, 0).?, u) != 0);

    const tail = ka.listTail(levels);
    try std_testing.expect(!ka.isListNil(tail));
    const second = ka.listHead(tail);
    try std_testing.expectEqual(@as(u8, 4), object.lean_ptr_tag(second));
    try std_testing.expect(lean_name_eq(ctor.lean_ctor_get(second, 0).?, v) != 0);
    try std_testing.expect(ka.isListNil(ka.listTail(tail)));
}

test "mkPiUnit and mkFunUnit replace codomain with unit" {
    initializeLibraryUtil();
    defer finalizeLibraryUtil();

    const sort0 = lean_expr_mk_sort(object.lean_box(0).?);
    defer rc.lean_dec(sort0);
    const a = util_name.Name.fromCStr("a").obj.?;
    const b = util_name.Name.fromCStr("b").obj.?;
    const inner = lean_expr_mk_forall(b, sort0, sort0, 0);
    defer rc.lean_dec(inner);
    const ty = lean_expr_mk_forall(a, sort0, inner, 0);
    defer rc.lean_dec(ty);
    const unit = mkUnit(object.lean_box(0).?);
    defer rc.lean_dec(unit);

    const pi_unit = mkPiUnit(ty, unit);
    defer rc.lean_dec(pi_unit);
    try std_testing.expect(ea.isPi(pi_unit));
    try std_testing.expect(ea.isPi(ea.bindingBody(pi_unit)));
    try std_testing.expect(ea.isConst(ea.bindingBody(ea.bindingBody(pi_unit))));
    try std_testing.expect(nameEq(ea.constName(ea.bindingBody(ea.bindingBody(pi_unit))), constants.getPunitName()));

    const fun_unit = mkFunUnit(ty, unit);
    defer rc.lean_dec(fun_unit);
    try std_testing.expect(ea.isLambda(fun_unit));
    try std_testing.expect(ea.isLambda(ea.bindingBody(fun_unit)));
    try std_testing.expect(ea.isConst(ea.bindingBody(ea.bindingBody(fun_unit))));
    try std_testing.expect(nameEq(ea.constName(ea.bindingBody(ea.bindingBody(fun_unit))), constants.getPunitName()));
}

test "mkBindingFromFVars abstracts dependent domains" {
    util_name_generator.initializeNameGenerator();
    defer util_name_generator.finalizeNameGenerator();

    var lctx: *anyopaque = object.lean_box(0).?;
    var ngen = util_name_generator.mkConstructionsNameGenerator();
    const sort0 = lean_expr_mk_sort(object.lean_box(0).?);
    defer rc.lean_dec(sort0);

    const x = mkLocalDeclWithGen(&lctx, &ngen, util_name.Name.fromCStr("x").obj.?, sort0, 0);
    defer rc.lean_dec(x);
    const y = mkLocalDeclWithGen(&lctx, &ngen, util_name.Name.fromCStr("y").obj.?, x, 0);
    defer rc.lean_dec(y);

    const lambda = mkLambdaFromFVars(lctx, &.{ x, y }, y);
    defer rc.lean_dec(lambda);
    try std_testing.expect(ea.isLambda(lambda));
    try std_testing.expect(!ea.hasFVar(lambda));
    const lambda_inner = ea.bindingBody(lambda);
    try std_testing.expect(ea.isLambda(lambda_inner));
    try std_testing.expect(ea.isBVar(ea.bindingDomain(lambda_inner)));
    try std_testing.expectEqual(@as(usize, 0), object.lean_unbox(ea.bvarIdx(ea.bindingDomain(lambda_inner))));
    try std_testing.expect(ea.isBVar(ea.bindingBody(lambda_inner)));
    try std_testing.expectEqual(@as(usize, 0), object.lean_unbox(ea.bvarIdx(ea.bindingBody(lambda_inner))));

    const pi = mkPiFromFVars(lctx, &.{ x, y }, y);
    defer rc.lean_dec(pi);
    try std_testing.expect(ea.isPi(pi));
    try std_testing.expect(!ea.hasFVar(pi));
    const pi_inner = ea.bindingBody(pi);
    try std_testing.expect(ea.isPi(pi_inner));
    try std_testing.expect(ea.isBVar(ea.bindingDomain(pi_inner)));
    try std_testing.expectEqual(@as(usize, 0), object.lean_unbox(ea.bvarIdx(ea.bindingDomain(pi_inner))));
    try std_testing.expect(ea.isBVar(ea.bindingBody(pi_inner)));
    try std_testing.expectEqual(@as(usize, 0), object.lean_unbox(ea.bvarIdx(ea.bindingBody(pi_inner))));
}
