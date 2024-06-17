// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_v2x_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
#define TIER4_V2X_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KeyValue in the package tier4_v2x_msgs.
typedef struct tier4_v2x_msgs__msg__KeyValue
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} tier4_v2x_msgs__msg__KeyValue;

// Struct for a sequence of tier4_v2x_msgs__msg__KeyValue.
typedef struct tier4_v2x_msgs__msg__KeyValue__Sequence
{
  tier4_v2x_msgs__msg__KeyValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_v2x_msgs__msg__KeyValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
