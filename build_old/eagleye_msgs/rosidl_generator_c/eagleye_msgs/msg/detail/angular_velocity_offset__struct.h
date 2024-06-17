// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eagleye_msgs:msg/AngularVelocityOffset.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_OFFSET__STRUCT_H_
#define EAGLEYE_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_OFFSET__STRUCT_H_

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
// Member 'angular_velocity_offset'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'status'
#include "eagleye_msgs/msg/detail/status__struct.h"

/// Struct defined in msg/AngularVelocityOffset in the package eagleye_msgs.
typedef struct eagleye_msgs__msg__AngularVelocityOffset
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 angular_velocity_offset;
  eagleye_msgs__msg__Status status;
} eagleye_msgs__msg__AngularVelocityOffset;

// Struct for a sequence of eagleye_msgs__msg__AngularVelocityOffset.
typedef struct eagleye_msgs__msg__AngularVelocityOffset__Sequence
{
  eagleye_msgs__msg__AngularVelocityOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eagleye_msgs__msg__AngularVelocityOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EAGLEYE_MSGS__MSG__DETAIL__ANGULAR_VELOCITY_OFFSET__STRUCT_H_
