// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Standalone checked `lean_add_decl` bridge.
//!
//! This file intentionally avoids importing the runtime ZCU modules. It uses
//! only extern C-ABI entrypoints so it can compile as a separate static
//! library without duplicating the runtime's exported symbols. It is not yet
//! wired into the stage1 cutover link; that happens in a follow-up once the
//! checked declaration path is behaviorally verified.

pub const force_link = true;

const CUInt = u32;

extern fn lean_add_decl_bridge(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_cpp_environment_add_with_checking(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_check_with_params_impl(env: *anyopaque, lctx: *anyopaque, a: *anyopaque, lparams: *anyopaque, definition_safety: u8) callconv(.c) *anyopaque;
extern fn lean_kernel_is_def_eq_with_params_impl(env: *anyopaque, lctx: *anyopaque, a: *anyopaque, b: *anyopaque, lparams: *anyopaque, definition_safety: u8) callconv(.c) u8;
extern fn lean_mk_empty_local_ctx(unit: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_environment_find(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_environment_add(env: *anyopaque, cinfo: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_alloc_ctor(tag: CUInt, num_objs: CUInt, scalar_sz: CUInt) callconv(.c) *anyopaque;
extern fn lean_ctor_set(o: *anyopaque, i: CUInt, v: *anyopaque) callconv(.c) void;
extern fn lean_ctor_get(o: *anyopaque, i: CUInt) callconv(.c) ?*anyopaque;
extern fn lean_ctor_get_uint8(o: *anyopaque, offset: CUInt) callconv(.c) u8;
extern fn lean_ctor_get_usize(o: *anyopaque, i: CUInt) callconv(.c) usize;
extern fn lean_inc(o: *anyopaque) callconv(.c) void;
extern fn lean_dec(o: *anyopaque) callconv(.c) void;
extern fn lean_is_scalar(o: *anyopaque) callconv(.c) bool;
extern fn lean_box(v: usize) callconv(.c) ?*anyopaque;
extern fn lean_unbox(o: *anyopaque) callconv(.c) usize;
extern fn lean_ptr_tag(o: *anyopaque) callconv(.c) CUInt;

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
    return lean_ctor_get_uint8(v, @intCast(6 * @sizeOf(?*anyopaque)));
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
    switch (checkConstantHeader(env, lctx, decl, 1)) {
        .err => |err| return err,
        .ok => |sort| lean_dec(sort),
    }
    const name = ciName(decl);
    const value = ciValue(decl);
    if (checkNoMetavarNoFvar(env, name, value)) |err| return err;
    const value_type = lean_kernel_check_with_params_impl(env, lctx, value, ciLevelParams(decl), 1);
    defer lean_dec(value_type);
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
    if (lean_kernel_is_def_eq_with_params_impl(env, lctx, value_type, ciType(decl), ciLevelParams(decl), 1) == 0) {
        return mkDeclTypeMismatchError(env, decl, value_type);
    }
    return mkExceptOk(lean_environment_add(env, incRet(decl)));
}

fn canUseZigCheckedAdd(decl: *anyopaque) bool {
    return switch (lean_ptr_tag(decl)) {
        1 => defnValSafety(decl) == 1 and !hasDuplicateLevelParams(ciLevelParams(decl)),
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
    @export(&lean_add_decl, .{ .name = "lean_add_decl", .linkage = .strong });
}
