cmake_minimum_required(VERSION 3.21)

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

# Keep direct sub-make wrappers for the stage build targets so a top-level
# `make -j` continues to forward its jobserver into the nested Unix Makefiles.
function(add_stage_build_wrapper target_name build_dir)
  cmake_parse_arguments(ARG "" "BUILD_TARGET;JOBS" "BUILD_ARGS;DEPENDS" ${ARGN})
  set(build_cmd ${CMAKE_COMMAND} --build "${build_dir}")
  if(ARG_BUILD_TARGET)
    list(APPEND build_cmd --target "${ARG_BUILD_TARGET}")
  endif()
  if(ARG_JOBS)
    list(APPEND build_cmd --parallel "${ARG_JOBS}")
  endif()
  if(ARG_BUILD_ARGS)
    list(APPEND build_cmd -- ${ARG_BUILD_ARGS})
  endif()
  add_custom_target(
    ${target_name}
    COMMAND ${build_cmd}
    DEPENDS ${ARG_DEPENDS}
    WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
    COMMENT "Running ${target_name} in ${build_dir}"
    USES_TERMINAL
    COMMAND_EXPAND_LISTS
    VERBATIM
  )
endfunction()

function(add_stage_ctest_wrapper target_name build_dir)
  cmake_parse_arguments(ARG "" "JOBS" "ARGS;DEPENDS" ${ARGN})
  set(ctest_cmd ${CMAKE_CTEST_COMMAND} --test-dir "${build_dir}" --output-on-failure --progress)
  if(ARG_JOBS)
    list(APPEND ctest_cmd --parallel "${ARG_JOBS}")
  endif()
  if(ARG_ARGS)
    list(APPEND ctest_cmd ${ARG_ARGS})
  endif()
  add_custom_target(
    ${target_name}
    COMMAND ${ctest_cmd}
    DEPENDS ${ARG_DEPENDS}
    WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
    COMMENT "Running ${target_name} in ${build_dir}"
    USES_TERMINAL
    COMMAND_EXPAND_LISTS
    VERBATIM
  )
endfunction()

function(ensure_git_checkout source_dir repository commit)
  cmake_parse_arguments(ARG "" "" "REQUIRED_FILES" ${ARGN})
  set(required_missing FALSE)
  foreach(required_file IN LISTS ARG_REQUIRED_FILES)
    if(NOT EXISTS "${source_dir}/${required_file}")
      set(required_missing TRUE)
      break()
    endif()
  endforeach()
  if(NOT required_missing)
    return()
  endif()

  find_program(GIT_EXECUTABLE git REQUIRED)
  if(EXISTS "${source_dir}/.git")
    execute_process(
      COMMAND "${GIT_EXECUTABLE}" -C "${source_dir}" remote get-url origin
      RESULT_VARIABLE git_remote_result
      OUTPUT_QUIET
      ERROR_QUIET
    )
    if(git_remote_result EQUAL 0)
      execute_process(
        COMMAND "${GIT_EXECUTABLE}" -C "${source_dir}" remote set-url origin "${repository}"
        COMMAND_ERROR_IS_FATAL ANY
        OUTPUT_QUIET
        ERROR_QUIET
      )
    else()
      execute_process(
        COMMAND "${GIT_EXECUTABLE}" -C "${source_dir}" remote add origin "${repository}"
        COMMAND_ERROR_IS_FATAL ANY
        OUTPUT_QUIET
        ERROR_QUIET
      )
    endif()
  else()
    file(REMOVE_RECURSE "${source_dir}")
    get_filename_component(source_parent "${source_dir}" DIRECTORY)
    file(MAKE_DIRECTORY "${source_parent}")
    execute_process(
      COMMAND "${GIT_EXECUTABLE}" init "${source_dir}"
      COMMAND_ERROR_IS_FATAL ANY
      OUTPUT_QUIET
      ERROR_QUIET
    )
    execute_process(
      COMMAND "${GIT_EXECUTABLE}" -C "${source_dir}" remote add origin "${repository}"
      COMMAND_ERROR_IS_FATAL ANY
      OUTPUT_QUIET
      ERROR_QUIET
    )
  endif()

  execute_process(
    COMMAND "${GIT_EXECUTABLE}" -C "${source_dir}" fetch --depth 1 origin "${commit}"
    COMMAND_ERROR_IS_FATAL ANY
  )
  execute_process(
    COMMAND "${GIT_EXECUTABLE}" -C "${source_dir}" checkout --detach FETCH_HEAD
    COMMAND_ERROR_IS_FATAL ANY
    OUTPUT_QUIET
    ERROR_QUIET
  )

  foreach(required_file IN LISTS ARG_REQUIRED_FILES)
    if(NOT EXISTS "${source_dir}/${required_file}")
      message(FATAL_ERROR "required checkout artifact missing: ${source_dir}/${required_file}")
    endif()
  endforeach()
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
    find_program(GIT_EXECUTABLE git REQUIRED)
    set(CADICAL_SOURCE_DIR "${CMAKE_BINARY_DIR}/cadical/src/cadical")
    set(CADICAL "${CMAKE_BINARY_DIR}/cadical/cadical${CMAKE_EXECUTABLE_SUFFIX}")
    add_custom_command(
      OUTPUT "${CADICAL}"
      COMMAND
        "${CMAKE_COMMAND}"
        "-DGIT_EXECUTABLE=${GIT_EXECUTABLE}"
        "-DSOURCE_DIR=${CADICAL_SOURCE_DIR}"
        "-DREPOSITORY=https://github.com/arminbiere/cadical"
        "-DGIT_REF=rel-2.1.2"
        "-DMAKE_PROGRAM=${CMAKE_MAKE_PROGRAM}"
        "-DCADICAL_MK=${LEAN_SOURCE_DIR}/src/cadical.mk"
        "-DCADICAL_BINARY=${CADICAL}"
        "-DCMAKE_EXECUTABLE_SUFFIX=${CMAKE_EXECUTABLE_SUFFIX}"
        "-DCADICAL_CXX=${CADICAL_CXX}"
        "-DCADICAL_CXXFLAGS=${CADICAL_CXXFLAGS}"
        "-DCADICAL_LDFLAGS=${CADICAL_LDFLAGS}"
        -P
        "${LEAN_SOURCE_DIR}/script/cmake/prepare_root_cadical.cmake"
      COMMENT "Preparing ${CADICAL}"
      VERBATIM
    )
    add_custom_target(cadical DEPENDS "${CADICAL}")
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
    set(LEANTAR_TARGET_DIR "${CMAKE_BINARY_DIR}/leantar/leantar-${LEANTAR_VERSION}-${LEANTAR_TARGET}")
    set(
      LEANTAR
      ${LEANTAR_TARGET_DIR}/leantar${CMAKE_EXECUTABLE_SUFFIX}
    )
    set(LEANTAR_ARCHIVE "${CMAKE_BINARY_DIR}/leantar${LEANTAR_ARCHIVE_SUFFIX}")
    set(
      LEANTAR_ARCHIVE_URL
      https://github.com/digama0/leangz/releases/download/${LEANTAR_VERSION}/leantar-${LEANTAR_VERSION}-${LEANTAR_TARGET}${LEANTAR_ARCHIVE_SUFFIX}
    )
    add_custom_command(
      OUTPUT "${LEANTAR}"
      COMMAND
        "${CMAKE_COMMAND}"
        "-DARCHIVE_URL=${LEANTAR_ARCHIVE_URL}"
        "-DARCHIVE_PATH=${LEANTAR_ARCHIVE}"
        "-DTARGET_DIR=${LEANTAR_TARGET_DIR}"
        "-DLEANTAR_BINARY=${LEANTAR}"
        -P
        "${LEAN_SOURCE_DIR}/script/cmake/prepare_root_leantar.cmake"
      COMMENT "Preparing ${LEANTAR}"
      VERBATIM
    )
    add_custom_target(leantar DEPENDS "${LEANTAR}")
  endif()
  list(APPEND STAGE0_ARGS -DLEANTAR=${LEANTAR})
  list(APPEND CL_ARGS -DCADICAL=${CADICAL} -DLEANTAR=${LEANTAR})
