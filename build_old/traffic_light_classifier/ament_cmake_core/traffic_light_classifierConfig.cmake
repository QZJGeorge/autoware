# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_traffic_light_classifier_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED traffic_light_classifier_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(traffic_light_classifier_FOUND FALSE)
  elseif(NOT traffic_light_classifier_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(traffic_light_classifier_FOUND FALSE)
  endif()
  return()
endif()
set(_traffic_light_classifier_CONFIG_INCLUDED TRUE)

# output package information
if(NOT traffic_light_classifier_FIND_QUIETLY)
  message(STATUS "Found traffic_light_classifier: 0.1.0 (${traffic_light_classifier_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'traffic_light_classifier' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${traffic_light_classifier_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(traffic_light_classifier_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${traffic_light_classifier_DIR}/${_extra}")
endforeach()
