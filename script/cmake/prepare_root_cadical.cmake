cmake_minimum_required(VERSION 3.21)

foreach(required_var IN ITEMS GIT_EXECUTABLE SOURCE_DIR REPOSITORY GIT_REF MAKE_PROGRAM CADICAL_MK CADICAL_BINARY)
  if(NOT DEFINED ${required_var} OR "${${required_var}}" STREQUAL "")
    message(FATAL_ERROR "missing required variable: ${required_var}")
  endif()
endforeach()

if(EXISTS "${SOURCE_DIR}/.git")
  execute_process(
    COMMAND "${GIT_EXECUTABLE}" -C "${SOURCE_DIR}" remote get-url origin
    RESULT_VARIABLE git_remote_result
    OUTPUT_QUIET
    ERROR_QUIET
  )
  if(git_remote_result EQUAL 0)
    execute_process(
      COMMAND "${GIT_EXECUTABLE}" -C "${SOURCE_DIR}" remote set-url origin "${REPOSITORY}"
      COMMAND_ERROR_IS_FATAL ANY
      OUTPUT_QUIET
      ERROR_QUIET
    )
  else()
    execute_process(
      COMMAND "${GIT_EXECUTABLE}" -C "${SOURCE_DIR}" remote add origin "${REPOSITORY}"
      COMMAND_ERROR_IS_FATAL ANY
      OUTPUT_QUIET
      ERROR_QUIET
    )
  endif()
else()
  file(REMOVE_RECURSE "${SOURCE_DIR}")
  get_filename_component(source_parent "${SOURCE_DIR}" DIRECTORY)
  file(MAKE_DIRECTORY "${source_parent}")
  execute_process(
    COMMAND "${GIT_EXECUTABLE}" init "${SOURCE_DIR}"
    COMMAND_ERROR_IS_FATAL ANY
    OUTPUT_QUIET
    ERROR_QUIET
  )
  execute_process(
    COMMAND "${GIT_EXECUTABLE}" -C "${SOURCE_DIR}" remote add origin "${REPOSITORY}"
    COMMAND_ERROR_IS_FATAL ANY
    OUTPUT_QUIET
    ERROR_QUIET
  )
endif()

execute_process(
  COMMAND "${GIT_EXECUTABLE}" -C "${SOURCE_DIR}" fetch --depth 1 origin "${GIT_REF}"
  COMMAND_ERROR_IS_FATAL ANY
)
execute_process(
  COMMAND "${GIT_EXECUTABLE}" -C "${SOURCE_DIR}" checkout --detach FETCH_HEAD
  COMMAND_ERROR_IS_FATAL ANY
  OUTPUT_QUIET
  ERROR_QUIET
)

set(cadical_make_args
  "CMAKE_EXECUTABLE_SUFFIX=${CMAKE_EXECUTABLE_SUFFIX}"
  "CXX=${CADICAL_CXX}"
  "CXXFLAGS=${CADICAL_CXXFLAGS}"
  "LDFLAGS=${CADICAL_LDFLAGS}"
)

execute_process(
  COMMAND "${MAKE_PROGRAM}" -f "${CADICAL_MK}" ${cadical_make_args}
  WORKING_DIRECTORY "${SOURCE_DIR}"
  COMMAND_ERROR_IS_FATAL ANY
)

if(NOT EXISTS "${CADICAL_BINARY}")
  message(FATAL_ERROR "expected cadical binary was not produced: ${CADICAL_BINARY}")
endif()
