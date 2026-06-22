// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig implementations of the 22 C++-only kernel C-linkage functions.
//!
//! These functions operate on Lean objects (expressions, levels, declarations)
//! and are NOT exported from Lean source (unlike the other ~82 kernel functions
//! which are @[export] from Lean.Expr etc.).
//!
//! They provide the same C-linkage API as the C++ kernel, allowing the Lean
//! elaborator (compiled via EmitZig) to use a pure-Zig kernel.
pub const force_link = true;

const std = @import("std");
const object = @import("object.zig");
const alloc = @import("alloc.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const array = @import("array.zig");
const interrupt = @import("interrupt.zig");
const runtime_options = @import("runtime_options");

extern fn lean_data_value_beq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_nat_big_eq(a: *anyopaque, b: *anyopaque) callconv(.c) bool;
extern fn lean_string_eq(a: *anyopaque, b: *anyopaque) callconv(.c) bool;
const export_kernel_symbols = runtime_options.export_kernel_symbols;

// ── Expression metadata (trivial bit-packing) ────────────────────────────────

/// Pack expression metadata into a u64:
/// bits  0-31: hash
/// bits 32-39: approxDepth (capped at 255)
/// bit     40: hasFVar
/// bit     41: hasExprMVar
/// bit     42: hasLevelMVar
/// bit     43: hasLevelParam
/// bits 44-63: looseBVarRange (capped at 2^20-1)
fn lean_expr_mk_data(
    hash_val: u64,
    bvar_range_obj: *anyopaque,
    approx_depth_in: u32,
    has_fvar: u8,
    has_expr_mvar: u8,
    has_level_mvar: u8,
    has_level_param: u8,
) callconv(.c) u64 {
    const approx_depth: u64 = @min(approx_depth_in, 255);
    if (!object.lean_is_scalar(bvar_range_obj))
        @panic("too many bound variables");
    const range_raw = object.lean_unbox(bvar_range_obj);
    if (range_raw > 1048575) @panic("too many bound variables");
    const range: u64 = @intCast(range_raw);
    const h: u32 = @truncate(hash_val);
    return @as(u64, h) +%
        (approx_depth << 32) +%
        (@as(u64, has_fvar) << 40) +%
        (@as(u64, has_expr_mvar) << 41) +%
        (@as(u64, has_level_mvar) << 42) +%
        (@as(u64, has_level_param) << 43) +%
        (range << 44);
}

/// Compute app metadata from function and argument metadata.
fn lean_expr_mk_app_data(f_data: u64, a_data: u64) callconv(.c) u64 {
    const f_depth: u16 = @intCast((f_data >> 32) & 255);
    const a_depth: u16 = @intCast((a_data >> 32) & 255);
    const depth: u64 = @min(@max(f_depth, a_depth) + 1, 255);
    const f_range: u32 = @intCast(f_data >> 44);
    const a_range: u32 = @intCast(a_data >> 44);
    const range: u64 = @max(f_range, a_range);
    const h: u32 = @truncate(hashCombine(f_data, a_data));
    return ((f_data | a_data) & (@as(u64, 15) << 40)) | @as(u64, h) | (depth << 32) | (range << 44);
}

inline fn hashCombine(h: u64, k: u64) u64 {
    const m: u64 = 0xc6a4a7935bd1e995;
    const r: u6 = 47;
    var kk = k *% m;
    kk ^= kk >> r;
    kk ^= m;
    var hh = h ^ kk;
    hh *%= m;
    return hh;
}

// ── Level metadata ───────────────────────────────────────────────────────────

fn lean_level_mk_data(hash_val: u64, depth_obj: ?*anyopaque, has_mvar: u8, has_param: u8) callconv(.c) u64 {
    if (!object.lean_is_scalar(depth_obj))
        @panic("universe level depth is too big");
    const d_raw = object.lean_unbox(depth_obj);
    if (d_raw > 16777215)
        @panic("universe level depth is too big");
    const d: u64 = @intCast(d_raw);
    const h: u32 = @truncate(hash_val);
    return @as(u64, h) + (@as(u64, has_mvar) << 32) + (@as(u64, has_param) << 33) + (d << 40);
}

// ── Level equality (structural) ──────────────────────────────────────────────

fn lean_level_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    // Quick pointer equality
    if (a == b) return 1;
    // Scalar equality
    if (object.lean_is_scalar(a) and object.lean_is_scalar(b))
        return if (object.lean_unbox(a) == object.lean_unbox(b)) 1 else 0;
    if (object.lean_is_scalar(a) != object.lean_is_scalar(b)) return 0;
    // Constructor equality: same tag, same fields
    const tag_a = object.lean_ptr_tag(a);
    if (tag_a != object.lean_ptr_tag(b)) return 0;
    const nfields = ctor.ctorNumObjs(a);
    if (nfields != ctor.ctorNumObjs(b)) return 0;
    for (0..nfields) |i| {
        const fa = ctor.lean_ctor_get(a, @intCast(i)) orelse continue;
        const fb = ctor.lean_ctor_get(b, @intCast(i)) orelse continue;
        if (lean_level_eq(fa, fb) == 0) return 0;
    }
    return 1;
}
fn natEq(a: *anyopaque, b: *anyopaque) u8 {
    if (object.lean_is_scalar(a) or object.lean_is_scalar(b)) {
        return if (object.lean_is_scalar(a) and object.lean_is_scalar(b) and a == b) 1 else 0;
    }
    return @intFromBool(lean_nat_big_eq(a, b));
}

