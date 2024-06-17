# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:vehicle_cmd_gate__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:vehicle_cmd_gate__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:vehicle_cmd_gate__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:vehicle_cmd_gate__rosidl_typesupport_c;__rosidl_generator_cpp:vehicle_cmd_gate__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:vehicle_cmd_gate__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:vehicle_cmd_gate__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:vehicle_cmd_gate__rosidl_typesupport_cpp;__rosidl_generator_py:vehicle_cmd_gate__rosidl_generator_py")

# populate vehicle_cmd_gate_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "vehicle_cmd_gate::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'vehicle_cmd_gate' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND vehicle_cmd_gate_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
