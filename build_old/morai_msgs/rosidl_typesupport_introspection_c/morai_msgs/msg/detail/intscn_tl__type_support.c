// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/IntscnTL.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/intscn_tl__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/intscn_tl__functions.h"
#include "morai_msgs/msg/detail/intscn_tl__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `idx`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
// Member `delta_time`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__IntscnTL__init(message_memory);
}

void morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_fini_function(void * message_memory)
{
  morai_msgs__msg__IntscnTL__fini(message_memory);
}

size_t morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__size_function__IntscnTL__idx(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_const_function__IntscnTL__idx(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_function__IntscnTL__idx(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__fetch_function__IntscnTL__idx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_const_function__IntscnTL__idx(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__assign_function__IntscnTL__idx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_function__IntscnTL__idx(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__resize_function__IntscnTL__idx(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__size_function__IntscnTL__state(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_const_function__IntscnTL__state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_function__IntscnTL__state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__fetch_function__IntscnTL__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_const_function__IntscnTL__state(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__assign_function__IntscnTL__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_function__IntscnTL__state(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__resize_function__IntscnTL__state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__size_function__IntscnTL__delta_time(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_const_function__IntscnTL__delta_time(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_function__IntscnTL__delta_time(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__fetch_function__IntscnTL__delta_time(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_const_function__IntscnTL__delta_time(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__assign_function__IntscnTL__delta_time(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_function__IntscnTL__delta_time(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__resize_function__IntscnTL__delta_time(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__IntscnTL, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__IntscnTL, idx),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__size_function__IntscnTL__idx,  // size() function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_const_function__IntscnTL__idx,  // get_const(index) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_function__IntscnTL__idx,  // get(index) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__fetch_function__IntscnTL__idx,  // fetch(index, &value) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__assign_function__IntscnTL__idx,  // assign(index, value) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__resize_function__IntscnTL__idx  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__IntscnTL, state),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__size_function__IntscnTL__state,  // size() function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_const_function__IntscnTL__state,  // get_const(index) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_function__IntscnTL__state,  // get(index) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__fetch_function__IntscnTL__state,  // fetch(index, &value) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__assign_function__IntscnTL__state,  // assign(index, value) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__resize_function__IntscnTL__state  // resize(index) function pointer
  },
  {
    "delta_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__IntscnTL, delta_time),  // bytes offset in struct
    NULL,  // default value
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__size_function__IntscnTL__delta_time,  // size() function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_const_function__IntscnTL__delta_time,  // get_const(index) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__get_function__IntscnTL__delta_time,  // get(index) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__fetch_function__IntscnTL__delta_time,  // fetch(index, &value) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__assign_function__IntscnTL__delta_time,  // assign(index, value) function pointer
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__resize_function__IntscnTL__delta_time  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_message_members = {
  "morai_msgs__msg",  // message namespace
  "IntscnTL",  // message name
  4,  // number of fields
  sizeof(morai_msgs__msg__IntscnTL),
  morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_message_member_array,  // message members
  morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_init_function,  // function to initialize message memory (memory has to be allocated)
  morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_message_type_support_handle = {
  0,
  &morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, IntscnTL)() {
  morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_message_type_support_handle.typesupport_identifier) {
    morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &morai_msgs__msg__IntscnTL__rosidl_typesupport_introspection_c__IntscnTL_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
