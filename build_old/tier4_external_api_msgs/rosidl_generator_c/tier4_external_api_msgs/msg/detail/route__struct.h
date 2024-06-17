// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'route_sections'
#include "tier4_external_api_msgs/msg/detail/route_section__struct.h"

/// Struct defined in msg/Route in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__Route
{
  geometry_msgs__msg__PoseStamped goal_pose;
  tier4_external_api_msgs__msg__RouteSection__Sequence route_sections;
} tier4_external_api_msgs__msg__Route;

// Struct for a sequence of tier4_external_api_msgs__msg__Route.
typedef struct tier4_external_api_msgs__msg__Route__Sequence
{
  tier4_external_api_msgs__msg__Route * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__Route__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
