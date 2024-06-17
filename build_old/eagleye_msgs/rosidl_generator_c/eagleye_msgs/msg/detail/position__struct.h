// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eagleye_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__POSITION__STRUCT_H_
#define EAGLEYE_MSGS__MSG__DETAIL__POSITION__STRUCT_H_

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
// Member 'enu_pos'
// Member 'ecef_base_pos'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'status'
#include "eagleye_msgs/msg/detail/status__struct.h"

/// Struct defined in msg/Position in the package eagleye_msgs.
typedef struct eagleye_msgs__msg__Position
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point enu_pos;
  geometry_msgs__msg__Point ecef_base_pos;
  double covariance[9];
  eagleye_msgs__msg__Status status;
} eagleye_msgs__msg__Position;

// Struct for a sequence of eagleye_msgs__msg__Position.
typedef struct eagleye_msgs__msg__Position__Sequence
{
  eagleye_msgs__msg__Position * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eagleye_msgs__msg__Position__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EAGLEYE_MSGS__MSG__DETAIL__POSITION__STRUCT_H_
