# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_detected_object_feature_remover_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED detected_object_feature_remover_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(detected_object_feature_remover_FOUND FALSE)
  elseif(NOT detected_object_feature_remover_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(detected_object_feature_remover_FOUND FALSE)
  endif()
  return()
endif()
set(_detected_object_feature_remover_CONFIG_INCLUDED TRUE)

# output package information
if(NOT detected_object_feature_remover_FIND_QUIETLY)
  message(STATUS "Found detected_object_feature_remover: 0.1.0 (${detected_object_feature_remover_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'detected_object_feature_remover' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${detected_object_feature_remover_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(detected_object_feature_remover_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${detected_object_feature_remover_DIR}/${_extra}")
endforeach()
