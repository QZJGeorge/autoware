# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_landmark_tf_caster_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED landmark_tf_caster_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(landmark_tf_caster_FOUND FALSE)
  elseif(NOT landmark_tf_caster_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(landmark_tf_caster_FOUND FALSE)
  endif()
  return()
endif()
set(_landmark_tf_caster_CONFIG_INCLUDED TRUE)

# output package information
if(NOT landmark_tf_caster_FIND_QUIETLY)
  message(STATUS "Found landmark_tf_caster: 0.0.0 (${landmark_tf_caster_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'landmark_tf_caster' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${landmark_tf_caster_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(landmark_tf_caster_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${landmark_tf_caster_DIR}/${_extra}")
endforeach()
