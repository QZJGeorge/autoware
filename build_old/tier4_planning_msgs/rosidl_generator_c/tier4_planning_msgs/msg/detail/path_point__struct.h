// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REFERENCE'.
enum
{
  tier4_planning_msgs__msg__PathPoint__REFERENCE = 0
};

/// Constant 'FIXED'.
enum
{
  tier4_planning_msgs__msg__PathPoint__FIXED = 1
};

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/PathPoint in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__PathPoint
{
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
  uint8_t type;
} tier4_planning_msgs__msg__PathPoint;

// Struct for a sequence of tier4_planning_msgs__msg__PathPoint.
typedef struct tier4_planning_msgs__msg__PathPoint__Sequence
{
  tier4_planning_msgs__msg__PathPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__PathPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
