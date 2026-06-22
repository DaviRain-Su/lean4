# Optional target for building the in-tree Zig runtime library.
# The Zig runtime is additive and not required for the C++ backend.
find_program(ZIG zig)

if(LEAN_ZIG_RUNTIME AND NOT ZIG)
  message(FATAL_ERROR "LEAN_ZIG_RUNTIME=ON requires zig on PATH")
endif()

if(ZIG)
  set(LEAN_ZIG_RUNTIME_PREFIX "${CMAKE_CURRENT_BINARY_DIR}/zig-out")
  set(LEAN_ZIG_RUNTIME_CACHE_DIR "${CMAKE_CURRENT_BINARY_DIR}/.zig-cache")
  set(LEAN_ZIG_RUNTIME_GLOBAL_CACHE_DIR "${CMAKE_CURRENT_BINARY_DIR}/.zig-global-cache")
  set(LEAN_ZIG_RUNTIME_LIB "${LEAN_ZIG_RUNTIME_PREFIX}/lib/libleanrt_zig.a")
  set(LEAN_ZIG_RUNTIME_ALL)
  if(LEAN_ZIG_RUNTIME)
    set(LEAN_ZIG_RUNTIME_ALL ALL)
  endif()

  # The C++ uv subsystem needs the generated lean/config.h, which lives in the
  # stage include directory (e.g. build/release/stage1/include).
  get_filename_component(LEAN_ZIG_RUNTIME_INCLUDE_DIR "${CMAKE_CURRENT_BINARY_DIR}/../../include" ABSOLUTE)
  set(LEAN_ZIG_RUNTIME_INCLUDE_ARG "-Dlean-include-dir=${LEAN_ZIG_RUNTIME_INCLUDE_DIR}")

  file(
    GLOB LEAN_ZIG_RUNTIME_LOCAL_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/*.zig"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.h"
  )
  set(LEAN_ZIG_RUNTIME_UV_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/dns.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/dns.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/event_loop.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/event_loop.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/net_addr_bridge.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/net_addr.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/signal.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/signal.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/system.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/system.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/tcp.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/tcp.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/timer.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/timer.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/udp.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../uv/udp.h"
  )
  set(LEAN_ZIG_RUNTIME_SOURCES
    ${LEAN_ZIG_RUNTIME_LOCAL_SOURCES}
    ${LEAN_ZIG_RUNTIME_UV_SOURCES}
  )
  set(LEAN_ZIG_RUNTIME_BUILD_OPTIONS
    --prefix "${LEAN_ZIG_RUNTIME_PREFIX}"
    --cache-dir "${LEAN_ZIG_RUNTIME_CACHE_DIR}"
    --global-cache-dir "${LEAN_ZIG_RUNTIME_GLOBAL_CACHE_DIR}"
    "${LEAN_ZIG_RUNTIME_INCLUDE_ARG}"
    "-Dcpp-build-type=${CMAKE_BUILD_TYPE}"
    "-Dcpp-use-mimalloc=$<IF:$<BOOL:${USE_MIMALLOC}>,true,false>"
    "-Dleanc-extra-cc-flags=${LEANC_EXTRA_CC_FLAGS}"
    "-Dleanc-internal-flags=${LEANC_INTERNAL_FLAGS}"
    "-Dleanc-static-linker-flags=${LEANC_STATIC_LINKER_FLAGS}"
    "-Dleanc-shared-linker-flags=${LEANC_SHARED_LINKER_FLAGS}"
    "-Dleanc-internal-linker-flags=${LEANC_INTERNAL_LINKER_FLAGS}"
    "-Dlean-extra-linker-flags=${LEAN_EXTRA_LINKER_FLAGS}"
  )
  if(LEAN_ZIG_RT_CUTOVER)
    list(APPEND LEAN_ZIG_RUNTIME_BUILD_OPTIONS "-Dexport-kernel-symbols=true")
  endif()

  add_custom_command(
    OUTPUT "${LEAN_ZIG_RUNTIME_LIB}"
    COMMAND "${ZIG}" build ${LEAN_ZIG_RUNTIME_BUILD_OPTIONS}
    COMMAND "${CMAKE_COMMAND}" -E touch_nocreate "${LEAN_ZIG_RUNTIME_LIB}"
    DEPENDS ${LEAN_ZIG_RUNTIME_SOURCES} "${LEAN_ZIG_RUNTIME_INCLUDE_DIR}/lean/config.h"
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    COMMENT "Building Lean Zig runtime library"
    VERBATIM
  )

  add_custom_target(
    leanrt_zig ${LEAN_ZIG_RUNTIME_ALL}
    DEPENDS "${LEAN_ZIG_RUNTIME_LIB}"
  )

  # Helperless build: omits stdlib-overlapping exports so it can be linked
  # into libleanshared alongside the Lean stdlib without duplicate symbols.
  # Use ReleaseSafe to match C++ Release build while keeping safety checks.
  # lean_internal_is_debug/get_build_type now use cpp-build-type option
  # instead of builtin.mode, so the Zig optimize mode doesn't affect .olean compat.
  set(LEAN_ZIG_HELPERLESS_OPTIMIZE "ReleaseFast")
  set(LEAN_ZIG_RUNTIME_HELPERLESS_PREFIX "${CMAKE_CURRENT_BINARY_DIR}/zig-out-helperless")
  set(LEAN_ZIG_RUNTIME_HELPERLESS_LIB "${LEAN_ZIG_RUNTIME_HELPERLESS_PREFIX}/lib/libleanrt_zig.a")
  set(LEAN_ZIG_RUNTIME_HELPERLESS_BUILD_OPTIONS
    --prefix "${LEAN_ZIG_RUNTIME_HELPERLESS_PREFIX}"
    --cache-dir "${LEAN_ZIG_RUNTIME_CACHE_DIR}"
    --global-cache-dir "${LEAN_ZIG_RUNTIME_GLOBAL_CACHE_DIR}"
    "${LEAN_ZIG_RUNTIME_INCLUDE_ARG}"
    -Dexport-kernel-symbols=true
    -Doptimize=${LEAN_ZIG_HELPERLESS_OPTIMIZE}
    -Dcpp-build-type=${CMAKE_BUILD_TYPE}
    -Dcpp-use-mimalloc=$<IF:$<BOOL:${USE_MIMALLOC}>,true,false>
    -Dleanc-extra-cc-flags=${LEANC_EXTRA_CC_FLAGS}
    -Dleanc-internal-flags=${LEANC_INTERNAL_FLAGS}
    -Dleanc-static-linker-flags=${LEANC_STATIC_LINKER_FLAGS}
    -Dleanc-shared-linker-flags=${LEANC_SHARED_LINKER_FLAGS}
    -Dleanc-internal-linker-flags=${LEANC_INTERNAL_LINKER_FLAGS}
  )
  if(STAGE EQUAL 0)
    list(APPEND LEAN_ZIG_RUNTIME_HELPERLESS_BUILD_OPTIONS
      -Dexport-lean-helpers=false
      -Dexport-allocator-symbols=true
    )
  else()
    list(APPEND LEAN_ZIG_RUNTIME_HELPERLESS_BUILD_OPTIONS
      -Dexport-lean-helpers=false
      -Dexport-allocator-symbols=false
    )
  endif()
  add_custom_command(
    OUTPUT "${LEAN_ZIG_RUNTIME_HELPERLESS_LIB}"
    COMMAND "${ZIG}" build ${LEAN_ZIG_RUNTIME_HELPERLESS_BUILD_OPTIONS}
    COMMAND "${CMAKE_COMMAND}" -E touch_nocreate "${LEAN_ZIG_RUNTIME_HELPERLESS_LIB}"
    DEPENDS ${LEAN_ZIG_RUNTIME_SOURCES} "${LEAN_ZIG_RUNTIME_INCLUDE_DIR}/lean/config.h"
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    COMMENT "Building Lean Zig runtime library (helperless)"
    VERBATIM
  )
  # Phase 2/3 cutover: weaken Zig symbols that duplicate C++ runtime, then
  # flip specified symbols from C++ to Zig (Phase 3). Both stage0 and stage1
  # need weakening to avoid duplicate symbol errors when linking leanshared.
  # Stage0's source is stage0/src, so tools are at ../../tools, not ../tools.
  if(LEAN_ZIG_RT_CUTOVER)
    if(STAGE EQUAL 0)
      set(LEAN_TOOLS_DIR "${LEAN_SOURCE_DIR}/../../tools")
    else()
      set(LEAN_TOOLS_DIR "${LEAN_SOURCE_DIR}/../tools")
    endif()
    set(LEAN_ZIG_FLIP_FILE "${LEAN_TOOLS_DIR}/phase3_flip_symbols.txt")
    add_custom_command(
      OUTPUT "${LEAN_ZIG_RUNTIME_HELPERLESS_LIB}.weakened"
      COMMAND python3 ${LEAN_TOOLS_DIR}/weaken_zig_symbols.py
        "${LEAN_ZIG_RUNTIME_HELPERLESS_LIB}"
        "${CMAKE_BINARY_DIR}/runtime/libleanrt_initial-exec.a"
        "${CMAKE_BINARY_DIR}/lib/lean/libleancpp.a"
        "${CMAKE_BINARY_DIR}/lib/temp/libleancpp_1.a"
      COMMAND python3 ${LEAN_TOOLS_DIR}/flip_to_zig.py
        "${LEAN_ZIG_RUNTIME_HELPERLESS_LIB}"
        "${LEAN_ZIG_FLIP_FILE}"
        "${CMAKE_BINARY_DIR}/runtime/libleanrt_initial-exec.a"
        "${CMAKE_BINARY_DIR}/lib/lean/libleancpp.a"
        "${CMAKE_BINARY_DIR}/lib/temp/libleancpp_1.a"
      COMMAND "${CMAKE_COMMAND}" -E touch_nocreate "${LEAN_ZIG_RUNTIME_HELPERLESS_LIB}.weakened"
      DEPENDS "${LEAN_ZIG_RUNTIME_HELPERLESS_LIB}" leanrt_initial-exec leancpp leancpp_1 "${LEAN_ZIG_FLIP_FILE}"
      WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
      COMMENT "Weakening Zig duplicates + flipping Phase 3 symbols to Zig"
      VERBATIM
    )
    add_custom_target(
      leanrt_zig_helperless
      DEPENDS "${LEAN_ZIG_RUNTIME_HELPERLESS_LIB}.weakened"
    )
  else()
    add_custom_target(
      leanrt_zig_helperless
      DEPENDS "${LEAN_ZIG_RUNTIME_HELPERLESS_LIB}"
    )
  endif()

  if(LEAN_ZIG_RUNTIME)
    set(LEAN_ZIG_RUNTIME_TEST_ARGS
      build
      test
      --test-timeout 60s
      ${LEAN_ZIG_RUNTIME_BUILD_OPTIONS}
    )
    add_custom_target(
      leanrt_zig_test
      COMMAND "${ZIG}" ${LEAN_ZIG_RUNTIME_TEST_ARGS}
      DEPENDS leanrt_zig
      WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
      COMMENT "Testing Lean Zig runtime library"
      VERBATIM
    )
  endif()
endif()
