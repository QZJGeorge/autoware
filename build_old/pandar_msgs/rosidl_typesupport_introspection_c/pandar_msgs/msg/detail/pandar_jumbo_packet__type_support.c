// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pandar_msgs:msg/PandarJumboPacket.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pandar_msgs/msg/detail/pandar_jumbo_packet__rosidl_typesupport_introspection_c.h"
#include "pandar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pandar_msgs/msg/detail/pandar_jumbo_packet__functions.h"
#include "pandar_msgs/msg/detail/pandar_jumbo_packet__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pandar_msgs__msg__PandarJumboPacket__init(message_memory);
}

void pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_fini_function(void * message_memory)
{
  pandar_msgs__msg__PandarJumboPacket__fini(message_memory);
}

size_t pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__size_function__PandarJumboPacket__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__get_const_function__PandarJumboPacket__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__get_function__PandarJumboPacket__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__fetch_function__PandarJumboPacket__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__get_const_function__PandarJumboPacket__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__assign_function__PandarJumboPacket__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__get_function__PandarJumboPacket__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__resize_function__PandarJumboPacket__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pandar_msgs__msg__PandarJumboPacket, stamp),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pandar_msgs__msg__PandarJumboPacket, data),  // bytes offset in struct
    NULL,  // default value
    pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__size_function__PandarJumboPacket__data,  // size() function pointer
    pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__get_const_function__PandarJumboPacket__data,  // get_const(index) function pointer
    pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__get_function__PandarJumboPacket__data,  // get(index) function pointer
    pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__fetch_function__PandarJumboPacket__data,  // fetch(index, &value) function pointer
    pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__assign_function__PandarJumboPacket__data,  // assign(index, value) function pointer
    pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__resize_function__PandarJumboPacket__data  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pandar_msgs__msg__PandarJumboPacket, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_message_members = {
  "pandar_msgs__msg",  // message namespace
  "PandarJumboPacket",  // message name
  3,  // number of fields
  sizeof(pandar_msgs__msg__PandarJumboPacket),
  pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_message_member_array,  // message members
  pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_init_function,  // function to initialize message memory (memory has to be allocated)
  pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_message_type_support_handle = {
  0,
  &pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pandar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pandar_msgs, msg, PandarJumboPacket)() {
  pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_message_type_support_handle.typesupport_identifier) {
    pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pandar_msgs__msg__PandarJumboPacket__rosidl_typesupport_introspection_c__PandarJumboPacket_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
