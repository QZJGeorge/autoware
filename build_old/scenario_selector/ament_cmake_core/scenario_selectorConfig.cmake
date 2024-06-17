# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_scenario_selector_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED scenario_selector_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(scenario_selector_FOUND FALSE)
  elseif(NOT scenario_selector_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(scenario_selector_FOUND FALSE)
  endif()
  return()
endif()
set(_scenario_selector_CONFIG_INCLUDED TRUE)

# output package information
if(NOT scenario_selector_FIND_QUIETLY)
  message(STATUS "Found scenario_selector: 0.1.0 (${scenario_selector_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'scenario_selector' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${scenario_selector_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(scenario_selector_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${scenario_selector_DIR}/${_extra}")
endforeach()
