// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_localization_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_H_
#define AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_H_

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
// Member 'child_frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'accel_with_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.h"

/// Struct defined in msg/KinematicState in the package autoware_localization_msgs.
/**
  * KinematicState represents an estimate of a position, velocity and acceleration in free space.
  * The pose_with_covariance is in the coordinate frame given by header.frame_id
  * The twist_with_covariance and accel_with_covariance are in the coordinate frame given by the child_frame_id
 */
typedef struct autoware_localization_msgs__msg__KinematicState
{
  /// Includes the frame id of the pose parent.
  std_msgs__msg__Header header;
  /// Frame id the pose points to.
  rosidl_runtime_c__String child_frame_id;
  /// Estimated pose that is relative to the header.frame_id.
  geometry_msgs__msg__PoseWithCovariance pose_with_covariance;
  /// Estimated linear and angular velocity relative to child_frame_id.
  geometry_msgs__msg__TwistWithCovariance twist_with_covariance;
  /// Estimated linear and angular acceleration relative to child_frame_id.
  geometry_msgs__msg__AccelWithCovariance accel_with_covariance;
} autoware_localization_msgs__msg__KinematicState;

// Struct for a sequence of autoware_localization_msgs__msg__KinematicState.
typedef struct autoware_localization_msgs__msg__KinematicState__Sequence
{
  autoware_localization_msgs__msg__KinematicState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_localization_msgs__msg__KinematicState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__STRUCT_H_
