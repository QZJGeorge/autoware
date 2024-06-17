// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from static_centerline_optimizer:msg/PointsWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__STRUCT_H_
#define STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/PointsWithLaneId in the package static_centerline_optimizer.
typedef struct static_centerline_optimizer__msg__PointsWithLaneId
{
  uint32_t lane_id;
  geometry_msgs__msg__Point__Sequence points;
} static_centerline_optimizer__msg__PointsWithLaneId;

// Struct for a sequence of static_centerline_optimizer__msg__PointsWithLaneId.
typedef struct static_centerline_optimizer__msg__PointsWithLaneId__Sequence
{
  static_centerline_optimizer__msg__PointsWithLaneId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} static_centerline_optimizer__msg__PointsWithLaneId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STATIC_CENTERLINE_OPTIMIZER__MSG__DETAIL__POINTS_WITH_LANE_ID__STRUCT_H_
