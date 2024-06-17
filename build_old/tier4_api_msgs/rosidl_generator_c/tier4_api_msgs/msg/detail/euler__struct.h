// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_api_msgs:msg/Euler.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__EULER__STRUCT_H_
#define TIER4_API_MSGS__MSG__DETAIL__EULER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Euler in the package tier4_api_msgs.
typedef struct tier4_api_msgs__msg__Euler
{
  double roll;
  double pitch;
  double yaw;
} tier4_api_msgs__msg__Euler;

// Struct for a sequence of tier4_api_msgs__msg__Euler.
typedef struct tier4_api_msgs__msg__Euler__Sequence
{
  tier4_api_msgs__msg__Euler * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_api_msgs__msg__Euler__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_API_MSGS__MSG__DETAIL__EULER__STRUCT_H_
