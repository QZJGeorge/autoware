// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/VehicleSpec.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/VehicleSpec in the package morai_msgs.
typedef struct morai_msgs__msg__VehicleSpec
{
  geometry_msgs__msg__Vector3 size;
  float wheel_base;
  double max_steering;
  float overhang;
  float rear_overhang;
} morai_msgs__msg__VehicleSpec;

// Struct for a sequence of morai_msgs__msg__VehicleSpec.
typedef struct morai_msgs__msg__VehicleSpec__Sequence
{
  morai_msgs__msg__VehicleSpec * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__VehicleSpec__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__VEHICLE_SPEC__STRUCT_H_
