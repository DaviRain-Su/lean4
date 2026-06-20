// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Minimal Zig stub for `lean_mk_cases_on`.
//!
//! `lean_mk_cases_on` is a C++-only entrypoint used by `Lean.Meta.Constructions.CasesOn`.
//! A full port would replicate the local-context/recursor manipulation in
//! `src/library/constructions/cases_on.cpp`. For now we perform the same input
//! validation and return the same `Except Kernel.Exception` shape the C++ wrapper
//! produces, returning `Kernel.Exception.other` for valid inputs that are not yet
//! handled in Zig.

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const alloc = @import("alloc.zig");
const rc = @import("rc.zig");
const string = @import("string.zig");
const ka = @import("kernel_accessors.zig");
const runtime_helpers = @import("runtime_helpers.zig");
const runtime_options = @import("runtime_options");

// Kernel.Exception constructor tags (see Lean/Environment.lean):
//   0 = unknownConstant, 1 = alreadyDeclared, ..., 12 = other
const kernel_exception_unknown_constant: u32 = 0;
const kernel_exception_other: u32 = 12;

// Except constructor tags: 0 = error, 1 = ok
const except_error_tag: u32 = 0;
const except_ok_tag: u32 = 1;

inline fn mkExceptError(err: *anyopaque) *anyopaque {
    const result = alloc.lean_alloc_ctor(except_error_tag, 1, 0);
    ctor.lean_ctor_set(result, 0, err);
    return result;
}

inline fn mkUnknownConstant(env: *anyopaque, name: *anyopaque) *anyopaque {
    const ex = alloc.lean_alloc_ctor(kernel_exception_unknown_constant, 2, 0);
    rc.lean_inc(env);
    rc.lean_inc(name);
    ctor.lean_ctor_set(ex, 0, env);
    ctor.lean_ctor_set(ex, 1, name);
    return mkExceptError(ex);
}

inline fn mkOtherError(msg: [*:0]const u8) *anyopaque {
    const ex = alloc.lean_alloc_ctor(kernel_exception_other, 1, 0);
    const msg_obj = string.lean_mk_string(msg);
    ctor.lean_ctor_set(ex, 0, msg_obj);
    return mkExceptError(ex);
}

fn lean_mk_cases_on(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque {
    // Validate that `n` is an inductive datatype in the environment.
    const ind_info = ka.envFind(env, n) orelse return mkUnknownConstant(env, n);
    defer rc.lean_dec(ind_info);

    if (!ka.ciIsInductive(ind_info)) {
        return mkOtherError("error in 'casesOn' generation, declaration is not an inductive datatype");
    }

    // Validate that the automatically generated recursor exists.
    const rec_name = runtime_helpers.lean_name_mk_str(n, "rec");
    defer rc.lean_dec(rec_name);

    const rec_info = ka.envFind(env, rec_name) orelse return mkUnknownConstant(env, rec_name);
    defer rc.lean_dec(rec_info);

    if (!ka.ciIsRecursor(rec_info)) {
        return mkOtherError("error in 'casesOn' generation, matching recursor is not a recursor");
    }

    // Full cases_on generation is not yet ported to Zig.
    return mkOtherError("casesOn generation not yet implemented in Zig");
}

pub const force_link = true;

comptime {
    if (runtime_options.export_kernel_symbols) {
        @export(&lean_mk_cases_on, .{ .name = "lean_mk_cases_on", .linkage = .weak });
    }
}
