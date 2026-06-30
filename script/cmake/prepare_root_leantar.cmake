cmake_minimum_required(VERSION 3.21)

foreach(required_var IN ITEMS ARCHIVE_URL ARCHIVE_PATH TARGET_DIR LEANTAR_BINARY)
  if(NOT DEFINED ${required_var} OR "${${required_var}}" STREQUAL "")
    message(FATAL_ERROR "missing required variable: ${required_var}")
  endif()
endforeach()

if(EXISTS "${LEANTAR_BINARY}")
  return()
endif()

get_filename_component(target_parent "${TARGET_DIR}" DIRECTORY)
file(MAKE_DIRECTORY "${target_parent}")
file(REMOVE_RECURSE "${TARGET_DIR}")

file(DOWNLOAD "${ARCHIVE_URL}" "${ARCHIVE_PATH}" SHOW_PROGRESS STATUS download_status)
list(GET download_status 0 download_code)
list(GET download_status 1 download_message)
if(NOT download_code EQUAL 0)
  message(FATAL_ERROR "failed to download ${ARCHIVE_URL}: ${download_message}")
endif()

file(ARCHIVE_EXTRACT INPUT "${ARCHIVE_PATH}" DESTINATION "${target_parent}")

if(NOT EXISTS "${LEANTAR_BINARY}")
  message(FATAL_ERROR "expected leantar binary was not produced: ${LEANTAR_BINARY}")
endif()
