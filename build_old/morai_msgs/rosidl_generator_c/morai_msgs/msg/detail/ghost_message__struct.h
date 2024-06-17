// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/GhostMessage.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
// Member 'rotation'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/GhostMessage in the package morai_msgs.
typedef struct morai_msgs__msg__GhostMessage
{
  geometry_msgs__msg__Vector3 position;
  geometry_msgs__msg__Vector3 rotation;
  double velocity;
  double steering_angle;
} morai_msgs__msg__GhostMessage;

// Struct for a sequence of morai_msgs__msg__GhostMessage.
typedef struct morai_msgs__msg__GhostMessage__Sequence
{
  morai_msgs__msg__GhostMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__GhostMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__STRUCT_H_
