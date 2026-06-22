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