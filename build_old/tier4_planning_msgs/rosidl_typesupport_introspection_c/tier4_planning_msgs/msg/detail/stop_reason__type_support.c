// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_planning_msgs:msg/StopReason.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_planning_msgs/msg/detail/stop_reason__rosidl_typesupport_introspection_c.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_planning_msgs/msg/detail/stop_reason__functions.h"
#include "tier4_planning_msgs/msg/detail/stop_reason__struct.h"


// Include directives for member types
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `stop_factors`
#include "tier4_planning_msgs/msg/stop_factor.h"
// Member `stop_factors`
#include "tier4_planning_msgs/msg/detail/stop_factor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__msg__StopReason__init(message_memory);
}

void tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_fini_function(void * message_memory)
{
  tier4_planning_msgs__msg__StopReason__fini(message_memory);
}

size_t tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__size_function__StopReason__stop_factors(
  const void * untyped_member)
{
  const tier4_planning_msgs__msg__StopFactor__Sequence * member =
    (const tier4_planning_msgs__msg__StopFactor__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__get_const_function__StopReason__stop_factors(
  const void * untyped_member, size_t index)
{
  const tier4_planning_msgs__msg__StopFactor__Sequence * member =
    (const tier4_planning_msgs__msg__StopFactor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__get_function__StopReason__stop_factors(
  void * untyped_member, size_t index)
{
  tier4_planning_msgs__msg__StopFactor__Sequence * member =
    (tier4_planning_msgs__msg__StopFactor__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__fetch_function__StopReason__stop_factors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_planning_msgs__msg__StopFactor * item =
    ((const tier4_planning_msgs__msg__StopFactor *)
    tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__get_const_function__StopReason__stop_factors(untyped_member, index));
  tier4_planning_msgs__msg__StopFactor * value =
    (tier4_planning_msgs__msg__StopFactor *)(untyped_value);
  *value = *item;
}

void tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__assign_function__StopReason__stop_factors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_planning_msgs__msg__StopFactor * item =
    ((tier4_planning_msgs__msg__StopFactor *)
    tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__get_function__StopReason__stop_factors(untyped_member, index));
  const tier4_planning_msgs__msg__StopFactor * value =
    (const tier4_planning_msgs__msg__StopFactor *)(untyped_value);
  *item = *value;
}

bool tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__resize_function__StopReason__stop_factors(
  void * untyped_member, size_t size)
{
  tier4_planning_msgs__msg__StopFactor__Sequence * member =
    (tier4_planning_msgs__msg__StopFactor__Sequence *)(untyped_member);
  tier4_planning_msgs__msg__StopFactor__Sequence__fini(member);
  return tier4_planning_msgs__msg__StopFactor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_message_member_array[2] = {
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__StopReason, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_factors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__StopReason, stop_factors),  // bytes offset in struct
    NULL,  // default value
    tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__size_function__StopReason__stop_factors,  // size() function pointer
    tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__get_const_function__StopReason__stop_factors,  // get_const(index) function pointer
    tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__get_function__StopReason__stop_factors,  // get(index) function pointer
    tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__fetch_function__StopReason__stop_factors,  // fetch(index, &value) function pointer
    tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__assign_function__StopReason__stop_factors,  // assign(index, value) function pointer
    tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__resize_function__StopReason__stop_factors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_message_members = {
  "tier4_planning_msgs__msg",  // message namespace
  "StopReason",  // message name
  2,  // number of fields
  sizeof(tier4_planning_msgs__msg__StopReason),
  tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_message_member_array,  // message members
  tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_message_type_support_handle = {
  0,
  &tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, StopReason)() {
  tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, StopFactor)();
  if (!tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_message_type_support_handle.typesupport_identifier) {
    tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_planning_msgs__msg__StopReason__rosidl_typesupport_introspection_c__StopReason_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
