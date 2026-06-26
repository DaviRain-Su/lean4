# CMake toolchain file for using zig cc / zig c++ as C and C++ compilers.
# Usage: cmake -DCMAKE_TOOLCHAIN_FILE=cmake/zig-cc-toolchain.cmake ..
#
# CMake cannot call `zig` directly as a compiler because it expects a single
# binary, not a subcommand. These wrapper scripts bridge that gap.
# CMake detects the wrappers as Clang (verified with zig 0.16.0).

set(LEAN_USE_ZIG_CC ON CACHE BOOL "Using zig cc via toolchain" FORCE)

# Find zig
find_program(ZIG_EXE zig REQUIRED)

# Create wrapper scripts in a temp location
set(ZIG_CC_WRAPPER  "${CMAKE_BINARY_DIR}/zig-cc")
set(ZIG_CXX_WRAPPER "${CMAKE_BINARY_DIR}/zig-cxx")

file(WRITE "${ZIG_CC_WRAPPER}"  "#!/bin/bash\nexec \"${ZIG_EXE}\" cc \"$@\"\n")
file(WRITE "${ZIG_CXX_WRAPPER}" "#!/bin/bash\nexec \"${ZIG_EXE}\" c++ \"$@\"\n")
execute_process(COMMAND chmod +x "${ZIG_CC_WRAPPER}" "${ZIG_CXX_WRAPPER}")

set(CMAKE_C_COMPILER   "${ZIG_CC_WRAPPER}")
set(CMAKE_CXX_COMPILER "${ZIG_CXX_WRAPPER}")

# zig cc (clang) warns on __DATE__/__TIME__ which mimalloc uses and treats as error.
# Suppress globally — mimalloc is a dependency we don't control.
set(CMAKE_C_FLAGS_INIT "-Wno-date-time")
set(CMAKE_CXX_FLAGS_INIT "-Wno-date-time")

# zig bundles lld, so no need for -fuse-ld=lld
set(CMAKE_EXE_LINKER_FLAGS_INIT "")
set(CMAKE_SHARED_LINKER_FLAGS_INIT "")
set(CMAKE_MODULE_LINKER_FLAGS_INIT "")