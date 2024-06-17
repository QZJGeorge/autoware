// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/VehicleSpec.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/vehicle_spec__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/vehicle_spec__functions.h"
#include "morai_msgs/msg/detail/vehicle_spec__struct.h"


// Include directives for member types
// Member `size`
#include "geometry_msgs/msg/vector3.h"
// Member `size`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__VehicleSpec__init(message_memory);
}

void morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_fini_function(void * message_memory)
{
  morai_msgs__msg__VehicleSpec__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_message_member_array[5] = {
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__VehicleSpec, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheel_base",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__VehicleSpec, wheel_base),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_steering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__VehicleSpec, max_steering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "overhang",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__VehicleSpec, overhang),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_overhang",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__VehicleSpec, rear_overhang),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_message_members = {
  "morai_msgs__msg",  // message namespace
  "VehicleSpec",  // message name
  5,  // number of fields
  sizeof(morai_msgs__msg__VehicleSpec),
  morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_message_member_array,  // message members
  morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_init_function,  // function to initialize message memory (memory has to be allocated)
  morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_message_type_support_handle = {
  0,
  &morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, VehicleSpec)() {
  morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_message_type_support_handle.typesupport_identifier) {
    morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &morai_msgs__msg__VehicleSpec__rosidl_typesupport_introspection_c__VehicleSpec_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
