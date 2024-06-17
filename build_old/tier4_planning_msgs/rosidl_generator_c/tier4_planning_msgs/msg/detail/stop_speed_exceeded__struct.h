// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/StopSpeedExceeded.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_SPEED_EXCEEDED__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_SPEED_EXCEEDED__STRUCT_H_

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

/// Struct defined in msg/StopSpeedExceeded in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__StopSpeedExceeded
{
  builtin_interfaces__msg__Time stamp;
  bool stop_speed_exceeded;
} tier4_planning_msgs__msg__StopSpeedExceeded;

// Struct for a sequence of tier4_planning_msgs__msg__StopSpeedExceeded.
typedef struct tier4_planning_msgs__msg__StopSpeedExceeded__Sequence
{
  tier4_planning_msgs__msg__StopSpeedExceeded * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__StopSpeedExceeded__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_SPEED_EXCEEDED__STRUCT_H_