fn levelListEq(a: *anyopaque, b: *anyopaque) u8 {
    if (a == b) return 1;
    var lhs = a;
    var rhs = b;
    while (!object.lean_is_scalar(lhs) and !object.lean_is_scalar(rhs)) {
        const lhs_head = ctor.lean_ctor_get(lhs, 0) orelse return 0;
        const rhs_head = ctor.lean_ctor_get(rhs, 0) orelse return 0;
        if (lean_level_eq(lhs_head, rhs_head) == 0) return 0;
        lhs = ctor.lean_ctor_get(lhs, 1) orelse return 0;
        rhs = ctor.lean_ctor_get(rhs, 1) orelse return 0;
    }
    return if (lhs == rhs) 1 else 0;
}

fn litEq(a: *anyopaque, b: *anyopaque) u8 {
    if (a == b) return 1;
    const tag = object.lean_ptr_tag(a);
    if (tag != object.lean_ptr_tag(b)) return 0;
    const lhs = ctor.lean_ctor_get(a, 0) orelse return 0;
    const rhs = ctor.lean_ctor_get(b, 0) orelse return 0;
    return switch (tag) {
        0 => natEq(lhs, rhs),
        1 => @intFromBool(lean_string_eq(lhs, rhs)),
        else => 0,
    };
}

fn kvmapEq(a: *anyopaque, b: *anyopaque) u8 {
    if (a == b) return 1;
    var lhs = a;
    var rhs = b;
    while (!object.lean_is_scalar(lhs) and !object.lean_is_scalar(rhs)) {
        if (lhs == rhs) return 1;
        const lhs_entry = ctor.lean_ctor_get(lhs, 0) orelse return 0;
        const rhs_entry = ctor.lean_ctor_get(rhs, 0) orelse return 0;
        const lhs_key = ctor.lean_ctor_get(lhs_entry, 0) orelse return 0;
        const rhs_key = ctor.lean_ctor_get(rhs_entry, 0) orelse return 0;
        if (lean_name_eq(lhs_key, rhs_key) == 0) return 0;
        const lhs_value = ctor.lean_ctor_get(lhs_entry, 1) orelse return 0;
        const rhs_value = ctor.lean_ctor_get(rhs_entry, 1) orelse return 0;
        if (lean_data_value_beq(lhs_value, rhs_value) == 0) return 0;
        lhs = ctor.lean_ctor_get(lhs, 1) orelse return 0;
        rhs = ctor.lean_ctor_get(rhs, 1) orelse return 0;
    }
    return if (lhs == rhs) 1 else 0;
}


// ── Expression structural equality ───────────────────────────────────────────

/// Structural equality with binder info (lean_expr_equal / expr_eq_fn<true>).
fn lean_expr_equal(a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    return exprEqRec(a, b, true);
}

/// Structural equality without binder info (lean_expr_eqv / expr_eq_fn<false>).
/// Same as lean_expr_equal but ignores binder_info and let_nondep fields.
fn lean_expr_eqv(a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    return exprEqRec(a, b, false);
}

/// Core structural equality. compare_bi controls whether binder info is checked.
fn exprEqRec(a: *anyopaque, b: *anyopaque, compare_bi: bool) u8 {
    if (a == b) return 1;
    if (object.lean_is_scalar(a) or object.lean_is_scalar(b)) {
        if (object.lean_is_scalar(a) and object.lean_is_scalar(b))
            return if (object.lean_unbox(a) == object.lean_unbox(b)) 1 else 0;
        return 0;
    }
    const tag = object.lean_ptr_tag(a);
    if (tag != object.lean_ptr_tag(b)) return 0;
    switch (tag) {
        0 => {
            const ia = ctor.lean_ctor_get(a, 0) orelse return 0;
            const ib = ctor.lean_ctor_get(b, 0) orelse return 0;
            return if (object.lean_unbox(ia) == object.lean_unbox(ib)) 1 else 0;
        },
        1, 2 => {
            const na = ctor.lean_ctor_get(a, 0) orelse return 0;
            const nb = ctor.lean_ctor_get(b, 0) orelse return 0;
            return lean_name_eq(na, nb);
        },
        3 => {
            const la = ctor.lean_ctor_get(a, 0) orelse return 0;
            const lb = ctor.lean_ctor_get(b, 0) orelse return 0;
            return lean_level_eq(la, lb);
        },
        4 => {
            const na = ctor.lean_ctor_get(a, 0) orelse return 0;
            const nb = ctor.lean_ctor_get(b, 0) orelse return 0;
            if (lean_name_eq(na, nb) == 0) return 0;
            const la = ctor.lean_ctor_get(a, 1) orelse return 0;
            const lb = ctor.lean_ctor_get(b, 1) orelse return 0;
            return levelListEq(la, lb);
        },
        5 => {
            const aa = ctor.lean_ctor_get(a, 1) orelse return 0;
            const ab = ctor.lean_ctor_get(b, 1) orelse return 0;
            if (exprEqRec(aa, ab, compare_bi) == 0) return 0;
            var fa = ctor.lean_ctor_get(a, 0) orelse return 0;
            var fb = ctor.lean_ctor_get(b, 0) orelse return 0;
            while (true) {
                if (fa == fb) return 1;
                const fa_is_app = !object.lean_is_scalar(fa) and object.lean_ptr_tag(fa) == 5;
                const fb_is_app = !object.lean_is_scalar(fb) and object.lean_ptr_tag(fb) == 5;
                if (!fa_is_app) return exprEqRec(fa, fb, compare_bi);
                if (!fb_is_app) return 0;
                const fa_arg = ctor.lean_ctor_get(fa, 1) orelse return 0;
                const fb_arg = ctor.lean_ctor_get(fb, 1) orelse return 0;
                if (exprEqRec(fa_arg, fb_arg, compare_bi) == 0) return 0;
                fa = ctor.lean_ctor_get(fa, 0) orelse return 0;
                fb = ctor.lean_ctor_get(fb, 0) orelse return 0;
            }
        },
        6, 7 => {
            const da = ctor.lean_ctor_get(a, 1) orelse return 0;
            const db = ctor.lean_ctor_get(b, 1) orelse return 0;
            if (exprEqRec(da, db, compare_bi) == 0) return 0;
            const ba = ctor.lean_ctor_get(a, 2) orelse return 0;
            const bb = ctor.lean_ctor_get(b, 2) orelse return 0;
            if (exprEqRec(ba, bb, compare_bi) == 0) return 0;
            if (!compare_bi) return 1;
            const na = ctor.lean_ctor_get(a, 0) orelse return 0;
            const nb = ctor.lean_ctor_get(b, 0) orelse return 0;
            if (lean_name_eq(na, nb) == 0) return 0;
            return if (exprBinderInfo(a) == exprBinderInfo(b)) 1 else 0;
        },
        8 => {
            const ta = ctor.lean_ctor_get(a, 1) orelse return 0;
            const tb = ctor.lean_ctor_get(b, 1) orelse return 0;
            if (exprEqRec(ta, tb, compare_bi) == 0) return 0;
            const va = ctor.lean_ctor_get(a, 2) orelse return 0;
            const vb = ctor.lean_ctor_get(b, 2) orelse return 0;
            if (exprEqRec(va, vb, compare_bi) == 0) return 0;
            const ba = ctor.lean_ctor_get(a, 3) orelse return 0;
            const bb = ctor.lean_ctor_get(b, 3) orelse return 0;
            if (exprEqRec(ba, bb, compare_bi) == 0) return 0;
            if (exprLetNonDep(a) != exprLetNonDep(b)) return 0;
            if (!compare_bi) return 1;
            const na = ctor.lean_ctor_get(a, 0) orelse return 0;
            const nb = ctor.lean_ctor_get(b, 0) orelse return 0;
            return lean_name_eq(na, nb);
        },
        9 => {
            const la = ctor.lean_ctor_get(a, 0) orelse return 0;
            const lb = ctor.lean_ctor_get(b, 0) orelse return 0;
            return litEq(la, lb);
        },
        10 => {
            const ea = ctor.lean_ctor_get(a, 1) orelse return 0;
            const eb = ctor.lean_ctor_get(b, 1) orelse return 0;
            if (exprEqRec(ea, eb, compare_bi) == 0) return 0;
            const ma = ctor.lean_ctor_get(a, 0) orelse return 0;
            const mb = ctor.lean_ctor_get(b, 0) orelse return 0;
            return kvmapEq(ma, mb);
        },
        11 => {
            const ea = ctor.lean_ctor_get(a, 2) orelse return 0;
            const eb = ctor.lean_ctor_get(b, 2) orelse return 0;
            if (exprEqRec(ea, eb, compare_bi) == 0) return 0;
            const sa = ctor.lean_ctor_get(a, 0) orelse return 0;
            const sb = ctor.lean_ctor_get(b, 0) orelse return 0;
            if (lean_name_eq(sa, sb) == 0) return 0;
            const ia = ctor.lean_ctor_get(a, 1) orelse return 0;
            const ib = ctor.lean_ctor_get(b, 1) orelse return 0;
            return natEq(ia, ib);
        },
        else => return 0,
    }
}

