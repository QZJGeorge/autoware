// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eagleye_msgs:msg/VelocityScaleFactor.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__VELOCITY_SCALE_FACTOR__STRUCT_H_
#define EAGLEYE_MSGS__MSG__DETAIL__VELOCITY_SCALE_FACTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "eagleye_msgs/msg/detail/status__struct.h"

/// Struct defined in msg/VelocityScaleFactor in the package eagleye_msgs.
typedef struct eagleye_msgs__msg__VelocityScaleFactor
{
  std_msgs__msg__Header header;
  double scale_factor;
  eagleye_msgs__msg__Status status;
} eagleye_msgs__msg__VelocityScaleFactor;

// Struct for a sequence of eagleye_msgs__msg__VelocityScaleFactor.
typedef struct eagleye_msgs__msg__VelocityScaleFactor__Sequence
{
  eagleye_msgs__msg__VelocityScaleFactor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eagleye_msgs__msg__VelocityScaleFactor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EAGLEYE_MSGS__MSG__DETAIL__VELOCITY_SCALE_FACTOR__STRUCT_H_
