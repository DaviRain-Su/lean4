// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Exports of C++ static-inline helper functions from lean.h.
//!
//! These are trivial field-accessors and comparisons that the C++ runtime
//! provides via `static inline` in `lean.h`.  The EmitZig preamble declares
//! them as `extern fn`, so the Zig runtime archive must export matching
//! symbols for standalone (non-C++-linked) builds.

const std = @import("std");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const alloc = @import("alloc.zig");
const rc = @import("rc.zig");
const string_mod = @import("string.zig");
const array_mod = @import("array.zig");
const compat = @import("compat.zig");
const ctor = @import("ctor.zig");
const io_result = @import("io_result.zig");

pub const force_link = true;
extern fn l_Lean_Name_hash___override(n: *anyopaque) callconv(.c) u64;


// ── Object header field accessors ─────────────────────────────────────────────

inline fn header(o: *anyopaque) *align(1) lean.lean_object {
    return @ptrCast(o);
}

inline fn ptrTag(o: *anyopaque) u8 {
    return header(o).m_tag;
}

inline fn ptrOther(o: *anyopaque) u8 {
    return header(o).m_other;
}

inline fn rcVal(o: *anyopaque) i32 {
    return header(o).m_rc;
}

pub export fn lean_align(v: usize, a: usize) callconv(.c) usize {
    return (v / a) * a + a * @intFromBool(v % a != 0);
}

pub export fn lean_has_rc(o: *anyopaque) callconv(.c) bool {
    return rcVal(o) != 0;
}

pub export fn lean_is_mt(o: *anyopaque) callconv(.c) bool {
    return rcVal(o) < 0;
}

pub export fn lean_is_persistent(o: *anyopaque) callconv(.c) bool {
    return rcVal(o) == 0;
}

pub export fn lean_is_big_object_tag(tag: u8) callconv(.c) bool {
    return tag == lean.LeanArray or tag == lean.LeanStructArray or
        tag == lean.LeanScalarArray or tag == lean.LeanString;
}

pub export fn lean_is_closure(o: *anyopaque) callconv(.c) bool {
    return ptrTag(o) == lean.LeanClosure;
}

pub export fn lean_is_array(o: *anyopaque) callconv(.c) bool {
    return ptrTag(o) == lean.LeanArray;
}

pub export fn lean_is_sarray(o: *anyopaque) callconv(.c) bool {
    return ptrTag(o) == lean.LeanScalarArray;
}

pub export fn lean_is_string(o: *anyopaque) callconv(.c) bool {
    return ptrTag(o) == lean.LeanString;
}

pub export fn lean_is_mpz(o: *anyopaque) callconv(.c) bool {
    return ptrTag(o) == lean.LeanMPZ;
}

pub export fn lean_is_thunk(o: *anyopaque) callconv(.c) bool {
    return ptrTag(o) == lean.LeanThunk;
}

pub export fn lean_is_task(o: *anyopaque) callconv(.c) bool {
    return ptrTag(o) == lean.LeanTask;
}

pub export fn lean_is_promise(o: *anyopaque) callconv(.c) bool {
    return ptrTag(o) == lean.LeanPromise;
}

pub export fn lean_is_external(o: *anyopaque) callconv(.c) bool {
    return ptrTag(o) == lean.LeanExternal;
}

pub export fn lean_is_ref(o: *anyopaque) callconv(.c) bool {
    return ptrTag(o) == lean.LeanRef;
}

// ── Type coercions (identity casts) ──────────────────────────────────────────

pub export fn lean_to_ctor(o: *anyopaque) callconv(.c) *anyopaque {
    return o;
}

pub export fn lean_to_closure(o: *anyopaque) callconv(.c) *anyopaque {
    return o;
}

pub export fn lean_to_array(o: *anyopaque) callconv(.c) *anyopaque {
    return o;
}

pub export fn lean_to_sarray(o: *anyopaque) callconv(.c) *anyopaque {
    return o;
}

