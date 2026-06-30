cmake_minimum_required(VERSION 3.21)
include(ExternalProject)
include(FetchContent)

if(NOT CMAKE_GENERATOR MATCHES "Makefiles")
  message(FATAL_ERROR "Only makefile generators are supported")
endif()

option(USE_MIMALLOC "use mimalloc" ON)

# store all variables passed on the command line into CL_ARGS so we can pass them to the stage builds
# https://stackoverflow.com/a/48555098/161659
# MUST be done before call to 'project'
# Use standard release build (discarding LEAN_EXTRA_CXX_FLAGS etc.) for stage0 by default since it is assumed to be "good", but still pass through CMake platform arguments (compiler, toolchain file, ..).
# Use `STAGE0_` prefix to pass variables to stage0 explicitly.
get_cmake_property(vars CACHE_VARIABLES)
foreach(var ${vars})
  get_property(currentHelpString CACHE "${var}" PROPERTY HELPSTRING)
  if(var MATCHES "STAGE0_(.*)")
    list(APPEND STAGE0_ARGS "-D${CMAKE_MATCH_1}=${${var}}")
  elseif(var MATCHES "STAGE1_(.*)")
    list(APPEND STAGE1_ARGS "-D${CMAKE_MATCH_1}=${${var}}")
  elseif(currentHelpString MATCHES "No help, variable specified on the command line." OR currentHelpString STREQUAL "")
    list(APPEND CL_ARGS "-D${var}=${${var}}")
    if(var MATCHES "USE_GMP|CHECK_OLEAN_VERSION|LEAN_VERSION_.*|LEAN_SPECIAL_VERSION_DESC")
      # must forward options that generate incompatible .olean format
      list(APPEND STAGE0_ARGS "-D${var}=${${var}}")
    elseif(var MATCHES "LLVM*|PKG_CONFIG|USE_LAKE|USE_MIMALLOC")
      list(APPEND STAGE0_ARGS "-D${var}=${${var}}")
    endif()
  elseif(var MATCHES "USE_MIMALLOC")
    list(APPEND CL_ARGS "-D${var}=${${var}}")
    list(APPEND STAGE0_ARGS "-D${var}=${${var}}")
  elseif(
    (var MATCHES "CMAKE_.*")
    AND NOT (var MATCHES "CMAKE_BUILD_TYPE")
    AND NOT (var MATCHES "CMAKE_HOME_DIRECTORY")
    AND NOT (var MATCHES "CMAKE_EDIT_COMMAND")
  )
    list(APPEND PLATFORM_ARGS "-D${var}=${${var}}")
  endif()
endforeach()

project(LEAN CXX C)

if(NOT (DEFINED STAGE0_CMAKE_EXECUTABLE_SUFFIX))
  set(STAGE0_CMAKE_EXECUTABLE_SUFFIX "${CMAKE_EXECUTABLE_SUFFIX}")
endif()

function(add_stage_configure_wrapper target_name source_dir build_dir)
  cmake_parse_arguments(ARG "" "" "ARGS;DEPENDS" ${ARGN})
  add_custom_target(
    ${target_name}
    COMMAND ${CMAKE_COMMAND} -G "Unix Makefiles" -S "${source_dir}" -B "${build_dir}" ${ARG_ARGS}
    DEPENDS ${ARG_DEPENDS}
    WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
    COMMENT "Configuring ${build_dir}"
    USES_TERMINAL
    COMMAND_EXPAND_LISTS
    VERBATIM
  )
endfunction()

function(add_stage_make_wrapper target_name build_dir)
  cmake_parse_arguments(ARG "" "MAKE_TARGET;JOBS" "DEPENDS" ${ARGN})
  set(make_cmd ${CMAKE_MAKE_PROGRAM} -C "${build_dir}")
  if(ARG_JOBS)
    list(APPEND make_cmd "-j${ARG_JOBS}")
  endif()
  if(ARG_MAKE_TARGET)
    list(APPEND make_cmd "${ARG_MAKE_TARGET}")
  endif()
  add_custom_target(
    ${target_name}
    COMMAND ${make_cmd}
    DEPENDS ${ARG_DEPENDS}
    WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
    COMMENT "Running ${target_name} in ${build_dir}"
    USES_TERMINAL
    JOB_SERVER_AWARE TRUE
    COMMAND_EXPAND_LISTS
    VERBATIM
  )
endfunction()

