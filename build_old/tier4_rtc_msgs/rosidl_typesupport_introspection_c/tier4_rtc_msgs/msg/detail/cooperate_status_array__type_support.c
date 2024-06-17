// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_rtc_msgs:msg/CooperateStatusArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_rtc_msgs/msg/detail/cooperate_status_array__rosidl_typesupport_introspection_c.h"
#include "tier4_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_status_array__functions.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_status_array__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `statuses`
#include "tier4_rtc_msgs/msg/cooperate_status.h"
// Member `statuses`
#include "tier4_rtc_msgs/msg/detail/cooperate_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_rtc_msgs__msg__CooperateStatusArray__init(message_memory);
}

void tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_fini_function(void * message_memory)
{
  tier4_rtc_msgs__msg__CooperateStatusArray__fini(message_memory);
}

size_t tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__size_function__CooperateStatusArray__statuses(
  const void * untyped_member)
{
  const tier4_rtc_msgs__msg__CooperateStatus__Sequence * member =
    (const tier4_rtc_msgs__msg__CooperateStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__get_const_function__CooperateStatusArray__statuses(
  const void * untyped_member, size_t index)
{
  const tier4_rtc_msgs__msg__CooperateStatus__Sequence * member =
    (const tier4_rtc_msgs__msg__CooperateStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__get_function__CooperateStatusArray__statuses(
  void * untyped_member, size_t index)
{
  tier4_rtc_msgs__msg__CooperateStatus__Sequence * member =
    (tier4_rtc_msgs__msg__CooperateStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__fetch_function__CooperateStatusArray__statuses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_rtc_msgs__msg__CooperateStatus * item =
    ((const tier4_rtc_msgs__msg__CooperateStatus *)
    tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__get_const_function__CooperateStatusArray__statuses(untyped_member, index));
  tier4_rtc_msgs__msg__CooperateStatus * value =
    (tier4_rtc_msgs__msg__CooperateStatus *)(untyped_value);
  *value = *item;
}

void tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__assign_function__CooperateStatusArray__statuses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_rtc_msgs__msg__CooperateStatus * item =
    ((tier4_rtc_msgs__msg__CooperateStatus *)
    tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__get_function__CooperateStatusArray__statuses(untyped_member, index));
  const tier4_rtc_msgs__msg__CooperateStatus * value =
    (const tier4_rtc_msgs__msg__CooperateStatus *)(untyped_value);
  *item = *value;
}

bool tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__resize_function__CooperateStatusArray__statuses(
  void * untyped_member, size_t size)
{
  tier4_rtc_msgs__msg__CooperateStatus__Sequence * member =
    (tier4_rtc_msgs__msg__CooperateStatus__Sequence *)(untyped_member);
  tier4_rtc_msgs__msg__CooperateStatus__Sequence__fini(member);
  return tier4_rtc_msgs__msg__CooperateStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateStatusArray, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "statuses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateStatusArray, statuses),  // bytes offset in struct
    NULL,  // default value
    tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__size_function__CooperateStatusArray__statuses,  // size() function pointer
    tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__get_const_function__CooperateStatusArray__statuses,  // get_const(index) function pointer
    tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__get_function__CooperateStatusArray__statuses,  // get(index) function pointer
    tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__fetch_function__CooperateStatusArray__statuses,  // fetch(index, &value) function pointer
    tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__assign_function__CooperateStatusArray__statuses,  // assign(index, value) function pointer
    tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__resize_function__CooperateStatusArray__statuses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_message_members = {
  "tier4_rtc_msgs__msg",  // message namespace
  "CooperateStatusArray",  // message name
  2,  // number of fields
  sizeof(tier4_rtc_msgs__msg__CooperateStatusArray),
  tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_message_member_array,  // message members
  tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_message_type_support_handle = {
  0,
  &tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_rtc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, msg, CooperateStatusArray)() {
  tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, msg, CooperateStatus)();
  if (!tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_message_type_support_handle.typesupport_identifier) {
    tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_rtc_msgs__msg__CooperateStatusArray__rosidl_typesupport_introspection_c__CooperateStatusArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
