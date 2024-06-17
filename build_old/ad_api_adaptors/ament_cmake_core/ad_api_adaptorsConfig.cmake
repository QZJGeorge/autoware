# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ad_api_adaptors_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ad_api_adaptors_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ad_api_adaptors_FOUND FALSE)
  elseif(NOT ad_api_adaptors_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ad_api_adaptors_FOUND FALSE)
  endif()
  return()
endif()
set(_ad_api_adaptors_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ad_api_adaptors_FIND_QUIETLY)
  message(STATUS "Found ad_api_adaptors: 0.1.0 (${ad_api_adaptors_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ad_api_adaptors' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ad_api_adaptors_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ad_api_adaptors_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${ad_api_adaptors_DIR}/${_extra}")
endforeach()
