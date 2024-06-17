// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_api_msgs:msg/ObstacleAvoidanceStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__STRUCT_H_
#define TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__STRUCT_H_

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
#include "tier4_planning_msgs/msg/detail/trajectory__struct.h"

/// Struct defined in msg/ObstacleAvoidanceStatus in the package tier4_api_msgs.
typedef struct tier4_api_msgs__msg__ObstacleAvoidanceStatus
{
  std_msgs__msg__Header header;
  bool obstacle_avoidance_ready;
  tier4_planning_msgs__msg__Trajectory candidate_path;
} tier4_api_msgs__msg__ObstacleAvoidanceStatus;

// Struct for a sequence of tier4_api_msgs__msg__ObstacleAvoidanceStatus.
typedef struct tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence
{
  tier4_api_msgs__msg__ObstacleAvoidanceStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_api_msgs__msg__ObstacleAvoidanceStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__STRUCT_H_
