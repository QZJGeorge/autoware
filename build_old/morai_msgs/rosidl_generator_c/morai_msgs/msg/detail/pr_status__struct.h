// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/PRStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_STATUS__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__PR_STATUS__STRUCT_H_

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

/// Struct defined in msg/PRStatus in the package morai_msgs.
typedef struct morai_msgs__msg__PRStatus
{
  std_msgs__msg__Header header;
  float position_x;
  float position_y;
  float position_z;
  double heading;
  bool mount_status;
} morai_msgs__msg__PRStatus;

// Struct for a sequence of morai_msgs__msg__PRStatus.
typedef struct morai_msgs__msg__PRStatus__Sequence
{
  morai_msgs__msg__PRStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__PRStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__PR_STATUS__STRUCT_H_