endif()

if(USE_MIMALLOC)
  set(MIMALLOC_SOURCE_DIR "${CMAKE_BINARY_DIR}/mimalloc/src/mimalloc")
  if(NOT EXISTS "${MIMALLOC_SOURCE_DIR}/include/mimalloc.h" OR NOT EXISTS "${MIMALLOC_SOURCE_DIR}/src/static.c")
    ensure_git_checkout(
      "${MIMALLOC_SOURCE_DIR}"
      https://github.com/microsoft/mimalloc
      94036de6fe20bfd8a73d4a6d142fcf532ea604d9
      REQUIRED_FILES
      include/mimalloc.h
      src/static.c
    )
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
if(TARGET leantar)
  list(APPEND STAGE1_BUILD_DEPS leantar)
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

add_stage_build_wrapper(update-stage0 "${CMAKE_BINARY_DIR}/stage1" BUILD_TARGET update-stage0 DEPENDS stage1)

add_stage_build_wrapper(
  update-stage0-commit
  "${CMAKE_BINARY_DIR}/stage1"
  BUILD_TARGET update-stage0-commit
  DEPENDS stage1
)

add_stage_ctest_wrapper(test "${CMAKE_BINARY_DIR}/stage1" DEPENDS stage1)

add_stage_build_wrapper(bench "${CMAKE_BINARY_DIR}/stage2" BUILD_TARGET bench JOBS 1 DEPENDS stage2)
add_stage_build_wrapper(bench-part1 "${CMAKE_BINARY_DIR}/stage2" BUILD_TARGET bench-part1 JOBS 1 DEPENDS stage2)
add_stage_build_wrapper(bench-part2 "${CMAKE_BINARY_DIR}/stage2" BUILD_TARGET bench-part2 JOBS 1 DEPENDS stage2)

add_stage_build_wrapper(clean-stdlib "${CMAKE_BINARY_DIR}/stage1" BUILD_TARGET clean-stdlib DEPENDS stage1-configure)

add_stage_build_wrapper(cache-get "${CMAKE_BINARY_DIR}/stage1" BUILD_TARGET cache-get DEPENDS stage1-configure)

install(CODE "
  execute_process(
    COMMAND \"${CMAKE_COMMAND}\" --build \"${CMAKE_BINARY_DIR}/stage1\" --target install
    RESULT_VARIABLE stage1_install_result
  )
  if(NOT stage1_install_result EQUAL 0)
    message(FATAL_ERROR \"Stage1 install failed with exit code \${stage1_install_result}\")
  endif()
")

add_custom_target(
  check-stage3
  COMMAND ${CMAKE_COMMAND} -E compare_files "stage2/bin/lean" "stage3/bin/lean"
  DEPENDS stage3
)
