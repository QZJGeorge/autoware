# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_mcity_abc_realcar_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED mcity_abc_realcar_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(mcity_abc_realcar_FOUND FALSE)
  elseif(NOT mcity_abc_realcar_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(mcity_abc_realcar_FOUND FALSE)
  endif()
  return()
endif()
set(_mcity_abc_realcar_CONFIG_INCLUDED TRUE)

# output package information
if(NOT mcity_abc_realcar_FIND_QUIETLY)
  message(STATUS "Found mcity_abc_realcar: 0.1.0 (${mcity_abc_realcar_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'mcity_abc_realcar' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${mcity_abc_realcar_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(mcity_abc_realcar_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${mcity_abc_realcar_DIR}/${_extra}")
endforeach()
