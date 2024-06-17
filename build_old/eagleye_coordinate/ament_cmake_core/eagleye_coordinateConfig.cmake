# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_eagleye_coordinate_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED eagleye_coordinate_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(eagleye_coordinate_FOUND FALSE)
  elseif(NOT eagleye_coordinate_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(eagleye_coordinate_FOUND FALSE)
  endif()
  return()
endif()
set(_eagleye_coordinate_CONFIG_INCLUDED TRUE)

# output package information
if(NOT eagleye_coordinate_FIND_QUIETLY)
  message(STATUS "Found eagleye_coordinate: 0.0.0 (${eagleye_coordinate_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'eagleye_coordinate' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${eagleye_coordinate_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(eagleye_coordinate_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${eagleye_coordinate_DIR}/${_extra}")
endforeach()
