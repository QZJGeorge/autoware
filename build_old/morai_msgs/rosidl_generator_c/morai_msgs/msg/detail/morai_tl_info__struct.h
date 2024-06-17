// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/MoraiTLInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_TL_INFO__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__MORAI_TL_INFO__STRUCT_H_

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

/// Struct defined in msg/MoraiTLInfo in the package morai_msgs.
typedef struct morai_msgs__msg__MoraiTLInfo
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String idx;
  int16_t status;
} morai_msgs__msg__MoraiTLInfo;

// Struct for a sequence of morai_msgs__msg__MoraiTLInfo.
typedef struct morai_msgs__msg__MoraiTLInfo__Sequence
{
  morai_msgs__msg__MoraiTLInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__MoraiTLInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_TL_INFO__STRUCT_H_
