// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/IntersectionStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__INTERSECTION_STATUS__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__INTERSECTION_STATUS__STRUCT_H_

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

/// Struct defined in msg/IntersectionStatus in the package morai_msgs.
typedef struct morai_msgs__msg__IntersectionStatus
{
  std_msgs__msg__Header header;
  int32_t intersection_index;
  int16_t intersection_status;
  float intersection_status_time;
} morai_msgs__msg__IntersectionStatus;

// Struct for a sequence of morai_msgs__msg__IntersectionStatus.
typedef struct morai_msgs__msg__IntersectionStatus__Sequence
{
  morai_msgs__msg__IntersectionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__IntersectionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__INTERSECTION_STATUS__STRUCT_H_
