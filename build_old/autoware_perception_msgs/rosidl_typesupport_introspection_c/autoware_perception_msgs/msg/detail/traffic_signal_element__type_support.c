// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_perception_msgs:msg/TrafficSignalElement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_perception_msgs/msg/detail/traffic_signal_element__rosidl_typesupport_introspection_c.h"
#include "autoware_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_perception_msgs/msg/detail/traffic_signal_element__functions.h"
#include "autoware_perception_msgs/msg/detail/traffic_signal_element__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_perception_msgs__msg__TrafficSignalElement__init(message_memory);
}

void autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_fini_function(void * message_memory)
{
  autoware_perception_msgs__msg__TrafficSignalElement__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_message_member_array[4] = {
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_perception_msgs__msg__TrafficSignalElement, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_perception_msgs__msg__TrafficSignalElement, shape),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_perception_msgs__msg__TrafficSignalElement, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_perception_msgs__msg__TrafficSignalElement, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_message_members = {
  "autoware_perception_msgs__msg",  // message namespace
  "TrafficSignalElement",  // message name
  4,  // number of fields
  sizeof(autoware_perception_msgs__msg__TrafficSignalElement),
  autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_message_member_array,  // message members
  autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_message_type_support_handle = {
  0,
  &autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_perception_msgs, msg, TrafficSignalElement)() {
  if (!autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_message_type_support_handle.typesupport_identifier) {
    autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_perception_msgs__msg__TrafficSignalElement__rosidl_typesupport_introspection_c__TrafficSignalElement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
