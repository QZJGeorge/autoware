// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/WaitForTick.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'user_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WaitForTick in the package morai_msgs.
typedef struct morai_msgs__msg__WaitForTick
{
  rosidl_runtime_c__String user_id;
  uint64_t frame;
} morai_msgs__msg__WaitForTick;

// Struct for a sequence of morai_msgs__msg__WaitForTick.
typedef struct morai_msgs__msg__WaitForTick__Sequence
{
  morai_msgs__msg__WaitForTick * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__WaitForTick__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK__STRUCT_H_
