// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Runtime helper functions that bridge C string operations to Lean objects.
//!
//! These functions are needed by inductive.zig, quot.zig, and type_checker.zig
//! to construct Lean Name/String objects from C strings. In the cutover build,
//! the C++ versions are weakened so these Zig implementations take precedence.

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const string = @import("string.zig");

// Lean stdlib exports (provided by libInit/libStd when linked)
extern fn lean_name_mk_string(p: *anyopaque, s: *anyopaque) callconv(.c) *anyopaque;

/// Construct a Lean Name.str from a C string prefix and C string suffix.
/// This wraps lean_name_mk_string by first converting the C string to a
/// Lean String object.
pub export fn lean_name_mk_str(pre: *anyopaque, s: [*:0]const u8) callconv(.c) *anyopaque {
    const str_obj = string.lean_mk_string(s);
    const result = lean_name_mk_string(pre, str_obj);
    rc.lean_dec(str_obj);
    return result;
}

/// Get the byte length of a Lean string (excluding null terminator).
pub export fn lean_string_size(s: *anyopaque) callconv(.c) usize {
    const str: *extern struct {
        m_header: extern struct { m_rc: i32, m_cs_sz: u16, m_other: u8, m_tag: u8 },
        m_size: usize,
        m_capacity: usize,
        m_data: [0]u8,
    } = @ptrCast(@alignCast(s));
    return str.m_size - 1; // m_size includes null terminator
}

/// Get byte at index i from a Lean string.
pub export fn lean_string_get(s: *anyopaque, i: usize) callconv(.c) u8 {
    const str: *extern struct {
        m_header: extern struct { m_rc: i32, m_cs_sz: u16, m_other: u8, m_tag: u8 },
        m_size: usize,
        m_capacity: usize,
        m_data: [0]u8,
    } = @ptrCast(@alignCast(s));
    const bytes: [*]const u8 = @ptrCast(&str.m_data);
    return bytes[i];
}

/// Construct a List cons cell: cons(head, tail).
/// List α = nil (scalar 0) | cons(head, tail)
/// The constructor tag is 1 (cons).
pub export fn lean_list_cons(head: *anyopaque, tail: *anyopaque) callconv(.c) *anyopaque {
    const result = alloc.lean_alloc_ctor(1, 2, 0);
    ctor.lean_ctor_set(result, 0, head);
    ctor.lean_ctor_set(result, 1, tail);
    return result;
}

const alloc = @import("alloc.zig");
const ka = @import("kernel_accessors.zig");
const ea = @import("expr_accessors.zig");

// ── Level param instantiation ───────────────────────────────────────────────
// These replace C++ kernel functions instantiate_type_lparams/instantiate_value_lparams.
// TODO: proper pure-Zig implementation of level param substitution (walk expr,
// replace const/sort levels). For now, return the expression with rc incremented.

/// Instantiate level params in a constant's type.
/// env, ci (ConstantInfo), ls (List Level) → Expr
pub export fn lean_kernel_instantiate_type_lparams(env: *anyopaque, ci: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque {
    _ = env;
    _ = ls;
    const ty = ka.ciType(ci);
    return rc.lean_inc_ret(ty);
}

/// Instantiate level params in a constant's value.
/// env, ci (ConstantInfo), ls (List Level) → Expr
pub export fn lean_kernel_instantiate_value_lparams(env: *anyopaque, ci: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque {
    _ = env;
    _ = ls;
    const val = ka.ciValue(ci);
    return rc.lean_inc_ret(val);
}

/// Cheap beta reduction: unwrap a single beta-redex if present.
/// TODO: proper implementation. For now, just return the expression unchanged.
pub export fn lean_kernel_cheap_beta_reduce(e: *anyopaque) callconv(.c) *anyopaque {
    return rc.lean_inc_ret(e);
}
