// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eagleye_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define EAGLEYE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NAN_OR_INFINITE'.
enum
{
  eagleye_msgs__msg__Status__NAN_OR_INFINITE = 0
};

/// Constant 'TOO_LARGE_OR_SMALL'.
enum
{
  eagleye_msgs__msg__Status__TOO_LARGE_OR_SMALL = 1
};

/// Struct defined in msg/Status in the package eagleye_msgs.
/**
  * error code
 */
typedef struct eagleye_msgs__msg__Status
{
  /// This flag will be true the first time the value is estimated, and will remain true thereafter.
  bool enabled_status;
  /// This flag will be true only when the value is estimated.
  bool estimate_status;
  bool is_abnormal;
  uint8_t error_code;
} eagleye_msgs__msg__Status;

// Struct for a sequence of eagleye_msgs__msg__Status.
typedef struct eagleye_msgs__msg__Status__Sequence
{
  eagleye_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eagleye_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EAGLEYE_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
