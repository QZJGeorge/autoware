// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/vehicle_status__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/vehicle_status__functions.h"
#include "tier4_external_api_msgs/msg/detail/vehicle_status__struct.h"


// Include directives for member types
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `steering`
#include "tier4_external_api_msgs/msg/steering.h"
// Member `steering`
#include "tier4_external_api_msgs/msg/detail/steering__rosidl_typesupport_introspection_c.h"
// Member `turn_signal`
#include "tier4_external_api_msgs/msg/turn_signal.h"
// Member `turn_signal`
#include "tier4_external_api_msgs/msg/detail/turn_signal__rosidl_typesupport_introspection_c.h"
// Member `gear_shift`
#include "tier4_external_api_msgs/msg/gear_shift.h"
// Member `gear_shift`
#include "tier4_external_api_msgs/msg/detail/gear_shift__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__VehicleStatus__init(message_memory);
}

void tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__VehicleStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[4] = {
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__VehicleStatus, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__VehicleStatus, steering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_signal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__VehicleStatus, turn_signal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gear_shift",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__VehicleStatus, gear_shift),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "VehicleStatus",  // message name
  4,  // number of fields
  sizeof(tier4_external_api_msgs__msg__VehicleStatus),
  tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array,  // message members
  tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle = {
  0,
  &tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, VehicleStatus)() {
  tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, Steering)();
  tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, TurnSignal)();
  tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, GearShift)();
  if (!tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle.typesupport_identifier) {
    tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_external_api_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
