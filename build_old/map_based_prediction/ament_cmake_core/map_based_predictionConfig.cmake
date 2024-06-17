# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_map_based_prediction_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED map_based_prediction_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(map_based_prediction_FOUND FALSE)
  elseif(NOT map_based_prediction_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(map_based_prediction_FOUND FALSE)
  endif()
  return()
endif()
set(_map_based_prediction_CONFIG_INCLUDED TRUE)

# output package information
if(NOT map_based_prediction_FIND_QUIETLY)
  message(STATUS "Found map_based_prediction: 0.1.0 (${map_based_prediction_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'map_based_prediction' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${map_based_prediction_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(map_based_prediction_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${map_based_prediction_DIR}/${_extra}")
endforeach()
