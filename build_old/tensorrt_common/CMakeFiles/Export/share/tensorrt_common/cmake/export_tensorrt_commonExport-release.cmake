#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tensorrt_common::tensorrt_common" for configuration "Release"
set_property(TARGET tensorrt_common::tensorrt_common APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tensorrt_common::tensorrt_common PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtensorrt_common.so"
  IMPORTED_SONAME_RELEASE "libtensorrt_common.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tensorrt_common::tensorrt_common )
list(APPEND _IMPORT_CHECK_FILES_FOR_tensorrt_common::tensorrt_common "${_IMPORT_PREFIX}/lib/libtensorrt_common.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
