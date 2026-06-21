// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Expression total order (`lean_expr_lt`, `lean_expr_quick_lt`).
//!
//! Ports `src/library/expr_lt.cpp` (C-linkage entry points only; `lctx` is null
//! as in the C++ exports).

pub const force_link = true;

const lean = @import("lean_object.zig");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const util_name = @import("util_name.zig");

extern fn lean_string_lt(s1: *anyopaque, s2: *anyopaque) callconv(.c) u8;
extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_expr_eqv(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_level_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;

inline fn eTag(e: *anyopaque) u8 {
    if (object.lean_is_scalar(e)) return 0; // bvar
    return object.lean_ptr_tag(e);
}

inline fn eData(e: *anyopaque) u64 {
    if (object.lean_is_scalar(e)) return 0;
    const nobjs: u32 = @intCast(ctor.ctorNumObjs(e));
    return ctor.lean_ctor_get_usize(e, nobjs);
}

fn nameLt(a: *anyopaque, b: *anyopaque) bool {
    return util_name.cmpCore(a, b) < 0;
}

fn levelKind(l: *anyopaque) u8 {
    if (object.lean_is_scalar(l)) return 0;
    return object.lean_ptr_tag(l);
}

fn levelHash(l: *anyopaque) u32 {
    if (object.lean_is_scalar(l)) return @truncate(object.lean_unbox(l));
    const lvl_data: u64 = @as(*align(1) u64, @ptrCast(@alignCast(@as([*]u8, @ptrCast(l)) + @sizeOf(lean.lean_ctor_object) + @sizeOf(usize)))).*;
    return @truncate(lvl_data);
}

fn levelLt(a: *anyopaque, b: *anyopaque, use_hash: bool) bool {
    if (a == b) return false;
    const ka = levelKind(a);
    const kb = levelKind(b);
    if (ka != kb) return ka < kb;
    if (use_hash) {
        const ha = levelHash(a);
        const hb = levelHash(b);
        if (ha < hb) return true;
        if (ha > hb) return false;
    }
    if (lean_level_eq(a, b) != 0) return false;
    switch (ka) {
        0 => return object.lean_unbox(a) < object.lean_unbox(b),
        1 => {
            const pa = ctor.lean_ctor_get(a, 0) orelse return false;
            const pb = ctor.lean_ctor_get(b, 0) orelse return false;
            return levelLt(pa, pb, use_hash);
        },
        2, 3 => {
            const la = ctor.lean_ctor_get(a, 0) orelse return false;
            const lb = ctor.lean_ctor_get(b, 0) orelse return false;
            if (levelLt(la, lb, use_hash)) return true;
            if (levelLt(lb, la, use_hash)) return false;
            const ra = ctor.lean_ctor_get(a, 1) orelse return false;
            const rb = ctor.lean_ctor_get(b, 1) orelse return false;
            return levelLt(ra, rb, use_hash);
        },
        4 => {
            const na = ctor.lean_ctor_get(a, 0) orelse return false;
            const nb = ctor.lean_ctor_get(b, 0) orelse return false;
            return nameLt(na, nb);
        },
        5 => {
            const na = ctor.lean_ctor_get(a, 0) orelse return false;
            const nb = ctor.lean_ctor_get(b, 0) orelse return false;
            return nameLt(na, nb);
        },
        else => return false,
    }
}

fn mdataLt(ma: *anyopaque, mb: *anyopaque) bool {
    if (ma == mb) return false;
    return @intFromPtr(ma) < @intFromPtr(mb);
}

inline fn exprEqv(a: *anyopaque, b: *anyopaque) bool {
    return lean_expr_eqv(a, b) != 0;
}

fn isLtExpr(a: *anyopaque, b: *anyopaque, use_hash: bool) bool {
    if (a == b) return false;
    const ka = eTag(a);
    const kb = eTag(b);
    if (ka != kb) return ka < kb;
    if (use_hash) {
        const ha: u32 = @truncate(eData(a));
        const hb: u32 = @truncate(eData(b));
        if (ha < hb) return true;
        if (ha > hb) return false;
    }
    if (exprEqv(a, b)) return false;
    switch (ka) {
        0 => {
            const ia = if (object.lean_is_scalar(a)) object.lean_unbox(a) else blk: {
                const f = ctor.lean_ctor_get(a, 0) orelse return false;
                break :blk object.lean_unbox(f);
            };
            const ib = if (object.lean_is_scalar(b)) object.lean_unbox(b) else blk: {
                const f = ctor.lean_ctor_get(b, 0) orelse return false;
                break :blk object.lean_unbox(f);
            };
            return ia < ib;
        },
        1 => {
            const na = ctor.lean_ctor_get(a, 0) orelse return false;
            const nb = ctor.lean_ctor_get(b, 0) orelse return false;
            return nameLt(na, nb);
        },
        2 => {
            const na = ctor.lean_ctor_get(a, 0) orelse return false;
            const nb = ctor.lean_ctor_get(b, 0) orelse return false;
            return nameLt(na, nb);
        },
        3 => {
            const la = ctor.lean_ctor_get(a, 0) orelse return false;
            const lb = ctor.lean_ctor_get(b, 0) orelse return false;
            return levelLt(la, lb, use_hash);
        },
        4 => {
            const na = ctor.lean_ctor_get(a, 0) orelse return false;
            const nb = ctor.lean_ctor_get(b, 0) orelse return false;
            if (lean_name_eq(na, nb) == 0) return nameLt(na, nb);
            const la = ctor.lean_ctor_get(a, 1) orelse return false;
            const lb = ctor.lean_ctor_get(b, 1) orelse return false;
            return levelLt(la, lb, use_hash);
        },
        5 => {
            const fa = ctor.lean_ctor_get(a, 0) orelse return false;
            const fb = ctor.lean_ctor_get(b, 0) orelse return false;
            if (!exprEqv(fa, fb)) return isLtExpr(fa, fb, use_hash);
            const aa = ctor.lean_ctor_get(a, 1) orelse return false;
            const ab = ctor.lean_ctor_get(b, 1) orelse return false;
            return isLtExpr(aa, ab, use_hash);
        },
        6, 7 => {
            const da = ctor.lean_ctor_get(a, 1) orelse return false;
            const db = ctor.lean_ctor_get(b, 1) orelse return false;
            if (!exprEqv(da, db)) return isLtExpr(da, db, use_hash);
            const ba = ctor.lean_ctor_get(a, 2) orelse return false;
            const bb = ctor.lean_ctor_get(b, 2) orelse return false;
            return isLtExpr(ba, bb, use_hash);
        },
        8 => {
            const nda = if (ctor.lean_ctor_get(a, 4)) |v| object.lean_unbox(v) else 0;
            const ndb = if (ctor.lean_ctor_get(b, 4)) |v| object.lean_unbox(v) else 0;
            if (nda != ndb) return nda < ndb;
            const ta = ctor.lean_ctor_get(a, 1) orelse return false;
            const tb = ctor.lean_ctor_get(b, 1) orelse return false;
            if (!exprEqv(ta, tb)) return isLtExpr(ta, tb, use_hash);
            const va = ctor.lean_ctor_get(a, 2) orelse return false;
            const vb = ctor.lean_ctor_get(b, 2) orelse return false;
            if (!exprEqv(va, vb)) return isLtExpr(va, vb, use_hash);
            const ba = ctor.lean_ctor_get(a, 3) orelse return false;
            const bb = ctor.lean_ctor_get(b, 3) orelse return false;
            return isLtExpr(ba, bb, use_hash);
        },
        9 => return object.lean_unbox(a) < object.lean_unbox(b),
        10 => {
            const ea = ctor.lean_ctor_get(a, 1) orelse return false;
            const eb = ctor.lean_ctor_get(b, 1) orelse return false;
            if (!exprEqv(ea, eb)) return isLtExpr(ea, eb, use_hash);
            const ma = ctor.lean_ctor_get(a, 0) orelse return false;
            const mb = ctor.lean_ctor_get(b, 0) orelse return false;
            return mdataLt(ma, mb);
        },
        11 => {
            const ea = ctor.lean_ctor_get(a, 2) orelse return false;
            const eb = ctor.lean_ctor_get(b, 2) orelse return false;
            if (!exprEqv(ea, eb)) return isLtExpr(ea, eb, use_hash);
            const sa = ctor.lean_ctor_get(a, 0) orelse return false;
            const sb = ctor.lean_ctor_get(b, 0) orelse return false;
            if (lean_name_eq(sa, sb) == 0) return nameLt(sa, sb);
            const ia = if (ctor.lean_ctor_get(a, 1)) |v| object.lean_unbox(v) else 0;
            const ib = if (ctor.lean_ctor_get(b, 1)) |v| object.lean_unbox(v) else 0;
            return ia < ib;
        },
        else => return false,
    }
}

pub export fn lean_expr_quick_lt(a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    return @intFromBool(isLtExpr(a, b, true));
}

pub export fn lean_expr_lt(a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    return @intFromBool(isLtExpr(a, b, false));
}
