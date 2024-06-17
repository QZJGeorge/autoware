# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_nebula_decoders_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED nebula_decoders_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(nebula_decoders_FOUND FALSE)
  elseif(NOT nebula_decoders_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(nebula_decoders_FOUND FALSE)
  endif()
  return()
endif()
set(_nebula_decoders_CONFIG_INCLUDED TRUE)

# output package information
if(NOT nebula_decoders_FIND_QUIETLY)
  message(STATUS "Found nebula_decoders: 0.1.0 (${nebula_decoders_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'nebula_decoders' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${nebula_decoders_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(nebula_decoders_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${nebula_decoders_DIR}/${_extra}")
endforeach()
