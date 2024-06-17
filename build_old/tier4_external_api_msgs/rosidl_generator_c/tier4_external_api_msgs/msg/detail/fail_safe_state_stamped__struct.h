// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/FailSafeStateStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE_STAMPED__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'state'
#include "tier4_external_api_msgs/msg/detail/fail_safe_state__struct.h"

/// Struct defined in msg/FailSafeStateStamped in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__FailSafeStateStamped
{
  builtin_interfaces__msg__Time stamp;
  tier4_external_api_msgs__msg__FailSafeState state;
} tier4_external_api_msgs__msg__FailSafeStateStamped;

// Struct for a sequence of tier4_external_api_msgs__msg__FailSafeStateStamped.
typedef struct tier4_external_api_msgs__msg__FailSafeStateStamped__Sequence
{
  tier4_external_api_msgs__msg__FailSafeStateStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__FailSafeStateStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE_STAMPED__STRUCT_H_
