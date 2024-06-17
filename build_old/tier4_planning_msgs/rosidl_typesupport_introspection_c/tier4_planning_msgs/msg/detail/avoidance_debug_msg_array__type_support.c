// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsgArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg_array__rosidl_typesupport_introspection_c.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg_array__functions.h"
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `avoidance_info`
#include "tier4_planning_msgs/msg/avoidance_debug_msg.h"
// Member `avoidance_info`
#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__msg__AvoidanceDebugMsgArray__init(message_memory);
}

void tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_fini_function(void * message_memory)
{
  tier4_planning_msgs__msg__AvoidanceDebugMsgArray__fini(message_memory);
}

size_t tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__size_function__AvoidanceDebugMsgArray__avoidance_info(
  const void * untyped_member)
{
  const tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * member =
    (const tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__get_const_function__AvoidanceDebugMsgArray__avoidance_info(
  const void * untyped_member, size_t index)
{
  const tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * member =
    (const tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__get_function__AvoidanceDebugMsgArray__avoidance_info(
  void * untyped_member, size_t index)
{
  tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * member =
    (tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__fetch_function__AvoidanceDebugMsgArray__avoidance_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_planning_msgs__msg__AvoidanceDebugMsg * item =
    ((const tier4_planning_msgs__msg__AvoidanceDebugMsg *)
    tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__get_const_function__AvoidanceDebugMsgArray__avoidance_info(untyped_member, index));
  tier4_planning_msgs__msg__AvoidanceDebugMsg * value =
    (tier4_planning_msgs__msg__AvoidanceDebugMsg *)(untyped_value);
  *value = *item;
}

void tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__assign_function__AvoidanceDebugMsgArray__avoidance_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_planning_msgs__msg__AvoidanceDebugMsg * item =
    ((tier4_planning_msgs__msg__AvoidanceDebugMsg *)
    tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__get_function__AvoidanceDebugMsgArray__avoidance_info(untyped_member, index));
  const tier4_planning_msgs__msg__AvoidanceDebugMsg * value =
    (const tier4_planning_msgs__msg__AvoidanceDebugMsg *)(untyped_value);
  *item = *value;
}

bool tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__resize_function__AvoidanceDebugMsgArray__avoidance_info(
  void * untyped_member, size_t size)
{
  tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence * member =
    (tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence *)(untyped_member);
  tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__fini(member);
  return tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__AvoidanceDebugMsgArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avoidance_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__AvoidanceDebugMsgArray, avoidance_info),  // bytes offset in struct
    NULL,  // default value
    tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__size_function__AvoidanceDebugMsgArray__avoidance_info,  // size() function pointer
    tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__get_const_function__AvoidanceDebugMsgArray__avoidance_info,  // get_const(index) function pointer
    tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__get_function__AvoidanceDebugMsgArray__avoidance_info,  // get(index) function pointer
    tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__fetch_function__AvoidanceDebugMsgArray__avoidance_info,  // fetch(index, &value) function pointer
    tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__assign_function__AvoidanceDebugMsgArray__avoidance_info,  // assign(index, value) function pointer
    tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__resize_function__AvoidanceDebugMsgArray__avoidance_info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_message_members = {
  "tier4_planning_msgs__msg",  // message namespace
  "AvoidanceDebugMsgArray",  // message name
  2,  // number of fields
  sizeof(tier4_planning_msgs__msg__AvoidanceDebugMsgArray),
  tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_message_member_array,  // message members
  tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_message_type_support_handle = {
  0,
  &tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, AvoidanceDebugMsgArray)() {
  tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, AvoidanceDebugMsg)();
  if (!tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_message_type_support_handle.typesupport_identifier) {
    tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_planning_msgs__msg__AvoidanceDebugMsgArray__rosidl_typesupport_introspection_c__AvoidanceDebugMsgArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