# Don't do anything with cadical/leantar on wasm
if(NOT CMAKE_SYSTEM_NAME MATCHES "Emscripten")
  find_program(CADICAL cadical)
  if(NOT CADICAL)
    set(CADICAL_CXX c++)
    if(CADICAL_USE_CUSTOM_CXX)
      set(CADICAL_CXX ${CMAKE_CXX_COMPILER})
      # Use same platform flags as for Lean executables, in particular from `prepare-llvm-linux.sh`,
      # but not Lean-specific `LEAN_EXTRA_CXX_FLAGS` such as fsanitize.
      set(CADICAL_CXXFLAGS "${CMAKE_CXX_FLAGS}")
      string(REPLACE "ROOT" "${CMAKE_BINARY_DIR}/stage1" CADICAL_INTERNAL_LINKER_FLAGS "${LEANC_INTERNAL_LINKER_FLAGS}")
      set(CADICAL_LDFLAGS "${CADICAL_INTERNAL_LINKER_FLAGS} -Wl,-rpath=\\$$ORIGIN/../lib")
    endif()
    find_program(CCACHE ccache)
    if(CCACHE)
      set(CADICAL_CXX "${CCACHE} ${CADICAL_CXX}")
    endif()
    # missing stdio locking API on Windows
    if(CMAKE_SYSTEM_NAME MATCHES "Windows")
      string(APPEND CADICAL_CXXFLAGS " -DNUNLOCKED")
    endif()
    string(APPEND CADICAL_CXXFLAGS " -DNCLOSEFROM")
    ExternalProject_Add(
      cadical
      PREFIX cadical
      GIT_REPOSITORY https://github.com/arminbiere/cadical
      GIT_TAG rel-2.1.2
      CONFIGURE_COMMAND ""
      BUILD_COMMAND
        $(MAKE) -f ${CMAKE_SOURCE_DIR}/src/cadical.mk CMAKE_EXECUTABLE_SUFFIX=${CMAKE_EXECUTABLE_SUFFIX}
        CXX=${CADICAL_CXX} CXXFLAGS=${CADICAL_CXXFLAGS} LDFLAGS=${CADICAL_LDFLAGS}
      BUILD_IN_SOURCE ON
      INSTALL_COMMAND ""
    )
    set(CADICAL ${CMAKE_BINARY_DIR}/cadical/cadical${CMAKE_EXECUTABLE_SUFFIX})
    list(APPEND EXTRA_DEPENDS cadical)
  endif()
  find_program(LEANTAR leantar)
  if(NOT LEANTAR)
    set(LEANTAR_VERSION v0.1.19)
    if(CMAKE_SYSTEM_NAME MATCHES "Windows")
      set(LEANTAR_ARCHIVE_SUFFIX .zip)
      set(LEANTAR_TARGET x86_64-pc-windows-msvc)
    else()
      set(LEANTAR_ARCHIVE_SUFFIX .tar.gz)
      if(CMAKE_SYSTEM_PROCESSOR MATCHES "arm64|aarch64")
        set(LEANTAR_TARGET_ARCH aarch64)
      else()
        set(LEANTAR_TARGET_ARCH x86_64)
      endif()
      if(CMAKE_SYSTEM_NAME MATCHES "Darwin")
        set(LEANTAR_TARGET_OS apple-darwin)
      else()
        set(LEANTAR_TARGET_OS unknown-linux-musl)
      endif()
      set(LEANTAR_TARGET ${LEANTAR_TARGET_ARCH}-${LEANTAR_TARGET_OS})
    endif()
    set(
      LEANTAR
      ${CMAKE_BINARY_DIR}/leantar/leantar-${LEANTAR_VERSION}-${LEANTAR_TARGET}/leantar${CMAKE_EXECUTABLE_SUFFIX}
    )
    if(NOT EXISTS "${LEANTAR}")
      file(
        DOWNLOAD
          https://github.com/digama0/leangz/releases/download/${LEANTAR_VERSION}/leantar-${LEANTAR_VERSION}-${LEANTAR_TARGET}${LEANTAR_ARCHIVE_SUFFIX}
        ${CMAKE_BINARY_DIR}/leantar${LEANTAR_ARCHIVE_SUFFIX}
      )
      file(
        ARCHIVE_EXTRACT
        INPUT ${CMAKE_BINARY_DIR}/leantar${LEANTAR_ARCHIVE_SUFFIX}
        DESTINATION ${CMAKE_BINARY_DIR}/leantar
      )
    endif()
  endif()
  list(APPEND STAGE0_ARGS -DLEANTAR=${LEANTAR})
  list(APPEND CL_ARGS -DCADICAL=${CADICAL} -DLEANTAR=${LEANTAR})
endif()

if(USE_MIMALLOC)
  set(MIMALLOC_SOURCE_DIR "${CMAKE_BINARY_DIR}/mimalloc/src/mimalloc")
  if(NOT EXISTS "${MIMALLOC_SOURCE_DIR}/include/mimalloc.h" OR NOT EXISTS "${MIMALLOC_SOURCE_DIR}/src/static.c")
    FetchContent_Declare(
      mimalloc
      GIT_REPOSITORY https://github.com/microsoft/mimalloc
      GIT_TAG v2.2.3
      # Unnecessarily deep directory structure, but it saves us from a complicated
      # stage0 update for now. If we ever update the other dependencies like
      # cadical, it might be worth reorganizing the directory structure.
      SOURCE_DIR
      "${MIMALLOC_SOURCE_DIR}"
      EXCLUDE_FROM_ALL
    )
    FetchContent_MakeAvailable(mimalloc)
  endif()
endif()

set(STAGE0_CONFIGURE_ARGS -DSTAGE=0 -DUSE_GITHASH=OFF ${PLATFORM_ARGS} ${STAGE0_ARGS})
if(STAGE1_PREV_STAGE)
  set(STAGE1_PREV_STAGE_DIR "${STAGE1_PREV_STAGE}")
