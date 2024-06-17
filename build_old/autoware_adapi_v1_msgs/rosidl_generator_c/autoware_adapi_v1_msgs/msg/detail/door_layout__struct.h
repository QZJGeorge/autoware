// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/DoorLayout.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_LAYOUT__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_LAYOUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GET_ON'.
enum
{
  autoware_adapi_v1_msgs__msg__DoorLayout__GET_ON = 1
};

/// Constant 'GET_OFF'.
enum
{
  autoware_adapi_v1_msgs__msg__DoorLayout__GET_OFF = 2
};

// Include directives for member types
// Member 'roles'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DoorLayout in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__DoorLayout
{
  rosidl_runtime_c__uint8__Sequence roles;
  rosidl_runtime_c__String description;
} autoware_adapi_v1_msgs__msg__DoorLayout;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__DoorLayout.
typedef struct autoware_adapi_v1_msgs__msg__DoorLayout__Sequence
{
  autoware_adapi_v1_msgs__msg__DoorLayout * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__DoorLayout__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_LAYOUT__STRUCT_H_
