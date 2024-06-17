#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vehicle_cmd_gate::vehicle_cmd_gate__rosidl_generator_py" for configuration "Release"
set_property(TARGET vehicle_cmd_gate::vehicle_cmd_gate__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vehicle_cmd_gate::vehicle_cmd_gate__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libvehicle_cmd_gate__rosidl_generator_py.so"
  IMPORTED_SONAME_RELEASE "libvehicle_cmd_gate__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS vehicle_cmd_gate::vehicle_cmd_gate__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_vehicle_cmd_gate::vehicle_cmd_gate__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libvehicle_cmd_gate__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
