// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_v2x_msgs/msg/detail/infrastructure_command__rosidl_typesupport_introspection_c.h"
#include "tier4_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_v2x_msgs/msg/detail/infrastructure_command__functions.h"
#include "tier4_v2x_msgs/msg/detail/infrastructure_command__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `type`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `custom_tags`
#include "tier4_v2x_msgs/msg/key_value.h"
// Member `custom_tags`
#include "tier4_v2x_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_v2x_msgs__msg__InfrastructureCommand__init(message_memory);
}

void tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_fini_function(void * message_memory)
{
  tier4_v2x_msgs__msg__InfrastructureCommand__fini(message_memory);
}

size_t tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__size_function__InfrastructureCommand__custom_tags(
  const void * untyped_member)
{
  const tier4_v2x_msgs__msg__KeyValue__Sequence * member =
    (const tier4_v2x_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__get_const_function__InfrastructureCommand__custom_tags(
  const void * untyped_member, size_t index)
{
  const tier4_v2x_msgs__msg__KeyValue__Sequence * member =
    (const tier4_v2x_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__get_function__InfrastructureCommand__custom_tags(
  void * untyped_member, size_t index)
{
  tier4_v2x_msgs__msg__KeyValue__Sequence * member =
    (tier4_v2x_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__fetch_function__InfrastructureCommand__custom_tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_v2x_msgs__msg__KeyValue * item =
    ((const tier4_v2x_msgs__msg__KeyValue *)
    tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__get_const_function__InfrastructureCommand__custom_tags(untyped_member, index));
  tier4_v2x_msgs__msg__KeyValue * value =
    (tier4_v2x_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__assign_function__InfrastructureCommand__custom_tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_v2x_msgs__msg__KeyValue * item =
    ((tier4_v2x_msgs__msg__KeyValue *)
    tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__get_function__InfrastructureCommand__custom_tags(untyped_member, index));
  const tier4_v2x_msgs__msg__KeyValue * value =
    (const tier4_v2x_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__resize_function__InfrastructureCommand__custom_tags(
  void * untyped_member, size_t size)
{
  tier4_v2x_msgs__msg__KeyValue__Sequence * member =
    (tier4_v2x_msgs__msg__KeyValue__Sequence *)(untyped_member);
  tier4_v2x_msgs__msg__KeyValue__Sequence__fini(member);
  return tier4_v2x_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_message_member_array[5] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__InfrastructureCommand, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__InfrastructureCommand, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__InfrastructureCommand, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "custom_tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__InfrastructureCommand, custom_tags),  // bytes offset in struct
    NULL,  // default value
    tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__size_function__InfrastructureCommand__custom_tags,  // size() function pointer
    tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__get_const_function__InfrastructureCommand__custom_tags,  // get_const(index) function pointer
    tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__get_function__InfrastructureCommand__custom_tags,  // get(index) function pointer
    tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__fetch_function__InfrastructureCommand__custom_tags,  // fetch(index, &value) function pointer
    tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__assign_function__InfrastructureCommand__custom_tags,  // assign(index, value) function pointer
    tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__resize_function__InfrastructureCommand__custom_tags  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__InfrastructureCommand, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_message_members = {
  "tier4_v2x_msgs__msg",  // message namespace
  "InfrastructureCommand",  // message name
  5,  // number of fields
  sizeof(tier4_v2x_msgs__msg__InfrastructureCommand),
  tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_message_member_array,  // message members
  tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_message_type_support_handle = {
  0,
  &tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_v2x_msgs, msg, InfrastructureCommand)() {
  tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_v2x_msgs, msg, KeyValue)();
  if (!tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_message_type_support_handle.typesupport_identifier) {
    tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_v2x_msgs__msg__InfrastructureCommand__rosidl_typesupport_introspection_c__InfrastructureCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
