// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/StopFactor.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stop_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'stop_factor_points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/StopFactor in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__StopFactor
{
  geometry_msgs__msg__Pose stop_pose;
  double dist_to_stop_pose;
  geometry_msgs__msg__Point__Sequence stop_factor_points;
} tier4_planning_msgs__msg__StopFactor;

// Struct for a sequence of tier4_planning_msgs__msg__StopFactor.
typedef struct tier4_planning_msgs__msg__StopFactor__Sequence
{
  tier4_planning_msgs__msg__StopFactor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__StopFactor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_FACTOR__STRUCT_H_
