// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Runtime helper functions that bridge C string operations to Lean objects.
//!
//! These functions are needed by inductive.zig, quot.zig, and type_checker.zig
//! to construct Lean Name/String objects from C strings. In the cutover build,
//! the C++ versions are weakened so these Zig implementations take precedence.

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const string = @import("string.zig");

// Lean stdlib exports (provided by libInit/libStd when linked)
extern fn lean_name_mk_string(p: *anyopaque, s: *anyopaque) callconv(.c) *anyopaque;

/// Construct a Lean Name.str from a C string prefix and C string suffix.
/// This wraps lean_name_mk_string by first converting the C string to a
/// Lean String object.
pub export fn lean_name_mk_str(pre: *anyopaque, s: [*:0]const u8) callconv(.c) *anyopaque {
    const str_obj = string.lean_mk_string(s);
    return lean_name_mk_string(rc.lean_inc_ret(pre), str_obj);
}

/// Get the byte length of a Lean string (excluding null terminator).
pub export fn lean_string_size(s: *anyopaque) callconv(.c) usize {
    const str: *extern struct {
        m_header: extern struct { m_rc: i32, m_cs_sz: u16, m_other: u8, m_tag: u8 },
        m_size: usize,
        m_capacity: usize,
        m_data: [0]u8,
    } = @ptrCast(@alignCast(s));
    return str.m_size - 1; // m_size includes null terminator
}

/// Get byte at index i from a Lean string.
pub export fn lean_string_get(s: *anyopaque, i: usize) callconv(.c) u8 {
    const str: *extern struct {
        m_header: extern struct { m_rc: i32, m_cs_sz: u16, m_other: u8, m_tag: u8 },
        m_size: usize,
        m_capacity: usize,
        m_data: [0]u8,
    } = @ptrCast(@alignCast(s));
    const bytes: [*]const u8 = @ptrCast(&str.m_data);
    return bytes[i];
}

/// Construct a List cons cell: cons(head, tail).
/// List α = nil (scalar 0) | cons(head, tail)
/// The constructor tag is 1 (cons).
pub export fn lean_list_cons(head: *anyopaque, tail: *anyopaque) callconv(.c) *anyopaque {
    const result = alloc.lean_alloc_ctor(1, 2, 0);
    ctor.lean_ctor_set(result, 0, head);
    ctor.lean_ctor_set(result, 1, tail);
    return result;
}

const alloc = @import("alloc.zig");
const ka = @import("kernel_accessors.zig");
const ea = @import("expr_accessors.zig");

// ── Level param instantiation ───────────────────────────────────────────────
// Replace C++ kernel functions instantiate_type_lparams/instantiate_value_lparams.
// Level tags: Zero=scalar, Succ=1, Max=2, IMax=3, Param=4, MVar=5

extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;

const LevelKind = enum(u8) { Zero = 0, Succ = 1, Max = 2, IMax = 3, Param = 4, MVar = 5 };

inline fn levelKind(l: *anyopaque) LevelKind {
    if (object.lean_is_scalar(l)) return .Zero;
    return @enumFromInt(object.lean_ptr_tag(l));
}
inline fn levelSuccOf(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 0) orelse @panic("level succ_of on malformed level");
}
inline fn levelLhs(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 0) orelse @panic("level lhs on malformed level");
}
inline fn levelRhs(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 1) orelse @panic("level rhs on malformed level");
}
inline fn levelId(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 0) orelse @panic("level_id on malformed level");
}

