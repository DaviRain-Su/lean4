// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.
/// Auto-generated from the EmitZig preamble.
/// Do not edit by hand; regenerate via tools/gen-lean-rt-zig.py.
pub const std = @import("std");
pub const lean_object = extern struct {
    m_rc: i32,
    m_cs_sz: u16,
    m_other: u8,
    m_tag: u8,
};
pub const lean_once_cell_t = extern struct {
    state: i32,
    lock: i32,
};
pub const LeanObj = ?*align(1) lean_object;
pub const lean_ctor_object = extern struct {
    m_header: lean_object,
    m_objs: [0]usize,
};
pub const lean_array_object = extern struct {
    m_header: lean_object,
    m_size: usize,
    m_capacity: usize,
    m_data: [0]LeanObj,
};
pub const lean_sarray_object = extern struct {
    m_header: lean_object,
    m_size: usize,
    m_capacity: usize,
    m_data: [0]u8,
};
pub const lean_string_object = extern struct {
    m_header: lean_object,
    m_size: usize,
    m_capacity: usize,
    m_length: usize,
    m_data: [0]u8,
};
pub const lean_closure_object = extern struct {
    m_header: lean_object,
    m_fun: ?*anyopaque,
    m_arity: u16,
    m_num_fixed: u16,
    m_objs: [0]LeanObj,
};
pub const MainFn = *const fn (c_int, [*c][*c]u8) callconv(.c) LeanObj;