pub export fn lean_to_string(o: *anyopaque) callconv(.c) *anyopaque {
    return o;
}

pub export fn lean_to_thunk(o: *anyopaque) callconv(.c) *anyopaque {
    return o;
}

pub export fn lean_to_task(o: *anyopaque) callconv(.c) *anyopaque {
    return o;
}

pub export fn lean_to_promise(o: *anyopaque) callconv(.c) *anyopaque {
    return o;
}

pub export fn lean_to_ref(o: *anyopaque) callconv(.c) *anyopaque {
    return o;
}

pub export fn lean_to_external(o: *anyopaque) callconv(.c) *anyopaque {
    return o;
}

// ── Constructor helpers ──────────────────────────────────────────────────────

pub export fn lean_ctor_scalar_cptr(o: *anyopaque) callconv(.c) [*]u8 {
    const num_objs: usize = ptrOther(o);
    const base: [*]?*anyopaque = @ptrCast(@alignCast(@as([*]u8, @ptrCast(o)) + @sizeOf(lean.lean_object)));
    return @ptrCast(base + num_objs);
}

// ── Allocation helpers ───────────────────────────────────────────────────────
// These are C++ static-inline helpers from lean.h that need exported symbols
// for linkage. allocSmallObject delegates correctly in both modes (uses
// mi_malloc_small + sets m_cs_sz in mimalloc mode).

pub export fn lean_alloc_ctor_memory(sz: usize) callconv(.c) *anyopaque {
    return alloc.allocCtorMemory(sz);
}

pub export fn lean_alloc_small_object(sz: usize) callconv(.c) *anyopaque {
    return alloc.allocSmallObject(sz);
}

pub export fn lean_free_small_object(o: *anyopaque) callconv(.c) void {
    alloc.freeSmallObject(o);
}

pub export fn lean_small_object_size(o: *anyopaque) callconv(.c) usize {
    return alloc.allocationPayloadSize(o) orelse alloc.legacyPayloadSize(o);
}

pub export fn lean_get_slot_idx(sz: usize) callconv(.c) c_uint {
    return @intCast(sz / 8 - 1);
}

pub export fn lean_alloc_string(size: usize, capacity: usize, len: usize) callconv(.c) *anyopaque {
    return string_mod.allocStringExport(size, capacity, len);
}

// ── Header setup ─────────────────────────────────────────────────────────────

pub export fn lean_set_non_heap_header(o: *anyopaque, sz: usize, tag: c_uint, other: c_uint) callconv(.c) void {
    const h = header(o);
    h.m_rc = 0;
    h.m_tag = @intCast(tag);
    h.m_other = @intCast(other);
    h.m_cs_sz = @intCast(sz);
}

pub export fn lean_set_non_heap_header_for_big(o: *anyopaque, tag: c_uint, other: c_uint) callconv(.c) void {
    lean_set_non_heap_header(o, 1, tag, other);
}

// ── Overflow checks ──────────────────────────────────────────────────────────

pub export fn lean_usize_add_would_overflow(a: usize, b: usize) callconv(.c) bool {
    return @addWithOverflow(a, b)[1] != 0;
}

pub export fn lean_usize_mul_would_overflow(a: usize, b: usize) callconv(.c) bool {
    return @mulWithOverflow(a, b)[1] != 0;
}

pub export fn lean_alloc_sarray_would_overflow(elem_size: c_uint, capacity: usize) callconv(.c) bool {
    if (lean_usize_mul_would_overflow(elem_size, capacity)) return true;
    const prod = elem_size * capacity;
    return lean_usize_add_would_overflow(@sizeOf(lean.lean_sarray_object), prod);
}

// ── Array helpers ────────────────────────────────────────────────────────────

inline fn asArray(o: *anyopaque) *lean.lean_array_object {
    return @ptrCast(@alignCast(o));
}

pub export fn lean_array_capacity(o: *anyopaque) callconv(.c) usize {
    return asArray(o).m_capacity;
}

