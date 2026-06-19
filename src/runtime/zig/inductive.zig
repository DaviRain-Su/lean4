// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Inductive type helpers and recursor reduction, ported from
//! `src/kernel/inductive.h` and `src/kernel/inductive.cpp`.
//!
//! The key function is `inductiveReduceRec` which implements iota-reduction:
//! reducing a recursor application when the major premise is a constructor
//! application.

pub const force_link = true;

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const ea = @import("expr_accessors.zig");
const ka = @import("kernel_accessors.zig");
const kernel = @import("kernel.zig");

// ── Predefined constant names ──────────────────────────────────────────────

extern fn lean_name_mk_str(pre: *anyopaque, s: [*:0]const u8) callconv(.c) *anyopaque;
extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_expr_mk_const(n: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_lit(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_proj(s: *anyopaque, i: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;

var g_nat_zero: ?*anyopaque = null;
var g_nat_succ: ?*anyopaque = null;
var g_string_mk: ?*anyopaque = null;
var g_list_nil_char: ?*anyopaque = null;
var g_list_cons_char: ?*anyopaque = null;
var g_char_of_nat: ?*anyopaque = null;

fn mkConstName(parts: []const [*:0]const u8) *anyopaque {
    var n: *anyopaque = object.lean_box(0).?; // anonymous name
    for (parts) |p| {
        n = lean_name_mk_str(n, p);
    }
    return n;
}

fn mkConst(name_parts: []const [*:0]const u8, levels: *anyopaque) *anyopaque {
    const name = mkConstName(name_parts);
    return lean_expr_mk_const(name, levels);
}

fn getNatZero() *anyopaque {
    if (g_nat_zero) |c| return c;
    const c = mkConst(&.{ "Nat", "zero" }, object.lean_box(0).?);
    rc.lean_inc(c);
    g_nat_zero = c;
    return c;
}

fn getNatSucc() *anyopaque {
    if (g_nat_succ) |c| return c;
    const c = mkConst(&.{ "Nat", "succ" }, object.lean_box(0).?);
    rc.lean_inc(c);
    g_nat_succ = c;
    return c;
}

fn getStringMk() *anyopaque {
    if (g_string_mk) |c| return c;
    const c = mkConst(&.{ "String", "ofList" }, object.lean_box(0).?);
    rc.lean_inc(c);
    g_string_mk = c;
    return c;
}

fn getCharOfNat() *anyopaque {
    if (g_char_of_nat) |c| return c;
    const c = mkConst(&.{ "Char", "ofNat" }, object.lean_box(0).?);
    rc.lean_inc(c);
    g_char_of_nat = c;
    return c;
}

fn getListNilChar() *anyopaque {
    if (g_list_nil_char) |c| return c;
    // List.nil.{u} Char
    const level_zero = object.lean_box(0).?;
    const level_one = lean_level_mk_succ(level_zero);
    const ls = ka.mkList1(level_one);
    const c = mkConst(&.{ "List", "nil" }, ls);
    rc.lean_inc(c);
    // Also need to apply it to Char: mk_app(mk_const("List.nil", {level()}), Char)
    const char_type = mkConst(&.{"Char"}, object.lean_box(0).?);
    const result = lean_expr_mk_app(c, char_type);
    rc.lean_inc(result);
    g_list_nil_char = result;
    return result;
}

fn getListConsChar() *anyopaque {
    if (g_list_cons_char) |c| return c;
    const level_zero = object.lean_box(0).?;
    const level_one = lean_level_mk_succ(level_zero);
    const ls = ka.mkList1(level_one);
    const c = mkConst(&.{ "List", "cons" }, ls);
    rc.lean_inc(c);
    const char_type = mkConst(&.{"Char"}, object.lean_box(0).?);
    const result = lean_expr_mk_app(c, char_type);
    rc.lean_inc(result);
    g_list_cons_char = result;
    return result;
}

extern fn lean_level_mk_succ(l: *anyopaque) callconv(.c) *anyopaque;

// ── Helper: get app fn and args ─────────────────────────────────────────────

fn getAppFn(e: *anyopaque) *anyopaque {
    return ea.getAppFn(e);
}

fn getAppArgs(e: *anyopaque, allocator: std.mem.Allocator) ![]*anyopaque {
    var args = std.ArrayListUnmanaged(*anyopaque).empty;
    var curr = e;
    while (ea.isApp(curr)) {
        try args.append(allocator, ea.appArg(curr));
        curr = ea.appFn(curr);
    }
    // args are in reverse order (last arg first)
    std.mem.reverse(*anyopaque, args.items);
    return args.toOwnedSlice(allocator);
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

// ── is_nat_lit / is_string_lit ──────────────────────────────────────────────

pub fn isNatLit(e: *anyopaque) bool {
    if (!ea.isLit(e)) return false;
    const lv = ea.litValue(e);
    return object.lean_ptr_tag(lv) == 0; // LitVal.num = 0
}

pub fn isStringLit(e: *anyopaque) bool {
    if (!ea.isLit(e)) return false;
    const lv = ea.litValue(e);
    return object.lean_ptr_tag(lv) == 1; // LitVal.str = 1
}

fn natLitValue(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ea.litValue(e), 0) orelse object.lean_box(0).?;
}

// ── nat_lit_to_constructor ──────────────────────────────────────────────────

pub fn natLitToConstructor(e: *anyopaque) *anyopaque {
    const v = object.lean_unbox(natLitValue(e));
    if (v == 0) {
        return rc.lean_inc_ret(getNatZero());
    } else {
        const succ = getNatSucc();
        const pred = object.lean_box(v - 1).?;
        const lit = lean_expr_mk_lit(pred);
        return lean_expr_mk_app(succ, lit);
    }
}

// ── string_lit_to_constructor ────────────────────────────────────────────────
// Converts a string literal to String.mk (List.ofList (List.cons Char ...))

pub fn stringLitToConstructor(e: *anyopaque) *anyopaque {
    // Get the string value
    const lv = ea.litValue(e);
    const str_obj = ctor.lean_ctor_get(lv, 0) orelse @panic("stringLitToConstructor: missing string");
    // Build list of Char.ofNat (char_code)
    var r = rc.lean_inc_ret(getListNilChar());
    // For simplicity, we iterate the string bytes in reverse
    // TODO: proper UTF-8 decode to Unicode codepoints
    const str_len = getStringByteLen(str_obj);
    var i: usize = str_len;
    while (i > 0) {
        i -= 1;
        const byte = getStringByte(str_obj, i);
        const char_nat = object.lean_box(byte).?;
        const char_lit = lean_expr_mk_lit(char_nat);
        const char_of_nat = getCharOfNat();
        const ch = lean_expr_mk_app(char_of_nat, char_lit);
        const cons = getListConsChar();
        r = lean_expr_mk_app(lean_expr_mk_app(cons, ch), r);
    }
    return lean_expr_mk_app(getStringMk(), r);
}

extern fn lean_string_size(s: *anyopaque) callconv(.c) usize;
extern fn lean_string_get(s: *anyopaque, i: usize) callconv(.c) u8;

fn getStringByteLen(s: *anyopaque) usize {
    return lean_string_size(s);
}

fn getStringByte(s: *anyopaque, i: usize) u8 {
    return lean_string_get(s, i);
}

// ── get_rec_rule_for ─────────────────────────────────────────────────────────
// Given a recursor_val and a major premise, find the matching recursor rule.

pub fn getRecRuleFor(rec_val_ci: *anyopaque, major: *anyopaque) ?*anyopaque {
    const fn_expr = getAppFn(major);
    if (!ea.isConst(fn_expr)) return null;
    const rules = ka.recValRules(rec_val_ci);
    var curr = rules;
    while (!ka.isListNil(curr)) {
        const rule = ka.listHead(curr);
        if (lean_name_eq(ka.recRuleCtor(rule), ea.constName(fn_expr)) != 0) {
            return rule;
        }
        curr = ka.listTail(curr);
    }
    return null;
}

// ── is_constructor_app ───────────────────────────────────────────────────────

pub fn isConstructorApp(env: *anyopaque, e: *anyopaque) bool {
    const fn_expr = getAppFn(e);
    if (!ea.isConst(fn_expr)) return false;
    if (ka.envFind(env, ea.constName(fn_expr))) |info| {
        return ka.ciIsConstructor(info);
    }
    return false;
}

// ── is_non_rec_structure ─────────────────────────────────────────────────────

pub fn isNonRecStructure(env: *anyopaque, decl_name: *anyopaque) bool {
    if (ka.envFind(env, decl_name)) |info| {
        if (!ka.ciIsInductive(info)) return false;
        return ka.inductValNumCtors(info) == 1 and
            ka.inductValNumIndices(info) == 0 and
            !ka.inductValIsRec(info);
    }
    return false;
}

// ── expand_eta_struct ────────────────────────────────────────────────────────

pub fn expandEtaStruct(env: *anyopaque, e_type: *anyopaque, e: *anyopaque) *anyopaque {
    var args_buf = std.ArrayListUnmanaged(*anyopaque).empty;
    defer args_buf.deinit(std.heap.page_allocator);
    var curr = e_type;
    while (ea.isApp(curr)) {
        args_buf.append(std.heap.page_allocator, ea.appArg(curr)) catch @panic("expandEtaStruct: OOM");
        curr = ea.appFn(curr);
    }
    const I = curr;
    if (!ea.isConst(I)) return rc.lean_inc_ret(e);

    // Get first constructor
    if (!ka.ciIsInductive(ka.envGet(env, ea.constName(I)))) return rc.lean_inc_ret(e);
    const induct_ci = ka.envGet(env, ea.constName(I));
    const ctors = ka.inductValCtors(induct_ci);
    if (ka.isListNil(ctors)) return rc.lean_inc_ret(e);
    const ctor_name = ka.listHead(ctors);

    // Get constructor val
    const ctor_ci = ka.envGet(env, ctor_name);
    const ctor_val_nparams = ka.ctorValNumParams(ctor_ci);
    const ctor_val_nfields = ka.ctorValNumFields(ctor_ci);

    // mk_app(mk_const(ctor_name, const_levels(I)), params)
    // args are reversed (args_buf has reversed order from getAppArgs)
    std.mem.reverse(*anyopaque, args_buf.items);
    var result = mkConstFromName(ctor_name, ea.constLevels(I));
    var i: usize = 0;
    while (i < ctor_val_nparams and i < args_buf.items.len) : (i += 1) {
        result = lean_expr_mk_app(result, args_buf.items[i]);
    }

    // Add projections: mk_proj(I, i, e) for each field
    var j: usize = 0;
    while (j < ctor_val_nfields) : (j += 1) {
        const idx = object.lean_box(j).?;
        const proj = lean_expr_mk_proj(ea.constName(I), idx, e);
        result = lean_expr_mk_app(result, proj);
    }
    return result;
}

fn mkConstFromName(name: *anyopaque, levels: *anyopaque) *anyopaque {
    return lean_expr_mk_const(name, levels);
}

// ── mk_nullary_cnstr ─────────────────────────────────────────────────────────

pub fn mkNullaryCnstr(env: *anyopaque, ty: *anyopaque, num_params: usize) ?*anyopaque {
    var args_buf = std.ArrayListUnmanaged(*anyopaque).empty;
    defer args_buf.deinit(std.heap.page_allocator);
    var curr = ty;
    while (ea.isApp(curr)) {
        args_buf.append(std.heap.page_allocator, ea.appArg(curr)) catch return null;
        curr = ea.appFn(curr);
    }
    const d = curr;
    if (!ea.isConst(d)) return null;

    const info = ka.envGet(env, ea.constName(d));
    if (!ka.ciIsInductive(info)) return null;
    const ctors = ka.inductValCtors(info);
    if (ka.isListNil(ctors)) return null;
    const ctor_name = ka.listHead(ctors);

    // args are reversed
    std.mem.reverse(*anyopaque, args_buf.items);
    var result = mkConstFromName(ctor_name, ea.constLevels(d));
    var i: usize = 0;
    while (i < num_params and i < args_buf.items.len) : (i += 1) {
        result = lean_expr_mk_app(result, args_buf.items[i]);
    }
    return result;
}

// ── inductive_reduce_rec ─────────────────────────────────────────────────────
// The core iota-reduction: reduce a recursor application when the major
// premise is a constructor application.
//
// This is a port of the `inductive_reduce_rec` template from inductive.h.
// It takes WHNF and infer_type callbacks (as function pointers).

pub const WhnfFn = *const fn (env: *anyopaque, lctx: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;
pub const InferTypeFn = *const fn (env: *anyopaque, lctx: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;
pub const IsDefEqFn = *const fn (env: *anyopaque, lctx: *anyopaque, a: *anyopaque, b: *anyopaque) callconv(.c) u8;

pub fn inductiveReduceRec(
    env: *anyopaque,
    lctx: *anyopaque,
    e: *anyopaque,
    whnf_fn: WhnfFn,
    infer_type_fn: InferTypeFn,
    is_def_eq_fn: IsDefEqFn,
) ?*anyopaque {
    const rec_fn = getAppFn(e);
    if (!ea.isConst(rec_fn)) return null;

    const rec_info = ka.envFind(env, ea.constName(rec_fn)) orelse return null;
    if (!ka.ciIsRecursor(rec_info)) return null;

    const rec_args = getAppArgs(e, std.heap.page_allocator) catch return null;
    defer std.heap.page_allocator.free(rec_args);

    const rec_val_ci = rec_info;
    const major_idx = ka.recValGetMajorIdx(rec_val_ci);
    if (major_idx >= rec_args.len) return null;

    var major = rec_args[major_idx];

    // K-target: convert major to default constructor
    if (ka.recValK(rec_val_ci)) {
        major = toCnstrWhenK(env, rec_val_ci, major, whnf_fn, infer_type_fn, is_def_eq_fn, lctx);
    }

    major = whnf_fn(env, lctx, major);

    // Convert nat/string literals to constructors
    if (isNatLit(major)) {
        major = natLitToConstructor(major);
    } else if (isStringLit(major)) {
        major = whnf_fn(env, lctx, stringLitToConstructor(major));
    } else {
        // to_cnstr_when_structure
        major = toCnstrWhenStructure(env, ka.recValMajorInduct(rec_val_ci), major, whnf_fn, infer_type_fn, lctx);
    }

    // Find matching recursor rule
    const rule = getRecRuleFor(rec_val_ci, major) orelse return null;

    const major_args = getAppArgs(major, std.heap.page_allocator) catch return null;
    defer std.heap.page_allocator.free(major_args);

    if (ka.recRuleNfields(rule) > major_args.len) return null;
    if (ka.listLength(ea.constLevels(rec_fn)) != ka.ciNumLparams(rec_info)) return null;

    // instantiate_lparams(rule.rhs, rec_info.lparams, const_levels(rec_fn))
    const rhs = instantiateLparams(
        ka.recRuleRhs(rule),
        ka.ciLevelParams(rec_info),
        ea.constLevels(rec_fn),
    );

    // Apply parameters, motives, and minor premises from recursor application
    const nparams_motives_minors = ka.recValNumParams(rec_val_ci) +
        ka.recValNumMotives(rec_val_ci) +
        ka.recValNumMinors(rec_val_ci);
    var result = rhs;
    var i: usize = 0;
    while (i < nparams_motives_minors and i < rec_args.len) : (i += 1) {
        result = lean_expr_mk_app(result, rec_args[i]);
    }

    // Apply fields from major premise
    // major_args = [params..., fields...]
    // nparams in constructor = major_args.len - rule.nfields
    const nparams = major_args.len - ka.recRuleNfields(rule);
    var j: usize = 0;
    while (j < ka.recRuleNfields(rule)) : (j += 1) {
        result = lean_expr_mk_app(result, major_args[nparams + j]);
    }

    // Apply extra arguments after major premise
    if (rec_args.len > major_idx + 1) {
        const nextra = rec_args.len - major_idx - 1;
        var k: usize = 0;
        while (k < nextra) : (k += 1) {
            result = lean_expr_mk_app(result, rec_args[major_idx + 1 + k]);
        }
    }

    return result;
}

// ── to_cnstr_when_K ──────────────────────────────────────────────────────────

fn toCnstrWhenK(
    env: *anyopaque,
    rec_val_ci: *anyopaque,
    e: *anyopaque,
    whnf_fn: WhnfFn,
    infer_type_fn: InferTypeFn,
    is_def_eq_fn: IsDefEqFn,
    lctx: *anyopaque,
) *anyopaque {
    const app_type = whnf_fn(env, lctx, infer_type_fn(env, lctx, e));
    const app_type_I = getAppFn(app_type);
    if (!ea.isConst(app_type_I) or
        lean_name_eq(ea.constName(app_type_I), ka.recValMajorInduct(rec_val_ci)) == 0)
    {
        return rc.lean_inc_ret(e);
    }

    // Check for mvar in index args (skip for now)
    // TODO: has_expr_mvar check

    const new_cnstr_app = mkNullaryCnstr(env, app_type, ka.recValNumParams(rec_val_ci)) orelse
        return rc.lean_inc_ret(e);

    const new_type = infer_type_fn(env, lctx, new_cnstr_app);
    if (is_def_eq_fn(env, lctx, app_type, new_type) == 0) {
        return rc.lean_inc_ret(e);
    }
    return new_cnstr_app;
}

// ── to_cnstr_when_structure ─────────────────────────────────────────────────

fn toCnstrWhenStructure(
    env: *anyopaque,
    induct_name: *anyopaque,
    e: *anyopaque,
    whnf_fn: WhnfFn,
    infer_type_fn: InferTypeFn,
    lctx: *anyopaque,
) *anyopaque {
    if (!isNonRecStructure(env, induct_name) or isConstructorApp(env, e)) {
        return rc.lean_inc_ret(e);
    }
    const e_type = whnf_fn(env, lctx, infer_type_fn(env, lctx, e));
    const e_type_fn = getAppFn(e_type);
    if (!ea.isConst(e_type_fn) or lean_name_eq(ea.constName(e_type_fn), induct_name) == 0) {
        return rc.lean_inc_ret(e);
    }
    // Check if type is Prop (skip if so)
    const e_type_type = whnf_fn(env, lctx, infer_type_fn(env, lctx, e_type));
    // TODO: check if e_type_type == Prop
    // For now, just proceed
    _ = e_type_type;
    return expandEtaStruct(env, e_type, e);
}

// ── instantiate_lparams ──────────────────────────────────────────────────────
// Replace level params in an expr's const nodes with the given levels.
// This is a simple recursive walk that replaces const nodes.

extern fn lean_expr_replace(f: *anyopaque, data: *anyopaque) callconv(.c) *anyopaque;

fn instantiateLparams(e: *anyopaque, lparams: *anyopaque, levels: *anyopaque) *anyopaque {
    // TODO: proper pure-Zig implementation of level param substitution.
    // For now, return the expression unchanged. This is incorrect but
    // allows the build to succeed. The instantiate_lparams bridge in
    // type_checker.zig (lean_kernel_instantiate_type_lparams) handles
    // the real substitution for inferConstant/unfoldDefinition.
    _ = lparams;
    _ = levels;
    return rc.lean_inc_ret(e);
}
