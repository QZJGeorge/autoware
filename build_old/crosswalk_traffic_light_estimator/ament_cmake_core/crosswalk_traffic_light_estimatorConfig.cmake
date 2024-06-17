# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_crosswalk_traffic_light_estimator_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED crosswalk_traffic_light_estimator_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(crosswalk_traffic_light_estimator_FOUND FALSE)
  elseif(NOT crosswalk_traffic_light_estimator_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(crosswalk_traffic_light_estimator_FOUND FALSE)
  endif()
  return()
endif()
set(_crosswalk_traffic_light_estimator_CONFIG_INCLUDED TRUE)

# output package information
if(NOT crosswalk_traffic_light_estimator_FIND_QUIETLY)
  message(STATUS "Found crosswalk_traffic_light_estimator: 0.1.0 (${crosswalk_traffic_light_estimator_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'crosswalk_traffic_light_estimator' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${crosswalk_traffic_light_estimator_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(crosswalk_traffic_light_estimator_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${crosswalk_traffic_light_estimator_DIR}/${_extra}")
endforeach()
