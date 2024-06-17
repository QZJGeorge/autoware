// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_debug_tools:msg/TrajectoryDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__STRUCT_H_
#define PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__STRUCT_H_

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
// Member 'arclength'
// Member 'curvature'
// Member 'velocity'
// Member 'acceleration'
// Member 'yaw'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TrajectoryDebugInfo in the package planning_debug_tools.
typedef struct planning_debug_tools__msg__TrajectoryDebugInfo
{
  builtin_interfaces__msg__Time stamp;
  uint32_t size;
  rosidl_runtime_c__double__Sequence arclength;
  rosidl_runtime_c__double__Sequence curvature;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence acceleration;
  rosidl_runtime_c__double__Sequence yaw;
} planning_debug_tools__msg__TrajectoryDebugInfo;

// Struct for a sequence of planning_debug_tools__msg__TrajectoryDebugInfo.
typedef struct planning_debug_tools__msg__TrajectoryDebugInfo__Sequence
{
  planning_debug_tools__msg__TrajectoryDebugInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_debug_tools__msg__TrajectoryDebugInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_DEBUG_TOOLS__MSG__DETAIL__TRAJECTORY_DEBUG_INFO__STRUCT_H_
