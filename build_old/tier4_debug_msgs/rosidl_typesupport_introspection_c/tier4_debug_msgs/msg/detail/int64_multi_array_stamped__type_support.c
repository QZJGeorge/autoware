// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_debug_msgs:msg/Int64MultiArrayStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_debug_msgs/msg/detail/int64_multi_array_stamped__rosidl_typesupport_introspection_c.h"
#include "tier4_debug_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_debug_msgs/msg/detail/int64_multi_array_stamped__functions.h"
#include "tier4_debug_msgs/msg/detail/int64_multi_array_stamped__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `layout`
#include "tier4_debug_msgs/msg/multi_array_layout.h"
// Member `layout`
#include "tier4_debug_msgs/msg/detail/multi_array_layout__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_debug_msgs__msg__Int64MultiArrayStamped__init(message_memory);
}

void tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_fini_function(void * message_memory)
{
  tier4_debug_msgs__msg__Int64MultiArrayStamped__fini(message_memory);
}

size_t tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__size_function__Int64MultiArrayStamped__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__get_const_function__Int64MultiArrayStamped__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__get_function__Int64MultiArrayStamped__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__fetch_function__Int64MultiArrayStamped__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__get_const_function__Int64MultiArrayStamped__data(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__assign_function__Int64MultiArrayStamped__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__get_function__Int64MultiArrayStamped__data(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__resize_function__Int64MultiArrayStamped__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_debug_msgs__msg__Int64MultiArrayStamped, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_debug_msgs__msg__Int64MultiArrayStamped, layout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_debug_msgs__msg__Int64MultiArrayStamped, data),  // bytes offset in struct
    NULL,  // default value
    tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__size_function__Int64MultiArrayStamped__data,  // size() function pointer
    tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__get_const_function__Int64MultiArrayStamped__data,  // get_const(index) function pointer
    tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__get_function__Int64MultiArrayStamped__data,  // get(index) function pointer
    tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__fetch_function__Int64MultiArrayStamped__data,  // fetch(index, &value) function pointer
    tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__assign_function__Int64MultiArrayStamped__data,  // assign(index, value) function pointer
    tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__resize_function__Int64MultiArrayStamped__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_message_members = {
  "tier4_debug_msgs__msg",  // message namespace
  "Int64MultiArrayStamped",  // message name
  3,  // number of fields
  sizeof(tier4_debug_msgs__msg__Int64MultiArrayStamped),
  tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_message_member_array,  // message members
  tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_message_type_support_handle = {
  0,
  &tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_debug_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_debug_msgs, msg, Int64MultiArrayStamped)() {
  tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_debug_msgs, msg, MultiArrayLayout)();
  if (!tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_message_type_support_handle.typesupport_identifier) {
    tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_debug_msgs__msg__Int64MultiArrayStamped__rosidl_typesupport_introspection_c__Int64MultiArrayStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
