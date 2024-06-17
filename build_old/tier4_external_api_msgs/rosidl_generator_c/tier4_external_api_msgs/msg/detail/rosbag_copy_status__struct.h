// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/RosbagCopyStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  tier4_external_api_msgs__msg__RosbagCopyStatus__NONE = 0
};

/// Constant 'NOT_COPIED'.
enum
{
  tier4_external_api_msgs__msg__RosbagCopyStatus__NOT_COPIED = 1
};

/// Constant 'IN_PROGRESS'.
enum
{
  tier4_external_api_msgs__msg__RosbagCopyStatus__IN_PROGRESS = 2
};

/// Constant 'SUCCESS'.
enum
{
  tier4_external_api_msgs__msg__RosbagCopyStatus__SUCCESS = 3
};

/// Constant 'FAILED'.
enum
{
  tier4_external_api_msgs__msg__RosbagCopyStatus__FAILED = 4
};

// Include directives for member types
// Member 'project_id'
// Member 'vehicle_id'
// Member 'date'
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RosbagCopyStatus in the package tier4_external_api_msgs.
/**
  * constants
 */
typedef struct tier4_external_api_msgs__msg__RosbagCopyStatus
{
  /// fields
  uint8_t status;
  uint8_t progress_percentage;
  rosidl_runtime_c__String project_id;
  rosidl_runtime_c__String vehicle_id;
  rosidl_runtime_c__String date;
  rosidl_runtime_c__String message;
} tier4_external_api_msgs__msg__RosbagCopyStatus;

// Struct for a sequence of tier4_external_api_msgs__msg__RosbagCopyStatus.
typedef struct tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence
{
  tier4_external_api_msgs__msg__RosbagCopyStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__RosbagCopyStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__STRUCT_H_
