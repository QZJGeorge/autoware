// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/IntscnTL.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__INTSCN_TL__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__INTSCN_TL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'idx'
#include "rosidl_runtime_c/string.h"
// Member 'state'
// Member 'delta_time'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/IntscnTL in the package morai_msgs.
typedef struct morai_msgs__msg__IntscnTL
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence idx;
  rosidl_runtime_c__int32__Sequence state;
  rosidl_runtime_c__float__Sequence delta_time;
} morai_msgs__msg__IntscnTL;

// Struct for a sequence of morai_msgs__msg__IntscnTL.
typedef struct morai_msgs__msg__IntscnTL__Sequence
{
  morai_msgs__msg__IntscnTL * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__IntscnTL__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__INTSCN_TL__STRUCT_H_
