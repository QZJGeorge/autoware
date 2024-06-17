// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/Lamps.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__LAMPS__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__LAMPS__STRUCT_H_

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

/// Struct defined in msg/Lamps in the package morai_msgs.
typedef struct morai_msgs__msg__Lamps
{
  std_msgs__msg__Header header;
  int8_t turn_signal;
  int8_t emergency_signal;
} morai_msgs__msg__Lamps;

// Struct for a sequence of morai_msgs__msg__Lamps.
typedef struct morai_msgs__msg__Lamps__Sequence
{
  morai_msgs__msg__Lamps * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__Lamps__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__LAMPS__STRUCT_H_
