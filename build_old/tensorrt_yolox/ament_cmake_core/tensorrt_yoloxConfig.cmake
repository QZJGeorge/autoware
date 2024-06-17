# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tensorrt_yolox_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tensorrt_yolox_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tensorrt_yolox_FOUND FALSE)
  elseif(NOT tensorrt_yolox_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tensorrt_yolox_FOUND FALSE)
  endif()
  return()
endif()
set(_tensorrt_yolox_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tensorrt_yolox_FIND_QUIETLY)
  message(STATUS "Found tensorrt_yolox: 0.0.1 (${tensorrt_yolox_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tensorrt_yolox' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tensorrt_yolox_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tensorrt_yolox_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${tensorrt_yolox_DIR}/${_extra}")
endforeach()