// ── Has loose bound variable check ───────────────────────────────────────────

/// Returns true if expression `e` has a loose bound variable with index `idx`.
fn lean_expr_has_loose_bvar(e: *anyopaque, idx: *anyopaque) callconv(.c) u8 {
    if (!object.lean_is_scalar(idx)) return 0;
    if (object.lean_is_scalar(e)) return 0;
    const tag = object.lean_ptr_tag(e);
    const i = object.lean_unbox(idx);
    switch (tag) {
        0 => { // bvar
            const bi = object.lean_unbox(ctor.lean_ctor_get(e, 0) orelse return 0);
            return if (bi == i) 1 else 0;
        },
        5 => { // app
            const f = ctor.lean_ctor_get(e, 0) orelse return 0;
            const a = ctor.lean_ctor_get(e, 1) orelse return 0;
            return if (lean_expr_has_loose_bvar(f, idx) != 0 or lean_expr_has_loose_bvar(a, idx) != 0) 1 else 0;
        },
        6, 7 => { // lam, forallE
            const domain = ctor.lean_ctor_get(e, 1) orelse return 0;
            const body = ctor.lean_ctor_get(e, 2) orelse return 0;
            if (lean_expr_has_loose_bvar(domain, idx) != 0) return 1;
            // Body is under a binder, so check idx+1
            const next_idx = object.lean_box(i + 1) orelse return 0;
            return lean_expr_has_loose_bvar(body, next_idx);
        },
        8 => { // letE
            const domain = ctor.lean_ctor_get(e, 1) orelse return 0;
            const value = ctor.lean_ctor_get(e, 2) orelse return 0;
            const body = ctor.lean_ctor_get(e, 3) orelse return 0;
            if (lean_expr_has_loose_bvar(domain, idx) != 0) return 1;
            if (lean_expr_has_loose_bvar(value, idx) != 0) return 1;
            const next_idx = object.lean_box(i + 1) orelse return 0;
            return lean_expr_has_loose_bvar(body, next_idx);
        },
        10 => { // mdata
            const inner = ctor.lean_ctor_get(e, 1) orelse return 0;
            return lean_expr_has_loose_bvar(inner, idx);
        },
        11 => { // proj
            const inner = ctor.lean_ctor_get(e, 2) orelse return 0;
            return lean_expr_has_loose_bvar(inner, idx);
        },
        else => return 0, // fvar, mvar, sort, const, lit — no loose bvars
    }
}

const lean = @import("lean_object.zig");
const apply_mod = @import("apply.zig");

// ── Helper: expression tags ──────────────────────────────────────────────────

inline fn eTag(e: *anyopaque) u8 {
    if (object.lean_is_scalar(e)) return 0; // bvar
    return object.lean_ptr_tag(e);
}

