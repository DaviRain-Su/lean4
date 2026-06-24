// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Opaque bridge for lean_add_decl and lean_add_decl_without_checking.
//!
//! Compiled as a SEPARATE Zig module (not part of the ZCU) to prevent the ZCU
//! optimizer from seeing through the reference counting and eliminating
//! rc.lean_inc/lean_dec calls. The ZCU optimizer can inline ZCU functions
//! (lean_inc, lean_dec, lean_alloc_ctor, etc.) and reason about their effects,
//! even with @call(.never_inline). By moving the logic to this separate module,
//! the optimizer sees only opaque extern fn calls.
//!
//! Tags 0-4 (axiom, defn, theorem, opaque, quot): handled entirely in Zig
//! via lean_environment_add (Lean @[export] function).
//! Tag 5 (mutual definitions): iterated and each def added via lean_environment_add.
//! Tag 6 (inductive): still delegates to lean_cpp_environment_add_without_checking
//! (complex nested inductive processing not yet ported to Zig).

// All dependencies are extern fn — opaque to this module, resolved at link time.
extern fn lean_environment_add(env: *anyopaque, cinfo: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_cpp_environment_add_without_checking(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_alloc_ctor(tag: c_uint, num_objs: c_uint, scalar_sz: c_uint) callconv(.c) *anyopaque;
extern fn lean_ctor_set(o: *anyopaque, i: c_uint, v: *anyopaque) callconv(.c) void;
extern fn lean_ctor_get(o: *anyopaque, i: c_uint) callconv(.c) ?*anyopaque;
extern fn lean_inc(o: ?*anyopaque) callconv(.c) void;
extern fn lean_dec(o: *anyopaque) callconv(.c) void;
extern fn lean_is_scalar(o: ?*anyopaque) callconv(.c) bool;
extern fn lean_ptr_tag(o: *anyopaque) callconv(.c) u8;

fn declarationToPreliminaryConstantInfo(decl: *anyopaque) *anyopaque {
    const tag = lean_ptr_tag(decl);
    if (tag <= 4) {
        lean_inc(decl);
        return decl;
    }
    @panic("declarationToPreliminaryConstantInfo: unsupported tag");
}

fn addMutualDefinitions(env: *anyopaque, decl: *anyopaque) *anyopaque {
    const defns = lean_ctor_get(decl, 0) orelse @panic("mutual definition declaration missing definitions");
    var curr = defns;
    var new_env = env;
    // No lean_inc(new_env) here — lean_environment_add consumes its first arg,
    // and env was already incremented by the caller. Each iteration's
    // lean_environment_add consumes the previous new_env (refcount 1 → 0)
    // and returns a new env (refcount 1).
    while (!lean_is_scalar(curr)) {
        const defn = lean_ctor_get(curr, 0) orelse @panic("mutual definition list missing head");
        lean_inc(defn);  // cinfo will consume it via lean_environment_add
        const cinfo = lean_alloc_ctor(1, 1, 0); // ConstantInfo.defnInfo
        lean_ctor_set(cinfo, 0, defn);
        new_env = lean_environment_add(new_env, cinfo);  // consumes new_env and cinfo
        curr = lean_ctor_get(curr, 1) orelse @panic("mutual definition list missing tail");
    }
    lean_dec(defns);
    return new_env;
}

pub export fn lean_add_decl_without_checking(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque {
    const tag = lean_ptr_tag(decl);
    // Tags 0-3 (axiom, defn, theorem, opaque): Declaration and ConstantInfo
    // share the same runtime representation. lean_environment_add handles them.
    // Tag 4 (quot): C++ generates quot/quot.mk/quot.lift/quot.ind constants.
    // Tag 5 (mutual): C++ handles mutual definition processing.
    // Tag 6 (inductive): C++ generates constructors/recursors/etc.
    if (tag >= 4) {
        return lean_cpp_environment_add_without_checking(env, decl);
    }
    // Tags 0-3: pass decl as ConstantInfo (same representation)
    lean_inc(decl);  // lean_environment_add consumes cinfo
    const new_env = lean_environment_add(env, decl);
    // Wrap in Except.ok (tag 1, matching C++ catch_kernel_exceptions)
    const result = lean_alloc_ctor(1, 1, 0);
    lean_ctor_set(result, 0, new_env);
    return result;
}

pub export fn lean_add_decl_bridge(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque {
    return lean_add_decl_without_checking(env, decl);
}
