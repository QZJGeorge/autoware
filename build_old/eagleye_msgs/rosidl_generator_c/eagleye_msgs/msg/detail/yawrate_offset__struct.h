// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eagleye_msgs:msg/YawrateOffset.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__YAWRATE_OFFSET__STRUCT_H_
#define EAGLEYE_MSGS__MSG__DETAIL__YAWRATE_OFFSET__STRUCT_H_

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

/// Struct defined in msg/YawrateOffset in the package eagleye_msgs.
typedef struct eagleye_msgs__msg__YawrateOffset
{
  std_msgs__msg__Header header;
  double yaw_rate_offset;
  eagleye_msgs__msg__Status status;
} eagleye_msgs__msg__YawrateOffset;

// Struct for a sequence of eagleye_msgs__msg__YawrateOffset.
typedef struct eagleye_msgs__msg__YawrateOffset__Sequence
{
  eagleye_msgs__msg__YawrateOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eagleye_msgs__msg__YawrateOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EAGLEYE_MSGS__MSG__DETAIL__YAWRATE_OFFSET__STRUCT_H_
