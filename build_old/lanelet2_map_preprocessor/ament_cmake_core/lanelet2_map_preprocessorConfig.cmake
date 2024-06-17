# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_lanelet2_map_preprocessor_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED lanelet2_map_preprocessor_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(lanelet2_map_preprocessor_FOUND FALSE)
  elseif(NOT lanelet2_map_preprocessor_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(lanelet2_map_preprocessor_FOUND FALSE)
  endif()
  return()
endif()
set(_lanelet2_map_preprocessor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT lanelet2_map_preprocessor_FIND_QUIETLY)
  message(STATUS "Found lanelet2_map_preprocessor: 0.1.0 (${lanelet2_map_preprocessor_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'lanelet2_map_preprocessor' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${lanelet2_map_preprocessor_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(lanelet2_map_preprocessor_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${lanelet2_map_preprocessor_DIR}/${_extra}")
endforeach()
