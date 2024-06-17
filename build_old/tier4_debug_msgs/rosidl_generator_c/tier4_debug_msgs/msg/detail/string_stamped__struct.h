// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_debug_msgs:msg/StringStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__STRING_STAMPED__STRUCT_H_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__STRING_STAMPED__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StringStamped in the package tier4_debug_msgs.
typedef struct tier4_debug_msgs__msg__StringStamped
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String data;
} tier4_debug_msgs__msg__StringStamped;

// Struct for a sequence of tier4_debug_msgs__msg__StringStamped.
typedef struct tier4_debug_msgs__msg__StringStamped__Sequence
{
  tier4_debug_msgs__msg__StringStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_debug_msgs__msg__StringStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__STRING_STAMPED__STRUCT_H_