pub export fn lean_array_byte_size(o: *anyopaque) callconv(.c) usize {
    return @sizeOf(lean.lean_array_object) + @sizeOf(?*anyopaque) * asArray(o).m_capacity;
}

pub export fn lean_array_data_byte_size(o: *anyopaque) callconv(.c) usize {
    return @sizeOf(lean.lean_array_object) + @sizeOf(?*anyopaque) * asArray(o).m_size;
}

pub export fn lean_array_set_core(o: *anyopaque, i: usize, v: *anyopaque) callconv(.c) void {
    const slots: [*]?*anyopaque = @ptrCast(@alignCast(&asArray(o).m_data));
    slots[i] = v;
}

pub export fn lean_array_set_size(o: *anyopaque, sz: usize) callconv(.c) void {
    asArray(o).m_size = sz;
}

pub export fn lean_array_sz(a: *anyopaque) callconv(.c) *anyopaque {
    const sz = asArray(a).m_size;
    rc.lean_dec(a);
    return object.lean_box(sz).?;
}

pub export fn lean_array_uswap(a: *anyopaque, i: usize, j: usize) callconv(.c) *anyopaque {
    return array_mod.lean_array_uswap(a, i, j);
}

extern fn lean_copy_expand_array_nonlinear(a: *anyopaque, expand: bool) callconv(.c) *anyopaque;

pub export fn lean_ensure_exclusive_array(a: *anyopaque) callconv(.c) *anyopaque {
    if (rc.lean_is_exclusive(a)) return a;
    return lean_copy_expand_array_nonlinear(a, false);
}

// ── Scalar array (sarray) helpers ────────────────────────────────────────────

inline fn asSarray(o: *anyopaque) *lean.lean_sarray_object {
    return @ptrCast(@alignCast(o));
}

pub export fn lean_sarray_elem_size(o: *anyopaque) callconv(.c) c_uint {
    return header(o).m_other;
}

pub export fn lean_sarray_capacity(o: *anyopaque) callconv(.c) usize {
    return asSarray(o).m_capacity;
}

pub export fn lean_sarray_byte_size(o: *anyopaque) callconv(.c) usize {
    const elem_sz: usize = header(o).m_other;
    return @sizeOf(lean.lean_sarray_object) + elem_sz * asSarray(o).m_capacity;
}

pub export fn lean_sarray_data_byte_size(o: *anyopaque) callconv(.c) usize {
    const elem_sz: usize = header(o).m_other;
    return @sizeOf(lean.lean_sarray_object) + elem_sz * asSarray(o).m_size;
}

pub export fn lean_sarray_set_size(o: *anyopaque, sz: usize) callconv(.c) void {
    asSarray(o).m_size = sz;
}

pub export fn lean_sarray_cptr(o: *anyopaque) callconv(.c) [*]u8 {
    return @ptrCast(&asSarray(o).m_data);
}

pub export fn lean_float_array_cptr(o: *anyopaque) callconv(.c) [*]f64 {
    return @ptrCast(@alignCast(&asSarray(o).m_data));
}

