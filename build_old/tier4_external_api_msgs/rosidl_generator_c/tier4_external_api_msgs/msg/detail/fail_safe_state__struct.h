// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/FailSafeState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NORMAL'.
enum
{
  tier4_external_api_msgs__msg__FailSafeState__NORMAL = 1
};

/// Constant 'OVERRIDE_REQUESTING'.
enum
{
  tier4_external_api_msgs__msg__FailSafeState__OVERRIDE_REQUESTING = 2
};

/// Constant 'MRM_OPERATING'.
enum
{
  tier4_external_api_msgs__msg__FailSafeState__MRM_OPERATING = 3
};

/// Constant 'MRM_SUCCEEDED'.
enum
{
  tier4_external_api_msgs__msg__FailSafeState__MRM_SUCCEEDED = 4
};

/// Constant 'MRM_FAILED'.
enum
{
  tier4_external_api_msgs__msg__FailSafeState__MRM_FAILED = 5
};

/// Struct defined in msg/FailSafeState in the package tier4_external_api_msgs.
/**
  * constants
 */
typedef struct tier4_external_api_msgs__msg__FailSafeState
{
  /// fields
  uint8_t state;
} tier4_external_api_msgs__msg__FailSafeState;

// Struct for a sequence of tier4_external_api_msgs__msg__FailSafeState.
typedef struct tier4_external_api_msgs__msg__FailSafeState__Sequence
{
  tier4_external_api_msgs__msg__FailSafeState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__FailSafeState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE__STRUCT_H_
