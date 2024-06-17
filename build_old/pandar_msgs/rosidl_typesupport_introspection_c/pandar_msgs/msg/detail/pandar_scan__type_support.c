// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pandar_msgs:msg/PandarScan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pandar_msgs/msg/detail/pandar_scan__rosidl_typesupport_introspection_c.h"
#include "pandar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pandar_msgs/msg/detail/pandar_scan__functions.h"
#include "pandar_msgs/msg/detail/pandar_scan__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `packets`
#include "pandar_msgs/msg/pandar_packet.h"
// Member `packets`
#include "pandar_msgs/msg/detail/pandar_packet__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pandar_msgs__msg__PandarScan__init(message_memory);
}

void pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_fini_function(void * message_memory)
{
  pandar_msgs__msg__PandarScan__fini(message_memory);
}

size_t pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__size_function__PandarScan__packets(
  const void * untyped_member)
{
  const pandar_msgs__msg__PandarPacket__Sequence * member =
    (const pandar_msgs__msg__PandarPacket__Sequence *)(untyped_member);
  return member->size;
}

const void * pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__get_const_function__PandarScan__packets(
  const void * untyped_member, size_t index)
{
  const pandar_msgs__msg__PandarPacket__Sequence * member =
    (const pandar_msgs__msg__PandarPacket__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__get_function__PandarScan__packets(
  void * untyped_member, size_t index)
{
  pandar_msgs__msg__PandarPacket__Sequence * member =
    (pandar_msgs__msg__PandarPacket__Sequence *)(untyped_member);
  return &member->data[index];
}

void pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__fetch_function__PandarScan__packets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pandar_msgs__msg__PandarPacket * item =
    ((const pandar_msgs__msg__PandarPacket *)
    pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__get_const_function__PandarScan__packets(untyped_member, index));
  pandar_msgs__msg__PandarPacket * value =
    (pandar_msgs__msg__PandarPacket *)(untyped_value);
  *value = *item;
}

void pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__assign_function__PandarScan__packets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pandar_msgs__msg__PandarPacket * item =
    ((pandar_msgs__msg__PandarPacket *)
    pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__get_function__PandarScan__packets(untyped_member, index));
  const pandar_msgs__msg__PandarPacket * value =
    (const pandar_msgs__msg__PandarPacket *)(untyped_value);
  *item = *value;
}

bool pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__resize_function__PandarScan__packets(
  void * untyped_member, size_t size)
{
  pandar_msgs__msg__PandarPacket__Sequence * member =
    (pandar_msgs__msg__PandarPacket__Sequence *)(untyped_member);
  pandar_msgs__msg__PandarPacket__Sequence__fini(member);
  return pandar_msgs__msg__PandarPacket__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pandar_msgs__msg__PandarScan, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "packets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pandar_msgs__msg__PandarScan, packets),  // bytes offset in struct
    NULL,  // default value
    pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__size_function__PandarScan__packets,  // size() function pointer
    pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__get_const_function__PandarScan__packets,  // get_const(index) function pointer
    pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__get_function__PandarScan__packets,  // get(index) function pointer
    pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__fetch_function__PandarScan__packets,  // fetch(index, &value) function pointer
    pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__assign_function__PandarScan__packets,  // assign(index, value) function pointer
    pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__resize_function__PandarScan__packets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_members = {
  "pandar_msgs__msg",  // message namespace
  "PandarScan",  // message name
  2,  // number of fields
  sizeof(pandar_msgs__msg__PandarScan),
  pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_member_array,  // message members
  pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_init_function,  // function to initialize message memory (memory has to be allocated)
  pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_type_support_handle = {
  0,
  &pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pandar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pandar_msgs, msg, PandarScan)() {
  pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pandar_msgs, msg, PandarPacket)();
  if (!pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_type_support_handle.typesupport_identifier) {
    pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pandar_msgs__msg__PandarScan__rosidl_typesupport_introspection_c__PandarScan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
