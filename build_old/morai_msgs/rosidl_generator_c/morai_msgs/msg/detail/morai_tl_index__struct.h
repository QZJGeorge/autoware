// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/MoraiTLIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'idx'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MoraiTLIndex in the package morai_msgs.
typedef struct morai_msgs__msg__MoraiTLIndex
{
  rosidl_runtime_c__String idx;
} morai_msgs__msg__MoraiTLIndex;

// Struct for a sequence of morai_msgs__msg__MoraiTLIndex.
typedef struct morai_msgs__msg__MoraiTLIndex__Sequence
{
  morai_msgs__msg__MoraiTLIndex * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__MoraiTLIndex__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__STRUCT_H_
