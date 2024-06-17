// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__STRUCT_H_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.h"

/// Struct defined in msg/PredictedPath in the package tier4_perception_msgs.
typedef struct tier4_perception_msgs__msg__PredictedPath
{
  geometry_msgs__msg__PoseWithCovarianceStamped__Sequence path;
  double confidence;
} tier4_perception_msgs__msg__PredictedPath;

// Struct for a sequence of tier4_perception_msgs__msg__PredictedPath.
typedef struct tier4_perception_msgs__msg__PredictedPath__Sequence
{
  tier4_perception_msgs__msg__PredictedPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_perception_msgs__msg__PredictedPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__STRUCT_H_
