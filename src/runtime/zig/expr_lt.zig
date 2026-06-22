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
const ea = @import("expr_accessors.zig");
const rt = @import("lean_rt.zig");
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

inline fn listIsNil(o: *anyopaque) bool {
    return object.lean_is_scalar(o) and object.lean_unbox(o) == 0;
}

inline fn natLt(a: *anyopaque, b: *anyopaque) bool {
    return rt.lean_nat_lt(@ptrCast(a), @ptrCast(b));
}

fn levelsLt(as: *anyopaque, bs: *anyopaque, use_hash: bool) bool {
    if (listIsNil(as)) return !listIsNil(bs);
    if (listIsNil(bs)) return false;
    const ah = ctor.lean_ctor_get(as, 0) orelse return false;
    const at = ctor.lean_ctor_get(as, 1) orelse return false;
    const bh = ctor.lean_ctor_get(bs, 0) orelse return false;
    const bt = ctor.lean_ctor_get(bs, 1) orelse return false;
    if (levelLt(ah, bh, use_hash)) return true;
    if (levelLt(bh, ah, use_hash)) return false;
    return levelsLt(at, bt, use_hash);
}

fn litLt(a: *anyopaque, b: *anyopaque) bool {
    const la = ea.litValue(a);
    const lb = ea.litValue(b);
    const ka = object.lean_ptr_tag(la);
    const kb = object.lean_ptr_tag(lb);
    if (ka != kb) return ka < kb;
    switch (ka) {
        0 => {
            const na = ctor.lean_ctor_get(la, 0) orelse return false;
            const nb = ctor.lean_ctor_get(lb, 0) orelse return false;
            return natLt(na, nb);
        },
        1 => {
            const sa = ctor.lean_ctor_get(la, 0) orelse return false;
            const sb = ctor.lean_ctor_get(lb, 0) orelse return false;
            return lean_string_lt(sa, sb) != 0;
        },
        else => return false,
    }
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
            if (object.lean_is_scalar(a) and object.lean_is_scalar(b)) {
                return object.lean_unbox(a) < object.lean_unbox(b);
            }
            const ia = if (object.lean_is_scalar(a)) object.lean_box(object.lean_unbox(a)).? else ea.bvarIdx(a);
            const ib = if (object.lean_is_scalar(b)) object.lean_box(object.lean_unbox(b)).? else ea.bvarIdx(b);
            return natLt(ia, ib);
        },
        1 => return nameLt(ea.fvarName(a), ea.fvarName(b)),
        2 => return nameLt(ea.mvarName(a), ea.mvarName(b)),
        3 => return levelLt(ea.sortLevel(a), ea.sortLevel(b), use_hash),
        4 => {
            const na = ea.constName(a);
            const nb = ea.constName(b);
            if (lean_name_eq(na, nb) == 0) return nameLt(na, nb);
            return levelsLt(ea.constLevels(a), ea.constLevels(b), use_hash);
        },
        5 => {
            const fa = ea.appFn(a);
            const fb = ea.appFn(b);
            if (!exprEqv(fa, fb)) return isLtExpr(fa, fb, use_hash);
            return isLtExpr(ea.appArg(a), ea.appArg(b), use_hash);
        },
        6, 7 => {
            const da = ea.bindingDomain(a);
            const db = ea.bindingDomain(b);
            if (!exprEqv(da, db)) return isLtExpr(da, db, use_hash);
            return isLtExpr(ea.bindingBody(a), ea.bindingBody(b), use_hash);
        },
        8 => {
            const nda = ea.letNonDep(a);
            const ndb = ea.letNonDep(b);
            if (nda != ndb) return nda < ndb;
            const ta = ea.letType(a);
            const tb = ea.letType(b);
            if (!exprEqv(ta, tb)) return isLtExpr(ta, tb, use_hash);
            const va = ea.letValue(a);
            const vb = ea.letValue(b);
            if (!exprEqv(va, vb)) return isLtExpr(va, vb, use_hash);
            return isLtExpr(ea.letBody(a), ea.letBody(b), use_hash);
        },
        9 => return litLt(a, b),
        10 => {
            const ea_inner = ea.mdataExpr(a);
            const eb_inner = ea.mdataExpr(b);
            if (!exprEqv(ea_inner, eb_inner)) return isLtExpr(ea_inner, eb_inner, use_hash);
            return mdataLt(ea.mdataData(a), ea.mdataData(b));
        },
        11 => {
            const ea_proj = ea.projExpr(a);
            const eb_proj = ea.projExpr(b);
            if (!exprEqv(ea_proj, eb_proj)) return isLtExpr(ea_proj, eb_proj, use_hash);
            const sa = ea.projSname(a);
            const sb = ea.projSname(b);
            if (lean_name_eq(sa, sb) == 0) return nameLt(sa, sb);
            return natLt(ea.projIdx(a), ea.projIdx(b));
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
