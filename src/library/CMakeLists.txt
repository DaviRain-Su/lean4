# Library C++ source files kept on disk for comparison testing.
# Zig implementations in src/runtime/zig/ provide all C ABI symbols.
add_library(
  library
  OBJECT
  module.cpp
  ../kernel/zig_cutover_stub.cpp
)
