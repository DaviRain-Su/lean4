# Kernel C++ source files are kept on disk for comparison testing.
# The Zig kernel implementation (src/runtime/zig/kernel.zig, type_checker.zig)
# provides all kernel C ABI symbols. This target is intentionally empty.
add_library(
  kernel
  OBJECT
  zig_cutover_stub.cpp
)
