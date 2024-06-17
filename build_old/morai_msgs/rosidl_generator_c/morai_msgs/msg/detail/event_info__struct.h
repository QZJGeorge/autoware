// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/EventInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__EVENT_INFO__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__EVENT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lamps'
#include "morai_msgs/msg/detail/lamps__struct.h"

/// Struct defined in msg/EventInfo in the package morai_msgs.
typedef struct morai_msgs__msg__EventInfo
{
  int8_t option;
  int32_t ctrl_mode;
  int32_t gear;
  morai_msgs__msg__Lamps lamps;
  bool set_pause;
} morai_msgs__msg__EventInfo;

// Struct for a sequence of morai_msgs__msg__EventInfo.
typedef struct morai_msgs__msg__EventInfo__Sequence
{
  morai_msgs__msg__EventInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__EventInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__EVENT_INFO__STRUCT_H_
