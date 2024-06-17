// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_debug_msgs:msg/Int64Stamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__INT64_STAMPED__STRUCT_H_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__INT64_STAMPED__STRUCT_H_

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

/// Struct defined in msg/Int64Stamped in the package tier4_debug_msgs.
typedef struct tier4_debug_msgs__msg__Int64Stamped
{
  builtin_interfaces__msg__Time stamp;
  int64_t data;
} tier4_debug_msgs__msg__Int64Stamped;

// Struct for a sequence of tier4_debug_msgs__msg__Int64Stamped.
typedef struct tier4_debug_msgs__msg__Int64Stamped__Sequence
{
  tier4_debug_msgs__msg__Int64Stamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_debug_msgs__msg__Int64Stamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__INT64_STAMPED__STRUCT_H_
