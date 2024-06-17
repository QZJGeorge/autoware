// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_planning_msgs:msg/VelocityLimitConstraints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__rosidl_typesupport_introspection_c.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__functions.h"
#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__msg__VelocityLimitConstraints__init(message_memory);
}

void tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_fini_function(void * message_memory)
{
  tier4_planning_msgs__msg__VelocityLimitConstraints__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_message_member_array[3] = {
  {
    "min_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__VelocityLimitConstraints, min_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__VelocityLimitConstraints, max_jerk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__VelocityLimitConstraints, min_jerk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_message_members = {
  "tier4_planning_msgs__msg",  // message namespace
  "VelocityLimitConstraints",  // message name
  3,  // number of fields
  sizeof(tier4_planning_msgs__msg__VelocityLimitConstraints),
  tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_message_member_array,  // message members
  tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_message_type_support_handle = {
  0,
  &tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, VelocityLimitConstraints)() {
  if (!tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_message_type_support_handle.typesupport_identifier) {
    tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_planning_msgs__msg__VelocityLimitConstraints__rosidl_typesupport_introspection_c__VelocityLimitConstraints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
