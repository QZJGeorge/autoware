// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/RosbagLoggingMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RosbagLoggingMode in the package tier4_external_api_msgs.
/**
  * fields
 */
typedef struct tier4_external_api_msgs__msg__RosbagLoggingMode
{
  bool is_operation_mode;
} tier4_external_api_msgs__msg__RosbagLoggingMode;

// Struct for a sequence of tier4_external_api_msgs__msg__RosbagLoggingMode.
typedef struct tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence
{
  tier4_external_api_msgs__msg__RosbagLoggingMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__RosbagLoggingMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__STRUCT_H_
