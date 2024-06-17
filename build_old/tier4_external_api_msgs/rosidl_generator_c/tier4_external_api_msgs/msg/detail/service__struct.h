// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/Service.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__SERVICE__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOT_IN_SERVICE'.
enum
{
  tier4_external_api_msgs__msg__Service__NOT_IN_SERVICE = 1
};

/// Constant 'IN_SERVICE'.
enum
{
  tier4_external_api_msgs__msg__Service__IN_SERVICE = 2
};

/// Struct defined in msg/Service in the package tier4_external_api_msgs.
/**
  * constants
 */
typedef struct tier4_external_api_msgs__msg__Service
{
  /// fields
  uint8_t mode;
} tier4_external_api_msgs__msg__Service;

// Struct for a sequence of tier4_external_api_msgs__msg__Service.
typedef struct tier4_external_api_msgs__msg__Service__Sequence
{
  tier4_external_api_msgs__msg__Service * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__Service__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__SERVICE__STRUCT_H_
