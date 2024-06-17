// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsg.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_id'
// Member 'failed_reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AvoidanceDebugMsg in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__AvoidanceDebugMsg
{
  rosidl_runtime_c__String object_id;
  bool allow_avoidance;
  double longitudinal_distance;
  double lateral_distance_from_centerline;
  double to_furthest_linestring_distance;
  double max_shift_length;
  double required_jerk;
  double maximum_jerk;
  rosidl_runtime_c__String failed_reason;
} tier4_planning_msgs__msg__AvoidanceDebugMsg;

// Struct for a sequence of tier4_planning_msgs__msg__AvoidanceDebugMsg.
typedef struct tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence
{
  tier4_planning_msgs__msg__AvoidanceDebugMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__AvoidanceDebugMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG__STRUCT_H_
