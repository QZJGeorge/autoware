// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/CollisionData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__STRUCT_H_

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
// Member 'collision_object'
#include "morai_msgs/msg/detail/object_status__struct.h"

/// Struct defined in msg/CollisionData in the package morai_msgs.
typedef struct morai_msgs__msg__CollisionData
{
  std_msgs__msg__Header header;
  double global_offset_x;
  double global_offset_y;
  double global_offset_z;
  morai_msgs__msg__ObjectStatus__Sequence collision_object;
} morai_msgs__msg__CollisionData;

// Struct for a sequence of morai_msgs__msg__CollisionData.
typedef struct morai_msgs__msg__CollisionData__Sequence
{
  morai_msgs__msg__CollisionData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__CollisionData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__COLLISION_DATA__STRUCT_H_
