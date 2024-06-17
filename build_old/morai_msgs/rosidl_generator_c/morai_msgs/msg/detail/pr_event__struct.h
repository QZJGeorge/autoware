// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/PREvent.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_EVENT__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__PR_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PREvent in the package morai_msgs.
typedef struct morai_msgs__msg__PREvent
{
  bool mount_vehicle;
} morai_msgs__msg__PREvent;

// Struct for a sequence of morai_msgs__msg__PREvent.
typedef struct morai_msgs__msg__PREvent__Sequence
{
  morai_msgs__msg__PREvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__PREvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__PR_EVENT__STRUCT_H_
