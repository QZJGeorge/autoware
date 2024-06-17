// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_api_msgs:msg/LaneChangeStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_api_msgs/msg/detail/lane_change_status__rosidl_typesupport_introspection_c.h"
#include "tier4_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_api_msgs/msg/detail/lane_change_status__functions.h"
#include "tier4_api_msgs/msg/detail/lane_change_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `candidate_path`
#include "tier4_planning_msgs/msg/path.h"
// Member `candidate_path`
#include "tier4_planning_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_api_msgs__msg__LaneChangeStatus__init(message_memory);
}

void tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_fini_function(void * message_memory)
{
  tier4_api_msgs__msg__LaneChangeStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__LaneChangeStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force_lane_change_available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__LaneChangeStatus, force_lane_change_available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_change_ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs__msg__LaneChangeStatus, lane_change_ready),  // bytes offset in struct
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
    offsetof(tier4_api_msgs__msg__LaneChangeStatus, candidate_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_members = {
  "tier4_api_msgs__msg",  // message namespace
  "LaneChangeStatus",  // message name
  4,  // number of fields
  sizeof(tier4_api_msgs__msg__LaneChangeStatus),
  tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_member_array,  // message members
  tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_type_support_handle = {
  0,
  &tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_api_msgs, msg, LaneChangeStatus)() {
  tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, Path)();
  if (!tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_type_support_handle.typesupport_identifier) {
    tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_api_msgs__msg__LaneChangeStatus__rosidl_typesupport_introspection_c__LaneChangeStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
