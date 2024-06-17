# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_shift_decider_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED shift_decider_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(shift_decider_FOUND FALSE)
  elseif(NOT shift_decider_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(shift_decider_FOUND FALSE)
  endif()
  return()
endif()
set(_shift_decider_CONFIG_INCLUDED TRUE)

# output package information
if(NOT shift_decider_FIND_QUIETLY)
  message(STATUS "Found shift_decider: 0.1.0 (${shift_decider_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'shift_decider' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${shift_decider_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(shift_decider_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${shift_decider_DIR}/${_extra}")
endforeach()