else()
  set(STAGE1_PREV_STAGE_DIR "${CMAKE_BINARY_DIR}/stage0")
endif()
set(
  STAGE1_CONFIGURE_ARGS
  -DSTAGE=1
  -DPREV_STAGE=${STAGE1_PREV_STAGE_DIR}
  -DPREV_STAGE_CMAKE_EXECUTABLE_SUFFIX=${STAGE0_CMAKE_EXECUTABLE_SUFFIX}
  ${CL_ARGS}
  ${STAGE1_ARGS}
)
set(
  STAGE2_CONFIGURE_ARGS
  -DSTAGE=2
  -DPREV_STAGE=${CMAKE_BINARY_DIR}/stage1
  -DPREV_STAGE_CMAKE_EXECUTABLE_SUFFIX=${CMAKE_EXECUTABLE_SUFFIX}
  ${CL_ARGS}
)
set(
  STAGE3_CONFIGURE_ARGS
  -DSTAGE=3
  -DPREV_STAGE=${CMAKE_BINARY_DIR}/stage2
  -DPREV_STAGE_CMAKE_EXECUTABLE_SUFFIX=${CMAKE_EXECUTABLE_SUFFIX}
  ${CL_ARGS}
)

set(STAGE1_CONFIGURE_DEPS)
set(STAGE1_BUILD_DEPS stage1-configure)
if(TARGET cadical)
  list(APPEND STAGE1_BUILD_DEPS cadical)
endif()

if(NOT STAGE1_PREV_STAGE)
  add_stage_configure_wrapper(
    stage0-configure
    "${LEAN_SOURCE_DIR}/stage0/src"
    "${CMAKE_BINARY_DIR}/stage0"
    ARGS ${STAGE0_CONFIGURE_ARGS}
  )
  add_stage_make_wrapper(stage0 "${CMAKE_BINARY_DIR}/stage0" DEPENDS stage0-configure)
  list(APPEND STAGE1_CONFIGURE_DEPS stage0-configure)
  list(APPEND STAGE1_BUILD_DEPS stage0)
endif()

add_stage_configure_wrapper(
  stage1-configure
  "${LEAN_SOURCE_DIR}/src"
  "${CMAKE_BINARY_DIR}/stage1"
  ARGS ${STAGE1_CONFIGURE_ARGS}
  DEPENDS ${STAGE1_CONFIGURE_DEPS}
)
add_stage_make_wrapper(stage1 "${CMAKE_BINARY_DIR}/stage1" DEPENDS ${STAGE1_BUILD_DEPS})

add_stage_configure_wrapper(
  stage2-configure
  "${LEAN_SOURCE_DIR}/src"
  "${CMAKE_BINARY_DIR}/stage2"
  ARGS ${STAGE2_CONFIGURE_ARGS}
  DEPENDS stage1-configure
)
add_stage_make_wrapper(stage2 "${CMAKE_BINARY_DIR}/stage2" DEPENDS stage1 stage2-configure)

add_stage_configure_wrapper(
  stage3-configure
  "${LEAN_SOURCE_DIR}/src"
  "${CMAKE_BINARY_DIR}/stage3"
  ARGS ${STAGE3_CONFIGURE_ARGS}
  DEPENDS stage2-configure
)
add_stage_make_wrapper(stage3 "${CMAKE_BINARY_DIR}/stage3" DEPENDS stage2 stage3-configure)

# targets forwarded to appropriate stages

add_stage_make_wrapper(update-stage0 "${CMAKE_BINARY_DIR}/stage1" MAKE_TARGET update-stage0 DEPENDS stage1)

add_stage_make_wrapper(
  update-stage0-commit
  "${CMAKE_BINARY_DIR}/stage1"
  MAKE_TARGET update-stage0-commit
  DEPENDS stage1
)

add_stage_make_wrapper(test "${CMAKE_BINARY_DIR}/stage1" MAKE_TARGET test DEPENDS stage1)

add_stage_make_wrapper(bench "${CMAKE_BINARY_DIR}/stage2" MAKE_TARGET bench JOBS 1 DEPENDS stage2)
add_stage_make_wrapper(bench-part1 "${CMAKE_BINARY_DIR}/stage2" MAKE_TARGET bench-part1 JOBS 1 DEPENDS stage2)
add_stage_make_wrapper(bench-part2 "${CMAKE_BINARY_DIR}/stage2" MAKE_TARGET bench-part2 JOBS 1 DEPENDS stage2)

add_stage_make_wrapper(clean-stdlib "${CMAKE_BINARY_DIR}/stage1" MAKE_TARGET clean-stdlib DEPENDS stage1-configure)

add_stage_make_wrapper(cache-get "${CMAKE_BINARY_DIR}/stage1" MAKE_TARGET cache-get DEPENDS stage1-configure)

install(CODE "execute_process(COMMAND \"${CMAKE_MAKE_PROGRAM}\" -C stage1 install)")

add_custom_target(check-stage3 COMMAND diff "stage2/bin/lean" "stage3/bin/lean" DEPENDS stage3)
