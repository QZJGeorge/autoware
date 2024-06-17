// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsg.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__STRUCT_H_

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
// Member 'relative_distance'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/LaneChangeDebugMsg in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__LaneChangeDebugMsg
{
  rosidl_runtime_c__String object_id;
  bool allow_lane_change;
  bool is_front;
  geometry_msgs__msg__Pose relative_distance;
  double velocity;
  rosidl_runtime_c__String failed_reason;
} tier4_planning_msgs__msg__LaneChangeDebugMsg;

// Struct for a sequence of tier4_planning_msgs__msg__LaneChangeDebugMsg.
typedef struct tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence
{
  tier4_planning_msgs__msg__LaneChangeDebugMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__LaneChangeDebugMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__STRUCT_H_
