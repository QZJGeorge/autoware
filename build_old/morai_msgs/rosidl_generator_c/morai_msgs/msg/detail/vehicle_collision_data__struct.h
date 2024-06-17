// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/VehicleCollisionData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__STRUCT_H_

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
// Member 'collisions'
#include "morai_msgs/msg/detail/vehicle_collision__struct.h"

/// Struct defined in msg/VehicleCollisionData in the package morai_msgs.
typedef struct morai_msgs__msg__VehicleCollisionData
{
  std_msgs__msg__Header header;
  morai_msgs__msg__VehicleCollision__Sequence collisions;
} morai_msgs__msg__VehicleCollisionData;

// Struct for a sequence of morai_msgs__msg__VehicleCollisionData.
typedef struct morai_msgs__msg__VehicleCollisionData__Sequence
{
  morai_msgs__msg__VehicleCollisionData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__VehicleCollisionData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_COLLISION_DATA__STRUCT_H_
