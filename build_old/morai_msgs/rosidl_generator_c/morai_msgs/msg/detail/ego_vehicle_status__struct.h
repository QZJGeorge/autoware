// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/EgoVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__STRUCT_H_

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
// Member 'acceleration'
// Member 'position'
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/EgoVehicleStatus in the package morai_msgs.
typedef struct morai_msgs__msg__EgoVehicleStatus
{
  std_msgs__msg__Header header;
  int32_t unique_id;
  geometry_msgs__msg__Vector3 acceleration;
  geometry_msgs__msg__Vector3 position;
  geometry_msgs__msg__Vector3 velocity;
  double heading;
  double accel;
  double brake;
  double wheel_angle;
} morai_msgs__msg__EgoVehicleStatus;

// Struct for a sequence of morai_msgs__msg__EgoVehicleStatus.
typedef struct morai_msgs__msg__EgoVehicleStatus__Sequence
{
  morai_msgs__msg__EgoVehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__EgoVehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__EGO_VEHICLE_STATUS__STRUCT_H_
