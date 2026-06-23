if(LEAN_ZIG_RT_CUTOVER AND STAGE GREATER 0)
  # All runtime symbols are provided by the Zig archive (pure Zig + thin C++ shims).
  # Only stage1+ cutover: the Zig helperless archive is linked into leanshared
  # only when STAGE GREATER 0 (src/CMakeLists.txt), so stage0 must keep the full
  # self-contained C++ runtime even with LEAN_ZIG_RT_CUTOVER=ON, otherwise
  # leanshared has no provider for lean_dec_ref_cold/lean_free_object/etc.
  set(RUNTIME_OBJS runtime_cutover_stub.c)
else()
  set(
    RUNTIME_OBJS
    debug.cpp
    thread.cpp
    mpz.cpp
    object.cpp
    exception.cpp
    interrupt.cpp
    stackinfo.cpp
    compact.cpp
    sharecommon.cpp
    object_ref.cpp
  )
  # Full self-contained C++ runtime (stage0 bootstrap, no Zig archive).
  list(APPEND RUNTIME_OBJS
    apply.cpp
    alloc.cpp
    utf8.cpp
    uv/net_addr.cpp
    uv/zig_link_compat.cpp
    io.cpp
    memory.cpp
    hash.cpp
    init_module.cpp
    stack_overflow.cpp
    platform.cpp
    allocprof.cpp
    mpn.cpp
    mutex.cpp
    process.cpp
    libuv.cpp
    openssl.cpp
    byteslice.cpp
    uv/dns.cpp
    uv/event_loop.cpp
    uv/signal.cpp
    uv/system.cpp
    uv/tcp.cpp
    uv/timer.cpp
    uv/udp.cpp
  )
endif()

add_library(leanrt_initial-exec STATIC ${RUNTIME_OBJS})
set_target_properties(leanrt_initial-exec PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
if(NOT LEAN_ZIG_RT_CUTOVER)
  target_compile_definitions(leanrt_initial-exec PRIVATE LEAN_NO_WEAK_UV)
endif()

# Phase 2 cutover strategy: instead of weakening C++ symbols (which caused
# 414 behavioral mismatches), we keep C++ strong and weaken only Zig symbols
# that duplicate C++ definitions.  Zig-only symbols stay strong and fill gaps.
# The weakening happens in src/runtime/zig/CMakeLists.txt after the Zig
# helperless archive is built, using weaken_zig_symbols.py / flip_to_zig.py.
option(LEAN_ZIG_RT_CUTOVER "Link Zig runtime into leanshared" ON)

# The above library, like all other C++ code, is built using `-ftls-model=initial-exec`, which is necessary for linking it into `leanshared`,
# but introduces a measurable overhead while accessing the thread-local variable `g_heap` when allocating and deallocating. Therefore we compile
# the runtime again with the more restrictive `local-exec` and use it when linking Lean code statically, i.e. not against `leanshared`.
add_library(leanrt STATIC ${RUNTIME_OBJS})
set_target_properties(leanrt PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})
if(NOT MSVC)
  target_compile_options(leanrt PRIVATE -ftls-model=local-exec)
endif()
if(NOT LEAN_ZIG_RT_CUTOVER)
  target_compile_definitions(leanrt PRIVATE LEAN_NO_WEAK_UV)
endif()
# We do not export Lean symbols when statically linking on Windows.
if(CMAKE_SYSTEM_NAME MATCHES "Windows")
  target_compile_options(leanrt PRIVATE -ULEAN_EXPORTING)
endif()

if(LLVM)
  if(NOT CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    message(
      FATAL_ERROR
      "building 'lean.h.bc', need CMAKE_CXX_COMPILER_ID to match Clang to build LLVM bitcode file of Lean runtime."
    )
  endif()
  file(READ "${CMAKE_CURRENT_SOURCE_DIR}/../include/lean/lean.h" LEAN_H)
  # generate LLVM IR for `static inline` definitions in lean.h for the LLVM backend
  string(REPLACE "static inline" "__attribute__((always_inline))" LEAN_H "${LEAN_H}")
  # drop '#pragma once' in .c file to avoid warning
  string(REPLACE "#pragma once" "" LEAN_H "${LEAN_H}")
  file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/lean_inlines.c" "${LEAN_H}")
  message("Generating LLVM bitcode file for Lean runtime at '${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/lean.h.bc'")
  add_custom_command(
    OUTPUT ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/lean.h.bc
    DEPENDS ${RUNTIME_OBJS} ${CMAKE_CURRENT_BINARY_DIR}/lean_inlines.c
    COMMAND
      bash -ec
      "${CMAKE_BINARY_DIR}/leanc.sh ${LEANC_OPTS} -I$<JOIN:$<TARGET_PROPERTY:leanrt_initial-exec,INCLUDE_DIRECTORIES>, -I> -c ${CMAKE_CURRENT_BINARY_DIR}/lean_inlines.c -emit-llvm -o ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/lean.h.bc"
    VERBATIM
  )
  add_custom_target(runtime_bc DEPENDS ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/lean.h.bc)
endif()
add_subdirectory(zig)
