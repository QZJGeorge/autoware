# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_nebula_tests_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED nebula_tests_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(nebula_tests_FOUND FALSE)
  elseif(NOT nebula_tests_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(nebula_tests_FOUND FALSE)
  endif()
  return()
endif()
set(_nebula_tests_CONFIG_INCLUDED TRUE)

# output package information
if(NOT nebula_tests_FIND_QUIETLY)
  message(STATUS "Found nebula_tests: 0.1.0 (${nebula_tests_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'nebula_tests' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${nebula_tests_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(nebula_tests_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${nebula_tests_DIR}/${_extra}")
endforeach()
