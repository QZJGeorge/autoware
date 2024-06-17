#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "yabloc_particle_filter::yabloc_particle_filter__rosidl_typesupport_cpp" for configuration "Release"
set_property(TARGET yabloc_particle_filter::yabloc_particle_filter__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(yabloc_particle_filter::yabloc_particle_filter__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "rosidl_runtime_c::rosidl_runtime_c;rosidl_typesupport_cpp::rosidl_typesupport_cpp;rosidl_typesupport_c::rosidl_typesupport_c"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libyabloc_particle_filter__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_RELEASE "libyabloc_particle_filter__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS yabloc_particle_filter::yabloc_particle_filter__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_yabloc_particle_filter::yabloc_particle_filter__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libyabloc_particle_filter__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
