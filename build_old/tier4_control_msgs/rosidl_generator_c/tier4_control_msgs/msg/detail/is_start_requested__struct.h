// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_control_msgs:msg/IsStartRequested.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__IS_START_REQUESTED__STRUCT_H_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__IS_START_REQUESTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/IsStartRequested in the package tier4_control_msgs.
typedef struct tier4_control_msgs__msg__IsStartRequested
{
  builtin_interfaces__msg__Time stamp;
  bool data;
} tier4_control_msgs__msg__IsStartRequested;

// Struct for a sequence of tier4_control_msgs__msg__IsStartRequested.
typedef struct tier4_control_msgs__msg__IsStartRequested__Sequence
{
  tier4_control_msgs__msg__IsStartRequested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_control_msgs__msg__IsStartRequested__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__IS_START_REQUESTED__STRUCT_H_
