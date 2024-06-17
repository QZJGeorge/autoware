// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/ObjectStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'velocity'
// Member 'acceleration'
// Member 'size'
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ObjectStatus in the package morai_msgs.
typedef struct morai_msgs__msg__ObjectStatus
{
  int32_t unique_id;
  int32_t type;
  rosidl_runtime_c__String name;
  double heading;
  geometry_msgs__msg__Vector3 velocity;
  geometry_msgs__msg__Vector3 acceleration;
  geometry_msgs__msg__Vector3 size;
  geometry_msgs__msg__Vector3 position;
} morai_msgs__msg__ObjectStatus;

// Struct for a sequence of morai_msgs__msg__ObjectStatus.
typedef struct morai_msgs__msg__ObjectStatus__Sequence
{
  morai_msgs__msg__ObjectStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__ObjectStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS__STRUCT_H_
