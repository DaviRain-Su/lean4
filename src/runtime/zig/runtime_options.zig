// Runtime build options for the Lean Zig runtime.
//
// This fallback module is used when `root.zig` is imported without the Zig build
// runner's generated options module.

pub const export_allocator_symbols: bool = true;
pub const export_lean_helpers: bool = true;
pub const export_kernel_symbols: bool = false;
pub const compile_cpp_cutover: bool = false;
pub const leanc_extra_cc_flags: []const u8 = "";
pub const leanc_internal_flags: []const u8 = "";
pub const leanc_static_linker_flags: []const u8 = "";
pub const leanc_shared_linker_flags: []const u8 = "";
pub const leanc_internal_linker_flags: []const u8 = "";
pub const lean_extra_linker_flags: []const u8 = "";
