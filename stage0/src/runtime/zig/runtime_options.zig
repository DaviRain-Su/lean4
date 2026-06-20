// Runtime build options for the Lean Zig runtime.
//
// This fallback module is used when `root.zig` is imported without the Zig build
// runner's generated options module.

pub const export_allocator_symbols: bool = true;
pub const export_lean_helpers: bool = true;
pub const export_kernel_symbols: bool = false;
