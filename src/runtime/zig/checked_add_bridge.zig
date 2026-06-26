// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Standalone checked `lean_add_decl` bridge.
//!
//! This file intentionally avoids importing the runtime ZCU modules. It uses
//! only exported C-ABI entrypoints so it can build as a separate static
//! library. Default builds keep it dormant; helperless stage1 enables
//! `export-checked-add-symbols` so this archive owns `lean_add_decl` during
//! live checked-add cutover verification.

pub const force_link = true;
const std = @import("std");
const builtin = @import("builtin");
const runtime_options = @import("runtime_options");

const LeanHeader = extern struct {
    m_rc: i32,
    m_cs_sz: u16,
    m_other: u8,
    m_tag: u8,
};

const CUInt = u32;
const export_checked_add_symbols = runtime_options.export_checked_add_symbols;

extern fn lean_add_decl_bridge(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_cpp_environment_add_with_checking(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_check_with_params_impl(env: *anyopaque, lctx: *anyopaque, a: *anyopaque, lparams: *anyopaque, definition_safety: u8) callconv(.c) *anyopaque;
extern fn lean_kernel_is_def_eq_with_params_impl(env: *anyopaque, lctx: *anyopaque, a: *anyopaque, b: *anyopaque, lparams: *anyopaque, definition_safety: u8) callconv(.c) u8;
extern fn lean_expr_has_loose_bvar(e: *anyopaque, idx: *anyopaque) callconv(.c) u8;
extern fn lean_mk_empty_local_ctx(unit: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_environment_find(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_environment_add(env: *anyopaque, cinfo: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_alloc_ctor(tag: CUInt, num_objs: CUInt, scalar_sz: CUInt) callconv(.c) *anyopaque;
extern fn lean_ctor_set(o: *anyopaque, i: CUInt, v: *anyopaque) callconv(.c) void;
extern fn lean_ctor_get(o: *anyopaque, i: CUInt) callconv(.c) ?*anyopaque;
extern fn lean_ctor_get_uint8(o: *anyopaque, offset: CUInt) callconv(.c) u8;
extern fn lean_ctor_set_uint8(o: *anyopaque, offset: CUInt, v: u8) callconv(.c) void;
extern fn lean_ctor_get_usize(o: *anyopaque, i: CUInt) callconv(.c) usize;
extern fn lean_inc(o: *anyopaque) callconv(.c) void;
extern fn lean_dec(o: *anyopaque) callconv(.c) void;
extern fn lean_is_scalar(o: *anyopaque) callconv(.c) bool;
extern fn lean_box(v: usize) callconv(.c) ?*anyopaque;
extern fn lean_unbox(o: *anyopaque) callconv(.c) usize;
extern fn lean_ptr_tag(o: *anyopaque) callconv(.c) CUInt;
extern fn lean_string_cstr(s: *anyopaque) callconv(.c) [*:0]const u8;

fn header(o: *anyopaque) *LeanHeader {
    return @ptrCast(@alignCast(o));
}
inline fn ctorNumObjs(o: *anyopaque) CUInt {
    return header(o).m_other;
}

inline fn incRet(o: *anyopaque) *anyopaque {
    lean_inc(o);
    return o;
}

inline fn isNone(opt: *anyopaque) bool {
    return lean_is_scalar(opt);
}

inline fn someVal(opt: *anyopaque) *anyopaque {
    const v = lean_ctor_get(opt, 0) orelse @panic("someVal: missing payload");
    lean_inc(v);
    lean_dec(opt);
    return v;
}

fn nameLastComponentStr(name: *anyopaque) ?[*:0]const u8 {
    var it = name;
    while (!lean_is_scalar(it)) {
        switch (lean_ptr_tag(it)) {
            1 => {
                const s = lean_ctor_get(it, 1) orelse return null;
                return lean_string_cstr(s);
            },
            2 => {
                it = lean_ctor_get(it, 0) orelse return null;
            },
            else => return null,
        }
    }
    return null;
}

fn nameLastComponentEq(name: *anyopaque, expected: []const u8) bool {
    const actual = nameLastComponentStr(name) orelse return false;
    return std.mem.eql(u8, std.mem.span(actual), expected);
}

fn nameLastComponentStartsWith(name: *anyopaque, prefix: []const u8) bool {
    const actual = nameLastComponentStr(name) orelse return false;
    return std.mem.startsWith(u8, std.mem.span(actual), prefix);
}

fn isDeferredAuxRecursor(name: *anyopaque) bool {
    return nameLastComponentEq(name, "recOn") or
        nameLastComponentEq(name, "casesOn") or
        nameLastComponentEq(name, "brecOn") or
        nameLastComponentEq(name, "below") or
        nameLastComponentEq(name, "ndrec") or
        nameLastComponentEq(name, "ndrecOn") or
        nameLastComponentEq(name, "noConfusion") or
        nameLastComponentEq(name, "noConfusionType") or
        nameLastComponentEq(name, "ofNat") or
        nameLastComponentEq(name, "toCtorIdx") or
        nameLastComponentEq(name, "ctorIdx") or
        nameLastComponentEq(name, "ctorElim") or
        nameLastComponentEq(name, "ctorElimType") or
        nameLastComponentStartsWith(name, "brecOn_") or
        nameLastComponentStartsWith(name, "below_");
}

fn isGeneratedAuxiliary(name: *anyopaque) bool {
    return nameLastComponentEq(name, "elim") or
        nameLastComponentStartsWith(name, "match_") or
        nameLastComponentStartsWith(name, "_");
}

inline fn listIsNil(xs: *anyopaque) bool {
    return lean_is_scalar(xs) and lean_unbox(xs) == 0;
}

inline fn listHead(xs: *anyopaque) *anyopaque {
    return lean_ctor_get(xs, 0) orelse @panic("listHead");
}

inline fn listTail(xs: *anyopaque) *anyopaque {
    return lean_ctor_get(xs, 1) orelse @panic("listTail");
}

inline fn ciVal(ci: *anyopaque) *anyopaque {
    return lean_ctor_get(ci, 0) orelse @panic("ciVal");
}

inline fn ciConstantVal(ci: *anyopaque) *anyopaque {
    return lean_ctor_get(ciVal(ci), 0) orelse @panic("ciConstantVal");
}

inline fn ciName(ci: *anyopaque) *anyopaque {
    return lean_ctor_get(ciConstantVal(ci), 0) orelse @panic("ciName");
}

inline fn ciLevelParams(ci: *anyopaque) *anyopaque {
    return lean_ctor_get(ciConstantVal(ci), 1) orelse @panic("ciLevelParams");
}

inline fn ciType(ci: *anyopaque) *anyopaque {
    return lean_ctor_get(ciConstantVal(ci), 2) orelse @panic("ciType");
}

inline fn ciValue(ci: *anyopaque) *anyopaque {
    return lean_ctor_get(ciVal(ci), 1) orelse @panic("ciValue");
}

inline fn defnValSafety(ci: *anyopaque) u8 {
    const v = ciVal(ci);
    const offset: CUInt = @intCast(ctorNumObjs(v) * @sizeOf(?*anyopaque));
    return lean_ctor_get_uint8(v, offset);
}

inline fn exprNumObjs(e: *anyopaque) CUInt {
    if (lean_is_scalar(e)) return 0;
    return switch (lean_ptr_tag(e)) {
        1, 2, 3, 9 => 1,
        4, 5, 10 => 2,
        6, 7, 11 => 3,
        8 => 4,
        else => 0,
    };
}

inline fn exprData(e: *anyopaque) u64 {
    if (lean_is_scalar(e)) return 0;
    return @intCast(lean_ctor_get_usize(e, exprNumObjs(e)));
}

inline fn exprHasFVar(e: *anyopaque) bool {
    return ((exprData(e) >> 40) & 1) == 1;
}

inline fn exprHasExprMVar(e: *anyopaque) bool {
    return ((exprData(e) >> 41) & 1) == 1;
}

inline fn exprHasLevelMVar(e: *anyopaque) bool {
    return ((exprData(e) >> 42) & 1) == 1;
}

inline fn exprIsSort(e: *anyopaque) bool {
    return !lean_is_scalar(e) and lean_ptr_tag(e) == 3;
}

inline fn exprSortLevel(e: *anyopaque) *anyopaque {
    return lean_ctor_get(e, 0) orelse @panic("exprSortLevel");
}

fn mkExceptOk(a: *anyopaque) *anyopaque {
    const r = lean_alloc_ctor(1, 1, 0);
    lean_ctor_set(r, 0, a);
    return r;
}

fn mkExceptError(ex: *anyopaque) *anyopaque {
    const r = lean_alloc_ctor(0, 1, 0);
    lean_ctor_set(r, 0, ex);
    return r;
}

fn mkAlreadyDeclaredError(env: *anyopaque, name: *anyopaque) *anyopaque {
    const ex = lean_alloc_ctor(1, 2, 0);
    lean_ctor_set(ex, 0, incRet(env));
    lean_ctor_set(ex, 1, incRet(name));
    return mkExceptError(ex);
}

fn mkDeclTypeMismatchError(env: *anyopaque, decl: *anyopaque, given_type: *anyopaque) *anyopaque {
    const ex = lean_alloc_ctor(2, 3, 0);
    lean_ctor_set(ex, 0, incRet(env));
    lean_ctor_set(ex, 1, incRet(decl));
    lean_ctor_set(ex, 2, incRet(given_type));
    return mkExceptError(ex);
}

fn mkDeclHasMVarsError(env: *anyopaque, name: *anyopaque, expr: *anyopaque) *anyopaque {
    const ex = lean_alloc_ctor(3, 3, 0);
    lean_ctor_set(ex, 0, incRet(env));
    lean_ctor_set(ex, 1, incRet(name));
    lean_ctor_set(ex, 2, incRet(expr));
    return mkExceptError(ex);
}

fn mkDeclHasFVarsError(env: *anyopaque, name: *anyopaque, expr: *anyopaque) *anyopaque {
    const ex = lean_alloc_ctor(4, 3, 0);
    lean_ctor_set(ex, 0, incRet(env));
    lean_ctor_set(ex, 1, incRet(name));
    lean_ctor_set(ex, 2, incRet(expr));
    return mkExceptError(ex);
}

fn mkTypeExpectedError(env: *anyopaque, lctx: *anyopaque, expr: *anyopaque) *anyopaque {
    const ex = lean_alloc_ctor(6, 3, 0);
    lean_ctor_set(ex, 0, incRet(env));
    lean_ctor_set(ex, 1, incRet(lctx));
    lean_ctor_set(ex, 2, incRet(expr));
    return mkExceptError(ex);
}

fn mkTheoremTypeIsNotPropError(env: *anyopaque, name: *anyopaque, type_expr: *anyopaque) *anyopaque {
    const ex = lean_alloc_ctor(11, 3, 0);
    lean_ctor_set(ex, 0, incRet(env));
    lean_ctor_set(ex, 1, incRet(name));
    lean_ctor_set(ex, 2, incRet(type_expr));
    return mkExceptError(ex);
}

fn envFind(env: *anyopaque, name: *anyopaque) ?*anyopaque {
    const opt = lean_environment_find(incRet(env), incRet(name));
    if (isNone(opt)) {
        lean_dec(opt);
        return null;
    }
    return someVal(opt);
}

fn hasDuplicateLevelParams(lparams: *anyopaque) bool {
    var outer = lparams;
    while (!listIsNil(outer)) {
        const p = listHead(outer);
        var inner = listTail(outer);
        while (!listIsNil(inner)) {
            if (lean_name_eq(p, listHead(inner)) != 0) return true;
            inner = listTail(inner);
        }
        outer = listTail(outer);
    }
    return false;
}

fn checkNoMetavarNoFvar(env: *anyopaque, name: *anyopaque, expr: *anyopaque) ?*anyopaque {
    if (exprHasExprMVar(expr) or exprHasLevelMVar(expr)) return mkDeclHasMVarsError(env, name, expr);
    if (exprHasFVar(expr)) return mkDeclHasFVarsError(env, name, expr);
    return null;
}

fn exprHasAnyLooseBVar(expr: *anyopaque) bool {
    if (lean_is_scalar(expr)) return false;
    return switch (lean_ptr_tag(expr)) {
        0 => true,
        5 => blk: {
            const fn_expr = lean_ctor_get(expr, 0) orelse return false;
            const arg_expr = lean_ctor_get(expr, 1) orelse return false;
            break :blk exprHasAnyLooseBVar(fn_expr) or exprHasAnyLooseBVar(arg_expr);
        },
        6, 7 => blk: {
            const domain = lean_ctor_get(expr, 1) orelse return false;
            const body = lean_ctor_get(expr, 2) orelse return false;
            break :blk exprHasAnyLooseBVar(domain) or exprHasAnyLooseBVar(body);
        },
        8 => blk: {
            const domain = lean_ctor_get(expr, 1) orelse return false;
            const value = lean_ctor_get(expr, 2) orelse return false;
            const body = lean_ctor_get(expr, 3) orelse return false;
            break :blk exprHasAnyLooseBVar(domain) or exprHasAnyLooseBVar(value) or exprHasAnyLooseBVar(body);
        },
        10 => blk: {
            const inner = lean_ctor_get(expr, 1) orelse return false;
            break :blk exprHasAnyLooseBVar(inner);
        },
        11 => blk: {
            const inner = lean_ctor_get(expr, 2) orelse return false;
            break :blk exprHasAnyLooseBVar(inner);
        },
        else => false,
    };
}
fn exprContainsLet(expr: *anyopaque) bool {
    if (lean_is_scalar(expr)) return false;
    return switch (lean_ptr_tag(expr)) {
        5 => blk: {
            const fn_expr = lean_ctor_get(expr, 0) orelse return false;
            const arg_expr = lean_ctor_get(expr, 1) orelse return false;
            break :blk exprContainsLet(fn_expr) or exprContainsLet(arg_expr);
        },
        6, 7 => blk: {
            const domain = lean_ctor_get(expr, 1) orelse return false;
            const body = lean_ctor_get(expr, 2) orelse return false;
            break :blk exprContainsLet(domain) or exprContainsLet(body);
        },
        8 => true,
        10 => blk: {
            const inner = lean_ctor_get(expr, 1) orelse return false;
            break :blk exprContainsLet(inner);
        },
        11 => blk: {
            const inner = lean_ctor_get(expr, 2) orelse return false;
            break :blk exprContainsLet(inner);
        },
        else => false,
    };
}
fn exprContainsConstLastComponent(expr: *anyopaque, expected: []const u8) bool {
    if (lean_is_scalar(expr)) return false;
    return switch (lean_ptr_tag(expr)) {
        4 => nameLastComponentEq(lean_ctor_get(expr, 0) orelse return false, expected),
        5 => blk: {
            const fn_expr = lean_ctor_get(expr, 0) orelse return false;
            const arg_expr = lean_ctor_get(expr, 1) orelse return false;
            break :blk exprContainsConstLastComponent(fn_expr, expected) or
                exprContainsConstLastComponent(arg_expr, expected);
        },
        6, 7 => blk: {
            const domain = lean_ctor_get(expr, 1) orelse return false;
            const body = lean_ctor_get(expr, 2) orelse return false;
            break :blk exprContainsConstLastComponent(domain, expected) or
                exprContainsConstLastComponent(body, expected);
        },
        8 => blk: {
            const domain = lean_ctor_get(expr, 1) orelse return false;
            const value = lean_ctor_get(expr, 2) orelse return false;
            const body = lean_ctor_get(expr, 3) orelse return false;
            break :blk exprContainsConstLastComponent(domain, expected) or
                exprContainsConstLastComponent(value, expected) or
                exprContainsConstLastComponent(body, expected);
        },
        10 => blk: {
            const inner = lean_ctor_get(expr, 1) orelse return false;
            break :blk exprContainsConstLastComponent(inner, expected);
        },
        11 => blk: {
            const inner = lean_ctor_get(expr, 2) orelse return false;
            break :blk exprContainsConstLastComponent(inner, expected);
        },
        else => false,
    };
}

fn exprContainsProblematicRecursor(expr: *anyopaque) bool {
    return exprContainsConstLastComponent(expr, "ite") or exprContainsConstLastComponent(expr, "dite");
}

fn exprResultHeadConstLastComponent(expr: *anyopaque) ?[*:0]const u8 {
    var curr = expr;
    while (!lean_is_scalar(curr)) {
        switch (lean_ptr_tag(curr)) {
            5 => curr = lean_ctor_get(curr, 0) orelse return null,
            7 => curr = lean_ctor_get(curr, 2) orelse return null,
            10 => curr = lean_ctor_get(curr, 1) orelse return null,
            else => break,
        }
    }
    if (lean_is_scalar(curr) or lean_ptr_tag(curr) != 4) return null;
    const name = lean_ctor_get(curr, 0) orelse return null;
    return nameLastComponentStr(name);
}

fn exprContainsStringLit(expr: *anyopaque) bool {
    if (lean_is_scalar(expr)) return false;
    return switch (lean_ptr_tag(expr)) {
        5 => blk: {
            const fn_expr = lean_ctor_get(expr, 0) orelse return false;
            const arg_expr = lean_ctor_get(expr, 1) orelse return false;
            break :blk exprContainsStringLit(fn_expr) or exprContainsStringLit(arg_expr);
        },
        6, 7 => blk: {
            const domain = lean_ctor_get(expr, 1) orelse return false;
            const body = lean_ctor_get(expr, 2) orelse return false;
            break :blk exprContainsStringLit(domain) or exprContainsStringLit(body);
        },
        8 => blk: {
            const domain = lean_ctor_get(expr, 1) orelse return false;
            const value = lean_ctor_get(expr, 2) orelse return false;
            const body = lean_ctor_get(expr, 3) orelse return false;
            break :blk exprContainsStringLit(domain) or exprContainsStringLit(value) or exprContainsStringLit(body);
        },
        9 => blk: {
            const lit = lean_ctor_get(expr, 0) orelse return false;
            break :blk !lean_is_scalar(lit) and lean_ptr_tag(lit) == 1;
        },
        10 => blk: {
            const inner = lean_ctor_get(expr, 1) orelse return false;
            break :blk exprContainsStringLit(inner);
        },
        11 => blk: {
            const inner = lean_ctor_get(expr, 2) orelse return false;
            break :blk exprContainsStringLit(inner);
        },
        else => false,
    };
}
fn exprContainsLiteral(expr: *anyopaque) bool {
    if (lean_is_scalar(expr)) return false;
    return switch (lean_ptr_tag(expr)) {
        5 => blk: {
            const fn_expr = lean_ctor_get(expr, 0) orelse return false;
            const arg_expr = lean_ctor_get(expr, 1) orelse return false;
            break :blk exprContainsLiteral(fn_expr) or exprContainsLiteral(arg_expr);
        },
        6, 7 => blk: {
            const domain = lean_ctor_get(expr, 1) orelse return false;
            const body = lean_ctor_get(expr, 2) orelse return false;
            break :blk exprContainsLiteral(domain) or exprContainsLiteral(body);
        },
        8 => blk: {
            const domain = lean_ctor_get(expr, 1) orelse return false;
            const value = lean_ctor_get(expr, 2) orelse return false;
            const body = lean_ctor_get(expr, 3) orelse return false;
            break :blk exprContainsLiteral(domain) or exprContainsLiteral(value) or exprContainsLiteral(body);
        },
        9 => true,
        10 => blk: {
            const inner = lean_ctor_get(expr, 1) orelse return false;
            break :blk exprContainsLiteral(inner);
        },
        11 => blk: {
            const inner = lean_ctor_get(expr, 2) orelse return false;
            break :blk exprContainsLiteral(inner);
        },
        else => false,
    };
}

fn exprHasUnsupportedResultHead(expr: *anyopaque) bool {
    const head = exprResultHeadConstLastComponent(expr) orelse return false;
    const s = std.mem.span(head);
    return std.mem.eql(u8, s, "String") or std.mem.eql(u8, s, "IO");
}
fn exprHasClosedPrimitiveResult(expr: *anyopaque) bool {
    const head = exprResultHeadConstLastComponent(expr) orelse return false;
    const s = std.mem.span(head);
    return std.mem.eql(u8, s, "Nat") or
        std.mem.eql(u8, s, "Bool") or
        std.mem.eql(u8, s, "Int") or
        std.mem.eql(u8, s, "UInt8") or
        std.mem.eql(u8, s, "UInt16") or
        std.mem.eql(u8, s, "UInt32") or
        std.mem.eql(u8, s, "UInt64") or
        std.mem.eql(u8, s, "USize") or
        std.mem.eql(u8, s, "ISize") or
        std.mem.eql(u8, s, "Float") or
        std.mem.eql(u8, s, "Float32") or
        std.mem.eql(u8, s, "Char") or
        std.mem.eql(u8, s, "Unit") or
        std.mem.eql(u8, s, "PUnit") or
        std.mem.eql(u8, s, "Ordering");
}
fn exprHasTopLevelBinder(expr: *anyopaque) bool {
    var curr = expr;
    while (!lean_is_scalar(curr) and lean_ptr_tag(curr) == 10) {
        curr = lean_ctor_get(curr, 1) orelse return false;
    }
    return !lean_is_scalar(curr) and lean_ptr_tag(curr) == 7;
}

fn exprHasProofLikeResult(expr: *anyopaque) bool {
    const head = exprResultHeadConstLastComponent(expr) orelse return false;
    const s = std.mem.span(head);
    return std.mem.eql(u8, s, "Eq") or
        std.mem.eql(u8, s, "HEq") or
        std.mem.eql(u8, s, "False") or
        std.mem.eql(u8, s, "True") or
        std.mem.eql(u8, s, "Not") or
        std.mem.eql(u8, s, "And") or
        std.mem.eql(u8, s, "Or") or
        std.mem.eql(u8, s, "Iff") or
        std.mem.eql(u8, s, "le") or
        std.mem.eql(u8, s, "lt") or
        std.mem.eql(u8, s, "ge") or
        std.mem.eql(u8, s, "gt");
}

fn levelIsZero(lvl: *anyopaque) bool {
    return (lean_is_scalar(lvl) and lean_unbox(lvl) == 0) or (!lean_is_scalar(lvl) and lean_ptr_tag(lvl) == 0);
}

const HeaderCheck = union(enum) {
    ok: *anyopaque,
    err: *anyopaque,
};

fn checkConstantHeader(env: *anyopaque, lctx: *anyopaque, decl: *anyopaque, definition_safety: u8) HeaderCheck {
    const name = ciName(decl);
    if (envFind(env, name)) |existing| {
        lean_dec(existing);
        return .{ .err = mkAlreadyDeclaredError(env, name) };
    }
    const type_expr = ciType(decl);
    if (checkNoMetavarNoFvar(env, name, type_expr)) |err| return .{ .err = err };
    const sort = lean_kernel_check_with_params_impl(env, lctx, type_expr, ciLevelParams(decl), definition_safety);
    if (!exprIsSort(sort)) {
        lean_dec(sort);
        return .{ .err = mkTypeExpectedError(env, lctx, type_expr) };
    }
    return .{ .ok = sort };
}

fn zigCheckedAddDefinition(env: *anyopaque, decl: *anyopaque) *anyopaque {
    const lctx = lean_mk_empty_local_ctx(lean_box(0).?);
    defer lean_dec(lctx);
    const name = ciName(decl);
    switch (checkConstantHeader(env, lctx, decl, 1)) {
        .err => |err| return err,
        .ok => |sort| lean_dec(sort),
    }
    const value = ciValue(decl);
    if (checkNoMetavarNoFvar(env, name, value)) |err| return err;
    const value_type = lean_kernel_check_with_params_impl(env, lctx, value, ciLevelParams(decl), 1);
    defer lean_dec(value_type);
    if (exprHasAnyLooseBVar(value_type) or exprHasAnyLooseBVar(ciType(decl))) {
        return lean_cpp_environment_add_with_checking(env, decl);
    }
    if (lean_kernel_is_def_eq_with_params_impl(env, lctx, value_type, ciType(decl), ciLevelParams(decl), 1) == 0) {
        return mkDeclTypeMismatchError(env, decl, value_type);
    }
    return mkExceptOk(lean_environment_add(env, incRet(decl)));
}

fn zigCheckedAddTheorem(env: *anyopaque, decl: *anyopaque) *anyopaque {
    const lctx = lean_mk_empty_local_ctx(lean_box(0).?);
    defer lean_dec(lctx);
    const sort = switch (checkConstantHeader(env, lctx, decl, 1)) {
        .err => |err| return err,
        .ok => |sort| sort,
    };
    defer lean_dec(sort);
    if (!levelIsZero(exprSortLevel(sort))) return mkTheoremTypeIsNotPropError(env, ciName(decl), ciType(decl));
    const name = ciName(decl);
    const value = ciValue(decl);
    if (checkNoMetavarNoFvar(env, name, value)) |err| return err;
    const value_type = lean_kernel_check_with_params_impl(env, lctx, value, ciLevelParams(decl), 1);
    defer lean_dec(value_type);
    if (exprHasAnyLooseBVar(value_type) or exprHasAnyLooseBVar(ciType(decl))) {
        return lean_cpp_environment_add_with_checking(env, decl);
    }
    if (lean_kernel_is_def_eq_with_params_impl(env, lctx, value_type, ciType(decl), ciLevelParams(decl), 1) == 0) {
        return mkDeclTypeMismatchError(env, decl, value_type);
    }
    return mkExceptOk(lean_environment_add(env, incRet(decl)));
}

fn zigCheckedAddOpaque(env: *anyopaque, decl: *anyopaque) *anyopaque {
    const lctx = lean_mk_empty_local_ctx(lean_box(0).?);
    defer lean_dec(lctx);
    switch (checkConstantHeader(env, lctx, decl, 1)) {
        .err => |err| return err,
        .ok => |sort| lean_dec(sort),
    }
    const name = ciName(decl);
    const value = ciValue(decl);
    if (checkNoMetavarNoFvar(env, name, value)) |err| return err;
    const value_type = lean_kernel_check_with_params_impl(env, lctx, value, ciLevelParams(decl), 1);
    defer lean_dec(value_type);
    if (exprHasAnyLooseBVar(value_type) or exprHasAnyLooseBVar(ciType(decl))) {
        return lean_cpp_environment_add_with_checking(env, decl);
    }
    if (lean_kernel_is_def_eq_with_params_impl(env, lctx, value_type, ciType(decl), ciLevelParams(decl), 1) == 0) {
        return mkDeclTypeMismatchError(env, decl, value_type);
    }
    return mkExceptOk(lean_environment_add(env, incRet(decl)));
}
fn canUseZigCheckedValueDecl(name: *anyopaque, decl: *anyopaque) bool {
    return !hasDuplicateLevelParams(ciLevelParams(decl)) and
        !isDeferredAuxRecursor(name) and
        !isGeneratedAuxiliary(name) and
        !exprContainsLet(ciValue(decl)) and
        !exprContainsStringLit(ciValue(decl)) and
        !exprContainsLiteral(ciValue(decl)) and
        !exprContainsProblematicRecursor(ciValue(decl)) and
        !exprHasProofLikeResult(ciType(decl)) and
        !exprHasUnsupportedResultHead(ciType(decl)) and
        !exprHasTopLevelBinder(ciType(decl)) and
        exprHasClosedPrimitiveResult(ciType(decl));
}


fn canUseZigCheckedAdd(decl: *anyopaque) bool {
    return switch (lean_ptr_tag(decl)) {
        1 => {
            const name = ciName(decl);
            return defnValSafety(decl) == 1 and canUseZigCheckedValueDecl(name, decl);
        },
        3 => {
            const name = ciName(decl);
            return canUseZigCheckedValueDecl(name, decl);
        },
        else => false,
    };
}
fn lean_add_decl(env: *anyopaque, max_heartbeat: usize, decl: *anyopaque, opt_cancel_tk: *anyopaque) callconv(.c) *anyopaque {
    _ = max_heartbeat;
    _ = opt_cancel_tk;
    const tag = lean_ptr_tag(decl);
    if (tag == 5 or tag == 6) return lean_add_decl_bridge(env, decl);
    if (canUseZigCheckedAdd(decl)) {
        return switch (tag) {
            1 => zigCheckedAddDefinition(env, decl),
            2 => zigCheckedAddTheorem(env, decl),
            3 => zigCheckedAddOpaque(env, decl),
            else => lean_cpp_environment_add_with_checking(env, decl),
        };
    }
    return lean_cpp_environment_add_with_checking(env, decl);
}

comptime {
    if (!builtin.is_test and export_checked_add_symbols) {
        @export(&lean_add_decl, .{ .name = "lean_add_decl", .linkage = .strong });
    }
}

test "defnValSafety reads nested DefinitionVal scalar offset" {
    const constant_val = lean_alloc_ctor(0, 3, 0);
    lean_ctor_set(constant_val, 0, lean_box(0).?);
    lean_ctor_set(constant_val, 1, lean_box(0).?);
    lean_ctor_set(constant_val, 2, lean_box(0).?);

    const defn_val = lean_alloc_ctor(0, 4, @intCast(2 * @sizeOf(?*anyopaque) + 1));
    lean_ctor_set(defn_val, 0, constant_val);
    lean_ctor_set(defn_val, 1, lean_box(0).?);
    lean_ctor_set(defn_val, 2, lean_box(0).?);
    lean_ctor_set(defn_val, 3, lean_box(0).?);

    const safety_offset: CUInt = @intCast(4 * @sizeOf(?*anyopaque));
    const stale_flat_offset: CUInt = @intCast(6 * @sizeOf(?*anyopaque));
    lean_ctor_set_uint8(defn_val, safety_offset, 0);
    lean_ctor_set_uint8(defn_val, stale_flat_offset, 1);

    const decl = lean_alloc_ctor(1, 1, 0);
    lean_ctor_set(decl, 0, defn_val);
    defer lean_dec(decl);

    try std.testing.expectEqual(@as(CUInt, 4), ctorNumObjs(defn_val));
    try std.testing.expectEqual(@as(u8, 0), defnValSafety(decl));
}
