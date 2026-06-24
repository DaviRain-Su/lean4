// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Kernel type checker entry points — compiled as a SEPARATE Zig module
//! (not part of the ZCU) to prevent the ZCU optimizer from eliminating the
//! `lean_elab_environment_to_kernel_env` conversion call.
//!
//! The ZCU optimizer inlines `rc.lean_inc`/`rc.lean_dec` and sees inc+dec=0,
//! then eliminates the env conversion as "unused". By putting the conversion
//! in a separate compilation unit, the optimizer cannot see through the
//! `extern fn` boundary and the call is preserved.

// These are extern functions — opaque calls the ZCU optimizer cannot inline.
extern fn lean_elab_environment_to_kernel_env(env: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_whnf_impl(env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_is_def_eq_impl(env: *anyopaque, lctx: *anyopaque, a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_kernel_check_impl(env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;

// RC function — declared extern so the ZCU optimizer cannot inline it.
extern fn lean_dec(o: *anyopaque) callconv(.c) void;

// lean_box — declared extern to box a small integer.
extern fn lean_box(n: u64) callconv(.c) *anyopaque;

pub export fn lean_kernel_whnf(obj_env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque {
    const kenv = lean_elab_environment_to_kernel_env(obj_env);
    defer lean_dec(kenv);
    return lean_kernel_whnf_impl(kenv, lctx, a);
}

pub export fn lean_kernel_is_def_eq(obj_env: *anyopaque, lctx: *anyopaque, a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque {
    const kenv = lean_elab_environment_to_kernel_env(obj_env);
    defer lean_dec(kenv);
    return lean_box(@as(u64, lean_kernel_is_def_eq_impl(kenv, lctx, a, b)));
}

pub export fn lean_kernel_check(obj_env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque {
    const kenv = lean_elab_environment_to_kernel_env(obj_env);
    defer lean_dec(kenv);
    return lean_kernel_check_impl(kenv, lctx, a);
}

// ── Lean @[export] fallbacks for helperless build ───────────────────────────
//
// These functions are Lean @[export] definitions normally provided by the
// compiled stdlib. In the helperless Zig archive (libleanrt_zig.a) the stdlib
// is absent, so we provide weak fallback implementations here. This module is
// compiled separately from the ZCU, so the ZCU optimizer cannot see through
// these calls and incorrectly eliminate reference counting in callers.
//
// DefinitionVal layout (structure extending ConstantVal):
//   Object fields: name, levelParams, type, value, hints, all  (6 objects)
//   Scalar fields: safety (1 byte, DefinitionSafety enum)
// Declaration.defnDecl = tag 1, 1 object field (the DefinitionVal)

extern fn lean_alloc_ctor(tag: c_uint, num_objs: c_uint, scalar_sz: c_uint) callconv(.c) *anyopaque;
extern fn lean_ctor_set(o: *anyopaque, i: c_uint, v: *anyopaque) callconv(.c) void;
extern fn lean_ctor_set_uint8(o: *anyopaque, offset: c_uint, v: u8) callconv(.c) void;

fn lean_mk_definition_val(n: *anyopaque, lparams: *anyopaque, type_expr: *anyopaque, value: *anyopaque, hints: *anyopaque, safety: u8, all: *anyopaque) callconv(.c) *anyopaque {
    const result = lean_alloc_ctor(0, 6, 1);
    lean_ctor_set(result, 0, n);
    lean_ctor_set(result, 1, lparams);
    lean_ctor_set(result, 2, type_expr);
    lean_ctor_set(result, 3, value);
    lean_ctor_set(result, 4, hints);
    lean_ctor_set(result, 5, all);
    const scalar_offset: c_uint = @intCast(6 * @sizeOf(?*anyopaque));
    lean_ctor_set_uint8(result, scalar_offset, safety);
    return result;
}

fn lean_mk_definition_decl(v: *anyopaque) callconv(.c) *anyopaque {
    const result = lean_alloc_ctor(1, 1, 0);
    lean_ctor_set(result, 0, v);
    return result;
}

comptime {
    @export(&lean_mk_definition_val, .{ .name = "lean_mk_definition_val", .linkage = .weak });
    @export(&lean_mk_definition_decl, .{ .name = "lean_mk_definition_decl", .linkage = .weak });
}