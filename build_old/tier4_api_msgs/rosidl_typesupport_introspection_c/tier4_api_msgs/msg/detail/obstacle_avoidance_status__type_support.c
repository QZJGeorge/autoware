// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_api_msgs:msg/ObstacleAvoidanceStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_api_msgs/msg/detail/obstacle_avoidance_status__rosidl_typesupport_introspection_c.h"
#include "tier4_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_api_msgs/msg/detail/obstacle_avoidance_status__functions.h"
#include "tier4_api_msgs/msg/detail/obstacle_avoidance_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `candidate_path`
#include "tier4_planning_msgs/msg/trajectory.h"
// Member `candidate_path`
#include "tier4_planning_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_api_msgs__msg__ObstacleAvoidanceStatus__init(message_memory);
}

void tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_fini_function(void * message_memory)
{
  tier4_api_msgs__msg__ObstacleAvoidanceStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__ObstacleAvoidanceStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obstacle_avoidance_ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__ObstacleAvoidanceStatus, obstacle_avoidance_ready),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "candidate_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__ObstacleAvoidanceStatus, candidate_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_message_members = {
  "tier4_api_msgs__msg",  // message namespace
  "ObstacleAvoidanceStatus",  // message name
  3,  // number of fields
  sizeof(tier4_api_msgs__msg__ObstacleAvoidanceStatus),
  tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_message_member_array,  // message members
  tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_message_type_support_handle = {
  0,
  &tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_api_msgs, msg, ObstacleAvoidanceStatus)() {
  tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, Trajectory)();
  if (!tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_message_type_support_handle.typesupport_identifier) {
    tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_api_msgs__msg__ObstacleAvoidanceStatus__rosidl_typesupport_introspection_c__ObstacleAvoidanceStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
