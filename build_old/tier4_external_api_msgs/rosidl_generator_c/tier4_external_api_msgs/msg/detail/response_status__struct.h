// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  tier4_external_api_msgs__msg__ResponseStatus__SUCCESS = 1ul
};

/// Constant 'IGNORED'.
enum
{
  tier4_external_api_msgs__msg__ResponseStatus__IGNORED = 2ul
};

/// Constant 'WARN'.
enum
{
  tier4_external_api_msgs__msg__ResponseStatus__WARN = 3ul
};

/// Constant 'ERROR'.
enum
{
  tier4_external_api_msgs__msg__ResponseStatus__ERROR = 4ul
};

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ResponseStatus in the package tier4_external_api_msgs.
/**
  * constants
 */
typedef struct tier4_external_api_msgs__msg__ResponseStatus
{
  /// fields
  uint32_t code;
  rosidl_runtime_c__String message;
} tier4_external_api_msgs__msg__ResponseStatus;

// Struct for a sequence of tier4_external_api_msgs__msg__ResponseStatus.
typedef struct tier4_external_api_msgs__msg__ResponseStatus__Sequence
{
  tier4_external_api_msgs__msg__ResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__ResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__STRUCT_H_