extern fn lean_level_mk_succ(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_max(l1: *anyopaque, l2: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_imax(l1: *anyopaque, l2: *anyopaque) callconv(.c) *anyopaque;

/// Find the replacement for a param level by walking (lparams, ls) in parallel.
/// Returns the matching level from ls, or null if the param name is not found.
fn findLevelReplacement(param_name: *anyopaque, lparams: *anyopaque, ls: *anyopaque) ?*anyopaque {
    var lp = lparams;
    var lv = ls;
    while (true) {
        if (object.lean_is_scalar(lp)) return null; // nil list
        if (object.lean_is_scalar(lv)) return null; // levels shorter than lparams
        const lp_head = ctor.lean_ctor_get(lp, 0) orelse @panic("findLevelReplacement: lp head");
        const lp_tail = ctor.lean_ctor_get(lp, 1) orelse object.lean_box(0).?;
        const lv_head = ctor.lean_ctor_get(lv, 0) orelse @panic("findLevelReplacement: lv head");
        const lv_tail = ctor.lean_ctor_get(lv, 1) orelse object.lean_box(0).?;
        if (lean_name_eq(lp_head, param_name) != 0) return lv_head;
        lp = lp_tail;
        lv = lv_tail;
    }
}

/// Recursively replace level params in a level with the corresponding levels from ls.
fn instantiateLevel(l: *anyopaque, lparams: *anyopaque, ls: *anyopaque) *anyopaque {
    switch (levelKind(l)) {
        .Zero, .MVar => return rc.lean_inc_ret(l),
        .Param => {
            if (findLevelReplacement(levelId(l), lparams, ls)) |replacement| {
                return rc.lean_inc_ret(replacement);
            }
            return rc.lean_inc_ret(l);
        },
        .Succ => {
            const arg = levelSuccOf(l);
            const new_arg = instantiateLevel(arg, lparams, ls);
            if (new_arg == arg) {
                rc.lean_dec(new_arg);
                return rc.lean_inc_ret(l);
            }
            return lean_level_mk_succ(new_arg);
        },
        .Max => {
            const lhs = levelLhs(l);
            const rhs = levelRhs(l);
            const new_lhs = instantiateLevel(lhs, lparams, ls);
            const new_rhs = instantiateLevel(rhs, lparams, ls);
            if (new_lhs == lhs and new_rhs == rhs) {
                rc.lean_dec(new_lhs);
                rc.lean_dec(new_rhs);
                return rc.lean_inc_ret(l);
            }
            return lean_level_mk_max(new_lhs, new_rhs);
        },
        .IMax => {
            const lhs = levelLhs(l);
            const rhs = levelRhs(l);
            const new_lhs = instantiateLevel(lhs, lparams, ls);
            const new_rhs = instantiateLevel(rhs, lparams, ls);
            if (new_lhs == lhs and new_rhs == rhs) {
                rc.lean_dec(new_lhs);
                rc.lean_dec(new_rhs);
                return rc.lean_inc_ret(l);
            }
            return lean_level_mk_imax(new_lhs, new_rhs);
        },
    }
}

/// Map instantiateLevel over a List Level (const_levels).
fn mapLevels(levels: *anyopaque, lparams: *anyopaque, ls: *anyopaque) *anyopaque {
    if (object.lean_is_scalar(levels)) return rc.lean_inc_ret(levels); // nil
    const head = ctor.lean_ctor_get(levels, 0) orelse @panic("mapLevels: head");
    const tail = ctor.lean_ctor_get(levels, 1) orelse object.lean_box(0).?;
    const new_head = instantiateLevel(head, lparams, ls);
    const new_tail = mapLevels(tail, lparams, ls);
    if (new_head == head and new_tail == tail) {
        rc.lean_dec(new_head);
        rc.lean_dec(new_tail);
        return rc.lean_inc_ret(levels);
    }
    return lean_list_cons(new_head, new_tail);
}

/// Recursively replace level params in an expression's const/sort nodes.
/// Mirrors C++ instantiate_lparams: only const and sort nodes carry levels.
pub fn instantiateLparamsExpr(e: *anyopaque, lparams: *anyopaque, ls: *anyopaque) *anyopaque {
    if (!ea.hasLevelParam(e)) return rc.lean_inc_ret(e);
    switch (ea.kind(e)) {
        .Const => {
            const levels = ea.constLevels(e);
            const new_levels = mapLevels(levels, lparams, ls);
            return ea.updateConst(e, new_levels);
        },
        .Sort => {
            const level = ea.sortLevel(e);
            const new_level = instantiateLevel(level, lparams, ls);
            return ea.updateSort(e, new_level);
        },
        .App => {
            const fn_e = ea.appFn(e);
            const arg = ea.appArg(e);
            const new_fn = instantiateLparamsExpr(fn_e, lparams, ls);
            const new_arg = instantiateLparamsExpr(arg, lparams, ls);
            return ea.updateApp(e, new_fn, new_arg);
        },
        .Lambda, .Pi => {
            const dom = ea.bindingDomain(e);
            const body = ea.bindingBody(e);
            const new_dom = instantiateLparamsExpr(dom, lparams, ls);
            const new_body = instantiateLparamsExpr(body, lparams, ls);
            return ea.updateBinding(e, new_dom, new_body);
        },
        .Let => {
            const ty = ea.letType(e);
            const val = ea.letValue(e);
            const body = ea.letBody(e);
            const new_ty = instantiateLparamsExpr(ty, lparams, ls);
            const new_val = instantiateLparamsExpr(val, lparams, ls);
            const new_body = instantiateLparamsExpr(body, lparams, ls);
            return ea.updateLet(e, new_ty, new_val, new_body);
        },
        .MData => {
            const inner = ea.mdataExpr(e);
            const new_inner = instantiateLparamsExpr(inner, lparams, ls);
            return ea.updateMData(e, new_inner);
        },
        .Proj => {
            const inner = ea.projExpr(e);
            const new_inner = instantiateLparamsExpr(inner, lparams, ls);
            return ea.updateProj(e, new_inner);
        },
        .BVar, .FVar, .MVar, .Lit => return rc.lean_inc_ret(e),
    }
}

/// Instantiate level params in a constant's type.
/// env, ci (ConstantInfo), ls (List Level) → Expr
pub export fn lean_kernel_instantiate_type_lparams(env: *anyopaque, ci: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque {
    _ = env;
    const ty = ka.ciType(ci);
    if (object.lean_is_scalar(ls)) {
        // nil levels: no substitution needed
        return rc.lean_inc_ret(ty);
    }
    if (!ea.hasLevelParam(ty)) {
        return rc.lean_inc_ret(ty);
    }
    const lparams = ka.ciLevelParams(ci);
    return instantiateLparamsExpr(ty, lparams, ls);
}

/// Instantiate level params in a constant's value.
/// env, ci (ConstantInfo), ls (List Level) → Expr
pub export fn lean_kernel_instantiate_value_lparams(env: *anyopaque, ci: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque {
    _ = env;
    const val = ka.ciValue(ci);
    if (object.lean_is_scalar(ls)) {
        return rc.lean_inc_ret(val);
    }
    if (!ea.hasLevelParam(val)) {
        return rc.lean_inc_ret(val);
    }
    const lparams = ka.ciLevelParams(ci);
    return instantiateLparamsExpr(val, lparams, ls);
}
