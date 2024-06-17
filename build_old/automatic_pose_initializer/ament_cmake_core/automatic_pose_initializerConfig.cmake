# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_automatic_pose_initializer_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED automatic_pose_initializer_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(automatic_pose_initializer_FOUND FALSE)
  elseif(NOT automatic_pose_initializer_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(automatic_pose_initializer_FOUND FALSE)
  endif()
  return()
endif()
set(_automatic_pose_initializer_CONFIG_INCLUDED TRUE)

# output package information
if(NOT automatic_pose_initializer_FIND_QUIETLY)
  message(STATUS "Found automatic_pose_initializer: 0.1.0 (${automatic_pose_initializer_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'automatic_pose_initializer' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${automatic_pose_initializer_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(automatic_pose_initializer_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${automatic_pose_initializer_DIR}/${_extra}")
endforeach()
