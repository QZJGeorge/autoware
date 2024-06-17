// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_status__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_status__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_status__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `gear`
#include "autoware_adapi_v1_msgs/msg/gear.h"
// Member `gear`
#include "autoware_adapi_v1_msgs/msg/detail/gear__rosidl_typesupport_introspection_c.h"
// Member `turn_indicators`
#include "autoware_adapi_v1_msgs/msg/turn_indicators.h"
// Member `turn_indicators`
#include "autoware_adapi_v1_msgs/msg/detail/turn_indicators__rosidl_typesupport_introspection_c.h"
// Member `hazard_lights`
#include "autoware_adapi_v1_msgs/msg/hazard_lights.h"
// Member `hazard_lights`
#include "autoware_adapi_v1_msgs/msg/detail/hazard_lights__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__VehicleStatus__init(message_memory);
}

void autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__VehicleStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[6] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VehicleStatus, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VehicleStatus, gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_indicators",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VehicleStatus, turn_indicators),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hazard_lights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VehicleStatus, hazard_lights),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_tire_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VehicleStatus, steering_tire_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "energy_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__VehicleStatus, energy_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "VehicleStatus",  // message name
  6,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__VehicleStatus),
  autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array,  // message members
  autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle = {
  0,
  &autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, VehicleStatus)() {
  autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, Gear)();
  autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, TurnIndicators)();
  autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, HazardLights)();
  if (!autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle.typesupport_identifier) {
    autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_adapi_v1_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
