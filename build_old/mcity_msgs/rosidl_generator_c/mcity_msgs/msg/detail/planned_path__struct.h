// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mcity_msgs:msg/PlannedPath.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__STRUCT_H_
#define MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x_vector'
// Member 'y_vector'
// Member 'vd_vector'
// Member 'ori_vector'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PlannedPath in the package mcity_msgs.
typedef struct mcity_msgs__msg__PlannedPath
{
  /// time
  double timestamp;
  /// timestamp between trajectory points
  double time_resolution;
  /// default: 1
  int16_t go;
  /// default: 0
  int16_t estop;
  /// up to 50 points in the next 2 seconds (0.04s)
  rosidl_runtime_c__double__Sequence x_vector;
  /// up to 50 points in the next 2 seconds (0.04s)
  rosidl_runtime_c__double__Sequence y_vector;
  /// up to 50 points in the next 2 seconds (0.04s)
  rosidl_runtime_c__double__Sequence vd_vector;
  /// up to 50 points in the next 2 seconds (0.04s)
  rosidl_runtime_c__double__Sequence ori_vector;
} mcity_msgs__msg__PlannedPath;

// Struct for a sequence of mcity_msgs__msg__PlannedPath.
typedef struct mcity_msgs__msg__PlannedPath__Sequence
{
  mcity_msgs__msg__PlannedPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mcity_msgs__msg__PlannedPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MCITY_MSGS__MSG__DETAIL__PLANNED_PATH__STRUCT_H_
