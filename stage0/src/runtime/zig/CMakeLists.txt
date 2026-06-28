# Optional target for building the in-tree Zig runtime library.
# The Zig runtime is additive and not required for the C++ backend.
option(LEAN_ZIG_RUNTIME "Build the experimental Lean Zig runtime archive" OFF)

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
  set(LEAN_ZIG_RUNTIME_INCLUDE_DIR "${CMAKE_CURRENT_BINARY_DIR}/../../include")

  if(GMP_LIBRARIES)
    get_filename_component(LEAN_ZIG_GMP_LIBRARY_DIR "${GMP_LIBRARIES}" DIRECTORY)
    get_filename_component(LEAN_ZIG_GMP_LIBRARY_NAME "${GMP_LIBRARIES}" NAME_WE)
    if(LEAN_ZIG_GMP_LIBRARY_NAME MATCHES "^lib(.+)$")
      set(LEAN_ZIG_GMP_LIBRARY_NAME "${CMAKE_MATCH_1}")
    endif()
  else()
    set(LEAN_ZIG_GMP_LIBRARY_DIR "")
    set(LEAN_ZIG_GMP_LIBRARY_NAME "gmp")
  endif()

  string(JOIN "|" LEAN_ZIG_LIBUV_INCLUDE_DIRS ${LIBUV_INCLUDE_DIRS})
  string(JOIN "|" LEAN_ZIG_LIBUV_LIBRARY_DIRS ${LIBUV_LIBRARY_DIRS})
  string(JOIN "|" LEAN_ZIG_LIBUV_LIBRARIES ${LIBUV_LIBRARIES})
  set(
    LEAN_ZIG_RUNTIME_ARGS
    --prefix "${LEAN_ZIG_RUNTIME_PREFIX}"
    --cache-dir "${LEAN_ZIG_RUNTIME_CACHE_DIR}"
    --global-cache-dir "${LEAN_ZIG_RUNTIME_GLOBAL_CACHE_DIR}"
    -Dlean-include-dir="${LEAN_ZIG_RUNTIME_INCLUDE_DIR}"
    -Dgmp-include-dir="${GMP_INCLUDE_DIR}"
    -Dgmp-library-dir="${LEAN_ZIG_GMP_LIBRARY_DIR}"
    -Dgmp-library-name="${LEAN_ZIG_GMP_LIBRARY_NAME}"
    -Dlibuv-include-dirs="${LEAN_ZIG_LIBUV_INCLUDE_DIRS}"
    -Dlibuv-library-dirs="${LEAN_ZIG_LIBUV_LIBRARY_DIRS}"
    -Dlibuv-libraries="${LEAN_ZIG_LIBUV_LIBRARIES}"
  )


  add_custom_target(
    leanrt_zig ${LEAN_ZIG_RUNTIME_ALL}
    COMMAND "${ZIG}" build ${LEAN_ZIG_RUNTIME_ARGS}
    BYPRODUCTS "${LEAN_ZIG_RUNTIME_LIB}"
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
    COMMENT "Building Lean Zig runtime library"
  )

  if(LEAN_ZIG_RUNTIME)
    add_custom_target(
      leanrt_zig_test
      COMMAND "${ZIG}" build test --test-timeout 60s ${LEAN_ZIG_RUNTIME_ARGS}
      DEPENDS leanrt_zig
      WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
      COMMENT "Testing Lean Zig runtime library"
    )
  endif()
endif()
