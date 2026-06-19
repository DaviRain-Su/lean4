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

const std = @import("std");
const object = @import("object.zig");
const alloc = @import("alloc.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const array = @import("array.zig");

// ── Expression metadata (trivial bit-packing) ────────────────────────────────

/// Pack expression metadata into a u64:
/// bits  0-31: hash
/// bits 32-39: approxDepth (capped at 255)
/// bit     40: hasFVar
/// bit     41: hasExprMVar
/// bit     42: hasLevelMVar
/// bit     43: hasLevelParam
/// bits 44-63: looseBVarRange (capped at 2^20-1)
pub export fn lean_expr_mk_data(
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
    const h: u64 = @truncate(hash_val);
    return h + (approx_depth << 32) +
        (@as(u64, has_fvar) << 40) +
        (@as(u64, has_expr_mvar) << 41) +
        (@as(u64, has_level_mvar) << 42) +
        (@as(u64, has_level_param) << 43) +
        (range << 44);
}

/// Compute app metadata from function and argument metadata.
pub export fn lean_expr_mk_app_data(f_data: u64, a_data: u64) callconv(.c) u64 {
    const f_depth: u16 = @intCast((f_data >> 32) & 255);
    const a_depth: u16 = @intCast((a_data >> 32) & 255);
    const depth: u64 = @min(@max(f_depth, a_depth) + 1, 255);
    const f_range: u32 = @intCast(f_data >> 44);
    const a_range: u32 = @intCast(a_data >> 44);
    const range: u64 = @max(f_range, a_range);
    const h: u64 = hashCombine(f_data, a_data);
    return ((f_data | a_data) & (@as(u64, 15) << 40)) | h | (depth << 32) | (range << 44);
}

inline fn hashCombine(a: u64, b: u64) u64 {
    // Same hash combine as C++ runtime
    const rot = std.math.rotl(u64, a, 5);
    return rot ^ b +% 9 *% a;
}

// ── Level metadata ───────────────────────────────────────────────────────────

pub export fn lean_level_mk_data(hash_val: u32, depth: u32) callconv(.c) u64 {
    const d: u64 = @min(depth, 65535);
    const h: u64 = hash_val;
    return h + (d << 32);
}

// ── Level equality (structural) ──────────────────────────────────────────────

pub export fn lean_level_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    // Quick pointer equality
    if (a == b) return 1;
    // Scalar equality
    if (object.lean_is_scalar(a) and object.lean_is_scalar(b))
        return if (object.lean_unbox(a) == object.lean_unbox(b)) 1 else 0;
    if (object.lean_is_scalar(a) != object.lean_is_scalar(b)) return 0;
    // Constructor equality: same tag, same fields
    const tag_a = object.lean_ptr_tag(a);
    if (tag_a != object.lean_ptr_tag(b)) return 0;
    const nfields = object.lean_ctor_num_objs(a);
    if (nfields != object.lean_ctor_num_objs(b)) return 0;
    for (0..nfields) |i| {
        const fa = ctor.lean_ctor_get(a, i) orelse continue;
        const fb = ctor.lean_ctor_get(b, i) orelse continue;
        if (lean_level_eq(fa, fb) == 0) return 0;
    }
    return 1;
}

// ── Expression structural equality ───────────────────────────────────────────

pub export fn lean_expr_equal(a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    if (a == b) return 1;
    if (object.lean_is_scalar(a) or object.lean_is_scalar(b)) return 0;
    const tag_a = object.lean_ptr_tag(a);
    if (tag_a != object.lean_ptr_tag(b)) return 0;
    const nfields = object.lean_ctor_num_objs(a);
    if (nfields != object.lean_ctor_num_objs(b)) return 0;
    for (0..nfields) |i| {
        const fa = ctor.lean_ctor_get(a, i) orelse continue;
        const fb = ctor.lean_ctor_get(b, i) orelse continue;
        // For expressions, fields are either expressions, names, levels, or nats
        // Use generic structural equality
        if (object.lean_is_scalar(fa) and object.lean_is_scalar(fb)) {
            if (object.lean_unbox(fa) != object.lean_unbox(fb)) return 0;
        } else if (object.lean_is_scalar(fa) != object.lean_is_scalar(fb)) {
            return 0;
        } else {
            // Both are pointers — could be expressions, names, or other objects
            if (fa != fb) {
                // Try expression equality first (most common case)
                const fa_tag = object.lean_ptr_tag(fa);
                if (fa_tag <= 11 and object.lean_ptr_tag(fb) <= 11) {
                    if (lean_expr_equal(fa, fb) == 0) return 0;
                } else if (lean_level_eq(fa, fb) == 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

// ── Has loose bound variable check ───────────────────────────────────────────

/// Returns true if expression `e` has a loose bound variable with index >= `idx`.
pub export fn lean_expr_has_loose_bvar(e: *anyopaque, idx: *anyopaque) callconv(.c) u8 {
    if (object.lean_is_scalar(e)) return 0;
    const tag = object.lean_ptr_tag(e);
    const i = object.lean_unbox(idx);
    switch (tag) {
        0 => { // bvar
            const bi = object.lean_unbox(ctor.lean_ctor_get(e, 0) orelse return 0);
            return if (bi >= i) 1 else 0;
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

// TODO: Port remaining functions:
// - lean_expr_lower_loose_bvars
// - lean_expr_lift_loose_bvars
// - lean_expr_instantiate / instantiate1 / instantiate_range / instantiate_rev
// - lean_expr_abstract / abstract_range
// - lean_expr_eqv (definitional equality — hardest)
// - lean_find_expr / lean_find_ext_expr
// - lean_replace_expr
// - lean_level_eqv
// - lean_add_decl / lean_add_decl_without_checking