extern fn lean_sarray_eq_cold(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool;

pub export fn lean_sarray_eq(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool {
    if (a1 == a2) return true;
    const sz1 = asSarray(a1).m_size;
    const sz2 = asSarray(a2).m_size;
    return sz1 == sz2 and lean_sarray_eq_cold(a1, a2);
}

// ── Closure helpers ──────────────────────────────────────────────────────────

inline fn asClosure(o: *anyopaque) *lean.lean_closure_object {
    return @ptrCast(@alignCast(o));
}

pub export fn lean_closure_fun(o: *anyopaque) callconv(.c) ?*anyopaque {
    return asClosure(o).m_fun;
}

pub export fn lean_closure_arity(o: *anyopaque) callconv(.c) c_uint {
    return asClosure(o).m_arity;
}

pub export fn lean_closure_num_fixed(o: *anyopaque) callconv(.c) c_uint {
    return asClosure(o).m_num_fixed;
}

pub export fn lean_closure_arg_cptr(o: *anyopaque) callconv(.c) [*]?*anyopaque {
    return @ptrCast(&asClosure(o).m_objs);
}

pub export fn lean_closure_get(o: *anyopaque, i: c_uint) callconv(.c) ?*anyopaque {
    const slots: [*]?*anyopaque = @ptrCast(&asClosure(o).m_objs);
    return slots[i];
}

pub export fn lean_closure_byte_size(o: *anyopaque) callconv(.c) usize {
    return @sizeOf(lean.lean_closure_object) + @sizeOf(?*anyopaque) * asClosure(o).m_num_fixed;
}

pub export fn lean_closure_data_byte_size(o: *anyopaque) callconv(.c) usize {
    return lean_closure_byte_size(o);
}

// ── String helpers ───────────────────────────────────────────────────────────

inline fn asString(o: *anyopaque) *lean.lean_string_object {
    return @ptrCast(@alignCast(o));
}

pub export fn lean_string_capacity(o: *anyopaque) callconv(.c) usize {
    return asString(o).m_capacity;
}

pub export fn lean_string_byte_size(o: *anyopaque) callconv(.c) usize {
    return @sizeOf(lean.lean_string_object) + asString(o).m_capacity;
}

pub export fn lean_string_data_byte_size(o: *anyopaque) callconv(.c) usize {
    return @sizeOf(lean.lean_string_object) + asString(o).m_size;
}

pub export fn lean_string_len(o: *anyopaque) callconv(.c) usize {
    return asString(o).m_length;
}

pub export fn lean_string_cstr(o: *anyopaque) callconv(.c) [*:0]const u8 {
    return @ptrCast(&asString(o).m_data);
}
extern fn lean_nat_big_eq(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool;

pub export fn lean_nat_ne(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        return a1 != a2;
    }
    return !lean_nat_big_eq(a1, a2);
}

extern fn lean_string_eq_cold(s1: *anyopaque, s2: *anyopaque) callconv(.c) bool;

pub export fn lean_string_eq(s1: *anyopaque, s2: *anyopaque) callconv(.c) bool {
    if (s1 == s2) return true;
    return asString(s1).m_size == asString(s2).m_size and lean_string_eq_cold(s1, s2);
}

pub export fn lean_string_ne(s1: *anyopaque, s2: *anyopaque) callconv(.c) bool {
    return !lean_string_eq(s1, s2);
}

pub export fn lean_char_default_value() callconv(.c) u32 {
    return 'A';
}

// ── Thunk helper ─────────────────────────────────────────────────────────────

extern fn lean_thunk_get_core(t: *anyopaque) callconv(.c) *anyopaque;

pub export fn lean_thunk_get(t: *anyopaque) callconv(.c) *anyopaque {
    const thunk: *lean.lean_thunk_object = @ptrCast(@alignCast(t));
    if (thunk.m_value) |v| return v;
    return lean_thunk_get_core(t);
}

// ── Int helpers ──────────────────────────────────────────────────────────────

extern fn lean_int_big_eq(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool;
extern fn lean_int_big_le(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool;
extern fn lean_int_big_lt(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool;
extern fn lean_big_int_to_int(n: c_int) callconv(.c) *anyopaque;
extern fn lean_big_int64_to_int(n: i64) callconv(.c) *anyopaque;
extern fn lean_big_int_to_nat(a: *anyopaque) callconv(.c) *anyopaque;

const min_small_int: isize = std.math.minInt(isize) >> 1;
const max_small_int: isize = std.math.maxInt(isize) >> 1;

pub export fn lean_scalar_to_int(a: *anyopaque) callconv(.c) c_int {
    const v: isize = @bitCast(object.lean_unbox(a));
    return @intCast(v);
}

pub export fn lean_scalar_to_int64(a: *anyopaque) callconv(.c) i64 {
    const v: isize = @bitCast(object.lean_unbox(a));
    return @intCast(v);
}

pub export fn lean_int_to_int(n: c_int) callconv(.c) *anyopaque {
    if (@sizeOf(usize) == 8) {
        return object.lean_box(@bitCast(@as(isize, n))).?;
    } else if (min_small_int <= n and n <= max_small_int) {
        return object.lean_box(@bitCast(@as(isize, n))).?;
    } else {
        return lean_big_int_to_int(n);
    }
}

pub export fn lean_int_to_nat(a: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a)) return a;
    return lean_big_int_to_nat(a);
}

pub export fn lean_int_eq(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        return a1 == a2;
    }
    return lean_int_big_eq(a1, a2);
}

pub export fn lean_int_ne(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool {
    return !lean_int_eq(a1, a2);
}

pub export fn lean_int_le(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        return lean_scalar_to_int(a1) <= lean_scalar_to_int(a2);
    }
    return lean_int_big_le(a1, a2);
}

pub export fn lean_int_lt(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        return lean_scalar_to_int(a1) < lean_scalar_to_int(a2);
    }
    return lean_int_big_lt(a1, a2);
}



// ── IO result helper ─────────────────────────────────────────────────────────

pub export fn lean_io_result_take_value(r: *anyopaque) callconv(.c) *anyopaque {
    const v = ctor.lean_ctor_get(r, 0).?;
    rc.lean_inc(v);
    rc.lean_dec(r);
    return v;
}

// ── Name hashing ─────────────────────────────────────────────────────────────

pub export fn lean_name_hash_ptr(n: *anyopaque) callconv(.c) u64 {
    const num_objs = ptrOther(n);
    const offset = num_objs * @sizeOf(?*anyopaque);
    if ((ptrTag(n) == 1 or ptrTag(n) == 2) and ctor.ctorScalarBytes(n) >= @sizeOf(u64)) {
        return ctor.lean_ctor_get_uint64(n, @intCast(offset));
    }
    return l_Lean_Name_hash___override(n);
}

pub export fn lean_name_hash(n: *anyopaque) callconv(.c) u64 {
    if (object.lean_is_scalar(n)) return 1723;
    return lean_name_hash_ptr(n);
}

// ── HashMap/HashSet index helpers ────────────────────────────────────────────

pub export fn lean_hashmap_mk_idx(sz: *anyopaque, hash: u64) callconv(.c) usize {
    return hash & (object.lean_unbox(sz) - 1);
}

pub export fn lean_hashset_mk_idx(sz: *anyopaque, hash: u64) callconv(.c) usize {
    return hash & (object.lean_unbox(sz) - 1);
}

// ── Expression data accessor ─────────────────────────────────────────────────

pub export fn lean_expr_data(expr: *anyopaque) callconv(.c) u64 {
    const num_objs: usize = ptrOther(expr);
    const offset = num_objs * @sizeOf(?*anyopaque);
    return ctor.lean_ctor_get_uint64(expr, @intCast(offset));
}

// ── Compile-time constants ───────────────────────────────────────────────────

pub export fn lean_get_max_ctor_fields(_: *anyopaque) callconv(.c) *anyopaque {
    return object.lean_box(256).?;
}

pub export fn lean_get_max_ctor_scalars_size(_: *anyopaque) callconv(.c) *anyopaque {
    return object.lean_box(1024).?;
}

pub export fn lean_get_usize_size(_: *anyopaque) callconv(.c) *anyopaque {
    return object.lean_box(@sizeOf(usize)).?;
}

pub export fn lean_get_max_ctor_tag(_: *anyopaque) callconv(.c) *anyopaque {
    return object.lean_box(lean.LeanMaxCtorTag).?;
}

pub export fn lean_manual_get_root(_: *anyopaque) callconv(.c) *anyopaque {
    return string_mod.mkAsciiStringBytes("https://lean-lang.org/doc/");
}
