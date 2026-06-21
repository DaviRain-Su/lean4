# Util C++ source files kept on disk for comparison testing.
# Zig implementations in src/runtime/zig/ provide all symbols.
configure_file(ffi.cpp "${CMAKE_BINARY_DIR}/util/ffi.cpp" @ONLY)

add_library(
  util
  OBJECT
  ../kernel/zig_cutover_stub.cpp
)
