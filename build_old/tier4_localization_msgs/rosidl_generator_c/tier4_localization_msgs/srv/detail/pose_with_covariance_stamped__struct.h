// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_localization_msgs:srv/PoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__STRUCT_H_
#define TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.h"

/// Struct defined in srv/PoseWithCovarianceStamped in the package tier4_localization_msgs.
typedef struct tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request
{
  geometry_msgs__msg__PoseWithCovarianceStamped pose_with_covariance;
} tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request;

// Struct for a sequence of tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request.
typedef struct tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__Sequence
{
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_localization_msgs__srv__PoseWithCovarianceStamped_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose_with_covariance'
// already included above
// #include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.h"

/// Struct defined in srv/PoseWithCovarianceStamped in the package tier4_localization_msgs.
typedef struct tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response
{
  bool success;
  geometry_msgs__msg__PoseWithCovarianceStamped pose_with_covariance;
} tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response;

// Struct for a sequence of tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response.
typedef struct tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__Sequence
{
  tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_localization_msgs__srv__PoseWithCovarianceStamped_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__STRUCT_H_
