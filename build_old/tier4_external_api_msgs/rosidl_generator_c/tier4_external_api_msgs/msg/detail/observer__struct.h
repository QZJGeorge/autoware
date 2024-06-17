// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/Observer.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OBSERVER__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OBSERVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LOCAL'.
enum
{
  tier4_external_api_msgs__msg__Observer__LOCAL = 2
};

/// Constant 'REMOTE'.
enum
{
  tier4_external_api_msgs__msg__Observer__REMOTE = 3
};

/// Struct defined in msg/Observer in the package tier4_external_api_msgs.
/**
  * constants
  * uint8 NONE=1 (reserved)
 */
typedef struct tier4_external_api_msgs__msg__Observer
{
  /// fields
  uint8_t mode;
} tier4_external_api_msgs__msg__Observer;

// Struct for a sequence of tier4_external_api_msgs__msg__Observer.
typedef struct tier4_external_api_msgs__msg__Observer__Sequence
{
  tier4_external_api_msgs__msg__Observer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__Observer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__OBSERVER__STRUCT_H_
