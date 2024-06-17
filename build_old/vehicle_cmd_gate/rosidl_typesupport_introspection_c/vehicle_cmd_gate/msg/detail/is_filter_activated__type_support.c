// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vehicle_cmd_gate:msg/IsFilterActivated.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vehicle_cmd_gate/msg/detail/is_filter_activated__rosidl_typesupport_introspection_c.h"
#include "vehicle_cmd_gate/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vehicle_cmd_gate/msg/detail/is_filter_activated__functions.h"
#include "vehicle_cmd_gate/msg/detail/is_filter_activated__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vehicle_cmd_gate__msg__IsFilterActivated__init(message_memory);
}

void vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_fini_function(void * message_memory)
{
  vehicle_cmd_gate__msg__IsFilterActivated__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_message_member_array[7] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vehicle_cmd_gate__msg__IsFilterActivated, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_activated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vehicle_cmd_gate__msg__IsFilterActivated, is_activated),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_activated_on_steering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vehicle_cmd_gate__msg__IsFilterActivated, is_activated_on_steering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_activated_on_steering_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vehicle_cmd_gate__msg__IsFilterActivated, is_activated_on_steering_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_activated_on_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vehicle_cmd_gate__msg__IsFilterActivated, is_activated_on_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_activated_on_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vehicle_cmd_gate__msg__IsFilterActivated, is_activated_on_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_activated_on_jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vehicle_cmd_gate__msg__IsFilterActivated, is_activated_on_jerk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_message_members = {
  "vehicle_cmd_gate__msg",  // message namespace
  "IsFilterActivated",  // message name
  7,  // number of fields
  sizeof(vehicle_cmd_gate__msg__IsFilterActivated),
  vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_message_member_array,  // message members
  vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_init_function,  // function to initialize message memory (memory has to be allocated)
  vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_message_type_support_handle = {
  0,
  &vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vehicle_cmd_gate
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vehicle_cmd_gate, msg, IsFilterActivated)() {
  vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_message_type_support_handle.typesupport_identifier) {
    vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vehicle_cmd_gate__msg__IsFilterActivated__rosidl_typesupport_introspection_c__IsFilterActivated_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
