// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_debug_msgs:msg/Float64MultiArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__STRUCT_H_
#define TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__STRUCT_H_

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
// Member 'layout'
#include "tier4_debug_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Float64MultiArrayStamped in the package tier4_debug_msgs.
typedef struct tier4_debug_msgs__msg__Float64MultiArrayStamped
{
  builtin_interfaces__msg__Time stamp;
  tier4_debug_msgs__msg__MultiArrayLayout layout;
  rosidl_runtime_c__double__Sequence data;
} tier4_debug_msgs__msg__Float64MultiArrayStamped;

// Struct for a sequence of tier4_debug_msgs__msg__Float64MultiArrayStamped.
typedef struct tier4_debug_msgs__msg__Float64MultiArrayStamped__Sequence
{
  tier4_debug_msgs__msg__Float64MultiArrayStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_debug_msgs__msg__Float64MultiArrayStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_DEBUG_MSGS__MSG__DETAIL__FLOAT64_MULTI_ARRAY_STAMPED__STRUCT_H_
