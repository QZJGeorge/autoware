// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dummy_perception_publisher:msg/InitialState.idl
// generated code does not contain a copyright notice

#ifndef DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__STRUCT_H_
#define DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'twist_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'accel_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.h"

/// Struct defined in msg/InitialState in the package dummy_perception_publisher.
typedef struct dummy_perception_publisher__msg__InitialState
{
  geometry_msgs__msg__PoseWithCovariance pose_covariance;
  geometry_msgs__msg__TwistWithCovariance twist_covariance;
  geometry_msgs__msg__AccelWithCovariance accel_covariance;
} dummy_perception_publisher__msg__InitialState;

// Struct for a sequence of dummy_perception_publisher__msg__InitialState.
typedef struct dummy_perception_publisher__msg__InitialState__Sequence
{
  dummy_perception_publisher__msg__InitialState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dummy_perception_publisher__msg__InitialState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUMMY_PERCEPTION_PUBLISHER__MSG__DETAIL__INITIAL_STATE__STRUCT_H_
