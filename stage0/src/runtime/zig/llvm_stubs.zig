// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Stub implementations for the LLVM C FFI used by `src/Lean/Compiler/IR/EmitLLVM.lean`.
//!
//! The Zig runtime build does not link LLVM, so these entrypoints return safe
//! defaults. They are reached only when the LLVM backend is invoked, which is
//! not supported in this configuration.

pub const force_link = true;

const object = @import("object.zig");
const string = @import("string.zig");

fn emptyString() *anyopaque {
    return string.mkAsciiStringBytes("");
}

fn boxUnit() *anyopaque {
    return object.lean_box(0).?;
}

export fn lean_llvm_initialize_target_info() callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_create_context() callconv(.c) usize {
    return 0;
}

export fn lean_llvm_create_module(_: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_write_bitcode_to_file(_: usize, _: usize, _: *anyopaque) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_module_to_string(_: usize, _: usize) callconv(.c) *anyopaque {
    return emptyString();
}

export fn lean_llvm_add_function(_: usize, _: usize, _: *anyopaque, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_get_named_function(_: usize, _: usize, _: *anyopaque) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_add_global(_: usize, _: usize, _: *anyopaque, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_get_named_global(_: usize, _: usize, _: *anyopaque) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_build_global_string(_: usize, _: usize, _: *anyopaque, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_get_undef(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_set_initializer(_: usize, _: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_function_type(_: usize, _: usize, _: *anyopaque, _: u8) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_opaque_pointer_type_in_context(_: usize, _: u64) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_int_type_in_context(_: usize, _: u64) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_float_type_in_context(_: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_void_type_in_context(_: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_double_type_in_context(_: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_pointer_type(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_array_type(_: usize, _: usize, _: u64) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_create_builder_in_context(_: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_append_basic_block_in_context(_: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_position_builder_at_end(_: usize, _: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_clear_insertion_position(_: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_build_call2(_: usize, _: usize, _: usize, _: usize, _: *anyopaque, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_cond_br(_: usize, _: usize, _: usize, _: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_br(_: usize, _: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_store(_: usize, _: usize, _: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_build_load2(_: usize, _: usize, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_alloca(_: usize, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_ret(_: usize, _: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_ret_void(_: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_unreachable(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_inbounds_gep2(_: usize, _: usize, _: usize, _: usize, _: *anyopaque, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_gep2(_: usize, _: usize, _: usize, _: usize, _: *anyopaque, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_sext(_: usize, _: usize, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_zext(_: usize, _: usize, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_sext_or_trunc(_: usize, _: usize, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_switch(_: usize, _: usize, _: usize, _: usize, _: u64) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_ptr_to_int(_: usize, _: usize, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_mul(_: usize, _: usize, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_add(_: usize, _: usize, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_sub(_: usize, _: usize, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_not(_: usize, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_build_icmp(_: usize, _: usize, _: u64, _: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_add_case(_: usize, _: usize, _: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_get_basic_block_parent(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_get_insert_block(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_type_of(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_print_module_to_string(_: usize, _: usize) callconv(.c) *anyopaque {
    return emptyString();
}

export fn lean_llvm_print_module_to_file(_: usize, _: usize, _: *anyopaque) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_const_int(_: usize, _: usize, _: u64, _: u8) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_const_array(_: usize, _: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_const_string(_: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_const_pointer_null(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn llvm_get_param(_: usize, _: usize, _: u64) callconv(.c) usize {
    return 0;
}

export fn llvm_count_params(_: usize, _: usize) callconv(.c) u64 {
    return 0;
}

export fn lean_llvm_set_tail_call(_: usize, _: usize, _: u8) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_create_memory_buffer_with_contents_of_file(_: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_parse_bitcode(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_link_modules(_: usize, _: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_create_target_machine(_: usize, _: usize, _: *anyopaque, _: *anyopaque, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_get_target_from_triple(_: usize, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_get_default_target_triple() callconv(.c) *anyopaque {
    return emptyString();
}

export fn lean_llvm_target_machine_emit_to_file(_: usize, _: usize, _: usize, _: *anyopaque, _: u64) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_dispose_target_machine(_: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_dispose_module(_: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_set_visibility(_: usize, _: usize, _: u64) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_set_dll_storage_class(_: usize, _: usize, _: u64) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_create_string_attribute(_: usize, _: *anyopaque, _: *anyopaque) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_add_attribute_at_index(_: usize, _: usize, _: u64, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_get_first_global(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_get_next_global(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_get_first_function(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_get_next_function(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_set_linkage(_: usize, _: usize, _: u64) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_get_value_name2(_: usize, _: usize) callconv(.c) *anyopaque {
    return emptyString();
}

export fn llvm_is_declaration(_: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_verify_module(_: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_count_basic_blocks(_: usize, _: usize) callconv(.c) u64 {
    return 0;
}

export fn lean_llvm_get_entry_basic_block(_: usize, _: usize) callconv(.c) usize {
    return 0;
}

export fn lean_llvm_get_first_instruction(_: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_llvm_position_builder_before(_: usize, _: usize, _: usize) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_init_llvm(_: *anyopaque) callconv(.c) *anyopaque {
    return boxUnit();
}

export fn lean_emit_llvm(_: *anyopaque, _: *anyopaque) callconv(.c) *anyopaque {
    return boxUnit();
}

test "llvm stubs compile" {
    _ = emptyString;
    _ = boxUnit;
}
