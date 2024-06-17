// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_api_msgs:msg/LaneChangeStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_H_
#define TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_H_

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
// Member 'candidate_path'
#include "tier4_planning_msgs/msg/detail/path__struct.h"

/// Struct defined in msg/LaneChangeStatus in the package tier4_api_msgs.
typedef struct tier4_api_msgs__msg__LaneChangeStatus
{
  std_msgs__msg__Header header;
  bool force_lane_change_available;
  bool lane_change_ready;
  tier4_planning_msgs__msg__Path candidate_path;
} tier4_api_msgs__msg__LaneChangeStatus;

// Struct for a sequence of tier4_api_msgs__msg__LaneChangeStatus.
typedef struct tier4_api_msgs__msg__LaneChangeStatus__Sequence
{
  tier4_api_msgs__msg__LaneChangeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_api_msgs__msg__LaneChangeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_H_
