// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rtklib_msgs:msg/RtklibNav.idl
// generated code does not contain a copyright notice

#ifndef RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__STRUCT_H_
#define RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__STRUCT_H_

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
// Member 'ecef_pos'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'ecef_vel'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'status'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.h"

/// Struct defined in msg/RtklibNav in the package rtklib_msgs.
typedef struct rtklib_msgs__msg__RtklibNav
{
  std_msgs__msg__Header header;
  /// Time of Week (ms)
  int64_t tow;
  geometry_msgs__msg__Point ecef_pos;
  geometry_msgs__msg__Vector3 ecef_vel;
  sensor_msgs__msg__NavSatFix status;
} rtklib_msgs__msg__RtklibNav;

// Struct for a sequence of rtklib_msgs__msg__RtklibNav.
typedef struct rtklib_msgs__msg__RtklibNav__Sequence
{
  rtklib_msgs__msg__RtklibNav * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rtklib_msgs__msg__RtklibNav__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RTKLIB_MSGS__MSG__DETAIL__RTKLIB_NAV__STRUCT_H_