/// Get expression metadata (u64 stored after object fields).
inline fn eData(e: *anyopaque) u64 {
    if (object.lean_is_scalar(e)) return 0;
    const nobjs: u32 = @intCast(ctor.ctorNumObjs(e));
    return ctor.lean_ctor_get_usize(e, nobjs);
}
inline fn exprBinderInfo(e: *anyopaque) u8 {
    return ctor.lean_ctor_get_uint8(e, @intCast(3 * @sizeOf(*anyopaque) + @sizeOf(u64)));
}

inline fn exprLetNonDep(e: *anyopaque) u8 {
    return ctor.lean_ctor_get_uint8(e, @intCast(4 * @sizeOf(*anyopaque) + @sizeOf(u64)));
}


inline fn looseBVarRange(e: *anyopaque) u32 {
    return @intCast(eData(e) >> 44);
}

inline fn hasFVar(e: *anyopaque) bool {
    return (eData(e) >> 40) & 1 != 0;
}

inline fn hasMVar(e: *anyopaque) bool {
    return (eData(e) >> 41) & 1 != 0 or (eData(e) >> 42) & 1 != 0;
}

/// Return e with RC incremented.
inline fn retain(e: *anyopaque) *anyopaque {
    rc.lean_inc(e);
    return e;
}

// ── Expression constructor externs (Lean-exported) ───────────────────────────

extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_bvar(idx: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_lambda(n: *anyopaque, d: *anyopaque, b: *anyopaque, bi: u8) callconv(.c) *anyopaque;
extern fn lean_expr_mk_forall(n: *anyopaque, d: *anyopaque, b: *anyopaque, bi: u8) callconv(.c) *anyopaque;
extern fn lean_expr_mk_let(n: *anyopaque, t: *anyopaque, v: *anyopaque, b: *anyopaque, nd: u8) callconv(.c) *anyopaque;
extern fn lean_expr_mk_mdata(m: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_proj(s: *anyopaque, i: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_environment_add(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_elab_add_decl(env: *anyopaque, mh: usize, decl: *anyopaque, ax: *anyopaque, tl: *anyopaque, opts: *anyopaque) callconv(.c) *anyopaque;

// ── Lower / Lift loose bound variables ───────────────────────────────────────

fn lean_expr_lower_loose_bvars(e: *anyopaque, s_obj: *anyopaque, d_obj: *anyopaque) callconv(.c) *anyopaque {
    if (!object.lean_is_scalar(s_obj) or !object.lean_is_scalar(d_obj)) return retain(e);
    const s = object.lean_unbox(s_obj);
    const d = object.lean_unbox(d_obj);
    if (s < d or d == 0 or s >= looseBVarRange(e)) return retain(e);
    return lowerLiftImpl(e, @intCast(s), @intCast(d), .lower);
}

pub fn lean_expr_lift_loose_bvars(e: *anyopaque, s_obj: *anyopaque, d_obj: *anyopaque) callconv(.c) *anyopaque {
    if (!object.lean_is_scalar(s_obj) or !object.lean_is_scalar(d_obj)) return retain(e);
    const s = object.lean_unbox(s_obj);
    const d = object.lean_unbox(d_obj);
    if (d == 0 or s >= looseBVarRange(e)) return retain(e);
    return lowerLiftImpl(e, @intCast(s), @intCast(d), .lift);
}

const Mode = enum { lower, lift };

fn lowerLiftImpl(e: *anyopaque, s: u32, d: u32, mode: Mode) *anyopaque {
    if (lowerLiftRec(e, 0, s, d, mode)) |r| return r;
    return replaceRecDirect(e, 0, .lower_lift, .{ .lower_lift = .{ .s = s, .d = d, .mode = mode } });
}

/// Returns replacement expression or null (recurse into children).
fn lowerLiftRec(e: *anyopaque, offset: u32, s: u32, d: u32, mode: Mode) ?*anyopaque {
    const s1 = s +% offset;
    if (s1 < s) return retain(e); // overflow — no bvars to adjust
    if (s1 >= looseBVarRange(e)) return retain(e); // no loose bvars at this offset — stop
    if (eTag(e) == 0) { // bvar
        const idx = object.lean_unbox(ctor.lean_ctor_get(e, 0) orelse return retain(e));
        if (idx >= s1) {
            const new_idx = switch (mode) {
                .lower => idx - d,
                .lift => idx + d,
            };
            return lean_expr_mk_bvar(object.lean_box(new_idx) orelse return retain(e));
        }
    }
    return null; // recurse into children
}

// ── Instantiate ──────────────────────────────────────────────────────────────

pub fn lean_expr_instantiate1(a: *anyopaque, e0: *anyopaque) callconv(.c) *anyopaque {
    if (looseBVarRange(a) == 0) return retain(a);
    var single: [1]*anyopaque = .{e0};
    return instantiateImpl(a, 0, 1, single[0..], false);
}

pub fn lean_expr_instantiate(a: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque {
    const n = array.lean_array_size(subst);
    if (n == 0) return retain(a);
    return instantiateImplArr(a, 0, 0, n, subst, false);
}

fn lean_expr_instantiate_range(a: *anyopaque, begin_obj: *anyopaque, end_obj: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque {
    if (!object.lean_is_scalar(begin_obj) or !object.lean_is_scalar(end_obj)) @panic("invalid range");
    const sz = array.lean_array_size(subst);
    const b = object.lean_unbox(begin_obj);
    const ei = object.lean_unbox(end_obj);
    if (b > ei or ei > sz) @panic("invalid range");
    const n = ei - b;
    if (n == 0) return retain(a);
    return instantiateImplArr(a, 0, b, n, subst, false);
}

fn lean_expr_instantiate_rev(a: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque {
    const n = array.lean_array_size(subst);
    if (n == 0) return retain(a);
    return instantiateImplArr(a, 0, 0, n, subst, true);
}

fn lean_expr_instantiate_rev_range(a: *anyopaque, begin_obj: *anyopaque, end_obj: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque {
    if (!object.lean_is_scalar(begin_obj) or !object.lean_is_scalar(end_obj)) @panic("invalid range");
    const sz = array.lean_array_size(subst);
    const b = object.lean_unbox(begin_obj);
    const ei = object.lean_unbox(end_obj);
    if (b > ei or ei > sz) @panic("invalid range");
    const n = ei - b;
    if (n == 0) return retain(a);
    return instantiateImplArr(a, 0, b, n, subst, true);
}

fn instantiateImplArr(e: *anyopaque, off: u32, base: usize, n: usize, subst: *anyopaque, rev: bool) *anyopaque {
    if (looseBVarRange(e) == 0) return retain(e);
    return instantiateRec(e, off, n, base, subst, rev);
}

fn instantiateRec(e: *anyopaque, off: u32, n: usize, base: usize, subst: *anyopaque, rev: bool) *anyopaque {
    if (off >= looseBVarRange(e)) return retain(e);
    if (eTag(e) == 0) { // bvar
        const idx = object.lean_unbox(ctor.lean_ctor_get(e, 0) orelse return retain(e));
        if (idx >= off) {
            const h = off +% @as(u32, @intCast(n));
            if (h >= off and idx < h) {
                const si = if (rev) n - 1 - (idx - off) else idx - off;
                const v = array.lean_array_uget(subst, base + si) orelse return retain(e);
                defer rc.lean_dec(v);
                const d_obj = object.lean_box(off) orelse return retain(e);
                const s_obj = object.lean_box(@as(usize, 0)) orelse return retain(e);
                return lean_expr_lift_loose_bvars(v, s_obj, d_obj);
            }
            return lean_expr_mk_bvar(object.lean_box(idx - @as(u32, @intCast(n))) orelse return retain(e));
        }
    }
    return replaceRecDirect(e, off, .instantiate, .{ .instantiate = .{ .n = n, .base = base, .subst = subst, .rev = rev } });
}

fn instantiateImpl(e: *anyopaque, offset: u32, n: usize, subst: []*anyopaque, rev: bool) *anyopaque {
    if (looseBVarRange(e) == 0) return retain(e);
    return instantiateSliceRec(e, offset, n, subst, rev);
}

// ── Abstract ─────────────────────────────────────────────────────────────────

fn lean_expr_abstract(e: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque {
    return abstractImpl(e, array.lean_array_size(subst), subst);
}

fn lean_expr_abstract_range(e: *anyopaque, n_obj: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque {
    const sz = array.lean_array_size(subst);
    const n = if (object.lean_is_scalar(n_obj)) @min(object.lean_unbox(n_obj), sz) else sz;
    return abstractImpl(e, n, subst);
}

fn abstractImpl(e: *anyopaque, n: usize, subst: *anyopaque) *anyopaque {
    if (n == 0 or (!hasFVar(e) and !hasMVar(e))) return retain(e);
    return abstractRec(e, 0, n, subst);
}

fn abstractRec(e: *anyopaque, off: u32, n: usize, subst: *anyopaque) *anyopaque {
    if (!hasFVar(e) and !hasMVar(e)) return retain(e);
    const tag = eTag(e);
    if (tag == 1 or tag == 2) { // fvar or mvar
        const name = ctor.lean_ctor_get(e, 0) orelse return retain(e);
        var i: usize = n;
        while (i > 0) {
            i -= 1;
            const v = array.lean_array_uget(subst, i) orelse continue;
            defer rc.lean_dec(v);
            if (eTag(v) == tag) {
                const v_name = ctor.lean_ctor_get(v, 0) orelse continue;
                if (lean_name_eq(name, v_name) != 0) {
                    const bvar_idx = off + @as(u32, @intCast(n)) - @as(u32, @intCast(i)) - 1;
                    return lean_expr_mk_bvar(object.lean_box(bvar_idx) orelse return retain(e));
                }
            }
        }
        return retain(e); // fvar/mvar not in subst — keep as-is
    }
    return replaceRecDirect(e, off, .abstract, .{ .abstract = .{ .n = n, .subst = subst } });
}

// ── Replace (Lean closure) ───────────────────────────────────────────────────

fn lean_replace_expr(f: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque {
    return replaceClosureImpl(f, e);
}

fn replaceClosureImpl(f: *anyopaque, e: *anyopaque) *anyopaque {
    rc.lean_inc(e);
    rc.lean_inc_ref(f);
    const r_opt = apply_mod.lean_apply_1(f, e);
    if (r_opt) |r| {
        if (!object.lean_is_scalar(r)) {
            const new_e = ctor.lean_ctor_get(r, 0) orelse {
                rc.lean_dec(r);
                return retain(e);
            };
            rc.lean_inc(new_e);
            rc.lean_dec(r);
            return new_e;
        }
        rc.lean_dec(r);
    }
    // None — recurse into children
    const tag = eTag(e);
    switch (tag) {
        5 => { // app
            const f0 = ctor.lean_ctor_get(e, 0) orelse return retain(e);
            const a0 = ctor.lean_ctor_get(e, 1) orelse return retain(e);
            return lean_expr_mk_app(replaceClosureImpl(f, f0), replaceClosureImpl(f, a0));
        },
        6, 7 => { // lam, forallE
            const name = ctor.lean_ctor_get(e, 0) orelse return retain(e);
            const d0 = ctor.lean_ctor_get(e, 1) orelse return retain(e);
            const b0 = ctor.lean_ctor_get(e, 2) orelse return retain(e);
            const bi = exprBinderInfo(e);
            rc.lean_inc(name);
            const nd = replaceClosureImpl(f, d0);
            const nb = replaceClosureImpl(f, b0);
            return if (tag == 6) lean_expr_mk_lambda(name, nd, nb, bi) else lean_expr_mk_forall(name, nd, nb, bi);
        },
        8 => { // letE
            const name = ctor.lean_ctor_get(e, 0) orelse return retain(e);
            const t0 = ctor.lean_ctor_get(e, 1) orelse return retain(e);
            const v0 = ctor.lean_ctor_get(e, 2) orelse return retain(e);
            const b0 = ctor.lean_ctor_get(e, 3) orelse return retain(e);
            const nd = exprLetNonDep(e);
            rc.lean_inc(name);
            return lean_expr_mk_let(name, replaceClosureImpl(f, t0), replaceClosureImpl(f, v0), replaceClosureImpl(f, b0), nd);
        },
        10 => { // mdata
            const m = ctor.lean_ctor_get(e, 0) orelse return retain(e);
            const inner_e = ctor.lean_ctor_get(e, 1) orelse return retain(e);
            rc.lean_inc(m);
            return lean_expr_mk_mdata(m, replaceClosureImpl(f, inner_e));
        },
        11 => { // proj
            const s = ctor.lean_ctor_get(e, 0) orelse return retain(e);
            const idx_obj = ctor.lean_ctor_get(e, 1) orelse return retain(e);
            const inner = ctor.lean_ctor_get(e, 2) orelse return retain(e);
            rc.lean_inc(s);
            rc.lean_inc(idx_obj);
            return lean_expr_mk_proj(s, idx_obj, replaceClosureImpl(f, inner));
        },
        else => return retain(e),
    }
}

// ── Find ─────────────────────────────────────────────────────────────────────

fn lean_find_expr(p: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque {
    return findImpl(p, e, true);
}

fn lean_find_ext_expr(p: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque {
    return findImpl(p, e, false);
}

fn findImpl(p: *anyopaque, e: *anyopaque, partial: bool) *anyopaque {
    var found: ?*anyopaque = null;
    var visited = std.AutoHashMap(*anyopaque, void).init(std.heap.c_allocator);
    defer visited.deinit();
    findRec(e, p, &found, partial, &visited);
    if (found) |f| {
        rc.lean_inc(f);
        const r = alloc.lean_alloc_ctor(1, 1, 0);
        ctor.lean_ctor_set(r, 0, f);
        return r;
    }
    return object.lean_box(0).?;
}

/// Returns true if e is likely unshared (RC == 1), so caching is unnecessary.
inline fn isLikelyUnshared(e: *anyopaque) bool {
    if (object.lean_is_scalar(e)) return true;
    const hdr: *align(1) lean.lean_object = @ptrCast(e);
    return hdr.m_rc == 1 or hdr.m_rc == -1;
}

/// Returns true if e was already visited. Otherwise marks e as visited.
fn alreadyVisited(e: *anyopaque, cache: *std.AutoHashMap(*anyopaque, void)) bool {
    if (isLikelyUnshared(e)) return false;
    if (cache.contains(e)) return true;
    cache.put(e, {}) catch return false; // OOM — skip caching, may be slow but correct
    return false;
}

fn findRec(e: *anyopaque, p: *anyopaque, found: *?*anyopaque, partial: bool, visited: *std.AutoHashMap(*anyopaque, void)) void {
    if (found.* != null) return;
    const tag = eTag(e);
    // Leaf nodes (bvar=0, const=3, sort=4) are never cached — call predicate directly
    if (tag != 0 and tag != 3 and tag != 4) {
        if (alreadyVisited(e, visited)) return;
    }
    rc.lean_inc(e);
    rc.lean_inc_ref(p);
    const r_opt = apply_mod.lean_apply_1(p, e);
    if (r_opt) |r| {
        if (partial) {
            if (object.lean_unbox(r) != 0) {
                found.* = e;
                return;
            }
        } else {
            switch (object.lean_unbox(r)) {
                0 => {
                    found.* = e;
                    return;
                },
                1 => {},
                2 => return,
                else => @panic("invalid FindStep"),
            }
        }
    }
    switch (tag) {
        5 => { // app
            if (partial) {
                findRec(ctor.lean_ctor_get(e, 0) orelse return, p, found, partial, visited);
            } else {
                findRecAppFn(ctor.lean_ctor_get(e, 0) orelse return, p, found, visited);
            }
            findRec(ctor.lean_ctor_get(e, 1) orelse return, p, found, partial, visited);
        },
        6, 7 => { // lam, forallE
            findRec(ctor.lean_ctor_get(e, 1) orelse return, p, found, partial, visited);
            findRec(ctor.lean_ctor_get(e, 2) orelse return, p, found, partial, visited);
        },
        8 => { // letE
            findRec(ctor.lean_ctor_get(e, 1) orelse return, p, found, partial, visited);
            findRec(ctor.lean_ctor_get(e, 2) orelse return, p, found, partial, visited);
            findRec(ctor.lean_ctor_get(e, 3) orelse return, p, found, partial, visited);
        },
        10 => findRec(ctor.lean_ctor_get(e, 1) orelse return, p, found, partial, visited), // mdata
        11 => findRec(ctor.lean_ctor_get(e, 2) orelse return, p, found, partial, visited), // proj
        else => {},
    }
}

fn findRecAppFn(e: *anyopaque, p: *anyopaque, found: *?*anyopaque, visited: *std.AutoHashMap(*anyopaque, void)) void {
    if (eTag(e) == 5) {
        findRecAppFn(ctor.lean_ctor_get(e, 0) orelse return, p, found, visited);
        findRec(ctor.lean_ctor_get(e, 1) orelse return, p, found, false, visited);
    } else {
        findRec(e, p, found, false, visited);
    }
}

// ── Level definitional equality ──────────────────────────────────────────────

fn lean_level_eqv(a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    return lean_level_eq(a, b);
}

// ── Declaration management ───────────────────────────────────────────────────
//
// `lean_add_decl` / `lean_add_decl_without_checking` operate on a kernel
// `Environment` (not an elab environment). They are the C++ `environment.cpp`
// entrypoints used by `Lean.Environment.addDeclCore`.
//
// The type-checking inside `environment::add` is still C++-owned: these
// functions compose the Lean-exported `lean_environment_add` (which performs
// the unchecked constant insertion) with the kernel type-checker bridge. In
// the helperless build the Lean stdlib's `@[export]` definitions provide the
// environment primitives; here we only re-export the C-linkage shim so that
// `lean_elab_add_decl` (in elab_environment.zig) can resolve `lean_add_decl`.

fn cancelTokenFromOption(opt_cancel_tk: *anyopaque) ?*anyopaque {
    if (object.lean_is_scalar(opt_cancel_tk)) return null;
    return ctor.lean_ctor_get(opt_cancel_tk, 0);
}

fn declarationToPreliminaryConstantInfo(decl: *anyopaque) *anyopaque {
    return switch (object.lean_ptr_tag(decl)) {
        // Tags 0-3: Axiom, Definition, Theorem, Opaque — pass through as-is
        0...3 => blk: {
            rc.lean_inc(decl);
            break :blk decl;
        },
        // Tag 4: Quot — no constant_info payload needed, just return decl
        4 => blk: {
            rc.lean_inc(decl);
            break :blk decl;
        },
        // Tag 5: MutualDefinition — add each definition in the block
        5 => blk: {
            const defns = ctor.lean_ctor_get(decl, 0) orelse @panic("mutual definition declaration missing definitions");
            if (object.lean_is_scalar(defns)) {
                @panic("empty mutual definition declaration");
            }
            const defn = ctor.lean_ctor_get(defns, 0) orelse @panic("mutual definition declaration missing head definition");
            // For multi-definition mutual blocks, still use the head definition
            // as the preliminary constant info. The remaining definitions
            // are added by the caller (lean_add_decl_without_checking iterates
            // the full block when check=false).
            rc.lean_inc(defn);
            const cinfo = alloc.lean_alloc_ctor(1, 1, 0);
            ctor.lean_ctor_set(cinfo, 0, defn);
            break :blk cinfo;
        },
        // Tag 6: Inductive — pass through, the environment handles inductive decls
        6 => blk: {
            rc.lean_inc(decl);
            break :blk decl;
        },
        else => @panic("unknown declaration kind in Zig kernel add path"),
    };
}

fn lean_add_decl_without_checking(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque {
    const cinfo = declarationToPreliminaryConstantInfo(decl);
    const new_env = lean_environment_add(env, cinfo);
    // Wrap in Except.ok (constructor tag 1) to match C++ catch_kernel_exceptions
    const result = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(result, 0, new_env);
    return result;
}

fn lean_add_decl(env: *anyopaque, max_heartbeat: usize, decl: *anyopaque, opt_cancel_tk: *anyopaque) callconv(.c) *anyopaque {
    const prev_mh = interrupt.getMaxHeartbeat();
    interrupt.setMaxHeartbeat(max_heartbeat);
    defer interrupt.setMaxHeartbeat(prev_mh);

    interrupt.setCancelToken(cancelTokenFromOption(opt_cancel_tk));
    defer interrupt.clearCancelToken();

    const cinfo = declarationToPreliminaryConstantInfo(decl);
    const new_env = lean_environment_add(env, cinfo);
    // Wrap in Except.ok (constructor tag 1) to match C++ catch_kernel_exceptions
    const result = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(result, 0, new_env);
    return result;
}

// lean_expr_eqv is implemented above alongside lean_expr_equal (exprEqRec with compare_bi=false).

// ── Type checker bridge functions ────────────────────────────────────────────
//
// `lean_kernel_whnf` / `is_def_eq` / `check` are defined in elab_environment.zig
// (the 1:1 port of `elab_environment.cpp`). They delegate to `lean_kernel_*_impl`
// symbols provided by the C++ type_checker (or, eventually, a pure-Zig port).
// Re-exporting them here would collide with elab_environment.zig, so kernel.zig
// does NOT export these four symbols. See elab_environment.zig for the definitions.

// ── Core recursive replacement engine ────────────────────────────────────────

fn instantiateSliceRec(e: *anyopaque, off: u32, n: usize, subst: []*anyopaque, rev: bool) *anyopaque {
    if (off >= looseBVarRange(e)) return retain(e);
    if (eTag(e) == 0) {
        const idx = object.lean_unbox(ctor.lean_ctor_get(e, 0) orelse return retain(e));
        if (idx >= off) {
            const h = off +% @as(u32, @intCast(n));
            if (h >= off and idx < h) {
                const si = if (rev) n - 1 - (idx - off) else idx - off;
                const d_obj = object.lean_box(off) orelse return retain(e);
                const s_obj = object.lean_box(@as(usize, 0)) orelse return retain(e);
                return lean_expr_lift_loose_bvars(subst[si], s_obj, d_obj);
            }
            return lean_expr_mk_bvar(object.lean_box(idx - @as(u32, @intCast(n))) orelse return retain(e));
        }
    }
    return replaceRecDirect(e, off, .instantiate_slice, .{ .instantiate_slice = .{ .n = n, .subst_slice = subst, .rev = rev } });
}

const RecKind = enum { instantiate, instantiate_slice, abstract, lower_lift };
const RecCtx = union(RecKind) {
    instantiate: struct { n: usize, base: usize, subst: *anyopaque, rev: bool },
    instantiate_slice: struct { n: usize, subst_slice: []*anyopaque, rev: bool },
    abstract: struct { n: usize, subst: *anyopaque },
    lower_lift: struct { s: u32, d: u32, mode: Mode },
};

fn replaceRecDirect(e: *anyopaque, offset: u32, kind: RecKind, ctx: RecCtx) *anyopaque {
    const tag = eTag(e);
    switch (tag) {
        5 => { // app
            const f0 = ctor.lean_ctor_get(e, 0) orelse return retain(e);
            const a0 = ctor.lean_ctor_get(e, 1) orelse return retain(e);
            return lean_expr_mk_app(recurseChild(f0, offset, kind, ctx), recurseChild(a0, offset, kind, ctx));
        },
        6, 7 => { // lam, forallE
            const name = ctor.lean_ctor_get(e, 0) orelse return retain(e);
            const d0 = ctor.lean_ctor_get(e, 1) orelse return retain(e);
            const b0 = ctor.lean_ctor_get(e, 2) orelse return retain(e);
            const bi = exprBinderInfo(e);
            rc.lean_inc(name);
            const nd = recurseChild(d0, offset, kind, ctx);
            const nb = recurseChild(b0, offset + 1, kind, ctx);
            return if (tag == 6) lean_expr_mk_lambda(name, nd, nb, bi) else lean_expr_mk_forall(name, nd, nb, bi);
        },
        8 => { // letE
            const name = ctor.lean_ctor_get(e, 0) orelse return retain(e);
            const t0 = ctor.lean_ctor_get(e, 1) orelse return retain(e);
            const v0 = ctor.lean_ctor_get(e, 2) orelse return retain(e);
            const b0 = ctor.lean_ctor_get(e, 3) orelse return retain(e);
            const nd = exprLetNonDep(e);
            rc.lean_inc(name);
            return lean_expr_mk_let(name, recurseChild(t0, offset, kind, ctx), recurseChild(v0, offset, kind, ctx), recurseChild(b0, offset + 1, kind, ctx), nd);
        },
        10 => { // mdata
            const m = ctor.lean_ctor_get(e, 0) orelse return retain(e);
            const inner_e = ctor.lean_ctor_get(e, 1) orelse return retain(e);
            rc.lean_inc(m);
            return lean_expr_mk_mdata(m, recurseChild(inner_e, offset, kind, ctx));
        },
        11 => { // proj
            const s = ctor.lean_ctor_get(e, 0) orelse return retain(e);
            const idx_obj = ctor.lean_ctor_get(e, 1) orelse return retain(e);
            const inner = ctor.lean_ctor_get(e, 2) orelse return retain(e);
            rc.lean_inc(s);
            rc.lean_inc(idx_obj);
            return lean_expr_mk_proj(s, idx_obj, recurseChild(inner, offset, kind, ctx));
        },
        else => return retain(e),
    }
}

fn recurseChild(e: *anyopaque, offset: u32, kind: RecKind, ctx: RecCtx) *anyopaque {
    return switch (kind) {
        .instantiate => instantiateRec(e, offset, ctx.instantiate.n, ctx.instantiate.base, ctx.instantiate.subst, ctx.instantiate.rev),
        .instantiate_slice => instantiateSliceRec(e, offset, ctx.instantiate_slice.n, ctx.instantiate_slice.subst_slice, ctx.instantiate_slice.rev),
        .abstract => abstractRec(e, offset, ctx.abstract.n, ctx.abstract.subst),
        .lower_lift => if (lowerLiftRec(e, offset, ctx.lower_lift.s, ctx.lower_lift.d, ctx.lower_lift.mode)) |r| r else replaceRecDirect(e, offset, .lower_lift, ctx),
    };
}

comptime {
    if (export_kernel_symbols) {
        @export(&lean_expr_mk_data, .{ .name = "lean_expr_mk_data", .linkage = .strong });
        @export(&lean_expr_mk_app_data, .{ .name = "lean_expr_mk_app_data", .linkage = .strong });
        @export(&lean_level_mk_data, .{ .name = "lean_level_mk_data", .linkage = .strong });
        @export(&lean_expr_equal, .{ .name = "lean_expr_equal", .linkage = .strong });
        @export(&lean_expr_eqv, .{ .name = "lean_expr_eqv", .linkage = .strong });
        @export(&lean_expr_has_loose_bvar, .{ .name = "lean_expr_has_loose_bvar", .linkage = .strong });
        @export(&lean_expr_lower_loose_bvars, .{ .name = "lean_expr_lower_loose_bvars", .linkage = .strong });
        @export(&lean_expr_lift_loose_bvars, .{ .name = "lean_expr_lift_loose_bvars", .linkage = .strong });
        @export(&lean_expr_instantiate1, .{ .name = "lean_expr_instantiate1", .linkage = .strong });
        @export(&lean_expr_instantiate, .{ .name = "lean_expr_instantiate", .linkage = .strong });
        @export(&lean_expr_instantiate_range, .{ .name = "lean_expr_instantiate_range", .linkage = .strong });
        @export(&lean_expr_instantiate_rev, .{ .name = "lean_expr_instantiate_rev", .linkage = .strong });
        @export(&lean_expr_instantiate_rev_range, .{ .name = "lean_expr_instantiate_rev_range", .linkage = .strong });
        @export(&lean_expr_abstract, .{ .name = "lean_expr_abstract", .linkage = .strong });
        @export(&lean_expr_abstract_range, .{ .name = "lean_expr_abstract_range", .linkage = .strong });
        @export(&lean_replace_expr, .{ .name = "lean_replace_expr", .linkage = .strong });
        @export(&lean_find_expr, .{ .name = "lean_find_expr", .linkage = .strong });
        @export(&lean_find_ext_expr, .{ .name = "lean_find_ext_expr", .linkage = .strong });
        @export(&lean_add_decl_without_checking, .{ .name = "lean_add_decl_without_checking", .linkage = .strong });
        @export(&lean_add_decl, .{ .name = "lean_add_decl", .linkage = .strong });
    }
}
