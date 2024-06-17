# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_simple_planning_simulator_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED simple_planning_simulator_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(simple_planning_simulator_FOUND FALSE)
  elseif(NOT simple_planning_simulator_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(simple_planning_simulator_FOUND FALSE)
  endif()
  return()
endif()
set(_simple_planning_simulator_CONFIG_INCLUDED TRUE)

# output package information
if(NOT simple_planning_simulator_FIND_QUIETLY)
  message(STATUS "Found simple_planning_simulator: 1.0.0 (${simple_planning_simulator_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'simple_planning_simulator' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${simple_planning_simulator_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(simple_planning_simulator_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${simple_planning_simulator_DIR}/${_extra}")
endforeach()
