# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rtc_interface_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rtc_interface_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rtc_interface_FOUND FALSE)
  elseif(NOT rtc_interface_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rtc_interface_FOUND FALSE)
  endif()
  return()
endif()
set(_rtc_interface_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rtc_interface_FIND_QUIETLY)
  message(STATUS "Found rtc_interface: 0.1.0 (${rtc_interface_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rtc_interface' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rtc_interface_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rtc_interface_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rtc_interface_DIR}/${_extra}")
endforeach()
