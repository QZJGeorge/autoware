// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_planning_msgs:msg/LaneletRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_ROUTE__STRUCT_H_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_ROUTE__STRUCT_H_

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
// Member 'start_pose'
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'segments'
#include "autoware_planning_msgs/msg/detail/lanelet_segment__struct.h"
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in msg/LaneletRoute in the package autoware_planning_msgs.
typedef struct autoware_planning_msgs__msg__LaneletRoute
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose start_pose;
  geometry_msgs__msg__Pose goal_pose;
  autoware_planning_msgs__msg__LaneletSegment__Sequence segments;
  unique_identifier_msgs__msg__UUID uuid;
  bool allow_modification;
} autoware_planning_msgs__msg__LaneletRoute;

// Struct for a sequence of autoware_planning_msgs__msg__LaneletRoute.
typedef struct autoware_planning_msgs__msg__LaneletRoute__Sequence
{
  autoware_planning_msgs__msg__LaneletRoute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_planning_msgs__msg__LaneletRoute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_ROUTE__STRUCT_H_