pub extern fn acos(_0: f64) callconv(.c) f64;
pub extern fn acosf(_0: f32) callconv(.c) f32;
pub extern fn acosh(_0: f64) callconv(.c) f64;
pub extern fn acoshf(_0: f32) callconv(.c) f32;
pub extern fn asin(_0: f64) callconv(.c) f64;
pub extern fn asinf(_0: f32) callconv(.c) f32;
pub extern fn asinh(_0: f64) callconv(.c) f64;
pub extern fn asinhf(_0: f32) callconv(.c) f32;
pub extern fn atan(_0: f64) callconv(.c) f64;
pub extern fn atan2(_0: f64, _1: f64) callconv(.c) f64;
pub extern fn atan2f(_0: f32, _1: f32) callconv(.c) f32;
pub extern fn atanf(_0: f32) callconv(.c) f32;
pub extern fn atanh(_0: f64) callconv(.c) f64;
pub extern fn atanhf(_0: f32) callconv(.c) f32;
pub extern fn cbrt(_0: f64) callconv(.c) f64;
pub extern fn cbrtf(_0: f32) callconv(.c) f32;
pub extern fn ceil(_0: f64) callconv(.c) f64;
pub extern fn ceilf(_0: f32) callconv(.c) f32;
pub extern fn cos(_0: f64) callconv(.c) f64;
pub extern fn cosf(_0: f32) callconv(.c) f32;
pub extern fn cosh(_0: f64) callconv(.c) f64;
pub extern fn coshf(_0: f32) callconv(.c) f32;
pub extern fn exit(_0: c_int) callconv(.c) noreturn;
pub extern fn exp(_0: f64) callconv(.c) f64;
pub extern fn exp2(_0: f64) callconv(.c) f64;
pub extern fn exp2f(_0: f32) callconv(.c) f32;
pub extern fn expf(_0: f32) callconv(.c) f32;
pub extern fn fabs(_0: f64) callconv(.c) f64;
pub extern fn fabsf(_0: f32) callconv(.c) f32;
pub extern fn floor(_0: f64) callconv(.c) f64;
pub extern fn floorf(_0: f32) callconv(.c) f32;
pub extern fn lean_align(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_alloc_ctor_memory(_0: c_uint) callconv(.c) LeanObj;
pub extern fn lean_alloc_external(_0: ?*anyopaque, _1: ?*anyopaque) callconv(.c) LeanObj;
pub extern fn lean_alloc_mpz() callconv(.c) LeanObj;
pub extern fn lean_alloc_object(_0: usize) callconv(.c) LeanObj;
pub extern fn lean_alloc_sarray_would_overflow(_0: c_uint, _1: usize) callconv(.c) bool;
pub extern fn lean_alloc_small(_0: c_uint, _1: c_uint) callconv(.c) ?*anyopaque;
pub extern fn lean_alloc_small_object(_0: c_uint) callconv(.c) LeanObj;
pub extern fn lean_alloc_string(_0: usize, _1: usize, _2: usize) callconv(.c) LeanObj;
pub extern fn lean_apply_1(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_10(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj, _7: LeanObj, _8: LeanObj, _9: LeanObj, _10: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_11(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj, _7: LeanObj, _8: LeanObj, _9: LeanObj, _10: LeanObj, _11: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_12(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj, _7: LeanObj, _8: LeanObj, _9: LeanObj, _10: LeanObj, _11: LeanObj, _12: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_13(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj, _7: LeanObj, _8: LeanObj, _9: LeanObj, _10: LeanObj, _11: LeanObj, _12: LeanObj, _13: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_14(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj, _7: LeanObj, _8: LeanObj, _9: LeanObj, _10: LeanObj, _11: LeanObj, _12: LeanObj, _13: LeanObj, _14: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_15(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj, _7: LeanObj, _8: LeanObj, _9: LeanObj, _10: LeanObj, _11: LeanObj, _12: LeanObj, _13: LeanObj, _14: LeanObj, _15: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_16(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj, _7: LeanObj, _8: LeanObj, _9: LeanObj, _10: LeanObj, _11: LeanObj, _12: LeanObj, _13: LeanObj, _14: LeanObj, _15: LeanObj, _16: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_2(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_3(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_4(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_5(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_6(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_7(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj, _7: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_8(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj, _7: LeanObj, _8: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_9(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: LeanObj, _6: LeanObj, _7: LeanObj, _8: LeanObj, _9: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_m(_0: LeanObj, _1: c_uint, _2: [*c]LeanObj) callconv(.c) LeanObj;
pub extern fn lean_apply_n(_0: LeanObj, _1: c_uint, _2: [*c]LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_byte_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_array_capacity(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_array_data_byte_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_array_fget(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_fget_borrowed(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_fset(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_fswap(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_get(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_get_panic(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_mk(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_pop(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_push(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_set(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_set_core(_0: LeanObj, _1: usize, _2: LeanObj) callconv(.c) void;
pub extern fn lean_array_set_panic(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_set_size(_0: LeanObj, _1: usize) callconv(.c) void;
pub extern fn lean_array_swap(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_sz(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_to_list(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_uset(_0: LeanObj, _1: usize, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_array_uswap(_0: LeanObj, _1: usize, _2: usize) callconv(.c) LeanObj;
pub extern fn lean_big_int64_to_int(_0: i64) callconv(.c) LeanObj;
pub extern fn lean_big_int_to_int(_0: c_int) callconv(.c) LeanObj;
pub extern fn lean_big_int_to_nat(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_big_size_t_to_int(_0: usize) callconv(.c) LeanObj;
pub extern fn lean_big_usize_to_nat(_0: usize) callconv(.c) LeanObj;
pub extern fn lean_bool_to_int16(_0: u8) callconv(.c) u16;
pub extern fn lean_bool_to_int32(_0: u8) callconv(.c) u32;
pub extern fn lean_bool_to_int64(_0: u8) callconv(.c) u64;
pub extern fn lean_bool_to_int8(_0: u8) callconv(.c) u8;
pub extern fn lean_bool_to_isize(_0: u8) callconv(.c) usize;
pub extern fn lean_bool_to_uint16(_0: u8) callconv(.c) u16;
pub extern fn lean_bool_to_uint32(_0: u8) callconv(.c) u32;
pub extern fn lean_bool_to_uint64(_0: u8) callconv(.c) u64;
pub extern fn lean_bool_to_uint8(_0: u8) callconv(.c) u8;
pub extern fn lean_bool_to_usize(_0: u8) callconv(.c) usize;
pub extern fn lean_box_uint16_zig_impl(_0: u16) callconv(.c) LeanObj;
pub extern fn lean_box_uint8_zig_impl(_0: u8) callconv(.c) LeanObj;
pub extern fn lean_byte_array_copy_slice(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: u8) callconv(.c) LeanObj;
pub extern fn lean_byte_array_data(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_byte_array_fset(_0: LeanObj, _1: LeanObj, _2: u8) callconv(.c) LeanObj;
pub extern fn lean_byte_array_get(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_byte_array_hash(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_byte_array_mk(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_byte_array_push(_0: LeanObj, _1: u8) callconv(.c) LeanObj;
pub extern fn lean_byte_array_set(_0: LeanObj, _1: LeanObj, _2: u8) callconv(.c) LeanObj;
pub extern fn lean_byte_array_uget(_0: LeanObj, _1: usize) callconv(.c) u8;
pub extern fn lean_byte_array_uset(_0: LeanObj, _1: usize, _2: u8) callconv(.c) LeanObj;
pub extern fn lean_byteslice_beq(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_char_default_value() callconv(.c) u32;
pub extern fn lean_check_heartbeat() callconv(.c) void;
pub extern fn lean_check_interrupted() callconv(.c) void;
pub extern fn lean_check_memory(_0: [*:0]const u8) callconv(.c) void;
pub extern fn lean_check_stack(_0: [*:0]const u8) callconv(.c) void;
pub extern fn lean_check_system(_0: [*:0]const u8, _1: bool) callconv(.c) void;
pub extern fn lean_chmod(_0: LeanObj, _1: u32) callconv(.c) LeanObj;
pub extern fn lean_closure_arg_cptr(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_closure_arity(_0: LeanObj) callconv(.c) c_uint;
pub extern fn lean_closure_byte_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_closure_data_byte_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_closure_fun(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_closure_get(_0: LeanObj, _1: c_uint) callconv(.c) LeanObj;
pub extern fn lean_closure_max_args(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_closure_num_fixed(_0: LeanObj) callconv(.c) c_uint;
pub extern fn lean_compacted_region_free(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_compacted_region_read(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_compacted_region_save(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj, _5: u8, _6: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_copy_byte_array(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_copy_expand_array(_0: LeanObj, _1: bool) callconv(.c) LeanObj;
pub extern fn lean_copy_expand_array_nonlinear(_0: LeanObj, _1: bool) callconv(.c) LeanObj;
pub extern fn lean_copy_float_array(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_copy_sarray(_0: LeanObj, _1: usize) callconv(.c) LeanObj;
pub extern fn lean_cstr_to_int(_0: ?*anyopaque) callconv(.c) LeanObj;
pub extern fn lean_ctor_scalar_cptr(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_dbg_sleep(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_dbg_stack_trace(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_dbg_trace(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_dbg_trace_if_shared(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_dec_ref_cold(_0: LeanObj) callconv(.c) void;
pub extern fn lean_decode_io_error(_0: c_int, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_decode_lossy_utf8(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_decode_uv_error(_0: c_int, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_ensure_exclusive_array(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_expr_data(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_extract_mpz_value(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_finalize_openssl() callconv(.c) void;
pub extern fn lean_finalize_stack_overflow() callconv(.c) void;
pub extern fn lean_finalize_task_manager() callconv(.c) void;
pub extern fn lean_finalize_thread() callconv(.c) void;
pub extern fn lean_float32_add(_0: f32, _1: f32) callconv(.c) f32;
pub extern fn lean_float32_beq(_0: f32, _1: f32) callconv(.c) u8;
pub extern fn lean_float32_decLe(_0: f32, _1: f32) callconv(.c) u8;
pub extern fn lean_float32_decLt(_0: f32, _1: f32) callconv(.c) u8;
pub extern fn lean_float32_div(_0: f32, _1: f32) callconv(.c) f32;
pub extern fn lean_float32_frexp(_0: f32) callconv(.c) LeanObj;
pub extern fn lean_float32_isfinite(_0: f32) callconv(.c) u8;
pub extern fn lean_float32_isinf(_0: f32) callconv(.c) u8;
pub extern fn lean_float32_isnan(_0: f32) callconv(.c) u8;
pub extern fn lean_float32_mul(_0: f32, _1: f32) callconv(.c) f32;
pub extern fn lean_float32_negate(_0: f32) callconv(.c) f32;
pub extern fn lean_float32_of_bits(_0: u32) callconv(.c) f32;
pub extern fn lean_float32_once_cold(_0: *f32, _1: *lean_once_cell_t, _2: *const fn () callconv(.c) f32) callconv(.c) f32;
pub extern fn lean_float32_scaleb(_0: f32, _1: LeanObj) callconv(.c) f32;
pub extern fn lean_float32_sub(_0: f32, _1: f32) callconv(.c) f32;
pub extern fn lean_float32_to_bits(_0: f32) callconv(.c) u32;
pub extern fn lean_float32_to_float(_0: f32) callconv(.c) f64;
pub extern fn lean_float32_to_int16(_0: f32) callconv(.c) u16;
pub extern fn lean_float32_to_int32(_0: f32) callconv(.c) u32;
pub extern fn lean_float32_to_int64(_0: f32) callconv(.c) u64;
pub extern fn lean_float32_to_int8(_0: f32) callconv(.c) u8;
pub extern fn lean_float32_to_isize(_0: f32) callconv(.c) usize;
pub extern fn lean_float32_to_string(_0: f32) callconv(.c) LeanObj;
pub extern fn lean_float32_to_uint16(_0: f32) callconv(.c) u16;
pub extern fn lean_float32_to_uint32(_0: f32) callconv(.c) u32;
pub extern fn lean_float32_to_uint64(_0: f32) callconv(.c) u64;
pub extern fn lean_float32_to_uint8(_0: f32) callconv(.c) u8;
pub extern fn lean_float32_to_usize(_0: f32) callconv(.c) usize;
pub extern fn lean_float_add(_0: f64, _1: f64) callconv(.c) f64;
pub extern fn lean_float_array_cptr(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_float_array_data(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_float_array_fget(_0: LeanObj, _1: LeanObj) callconv(.c) f64;
pub extern fn lean_float_array_fset(_0: LeanObj, _1: LeanObj, _2: f64) callconv(.c) LeanObj;
pub extern fn lean_float_array_get(_0: LeanObj, _1: LeanObj) callconv(.c) f64;
pub extern fn lean_float_array_mk(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_float_array_push(_0: LeanObj, _1: f64) callconv(.c) LeanObj;
pub extern fn lean_float_array_set(_0: LeanObj, _1: LeanObj, _2: f64) callconv(.c) LeanObj;
pub extern fn lean_float_array_size(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_float_array_uget(_0: LeanObj, _1: usize) callconv(.c) f64;
pub extern fn lean_float_array_uset(_0: LeanObj, _1: usize, _2: f64) callconv(.c) LeanObj;
pub extern fn lean_float_beq(_0: f64, _1: f64) callconv(.c) u8;
pub extern fn lean_float_decLe(_0: f64, _1: f64) callconv(.c) u8;
pub extern fn lean_float_decLt(_0: f64, _1: f64) callconv(.c) u8;
pub extern fn lean_float_div(_0: f64, _1: f64) callconv(.c) f64;
pub extern fn lean_float_frexp(_0: f64) callconv(.c) LeanObj;
pub extern fn lean_float_isfinite(_0: f64) callconv(.c) u8;
pub extern fn lean_float_isinf(_0: f64) callconv(.c) u8;
pub extern fn lean_float_isnan(_0: f64) callconv(.c) u8;
pub extern fn lean_float_mul(_0: f64, _1: f64) callconv(.c) f64;
pub extern fn lean_float_negate(_0: f64) callconv(.c) f64;
pub extern fn lean_float_of_bits(_0: u64) callconv(.c) f64;
pub extern fn lean_float_once_cold(_0: *f64, _1: *lean_once_cell_t, _2: *const fn () callconv(.c) f64) callconv(.c) f64;
pub extern fn lean_float_scaleb(_0: f64, _1: LeanObj) callconv(.c) f64;
pub extern fn lean_float_sub(_0: f64, _1: f64) callconv(.c) f64;
pub extern fn lean_float_to_bits(_0: f64) callconv(.c) u64;
pub extern fn lean_float_to_float32(_0: f64) callconv(.c) f32;
pub extern fn lean_float_to_int16(_0: f64) callconv(.c) u16;
pub extern fn lean_float_to_int32(_0: f64) callconv(.c) u32;
pub extern fn lean_float_to_int64(_0: f64) callconv(.c) u64;
pub extern fn lean_float_to_int8(_0: f64) callconv(.c) u8;
pub extern fn lean_float_to_isize(_0: f64) callconv(.c) usize;
pub extern fn lean_float_to_string(_0: f64) callconv(.c) LeanObj;
pub extern fn lean_float_to_uint16(_0: f64) callconv(.c) u16;
pub extern fn lean_float_to_uint32(_0: f64) callconv(.c) u32;
pub extern fn lean_float_to_uint64(_0: f64) callconv(.c) u64;
pub extern fn lean_float_to_uint8(_0: f64) callconv(.c) u8;
pub extern fn lean_float_to_usize(_0: f64) callconv(.c) usize;
pub extern fn lean_free_object(_0: LeanObj) callconv(.c) void;
pub extern fn lean_free_small(_0: ?*anyopaque) callconv(.c) void;
pub extern fn lean_free_small_object(_0: LeanObj) callconv(.c) void;
pub extern fn lean_get_allocated_memory() callconv(.c) usize;
pub extern fn lean_get_current_time() callconv(.c) LeanObj;
pub extern fn lean_get_external_class(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_get_external_data(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_get_githash(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_get_max_ctor_fields(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_get_max_ctor_scalars_size(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_get_max_ctor_tag(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_get_max_heartbeat() callconv(.c) usize;
pub extern fn lean_get_set_stderr(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_get_set_stdin(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_get_set_stdout(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_get_slot_idx(_0: c_uint) callconv(.c) c_uint;
pub extern fn lean_get_stderr() callconv(.c) LeanObj;
pub extern fn lean_get_stdin() callconv(.c) LeanObj;
pub extern fn lean_get_stdout() callconv(.c) LeanObj;
pub extern fn lean_get_usize_size(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_get_windows_local_timezone_id_at(_0: u64) callconv(.c) LeanObj;
pub extern fn lean_has_rc(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_hashmap_mk_idx(_0: LeanObj, _1: u64) callconv(.c) usize;
pub extern fn lean_hashset_mk_idx(_0: LeanObj, _1: u64) callconv(.c) usize;
pub extern fn lean_inc_heartbeat() callconv(.c) void;
pub extern fn lean_init_task_manager() callconv(.c) void;
pub extern fn lean_init_task_manager_using(_0: c_uint) callconv(.c) void;
pub extern fn lean_initialize() callconv(.c) void;
pub extern fn lean_initialize_openssl() callconv(.c) void;
pub extern fn lean_initialize_runtime_module() callconv(.c) void;
pub extern fn lean_initialize_stack_overflow() callconv(.c) void;
pub extern fn lean_initialize_thread() callconv(.c) void;
pub extern fn lean_int16_abs(_0: u16) callconv(.c) u16;
pub extern fn lean_int16_add(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_int16_complement(_0: u16) callconv(.c) u16;
pub extern fn lean_int16_dec_eq(_0: u16, _1: u16) callconv(.c) u8;
pub extern fn lean_int16_dec_le(_0: u16, _1: u16) callconv(.c) u8;
pub extern fn lean_int16_dec_lt(_0: u16, _1: u16) callconv(.c) u8;
pub extern fn lean_int16_div(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_int16_land(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_int16_lor(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_int16_mod(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_int16_mul(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_int16_neg(_0: u16) callconv(.c) u16;
pub extern fn lean_int16_of_big_int(_0: LeanObj) callconv(.c) u16;
pub extern fn lean_int16_of_int(_0: LeanObj) callconv(.c) u16;
pub extern fn lean_int16_of_nat(_0: LeanObj) callconv(.c) u16;
pub extern fn lean_int16_shift_left(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_int16_shift_right(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_int16_sub(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_int16_to_float(_0: u16) callconv(.c) f64;
pub extern fn lean_int16_to_float32(_0: u16) callconv(.c) f32;
pub extern fn lean_int16_to_int(_0: u16) callconv(.c) LeanObj;
pub extern fn lean_int16_to_int32(_0: u16) callconv(.c) u32;
pub extern fn lean_int16_to_int64(_0: u16) callconv(.c) u64;
pub extern fn lean_int16_to_int8(_0: u16) callconv(.c) u8;
pub extern fn lean_int16_to_isize(_0: u16) callconv(.c) usize;
pub extern fn lean_int16_xor(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_int32_abs(_0: u32) callconv(.c) u32;
pub extern fn lean_int32_add(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_int32_complement(_0: u32) callconv(.c) u32;
pub extern fn lean_int32_dec_eq(_0: u32, _1: u32) callconv(.c) u8;
pub extern fn lean_int32_dec_le(_0: u32, _1: u32) callconv(.c) u8;
pub extern fn lean_int32_dec_lt(_0: u32, _1: u32) callconv(.c) u8;
pub extern fn lean_int32_div(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_int32_land(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_int32_lor(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_int32_mod(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_int32_mul(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_int32_neg(_0: u32) callconv(.c) u32;
pub extern fn lean_int32_of_big_int(_0: LeanObj) callconv(.c) u32;
pub extern fn lean_int32_of_int(_0: LeanObj) callconv(.c) u32;
pub extern fn lean_int32_of_nat(_0: LeanObj) callconv(.c) u32;
pub extern fn lean_int32_shift_left(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_int32_shift_right(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_int32_sub(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_int32_to_float(_0: u32) callconv(.c) f64;
pub extern fn lean_int32_to_float32(_0: u32) callconv(.c) f32;
pub extern fn lean_int32_to_int(_0: u32) callconv(.c) LeanObj;
pub extern fn lean_int32_to_int16(_0: u32) callconv(.c) u16;
pub extern fn lean_int32_to_int64(_0: u32) callconv(.c) u64;
pub extern fn lean_int32_to_int8(_0: u32) callconv(.c) u8;
pub extern fn lean_int32_to_isize(_0: u32) callconv(.c) usize;
pub extern fn lean_int32_xor(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_int64_abs(_0: u64) callconv(.c) u64;
pub extern fn lean_int64_add(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_int64_complement(_0: u64) callconv(.c) u64;
pub extern fn lean_int64_dec_eq(_0: u64, _1: u64) callconv(.c) u8;
pub extern fn lean_int64_dec_le(_0: u64, _1: u64) callconv(.c) u8;
pub extern fn lean_int64_dec_lt(_0: u64, _1: u64) callconv(.c) u8;
pub extern fn lean_int64_div(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_int64_land(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_int64_lor(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_int64_mod(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_int64_mul(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_int64_neg(_0: u64) callconv(.c) u64;
pub extern fn lean_int64_of_big_int(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_int64_of_int(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_int64_of_nat(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_int64_shift_left(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_int64_shift_right(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_int64_sub(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_int64_to_float(_0: u64) callconv(.c) f64;
pub extern fn lean_int64_to_float32(_0: u64) callconv(.c) f32;
pub extern fn lean_int64_to_int(_0: u64) callconv(.c) LeanObj;
pub extern fn lean_int64_to_int16(_0: u64) callconv(.c) u16;
pub extern fn lean_int64_to_int32(_0: u64) callconv(.c) u32;
pub extern fn lean_int64_to_int8(_0: u64) callconv(.c) u8;
pub extern fn lean_int64_to_int_sint(_0: u64) callconv(.c) LeanObj;
pub extern fn lean_int64_to_isize(_0: u64) callconv(.c) usize;
pub extern fn lean_int64_xor(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_int8_abs(_0: u8) callconv(.c) u8;
pub extern fn lean_int8_add(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_complement(_0: u8) callconv(.c) u8;
pub extern fn lean_int8_dec_eq(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_dec_le(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_dec_lt(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_div(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_land(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_lor(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_mod(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_mul(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_neg(_0: u8) callconv(.c) u8;
pub extern fn lean_int8_of_big_int(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_int8_of_int(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_int8_of_nat(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_int8_shift_left(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_shift_right(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_sub(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int8_to_float(_0: u8) callconv(.c) f64;
pub extern fn lean_int8_to_float32(_0: u8) callconv(.c) f32;
pub extern fn lean_int8_to_int(_0: u8) callconv(.c) LeanObj;
pub extern fn lean_int8_to_int16(_0: u8) callconv(.c) u16;
pub extern fn lean_int8_to_int32(_0: u8) callconv(.c) u32;
pub extern fn lean_int8_to_int64(_0: u8) callconv(.c) u64;
pub extern fn lean_int8_to_isize(_0: u8) callconv(.c) usize;
pub extern fn lean_int8_xor(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_int_add(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_big_add(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_big_div(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_big_div_exact(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_big_ediv(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_big_emod(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_big_eq(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_int_big_le(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_int_big_lt(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_int_big_mod(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_big_mul(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_big_neg(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_big_nonneg(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_int_big_sub(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_dec_eq(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_int_dec_le(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_int_dec_lt(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_int_dec_nonneg(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_int_div(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_div_exact(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_ediv(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_emod(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_eq(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_int_le(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_int_lt(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_int_mod(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_mul(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_ne(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_int_neg(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_neg_succ_of_nat(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_sub(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_int_to_int(_0: c_int) callconv(.c) LeanObj;
pub extern fn lean_int_to_nat(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_internal_enable_debug(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_internal_get_build_type(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_internal_get_default_max_heartbeat() callconv(.c) LeanObj;
pub extern fn lean_internal_get_default_max_memory() callconv(.c) LeanObj;
pub extern fn lean_internal_get_hardware_concurrency(_0: LeanObj) callconv(.c) u32;
pub extern fn lean_internal_has_address_sanitizer(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_internal_has_llvm_backend(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_internal_is_debug(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_internal_is_multi_thread(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_internal_is_stage0(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_internal_panic(_0: ?*anyopaque) callconv(.c) void;
pub extern fn lean_internal_panic_out_of_memory() callconv(.c) void;
pub extern fn lean_internal_panic_overflow() callconv(.c) void;
pub extern fn lean_internal_panic_rc_overflow() callconv(.c) void;
pub extern fn lean_internal_panic_unreachable() callconv(.c) void;
pub extern fn lean_internal_set_exit_on_panic(_0: u8) callconv(.c) LeanObj;
pub extern fn lean_internal_set_max_heartbeat(_0: usize) callconv(.c) LeanObj;
pub extern fn lean_internal_set_max_memory(_0: usize) callconv(.c) LeanObj;
pub extern fn lean_internal_set_thread_stack_size(_0: usize) callconv(.c) LeanObj;
pub extern fn lean_io_allocprof(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_app_path() callconv(.c) LeanObj;
pub extern fn lean_io_as_task(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_basemutex_lock(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_basemutex_new() callconv(.c) LeanObj;
pub extern fn lean_io_basemutex_try_lock(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_io_basemutex_unlock(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_baserecmutex_lock(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_baserecmutex_new() callconv(.c) LeanObj;
pub extern fn lean_io_baserecmutex_try_lock(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_io_baserecmutex_unlock(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_basesharedmutex_new() callconv(.c) LeanObj;
pub extern fn lean_io_basesharedmutex_read(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_basesharedmutex_try_read(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_io_basesharedmutex_try_write(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_io_basesharedmutex_unlock_read(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_basesharedmutex_unlock_write(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_basesharedmutex_write(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_bind_task(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: u8) callconv(.c) LeanObj;
pub extern fn lean_io_cancel(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_cancel_core(_0: LeanObj) callconv(.c) void;
pub extern fn lean_io_check_canceled() callconv(.c) u8;
pub extern fn lean_io_check_canceled_core() callconv(.c) bool;
pub extern fn lean_io_condvar_new() callconv(.c) LeanObj;
pub extern fn lean_io_condvar_notify_all(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_condvar_notify_one(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_condvar_wait(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_create_dir(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_create_tempdir() callconv(.c) LeanObj;
pub extern fn lean_io_create_tempfile() callconv(.c) LeanObj;
pub extern fn lean_io_current_dir() callconv(.c) LeanObj;
pub extern fn lean_io_eprintln(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_error_to_string(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_exit(_0: u8) callconv(.c) LeanObj;
pub extern fn lean_io_force_exit(_0: u8) callconv(.c) LeanObj;
pub extern fn lean_io_get_num_heartbeats() callconv(.c) LeanObj;
pub extern fn lean_io_get_random_bytes(_0: usize) callconv(.c) LeanObj;
pub extern fn lean_io_get_task_state(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_io_get_task_state_core(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_io_get_tid() callconv(.c) u64;
pub extern fn lean_io_getenv(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_hard_link(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_initializing() callconv(.c) u8;
pub extern fn lean_io_map_task(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: u8) callconv(.c) LeanObj;
pub extern fn lean_io_mark_end_initialization() callconv(.c) void;
pub extern fn lean_io_metadata(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_mono_ms_now() callconv(.c) LeanObj;
pub extern fn lean_io_mono_nanos_now() callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_flush(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_get_line(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_is_eof(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_io_prim_handle_is_tty(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_io_prim_handle_lock(_0: LeanObj, _1: u8) callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_mk(_0: LeanObj, _1: u8) callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_put_str(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_read(_0: LeanObj, _1: usize) callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_rewind(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_truncate(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_try_lock(_0: LeanObj, _1: u8) callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_unlock(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_prim_handle_write(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_println(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_process_child_kill(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_process_child_pid(_0: LeanObj, _1: LeanObj) callconv(.c) u32;
pub extern fn lean_io_process_child_take_stdin(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_process_child_try_wait(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_process_child_wait(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_process_get_current_dir() callconv(.c) LeanObj;
pub extern fn lean_io_process_get_pid() callconv(.c) u32;
pub extern fn lean_io_process_set_current_dir(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_process_spawn(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_promise_new() callconv(.c) LeanObj;
pub extern fn lean_io_promise_resolve(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_promise_result_opt(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_read_dir(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_realpath(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_remove_dir(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_remove_file(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_rename(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_result_get_error(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_result_is_error(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_io_result_mk_error(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_result_show_error(_0: LeanObj) callconv(.c) void;
pub extern fn lean_io_result_take_value(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_set_heartbeats(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_symlink_metadata(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_timeit(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_wait(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_wait_any(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_io_wait_any_core(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_is_array(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_big_object_tag(_0: u8) callconv(.c) bool;
pub extern fn lean_is_closure(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_exclusive_obj(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_is_external(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_mpz(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_mt(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_persistent(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_promise(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_ref(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_sarray(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_shared(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_string(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_task(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_is_thunk(_0: LeanObj) callconv(.c) bool;
pub extern fn lean_isize_abs(_0: usize) callconv(.c) usize;
pub extern fn lean_isize_add(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_isize_complement(_0: usize) callconv(.c) usize;
pub extern fn lean_isize_dec_eq(_0: usize, _1: usize) callconv(.c) u8;
pub extern fn lean_isize_dec_le(_0: usize, _1: usize) callconv(.c) u8;
pub extern fn lean_isize_dec_lt(_0: usize, _1: usize) callconv(.c) u8;
pub extern fn lean_isize_div(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_isize_land(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_isize_lor(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_isize_mod(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_isize_mul(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_isize_neg(_0: usize) callconv(.c) usize;
pub extern fn lean_isize_of_big_int(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_isize_of_int(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_isize_of_nat(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_isize_shift_left(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_isize_shift_right(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_isize_sub(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_isize_to_float(_0: usize) callconv(.c) f64;
pub extern fn lean_isize_to_float32(_0: usize) callconv(.c) f32;
pub extern fn lean_isize_to_int(_0: usize) callconv(.c) LeanObj;
pub extern fn lean_isize_to_int16(_0: usize) callconv(.c) u16;
pub extern fn lean_isize_to_int32(_0: usize) callconv(.c) u32;
pub extern fn lean_isize_to_int64(_0: usize) callconv(.c) u64;
pub extern fn lean_isize_to_int8(_0: usize) callconv(.c) u8;
pub extern fn lean_isize_xor(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_manual_get_root(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mark_mt(_0: LeanObj) callconv(.c) void;
pub extern fn lean_mark_persistent(_0: LeanObj) callconv(.c) void;
pub extern fn lean_max_small_nat(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_array(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_ascii_string_unchecked(_0: ?*anyopaque) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_already_exists(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_already_exists_file(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_already_exists_file_zig_impl(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_already_exists_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_eof(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_eof_zig_impl(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_hardware_fault(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_hardware_fault_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_illegal_operation(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_illegal_operation_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_inappropriate_type(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_inappropriate_type_file(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_inappropriate_type_file_zig_impl(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_inappropriate_type_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_interrupted(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_interrupted_zig_impl(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_invalid_argument(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_invalid_argument_file(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_invalid_argument_file_zig_impl(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_invalid_argument_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_no_file_or_directory(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_no_file_or_directory_zig_impl(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_no_such_thing(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_no_such_thing_file(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_no_such_thing_file_zig_impl(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_no_such_thing_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_other_error(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_other_error_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_permission_denied(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_permission_denied_file(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_permission_denied_file_zig_impl(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_permission_denied_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_protocol_error(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_protocol_error_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_resource_busy(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_resource_busy_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_resource_exhausted(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_resource_exhausted_file(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_resource_exhausted_file_zig_impl(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_resource_exhausted_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_resource_vanished(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_resource_vanished_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_time_expired(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_time_expired_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_unsatisfied_constraints(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_unsatisfied_constraints_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_unsupported_operation(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_error_unsupported_operation_zig_impl(_0: u32, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_user_error(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_io_user_error_zig_impl(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_mk_string(_0: [*c]const u8) callconv(.c) LeanObj;
pub extern fn lean_mk_string_from_bytes(_0: ?*anyopaque, _1: usize) callconv(.c) LeanObj;
pub extern fn lean_mk_string_from_bytes_unchecked(_0: ?*anyopaque, _1: usize) callconv(.c) LeanObj;
pub extern fn lean_mk_string_unchecked(_0: [*c]const u8, _1: usize, _2: usize) callconv(.c) LeanObj;
pub extern fn lean_mk_thunk(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_name_eq(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_name_hash(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_name_hash_ptr(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_nat_abs(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_big_div_exact(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_big_land(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_big_lor(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_big_shiftr(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_big_xor(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_div_exact(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_gcd(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_land(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_log2(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_lor(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_lxor(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_ne(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_nat_pred(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_shiftl(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_shiftr(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_to_int(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_notify_assert(_0: [*:0]const u8, _1: c_int, _2: [*:0]const u8) callconv(.c) void;
pub extern fn lean_obj_once_cold(_0: *LeanObj, _1: *lean_once_cell_t, _2: *const fn () callconv(.c) LeanObj) callconv(.c) LeanObj;
pub extern fn lean_object_byte_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_object_data_byte_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_openssl_version(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_option_get_or_block(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_panic(_0: ?*anyopaque, _1: bool) callconv(.c) void;
pub extern fn lean_panic_fn(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_panic_fn_borrowed(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_promise_new() callconv(.c) LeanObj;
pub extern fn lean_promise_resolve(_0: LeanObj, _1: LeanObj) callconv(.c) void;
pub extern fn lean_ptr_addr(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_register_external_class(_0: ?*anyopaque, _1: ?*anyopaque) callconv(.c) ?*anyopaque;
pub extern fn lean_run_main(_0: MainFn, _1: c_int, _2: [*c][*c]u8) callconv(.c) LeanObj;
pub extern fn lean_runtime_forget(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_runtime_hold(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_runtime_mark_multi_threaded(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_runtime_mark_persistent(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_sarray_byte_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_sarray_capacity(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_sarray_cptr(_0: LeanObj) callconv(.c) [*c]u8;
pub extern fn lean_sarray_data_byte_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_sarray_dec_eq(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_sarray_elem_size(_0: LeanObj) callconv(.c) c_uint;
pub extern fn lean_sarray_ensure_capacity(_0: LeanObj, _1: usize, _2: bool) callconv(.c) LeanObj;
pub extern fn lean_sarray_eq(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_sarray_eq_cold(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_sarray_set_size(_0: LeanObj, _1: usize) callconv(.c) void;
pub extern fn lean_sarray_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_save_stack_info(_0: bool) callconv(.c) void;
pub extern fn lean_scalar_to_int(_0: LeanObj) callconv(.c) c_int;
pub extern fn lean_scalar_to_int64(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_set_exit_on_panic(_0: bool) callconv(.c) void;
pub extern fn lean_set_external_data(_0: LeanObj, _1: ?*anyopaque) callconv(.c) LeanObj;
pub extern fn lean_set_max_heartbeat(_0: usize) callconv(.c) void;
pub extern fn lean_set_max_heartbeat_thousands(_0: c_uint) callconv(.c) void;
pub extern fn lean_set_max_memory(_0: usize) callconv(.c) void;
pub extern fn lean_set_max_memory_megabyte(_0: c_uint) callconv(.c) void;
pub extern fn lean_set_non_heap_header(_0: LeanObj, _1: usize, _2: c_uint, _3: c_uint) callconv(.c) void;
pub extern fn lean_set_non_heap_header_for_big(_0: LeanObj, _1: c_uint, _2: c_uint) callconv(.c) void;
pub extern fn lean_set_panic_messages(_0: bool) callconv(.c) void;
pub extern fn lean_setup_args(_0: c_int, _1: [*c][*c]u8) callconv(.c) [*c][*c]u8;
pub extern fn lean_sharecommon_eq(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_sharecommon_hash(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_sharecommon_quick(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_sleep_for(_0: c_uint, _1: c_uint) callconv(.c) void;
pub extern fn lean_slice_dec_lt(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_slice_hash(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_small_mem_size(_0: ?*anyopaque) callconv(.c) c_uint;
pub extern fn lean_small_object_size(_0: LeanObj) callconv(.c) c_uint;
pub extern fn lean_sorry(_0: u8) callconv(.c) LeanObj;
pub extern fn lean_st_mk_ref(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_st_ref_get(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_st_ref_ptr_eq(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_st_ref_reset(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_st_ref_set(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_st_ref_swap(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_st_ref_take(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_state_sharecommon(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_strict_and(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_strict_or(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_string_any(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_string_append(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_byte_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_string_capacity(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_string_capitalize(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_compare(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_string_contains(_0: LeanObj, _1: u32) callconv(.c) u8;
pub extern fn lean_string_cstr(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_string_data(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_data_byte_size(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_string_drop(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_dropright(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_eq(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_string_eq_cold(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_string_foldl(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_from_utf8_unchecked(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_front(_0: LeanObj) callconv(.c) u32;
pub extern fn lean_string_hash(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_string_intercalate(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_isempty(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_string_isprefixof(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_string_len(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_string_lt(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_string_memcmp(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: LeanObj, _4: LeanObj) callconv(.c) u8;
pub extern fn lean_string_mk(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_ne(_0: LeanObj, _1: LeanObj) callconv(.c) bool;
pub extern fn lean_string_nextwhile(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_of_usize(_0: usize) callconv(.c) LeanObj;
pub extern fn lean_string_offsetofpos(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_pos_min(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_pos_sub(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_posof(_0: LeanObj, _1: u32) callconv(.c) LeanObj;
pub extern fn lean_string_push(_0: LeanObj, _1: u32) callconv(.c) LeanObj;
pub extern fn lean_string_pushn(_0: LeanObj, _1: u32, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_to_utf8(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_trim(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_utf8_extract(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_utf8_get(_0: LeanObj, _1: LeanObj) callconv(.c) u32;
pub extern fn lean_string_utf8_get_bang(_0: LeanObj, _1: LeanObj) callconv(.c) u32;
pub extern fn lean_string_utf8_get_fast_cold(_0: [*:0]const u8, _1: usize, _2: usize, _3: u8) callconv(.c) u32;
pub extern fn lean_string_utf8_get_opt(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_utf8_next(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_utf8_next_fast_cold(_0: usize, _1: u8) callconv(.c) LeanObj;
pub extern fn lean_string_utf8_prev(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_string_utf8_set(_0: LeanObj, _1: LeanObj, _2: u32) callconv(.c) LeanObj;
pub extern fn lean_string_validate_utf8(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_substring_all(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_substring_beq(_0: LeanObj, _1: LeanObj) callconv(.c) u8;
pub extern fn lean_substring_drop(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_substring_extract(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_substring_front(_0: LeanObj) callconv(.c) u32;
pub extern fn lean_substring_get(_0: LeanObj, _1: LeanObj) callconv(.c) u32;
pub extern fn lean_substring_isempty(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_substring_prev(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_substring_takewhile(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_substring_tostring(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_system_platform_emscripten(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_system_platform_nbits(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_system_platform_osx(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_system_platform_target(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_system_platform_windows(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_task_bind(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: u8) callconv(.c) LeanObj;
pub extern fn lean_task_bind_core(_0: LeanObj, _1: LeanObj, _2: c_uint, _3: bool, _4: bool) callconv(.c) LeanObj;
pub extern fn lean_task_get(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_task_get_own(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_task_map(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: u8) callconv(.c) LeanObj;
pub extern fn lean_task_map_core(_0: LeanObj, _1: LeanObj, _2: c_uint, _3: bool, _4: bool) callconv(.c) LeanObj;
pub extern fn lean_task_pure(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_task_spawn(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_task_spawn_core(_0: LeanObj, _1: c_uint, _2: bool) callconv(.c) LeanObj;
pub extern fn lean_thunk_get(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_thunk_get_core(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_thunk_get_own(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_thunk_pure(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_to_array(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_to_closure(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_to_ctor(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_to_external(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_to_promise(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_to_ref(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_to_sarray(_0: LeanObj) callconv(.c) ?*anyopaque;
pub extern fn lean_to_string(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_to_task(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_to_thunk(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uint16_add(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_uint16_complement(_0: u16) callconv(.c) u16;
pub extern fn lean_uint16_dec_eq(_0: u16, _1: u16) callconv(.c) u8;
pub extern fn lean_uint16_dec_le(_0: u16, _1: u16) callconv(.c) u8;
pub extern fn lean_uint16_dec_lt(_0: u16, _1: u16) callconv(.c) u8;
pub extern fn lean_uint16_div(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_uint16_land(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_uint16_log2(_0: u16) callconv(.c) u16;
pub extern fn lean_uint16_lor(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_uint16_mod(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_uint16_mul(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_uint16_neg(_0: u16) callconv(.c) u16;
pub extern fn lean_uint16_of_big_nat(_0: LeanObj) callconv(.c) u16;
pub extern fn lean_uint16_of_nat(_0: LeanObj) callconv(.c) u16;
pub extern fn lean_uint16_of_nat_mk(_0: LeanObj) callconv(.c) u16;
pub extern fn lean_uint16_once_cold(_0: *u16, _1: *lean_once_cell_t, _2: *const fn () callconv(.c) u16) callconv(.c) u16;
pub extern fn lean_uint16_shift_left(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_uint16_shift_right(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_uint16_sub(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_uint16_to_float(_0: u16) callconv(.c) f64;
pub extern fn lean_uint16_to_float32(_0: u16) callconv(.c) f32;
pub extern fn lean_uint16_to_nat(_0: u16) callconv(.c) LeanObj;
pub extern fn lean_uint16_to_uint32(_0: u16) callconv(.c) u32;
pub extern fn lean_uint16_to_uint64(_0: u16) callconv(.c) u64;
pub extern fn lean_uint16_to_uint8(_0: u16) callconv(.c) u8;
pub extern fn lean_uint16_to_usize(_0: u16) callconv(.c) usize;
pub extern fn lean_uint16_xor(_0: u16, _1: u16) callconv(.c) u16;
pub extern fn lean_uint32_complement(_0: u32) callconv(.c) u32;
pub extern fn lean_uint32_div(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_uint32_land(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_uint32_log2(_0: u32) callconv(.c) u32;
pub extern fn lean_uint32_mod(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_uint32_mul(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_uint32_neg(_0: u32) callconv(.c) u32;
pub extern fn lean_uint32_of_nat_mk(_0: LeanObj) callconv(.c) u32;
pub extern fn lean_uint32_once_cold(_0: *u32, _1: *lean_once_cell_t, _2: *const fn () callconv(.c) u32) callconv(.c) u32;
pub extern fn lean_uint32_shift_right(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_uint32_sub(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_uint32_to_float(_0: u32) callconv(.c) f64;
pub extern fn lean_uint32_to_float32(_0: u32) callconv(.c) f32;
pub extern fn lean_uint32_to_uint16(_0: u32) callconv(.c) u16;
pub extern fn lean_uint32_to_uint64(_0: u32) callconv(.c) u64;
pub extern fn lean_uint32_to_uint8(_0: u32) callconv(.c) u8;
pub extern fn lean_uint32_to_usize(_0: u32) callconv(.c) usize;
pub extern fn lean_uint32_xor(_0: u32, _1: u32) callconv(.c) u32;
pub extern fn lean_uint64_add(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint64_complement(_0: u64) callconv(.c) u64;
pub extern fn lean_uint64_dec_eq(_0: u64, _1: u64) callconv(.c) u8;
pub extern fn lean_uint64_dec_le(_0: u64, _1: u64) callconv(.c) u8;
pub extern fn lean_uint64_dec_lt(_0: u64, _1: u64) callconv(.c) u8;
pub extern fn lean_uint64_div(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint64_land(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint64_log2(_0: u64) callconv(.c) u64;
pub extern fn lean_uint64_lor(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint64_mix_hash(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint64_mod(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint64_mul(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint64_neg(_0: u64) callconv(.c) u64;
pub extern fn lean_uint64_of_nat_mk(_0: LeanObj) callconv(.c) u64;
pub extern fn lean_uint64_once_cold(_0: *u64, _1: *lean_once_cell_t, _2: *const fn () callconv(.c) u64) callconv(.c) u64;
pub extern fn lean_uint64_shift_left(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint64_shift_right(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint64_sub(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint64_to_float(_0: u64) callconv(.c) f64;
pub extern fn lean_uint64_to_float32(_0: u64) callconv(.c) f32;
pub extern fn lean_uint64_to_uint16(_0: u64) callconv(.c) u16;
pub extern fn lean_uint64_to_uint32(_0: u64) callconv(.c) u32;
pub extern fn lean_uint64_to_uint8(_0: u64) callconv(.c) u8;
pub extern fn lean_uint64_to_usize(_0: u64) callconv(.c) usize;
pub extern fn lean_uint64_xor(_0: u64, _1: u64) callconv(.c) u64;
pub extern fn lean_uint8_add(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_uint8_complement(_0: u8) callconv(.c) u8;
pub extern fn lean_uint8_dec_le(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_uint8_dec_lt(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_uint8_div(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_uint8_log2(_0: u8) callconv(.c) u8;
pub extern fn lean_uint8_lor(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_uint8_mod(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_uint8_mul(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_uint8_neg(_0: u8) callconv(.c) u8;
pub extern fn lean_uint8_of_big_nat(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_uint8_of_nat(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_uint8_of_nat_mk(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_uint8_once_cold(_0: *u8, _1: *lean_once_cell_t, _2: *const fn () callconv(.c) u8) callconv(.c) u8;
pub extern fn lean_uint8_shift_left(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_uint8_shift_right(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_uint8_sub(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_uint8_to_float(_0: u8) callconv(.c) f64;
pub extern fn lean_uint8_to_float32(_0: u8) callconv(.c) f32;
pub extern fn lean_uint8_to_nat(_0: u8) callconv(.c) LeanObj;
pub extern fn lean_uint8_to_uint16(_0: u8) callconv(.c) u16;
pub extern fn lean_uint8_to_uint64(_0: u8) callconv(.c) u64;
pub extern fn lean_uint8_to_usize(_0: u8) callconv(.c) usize;
pub extern fn lean_uint8_xor(_0: u8, _1: u8) callconv(.c) u8;
pub extern fn lean_unbox_uint16_zig_impl(_0: LeanObj) callconv(.c) u16;
pub extern fn lean_unbox_uint8_zig_impl(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_usize_add_would_overflow(_0: usize, _1: usize) callconv(.c) bool;
pub extern fn lean_usize_complement(_0: usize) callconv(.c) usize;
pub extern fn lean_usize_dec_le(_0: usize, _1: usize) callconv(.c) u8;
pub extern fn lean_usize_dec_lt(_0: usize, _1: usize) callconv(.c) u8;
pub extern fn lean_usize_div(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_usize_land(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_usize_log2(_0: usize) callconv(.c) usize;
pub extern fn lean_usize_lor(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_usize_mod(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_usize_mul(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_usize_mul_would_overflow(_0: usize, _1: usize) callconv(.c) bool;
pub extern fn lean_usize_neg(_0: usize) callconv(.c) usize;
pub extern fn lean_usize_of_big_nat(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_usize_of_nat_mk(_0: LeanObj) callconv(.c) usize;
pub extern fn lean_usize_once_cold(_0: *usize, _1: *lean_once_cell_t, _2: *const fn () callconv(.c) usize) callconv(.c) usize;
pub extern fn lean_usize_shift_left(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_usize_shift_right(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_usize_sub(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_usize_to_float(_0: usize) callconv(.c) f64;
pub extern fn lean_usize_to_float32(_0: usize) callconv(.c) f32;
pub extern fn lean_usize_to_uint16(_0: usize) callconv(.c) u16;
pub extern fn lean_usize_to_uint32(_0: usize) callconv(.c) u32;
pub extern fn lean_usize_to_uint64(_0: usize) callconv(.c) u64;
pub extern fn lean_usize_to_uint8(_0: usize) callconv(.c) u8;
pub extern fn lean_usize_xor(_0: usize, _1: usize) callconv(.c) usize;
pub extern fn lean_utf8_n_strlen(_0: ?*anyopaque, _1: usize) callconv(.c) usize;
pub extern fn lean_utf8_strlen(_0: ?*anyopaque) callconv(.c) usize;
pub extern fn lean_uv_chdir(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_cpu_info() callconv(.c) LeanObj;
pub extern fn lean_uv_cwd() callconv(.c) LeanObj;
pub extern fn lean_uv_dns_get_info(_0: LeanObj, _1: LeanObj, _2: u8) callconv(.c) LeanObj;
pub extern fn lean_uv_dns_get_name(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_event_loop_alive() callconv(.c) u8;
pub extern fn lean_uv_event_loop_configure(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_exepath() callconv(.c) LeanObj;
pub extern fn lean_uv_get_available_memory() callconv(.c) LeanObj;
pub extern fn lean_uv_get_constrained_memory() callconv(.c) LeanObj;
pub extern fn lean_uv_get_free_memory() callconv(.c) LeanObj;
pub extern fn lean_uv_get_process_title() callconv(.c) LeanObj;
pub extern fn lean_uv_get_total_memory() callconv(.c) LeanObj;
pub extern fn lean_uv_getrusage() callconv(.c) LeanObj;
pub extern fn lean_uv_hrtime() callconv(.c) LeanObj;
pub extern fn lean_uv_interface_addresses() callconv(.c) LeanObj;
pub extern fn lean_uv_ntop_v4(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_ntop_v6(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_os_environ() callconv(.c) LeanObj;
pub extern fn lean_uv_os_get_group(_0: u64) callconv(.c) LeanObj;
pub extern fn lean_uv_os_get_passwd() callconv(.c) LeanObj;
pub extern fn lean_uv_os_getenv(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_os_gethostname() callconv(.c) LeanObj;
pub extern fn lean_uv_os_getpid() callconv(.c) LeanObj;
pub extern fn lean_uv_os_getppid() callconv(.c) LeanObj;
pub extern fn lean_uv_os_getpriority(_0: u64) callconv(.c) LeanObj;
pub extern fn lean_uv_os_homedir() callconv(.c) LeanObj;
pub extern fn lean_uv_os_setenv(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_os_setpriority(_0: u64, _1: u64) callconv(.c) LeanObj;
pub extern fn lean_uv_os_tmpdir() callconv(.c) LeanObj;
pub extern fn lean_uv_os_uname() callconv(.c) LeanObj;
pub extern fn lean_uv_os_unsetenv(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_pton_v4(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_pton_v6(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_random(_0: u64) callconv(.c) LeanObj;
pub extern fn lean_uv_set_process_title(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_signal_cancel(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_signal_mk(_0: u32, _1: u8) callconv(.c) LeanObj;
pub extern fn lean_uv_signal_next(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_signal_stop(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_accept(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_bind(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_cancel_accept(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_cancel_recv(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_connect(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_getpeername(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_getsockname(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_keepalive(_0: LeanObj, _1: u8, _2: u32) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_listen(_0: LeanObj, _1: u32) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_new() callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_nodelay(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_recv(_0: LeanObj, _1: u64) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_send(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_shutdown(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_try_accept(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_tcp_wait_readable(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_timer_cancel(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_timer_mk(_0: u64, _1: u8) callconv(.c) LeanObj;
pub extern fn lean_uv_timer_next(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_timer_reset(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_timer_stop(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_bind(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_cancel_recv(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_connect(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_getpeername(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_getsockname(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_new() callconv(.c) LeanObj;
pub extern fn lean_uv_udp_recv(_0: LeanObj, _1: u64) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_send(_0: LeanObj, _1: LeanObj, _2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_set_broadcast(_0: LeanObj, _1: u8) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_set_membership(_0: LeanObj, _1: LeanObj, _2: LeanObj, _3: u8) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_set_multicast_interface(_0: LeanObj, _1: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_set_multicast_loop(_0: LeanObj, _1: u8) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_set_multicast_ttl(_0: LeanObj, _1: u32) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_set_ttl(_0: LeanObj, _1: u32) callconv(.c) LeanObj;
pub extern fn lean_uv_udp_wait_readable(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_uv_uptime() callconv(.c) LeanObj;
pub extern fn lean_version_get_is_release(_0: LeanObj) callconv(.c) u8;
pub extern fn lean_version_get_major(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_version_get_minor(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_version_get_patch(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_version_get_special_desc(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_void_mk(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_windows_get_next_transition(_0: LeanObj, _1: u64, _2: u8) callconv(.c) LeanObj;
pub extern fn lean_zig_current_task_get() callconv(.c) LeanObj;
pub extern fn lean_zig_current_task_swap(_0: LeanObj) callconv(.c) LeanObj;
pub extern fn log(_0: f64) callconv(.c) f64;
pub extern fn log10(_0: f64) callconv(.c) f64;
pub extern fn log10f(_0: f32) callconv(.c) f32;
pub extern fn log2(_0: f64) callconv(.c) f64;
pub extern fn log2f(_0: f32) callconv(.c) f32;
pub extern fn logf(_0: f32) callconv(.c) f32;
pub extern fn pow(_0: f64, _1: f64) callconv(.c) f64;
pub extern fn powf(_0: f32, _1: f32) callconv(.c) f32;
pub extern fn round(_0: f64) callconv(.c) f64;
pub extern fn roundf(_0: f32) callconv(.c) f32;
pub extern fn sin(_0: f64) callconv(.c) f64;
pub extern fn sinf(_0: f32) callconv(.c) f32;
pub extern fn sinh(_0: f64) callconv(.c) f64;
pub extern fn sinhf(_0: f32) callconv(.c) f32;
pub extern fn sqrt(_0: f64) callconv(.c) f64;
pub extern fn sqrtf(_0: f32) callconv(.c) f32;
pub extern fn tan(_0: f64) callconv(.c) f64;
pub extern fn tanf(_0: f32) callconv(.c) f32;
pub extern fn tanh(_0: f64) callconv(.c) f64;
pub extern fn tanhf(_0: f32) callconv(.c) f32;

pub const LeanMaxCtorTag: c_uint = 243;
pub const LeanMaxCtorFields: c_uint = 256;
pub const LeanMaxCtorScalarsSize: usize = 1024;
pub const LeanMaxSmallNat: usize = std.math.maxInt(usize) >> 1;
pub inline fn lean_heap_obj(o: LeanObj) *lean_object {
    @setEvalBranchQuota(10000000);
    return @alignCast(o.?);
}
pub inline fn lean_is_scalar(o: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool((@intFromPtr(o.?) & 1) == 1);
}
pub inline fn lean_unbox(o: LeanObj) usize {
    @setEvalBranchQuota(10000000);
    return @intFromPtr(o.?) >> 1;
}
pub inline fn lean_ptr_tag(o: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    return lean_heap_obj(o).m_tag;
}
pub inline fn lean_ptr_other(o: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    return lean_heap_obj(o).m_other;
}
pub inline fn lean_is_st(o: LeanObj) bool {
    @setEvalBranchQuota(10000000);
    return lean_heap_obj(o).m_rc > 0;
}
pub inline fn lean_get_rc_mt_addr(o: LeanObj) *i32 {
    @setEvalBranchQuota(10000000);
    return &lean_heap_obj(o).m_rc;
}
pub inline fn lean_is_ctor(o: LeanObj) bool {
    @setEvalBranchQuota(10000000);
    return lean_ptr_tag(o) <= LeanMaxCtorTag;
}
pub inline fn lean_ctor_num_objs(o: LeanObj) c_uint {
    @setEvalBranchQuota(10000000);
    std.debug.assert(lean_is_ctor(o));
    return lean_ptr_other(o);
}
pub inline fn lean_ctor_obj_cptr(o: LeanObj) [*]LeanObj {
    @setEvalBranchQuota(10000000);
    std.debug.assert(lean_is_ctor(o));
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(o));
    return @ptrCast(@alignCast(bytes + @sizeOf(lean_object)));
}
pub inline fn lean_set_st_header(o: LeanObj, tag: c_uint, other: c_uint) void {
    @setEvalBranchQuota(10000000);
    const obj = lean_heap_obj(o);
    obj.m_rc = 1;
    obj.m_tag = @intCast(tag);
    obj.m_other = @intCast(other);
    obj.m_cs_sz = 0;
}
pub inline fn lean_usize_mul_checked(a: usize, b: usize) usize {
    @setEvalBranchQuota(10000000);
    return std.math.mul(usize, a, b) catch @panic("lean_usize_mul_checked overflow");
}
pub inline fn lean_usize_add_checked(a: usize, b: usize) usize {
    @setEvalBranchQuota(10000000);
    return std.math.add(usize, a, b) catch @panic("lean_usize_add_checked overflow");
}
pub inline fn lean_usize_to_nat(n: usize) LeanObj {
    @setEvalBranchQuota(10000000);
    if (n <= LeanMaxSmallNat) {
        return lean_box(n);
    } else {
        return lean_big_usize_to_nat(n);
    }
}
pub inline fn lean_array_fields(o: LeanObj) [*]usize {
    @setEvalBranchQuota(10000000);
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(o));
    return @ptrCast(@alignCast(bytes + @sizeOf(lean_object)));
}
pub inline fn lean_array_size(o: LeanObj) usize {
    @setEvalBranchQuota(10000000);
    return lean_array_fields(o)[0];
}
pub inline fn lean_array_cptr(o: LeanObj) [*]LeanObj {
    @setEvalBranchQuota(10000000);
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(o));
    return @ptrCast(@alignCast(bytes + @sizeOf(lean_object) + 2 * @sizeOf(usize)));
}
pub inline fn lean_array_get_core(o: LeanObj, i: usize) LeanObj {
    @setEvalBranchQuota(10000000);
    std.debug.assert(i < lean_array_size(o));
    return lean_array_cptr(o)[i];
}
pub inline fn lean_alloc_array(size: usize, capacity: usize) LeanObj {
    @setEvalBranchQuota(10000000);
    const total = lean_usize_add_checked(@sizeOf(lean_object) + 2 * @sizeOf(usize), lean_usize_mul_checked(@sizeOf(usize), capacity));
    const o = lean_alloc_object(total);
    lean_set_st_header(o, 246, 0);
    const fields = lean_array_fields(o);
    fields[0] = size;
    fields[1] = capacity;
    return o;
}
pub inline fn lean_alloc_sarray(elem_size: c_uint, size: usize, capacity: usize) LeanObj {
    @setEvalBranchQuota(10000000);
    const total = lean_usize_add_checked(@sizeOf(lean_sarray_object), lean_usize_mul_checked(@intCast(elem_size), capacity));
    const o = lean_alloc_object(total);
    lean_set_st_header(o, 248, elem_size);
    const sa: *lean_sarray_object = @ptrCast(@alignCast(lean_heap_obj(o)));
    sa.m_size = size;
    sa.m_capacity = capacity;
    return o;
}
pub inline fn lean_mk_empty_array() LeanObj {
    @setEvalBranchQuota(10000000);
    return lean_alloc_array(0, 0);
}
pub inline fn lean_mk_empty_byte_array(capacity: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(capacity) == 0) lean_internal_panic_out_of_memory();
    return lean_alloc_sarray(1, 0, lean_unbox(capacity));
}
pub inline fn lean_mk_empty_float_array(capacity: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(capacity) == 0) lean_internal_panic_out_of_memory();
    return lean_alloc_sarray(@sizeOf(f64), 0, lean_unbox(capacity));
}
pub inline fn lean_nat_le(a1: LeanObj, a2: LeanObj) bool {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a1) != 0 and lean_is_scalar(a2) != 0) {
        return @intFromPtr(a1.?) <= @intFromPtr(a2.?);
    } else {
        return lean_nat_big_le(a1, a2);
    }
}
pub inline fn lean_nat_lt(a1: LeanObj, a2: LeanObj) bool {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a1) != 0 and lean_is_scalar(a2) != 0) {
        return @intFromPtr(a1.?) < @intFromPtr(a2.?);
    } else {
        return lean_nat_big_lt(a1, a2);
    }
}
pub inline fn lean_inc_ref_n(o: LeanObj, n: usize) void {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) != 0) return;
    const obj = lean_heap_obj(o);
    if (lean_is_st(o)) {
        obj.m_rc += @intCast(n);
    } else if (obj.m_rc != 0) {
        _ = @atomicRmw(i32, lean_get_rc_mt_addr(o), .Sub, @intCast(n), .monotonic);
    }
}
pub inline fn lean_box(n: usize) LeanObj {
    @setEvalBranchQuota(10000000);
    const ptr: *align(1) lean_object = @ptrFromInt((n << 1) | 1);
    return ptr;
}
pub inline fn lean_unsigned_to_nat(n: c_uint) LeanObj {
    @setEvalBranchQuota(10000000);
    return lean_usize_to_nat(n);
}
pub inline fn lean_unbox_uint32(o: LeanObj) u32 {
    @setEvalBranchQuota(10000000);
    if (@sizeOf(usize) == 4) {
        return lean_ctor_get_uint32(o, 0);
    } else {
        return @intCast(lean_unbox(o));
    }
}
pub inline fn lean_io_result_mk_ok(a: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    const r = lean_alloc_ctor(0, 1, 0);
    lean_ctor_set(r, 0, a);
    return r;
}
pub inline fn lean_io_mk_world() LeanObj {
    @setEvalBranchQuota(10000000);
    return lean_box(0);
}
pub inline fn lean_obj_tag(o: LeanObj) c_uint {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) != 0) {
        return @intCast(lean_unbox(o));
    } else {
        return lean_ptr_tag(o);
    }
}
pub inline fn lean_ctor_get(o: LeanObj, i: c_uint) LeanObj {
    @setEvalBranchQuota(10000000);
    std.debug.assert(i < lean_ctor_num_objs(o));
    return lean_ctor_obj_cptr(o)[i];
}
pub inline fn lean_ctor_set_tag(o: LeanObj, new_tag: u8) void {
    @setEvalBranchQuota(10000000);
    std.debug.assert(new_tag <= LeanMaxCtorTag);
    lean_heap_obj(o).m_tag = new_tag;
}
pub inline fn lean_inc_ref(o: LeanObj) void {
    @setEvalBranchQuota(10000000);
    lean_inc_ref_n(o, 1);
}
pub inline fn lean_dec_ref(o: LeanObj) void {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) != 0) return;
    const obj = lean_heap_obj(o);
    if (obj.m_rc > 1) {
        obj.m_rc -= 1;
    } else if (obj.m_rc != 0) {
        lean_dec_ref_cold(o);
    }
}
pub inline fn lean_inc(o: LeanObj) void {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) == 0) lean_inc_ref(o);
}
pub inline fn lean_dec(o: LeanObj) void {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) == 0) lean_dec_ref(o);
}
pub inline fn lean_alloc_ctor(tag: c_uint, num_objs: c_uint, scalar_sz: usize) LeanObj {
    @setEvalBranchQuota(10000000);
    std.debug.assert(tag <= LeanMaxCtorTag and num_objs < LeanMaxCtorFields and scalar_sz < LeanMaxCtorScalarsSize);
    const total = lean_usize_add_checked(lean_usize_add_checked(@sizeOf(lean_object), lean_usize_mul_checked(@sizeOf(usize), @intCast(num_objs))), scalar_sz);
    // Use the small-object allocator (size-prefixed allocation) so that
    // lean_free_object's constructor path (freeLegacySmallNoMimalloc, which
    // frees via free(ptr-8)) matches the allocation layout. Using lean_alloc_object
    // here would produce a prefix-less allocation that free(ptr-8) would abort on.
    // This mirrors the C++ lean.h inline lean_alloc_ctor, which routes through
    // lean_alloc_small_object.
    const o = lean_alloc_small_object(@intCast(total));
    lean_set_st_header(o, tag, num_objs);
    return o;
}
pub inline fn lean_array_get_size(a: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    return lean_box(lean_array_size(a));
}
pub inline fn lean_array_uget(a: LeanObj, i: usize) LeanObj {
    @setEvalBranchQuota(10000000);
    const r = lean_array_get_core(a, i);
    lean_inc(r);
    return r;
}
pub inline fn lean_array_uget_borrowed(a: LeanObj, i: usize) LeanObj {
    @setEvalBranchQuota(10000000);
    return lean_array_get_core(a, i);
}
pub inline fn lean_mk_empty_array_with_capacity(capacity: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(capacity) == 0) lean_internal_panic_out_of_memory();
    return lean_alloc_array(0, lean_unbox(capacity));
}
pub inline fn lean_nat_dec_le(a1: LeanObj, a2: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(lean_nat_le(a1, a2));
}
pub inline fn lean_nat_dec_lt(a1: LeanObj, a2: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(lean_nat_lt(a1, a2));
}
pub inline fn lean_uint32_to_nat(a: u32) LeanObj {
    @setEvalBranchQuota(10000000);
    return lean_usize_to_nat(a);
}
pub inline fn lean_uint32_add(a1: u32, a2: u32) u32 {
    @setEvalBranchQuota(10000000);
    return a1 +% a2;
}
pub inline fn lean_usize_of_nat(a: LeanObj) usize {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a) != 0) {
        return lean_unbox(a);
    } else {
        return lean_usize_of_big_nat(a);
    }
}
pub inline fn lean_usize_add(a1: usize, a2: usize) usize {
    @setEvalBranchQuota(10000000);
    return a1 +% a2;
}
pub inline fn lean_usize_dec_eq(a1: usize, a2: usize) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(a1 == a2);
}
pub inline fn lean_string_size(s: LeanObj) usize {
    @setEvalBranchQuota(10000000);
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(s));
    return @as(*usize, @ptrCast(@alignCast(bytes + @sizeOf(lean_object)))).*;
}
pub inline fn lean_string_utf8_get_fast(s: LeanObj, i: LeanObj) u32 {
    @setEvalBranchQuota(10000000);
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(s));
    const str: [*:0]const u8 = @ptrCast(bytes + @sizeOf(lean_object) + 3 * @sizeOf(usize));
    const idx = lean_unbox(i);
    const c = str[idx];
    if ((c & 0x80) == 0) return c;
    return lean_string_utf8_get_fast_cold(str, idx, lean_string_size(s) - 1, c);
}
pub inline fn lean_string_utf8_next_fast(s: LeanObj, i: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(s));
    const str: [*:0]const u8 = @ptrCast(bytes + @sizeOf(lean_object) + 3 * @sizeOf(usize));
    const idx = lean_unbox(i);
    const c = str[idx];
    if ((c & 0x80) == 0) return lean_box(idx + 1);
    return lean_string_utf8_next_fast_cold(idx, c);
}
pub inline fn lean_string_utf8_at_end(s: LeanObj, i: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(lean_is_scalar(i) == 0 or lean_unbox(i) >= lean_string_size(s) - 1);
}
pub inline fn lean_string_dec_lt(s1: LeanObj, s2: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(lean_string_lt(s1, s2));
}
pub inline fn lean_string_utf8_byte_size(s: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    return lean_box(lean_string_size(s) - 1);
}
pub inline fn lean_string_length(s: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(s));
    return lean_box(@as(*usize, @ptrCast(@alignCast(bytes + @sizeOf(lean_object) + 2 * @sizeOf(usize)))).*);
}
pub inline fn lean_string_dec_eq(s1: LeanObj, s2: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(s1 == s2 or (lean_string_size(s1) == lean_string_size(s2) and lean_string_eq_cold(s1, s2)));
}
pub inline fn lean_string_is_valid_pos(s: LeanObj, i: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(i) == 0) return 0;
    const idx = lean_unbox(i);
    const size = lean_string_size(s) - 1;
    if (idx > size) return 0;
    if (idx == size) return 1;
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(s));
    const str: [*:0]const u8 = @ptrCast(bytes + @sizeOf(lean_object) + 3 * @sizeOf(usize));
    return @intFromBool((str[idx] & 0x80) == 0 or (str[idx] & 0xC0) != 0x80);
}
pub inline fn lean_ctor_payload_base(o: LeanObj) [*]u8 {
    @setEvalBranchQuota(10000000);
    std.debug.assert(lean_is_ctor(o));
    return @as([*]u8, @ptrCast(lean_ctor_obj_cptr(o)));
}
pub inline fn lean_ctor_scalar_base(o: LeanObj) [*]u8 {
    @setEvalBranchQuota(10000000);
    return lean_ctor_payload_base(o) + @sizeOf(usize) * lean_ctor_num_objs(o);
}
pub inline fn lean_ctor_set(o: LeanObj, i: c_uint, v: LeanObj) void {
    @setEvalBranchQuota(10000000);
    std.debug.assert(i < lean_ctor_num_objs(o));
    lean_ctor_obj_cptr(o)[i] = v;
}
pub inline fn lean_ctor_release(o: LeanObj, i: c_uint) void {
    @setEvalBranchQuota(10000000);
    std.debug.assert(i < lean_ctor_num_objs(o));
    const slots = lean_ctor_obj_cptr(o);
    lean_dec(slots[i]);
    slots[i] = lean_box(0);
}
pub inline fn lean_ctor_get_usize(o: LeanObj, i: c_uint) usize {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    return @as(*usize, @ptrCast(@alignCast(base + @sizeOf(usize) * i))).*;
}
pub inline fn lean_ctor_set_usize(o: LeanObj, i: c_uint, v: usize) void {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    @as(*usize, @ptrCast(@alignCast(base + @sizeOf(usize) * i))).* = v;
}
pub inline fn lean_ctor_get_uint8(o: LeanObj, offset: c_uint) u8 {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    return @as(*u8, @ptrCast(base + offset)).*;
}
pub inline fn lean_ctor_get_uint16(o: LeanObj, offset: c_uint) u16 {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    return @as(*u16, @ptrCast(@alignCast(base + offset))).*;
}
pub inline fn lean_ctor_get_uint32(o: LeanObj, offset: c_uint) u32 {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    return @as(*u32, @ptrCast(@alignCast(base + offset))).*;
}
pub inline fn lean_ctor_get_uint64(o: LeanObj, offset: c_uint) u64 {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    return @as(*u64, @ptrCast(@alignCast(base + offset))).*;
}
pub inline fn lean_ctor_get_float(o: LeanObj, offset: c_uint) f64 {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    return @as(*f64, @ptrCast(@alignCast(base + offset))).*;
}
pub inline fn lean_ctor_get_float32(o: LeanObj, offset: c_uint) f32 {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    return @as(*f32, @ptrCast(@alignCast(base + offset))).*;
}
pub inline fn lean_ctor_set_uint8(o: LeanObj, offset: c_uint, v: u8) void {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    @as(*u8, @ptrCast(base + offset)).* = v;
}
pub inline fn lean_ctor_set_uint16(o: LeanObj, offset: c_uint, v: u16) void {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    @as(*u16, @ptrCast(@alignCast(base + offset))).* = v;
}
pub inline fn lean_ctor_set_uint32(o: LeanObj, offset: c_uint, v: u32) void {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    @as(*u32, @ptrCast(@alignCast(base + offset))).* = v;
}
pub inline fn lean_ctor_set_uint64(o: LeanObj, offset: c_uint, v: u64) void {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    @as(*u64, @ptrCast(@alignCast(base + offset))).* = v;
}
pub inline fn lean_ctor_set_float(o: LeanObj, offset: c_uint, v: f64) void {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    @as(*f64, @ptrCast(@alignCast(base + offset))).* = v;
}
pub inline fn lean_ctor_set_float32(o: LeanObj, offset: c_uint, v: f32) void {
    @setEvalBranchQuota(10000000);
    const base = lean_ctor_payload_base(o);
    @as(*f32, @ptrCast(@alignCast(base + offset))).* = v;
}
pub inline fn lean_closure_obj_cptr(o: LeanObj) [*]LeanObj {
    @setEvalBranchQuota(10000000);
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(o));
    return @ptrCast(@alignCast(bytes + @sizeOf(lean_closure_object)));
}
pub inline fn lean_closure_set(o: LeanObj, i: c_uint, v: LeanObj) void {
    @setEvalBranchQuota(10000000);
    lean_closure_obj_cptr(o)[i] = v;
}
pub inline fn lean_dec_ref_n(o: LeanObj, n: usize) void {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) != 0) return;
    for (0..n) |_| {
        lean_dec_ref(o);
    }
}
pub inline fn lean_dec_n(o: LeanObj, n: usize) void {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) == 0) lean_dec_ref_n(o, n);
}
pub inline fn lean_inc_n(o: LeanObj, n: usize) void {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) == 0) lean_inc_ref_n(o, n);
}
pub inline fn lean_is_exclusive(o: LeanObj) bool {
    @setEvalBranchQuota(10000000);
    return lean_is_scalar(o) == 0 and lean_heap_obj(o).m_rc == 1;
}
pub inline fn lean_alloc_closure(fun: *const anyopaque, arity: c_uint, num_fixed: c_uint) LeanObj {
    @setEvalBranchQuota(10000000);
    std.debug.assert(arity > 0 and num_fixed < arity);
    const total = lean_usize_add_checked(@sizeOf(lean_closure_object), lean_usize_mul_checked(@sizeOf(*anyopaque), @intCast(num_fixed)));
    const o: *lean_closure_object = @ptrCast(@alignCast(lean_alloc_object(total)));
    lean_set_st_header(@ptrCast(o), 245, 0);
    o.m_fun = @constCast(fun);
    o.m_arity = @intCast(arity);
    o.m_num_fixed = @intCast(num_fixed);
    return @ptrCast(o);
}
pub inline fn lean_array_get_borrowed(def_val: LeanObj, a: LeanObj, i: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(i) != 0) {
        const idx = lean_unbox(i);
        if (idx < lean_array_size(a)) {
            return lean_array_get_core(a, idx);
        }
    }
    lean_inc(def_val);
    return lean_array_get_panic(def_val);
}
pub inline fn lean_dec_ref_known(o: LeanObj, objs: c_uint) void {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) != 0) return;
    if (lean_is_exclusive(o)) {
        for (0..objs) |i| {
            lean_dec(lean_ctor_get(o, @intCast(i)));
        }
        lean_free_object(o);
    } else {
        lean_dec_ref(o);
    }
}
pub inline fn lean_del_object(o: LeanObj) void {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) == 0) lean_free_object(o);
}
pub inline fn lean_box_uint32(value: u32) LeanObj {
    @setEvalBranchQuota(10000000);
    if (value <= LeanMaxSmallNat) {
        return lean_box(value);
    }
    const r = lean_alloc_ctor(0, 0, 4);
    lean_ctor_set_uint32(r, 0, value);
    return r;
}
pub inline fn lean_box_uint64(value: u64) LeanObj {
    @setEvalBranchQuota(10000000);
    if (value <= LeanMaxSmallNat) {
        return lean_box(@intCast(value));
    }
    const r = lean_alloc_ctor(0, 0, 8);
    lean_ctor_set_uint64(r, 0, value);
    return r;
}
pub inline fn lean_box_usize(value: usize) LeanObj {
    @setEvalBranchQuota(10000000);
    if (value <= LeanMaxSmallNat) {
        return lean_box(value);
    }
    const r = lean_alloc_ctor(0, 0, @sizeOf(usize));
    lean_ctor_set_usize(r, 0, value);
    return r;
}
pub inline fn lean_box_float(value: f64) LeanObj {
    @setEvalBranchQuota(10000000);
    const r = lean_alloc_ctor(0, 0, 8);
    lean_ctor_set_float(r, 0, value);
    return r;
}
pub inline fn lean_box_float32(value: f32) LeanObj {
    @setEvalBranchQuota(10000000);
    const r = lean_alloc_ctor(0, 0, 4);
    lean_ctor_set_float32(r, 0, value);
    return r;
}
pub inline fn lean_unbox_usize(o: LeanObj) usize {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) != 0) {
        return lean_unbox(o);
    }
    return lean_ctor_get_usize(o, 0);
}
pub inline fn lean_unbox_uint64(o: LeanObj) u64 {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(o) != 0) {
        return @intCast(lean_unbox(o));
    }
    return lean_ctor_get_uint64(o, 0);
}
pub inline fn lean_unbox_float(o: LeanObj) f64 {
    @setEvalBranchQuota(10000000);
    return lean_ctor_get_float(o, 0);
}
pub inline fn lean_unbox_float32(o: LeanObj) f32 {
    @setEvalBranchQuota(10000000);
    return lean_ctor_get_float32(o, 0);
}
pub inline fn lean_byte_array_size(a: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(a));
    return lean_box(@as(*usize, @ptrCast(@alignCast(bytes + @sizeOf(lean_object)))).*);
}
pub inline fn lean_byte_array_fget(a: LeanObj, i: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    const bytes: [*]u8 = @ptrCast(lean_heap_obj(a));
    const data = bytes + @sizeOf(lean_object) + 2 * @sizeOf(usize);
    return data[lean_unbox(i)];
}
pub inline fn lean_string_get_byte_fast(s: LeanObj, i: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    const str: *lean_string_object = @ptrCast(@alignCast(lean_heap_obj(s)));
    const data: [*]const u8 = @ptrCast(&str.m_data);
    return data[lean_unbox(i)];
}
pub inline fn lean_uint8_land(a1: u8, a2: u8) u8 {
    @setEvalBranchQuota(10000000);
    return a1 & a2;
}
pub inline fn lean_uint8_dec_eq(a1: u8, a2: u8) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(a1 == a2);
}
pub inline fn lean_uint8_to_uint32(a: u8) u32 {
    @setEvalBranchQuota(10000000);
    return a;
}
pub inline fn lean_uint32_dec_eq(a1: u32, a2: u32) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(a1 == a2);
}
pub inline fn lean_uint32_dec_le(a1: u32, a2: u32) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(a1 <= a2);
}
pub inline fn lean_uint32_dec_lt(a1: u32, a2: u32) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(a1 < a2);
}
pub inline fn lean_uint32_lor(a1: u32, a2: u32) u32 {
    @setEvalBranchQuota(10000000);
    return a1 | a2;
}
pub inline fn lean_uint32_shift_left(a1: u32, a2: u32) u32 {
    @setEvalBranchQuota(10000000);
    return a1 << @as(u5, @truncate(a2));
}
pub extern fn lean_nat_big_succ(a: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_big_add(a1: LeanObj, a2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_big_sub(a1: LeanObj, a2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_overflow_mul(a1: usize, a2: usize) callconv(.c) LeanObj;
pub extern fn lean_nat_big_mul(a1: LeanObj, a2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_big_div(a1: LeanObj, a2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_big_mod(a1: LeanObj, a2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_nat_big_eq(a1: LeanObj, a2: LeanObj) callconv(.c) bool;
pub extern fn lean_nat_big_le(a1: LeanObj, a2: LeanObj) callconv(.c) bool;
pub extern fn lean_nat_big_lt(a1: LeanObj, a2: LeanObj) callconv(.c) bool;
pub extern fn lean_nat_pow(a1: LeanObj, a2: LeanObj) callconv(.c) LeanObj;
pub extern fn lean_cstr_to_nat(s: [*c]const u8) callconv(.c) LeanObj;
pub extern fn lean_big_uint64_to_nat(n: u64) callconv(.c) LeanObj;
pub extern fn lean_uint32_of_big_nat(a: LeanObj) callconv(.c) u32;
pub extern fn lean_uint64_of_big_nat(a: LeanObj) callconv(.c) u64;
pub inline fn lean_uint64_to_nat(n: u64) LeanObj {
    @setEvalBranchQuota(10000000);
    if (n <= LeanMaxSmallNat) {
        return lean_box(@intCast(n));
    } else {
        return lean_big_uint64_to_nat(n);
    }
}
pub inline fn lean_nat_succ(a: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a) != 0) {
        return lean_usize_to_nat(lean_unbox(a) +% 1);
    } else {
        return lean_nat_big_succ(a);
    }
}
pub inline fn lean_nat_add(a1: LeanObj, a2: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a1) != 0 and lean_is_scalar(a2) != 0) {
        return lean_usize_to_nat(lean_unbox(a1) +% lean_unbox(a2));
    } else {
        return lean_nat_big_add(a1, a2);
    }
}
pub inline fn lean_nat_sub(a1: LeanObj, a2: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a1) != 0 and lean_is_scalar(a2) != 0) {
        const n1 = lean_unbox(a1);
        const n2 = lean_unbox(a2);
        if (n1 < n2) {
            return lean_box(0);
        } else {
            return lean_box(n1 - n2);
        }
    } else {
        return lean_nat_big_sub(a1, a2);
    }
}
pub inline fn lean_nat_mul(a1: LeanObj, a2: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a1) != 0 and lean_is_scalar(a2) != 0) {
        const n1 = lean_unbox(a1);
        if (n1 == 0) {
            return a1;
        }
        const n2 = lean_unbox(a2);
        const r = n1 *% n2;
        if (r <= LeanMaxSmallNat and r / n1 == n2) {
            return lean_box(r);
        } else {
            return lean_nat_overflow_mul(n1, n2);
        }
    } else {
        return lean_nat_big_mul(a1, a2);
    }
}
pub inline fn lean_nat_div(a1: LeanObj, a2: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a1) != 0 and lean_is_scalar(a2) != 0) {
        const n1 = lean_unbox(a1);
        const n2 = lean_unbox(a2);
        if (n2 == 0) {
            return lean_box(0);
        } else {
            return lean_box(n1 / n2);
        }
    } else {
        return lean_nat_big_div(a1, a2);
    }
}
pub inline fn lean_nat_mod(a1: LeanObj, a2: LeanObj) LeanObj {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a1) != 0 and lean_is_scalar(a2) != 0) {
        const n1 = lean_unbox(a1);
        const n2 = lean_unbox(a2);
        if (n2 == 0) {
            return lean_box(n1);
        } else {
            return lean_box(n1 % n2);
        }
    } else {
        return lean_nat_big_mod(a1, a2);
    }
}
pub inline fn lean_nat_eq(a1: LeanObj, a2: LeanObj) bool {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a1) != 0 and lean_is_scalar(a2) != 0) {
        return a1 == a2;
    } else {
        return lean_nat_big_eq(a1, a2);
    }
}
pub inline fn lean_nat_dec_eq(a1: LeanObj, a2: LeanObj) u8 {
    @setEvalBranchQuota(10000000);
    return @intFromBool(lean_nat_eq(a1, a2));
}
pub inline fn lean_uint32_of_nat(a: LeanObj) u32 {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a) != 0) {
        return @intCast(lean_unbox(a));
    } else {
        return lean_uint32_of_big_nat(a);
    }
}
pub inline fn lean_uint64_of_nat(a: LeanObj) u64 {
    @setEvalBranchQuota(10000000);
    if (lean_is_scalar(a) != 0) {
        return @intCast(lean_unbox(a));
    } else {
        return lean_uint64_of_big_nat(a);
    }
}

pub fn lean_io_result_is_ok(r: LeanObj) bool {
    return lean_obj_tag(r) == @as(c_uint, 0);
}
pub fn lean_io_result_get_value(r: LeanObj) LeanObj {
    return lean_ctor_get(r, @as(c_uint, 0));
}
