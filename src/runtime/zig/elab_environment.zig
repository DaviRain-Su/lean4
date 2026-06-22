// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! C-linkage elaboration environment entrypoints ported from `src/library/elab_environment.cpp`.
//!
//! Declaration add paths compose Lean-exported environment helpers with kernel `lean_add_decl`.
//! `lean_kernel_whnf` / `is_def_eq` / `check` delegate to `lean_kernel_*_impl` (Lean type checker).

pub const force_link = true;

const alloc = @import("alloc.zig");
const ctor = @import("ctor.zig");
const object = @import("object.zig");
const interrupt = @import("interrupt.zig");
const rc = @import("rc.zig");
const std = @import("std");
/// Matches `LEAN_BELIEVER_TRUST_LEVEL` in `src/kernel/environment.h`.
const lean_believer_trust_level: u32 = 1024;

extern fn lean_elab_environment_to_kernel_env(env: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_elab_environment_update_base_after_kernel_add(env: *anyopaque, kenv: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_add_decl(env: *anyopaque, max_heartbeat: usize, decl: *anyopaque, opt_cancel_tk: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_add_decl_without_checking(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque;

extern fn lean_kernel_whnf_impl(env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_is_def_eq_impl(env: *anyopaque, lctx: *anyopaque, a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_check_impl(env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;

// C barrier functions compiled separately by cc — the ZCU optimizer cannot
// inline these, so the lean_elab_environment_to_kernel_env call is preserved.
extern fn env_barrier_to_kernel_env(env: *anyopaque) callconv(.c) *anyopaque;
extern fn env_barrier_dec(kenv: *anyopaque) callconv(.c) void;
fn exceptIsOk(e: *anyopaque) bool {
    return object.lean_ptr_tag(e) == 1;
}

fn exceptGetOk(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("elab_environment: Except.ok missing payload");
}

fn cancelTokenFromOption(opt_cancel_tk: *anyopaque) ?*anyopaque {
    if (object.lean_is_scalar(opt_cancel_tk)) return null;
    return ctor.lean_ctor_get(opt_cancel_tk, 0);
}

fn elabAddDeclCore(env: *anyopaque, max_heartbeat: usize, decl: *anyopaque, opt_cancel_tk: *anyopaque, check: bool) callconv(.c) *anyopaque {
    const prev_mh = interrupt.getMaxHeartbeat();
    interrupt.setMaxHeartbeat(max_heartbeat);
    defer interrupt.setMaxHeartbeat(prev_mh);

    interrupt.setCancelToken(cancelTokenFromOption(opt_cancel_tk));
    defer interrupt.clearCancelToken();

    // `update_base_after_kernel_add` consumes `decl` by capturing it in the
    // async constant map closure, so retain one reference across the call.
    const kenv = lean_elab_environment_to_kernel_env(env);
    const kenv_except = if (check)
        lean_add_decl(kenv, max_heartbeat, decl, opt_cancel_tk)
    else
        lean_add_decl_without_checking(kenv, decl);

    if (!exceptIsOk(kenv_except)) return kenv_except;

    rc.lean_inc(decl);
    const kenv_new = exceptGetOk(kenv_except);
    const elab_ok = lean_elab_environment_update_base_after_kernel_add(env, kenv_new, decl);
    const ok_ctor = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(ok_ctor, 0, elab_ok);
    return ok_ctor;
}

pub export fn lean_elab_add_decl(env: *anyopaque, max_heartbeat: usize, decl: *anyopaque, opt_cancel_tk: *anyopaque) callconv(.c) *anyopaque {
    return elabAddDeclCore(env, max_heartbeat, decl, opt_cancel_tk, true);
}

pub export fn lean_elab_add_decl_without_checking(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque {
    return elabAddDeclCore(env, 0, decl, object.lean_box(0).?, false);
}
pub export fn lean_kernel_whnf(obj_env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque {
    return lean_kernel_whnf_impl(obj_env, lctx, a);
}

pub export fn lean_kernel_is_def_eq(obj_env: *anyopaque, lctx: *anyopaque, a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque {
    return lean_kernel_is_def_eq_impl(obj_env, lctx, a, b);
}

pub export fn lean_kernel_check(obj_env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque {
    return lean_kernel_check_impl(obj_env, lctx, a);
}

pub export fn lean_internal_get_believer_trust_level(_: ?*anyopaque) callconv(.c) u32 {
    return lean_believer_trust_level;
}