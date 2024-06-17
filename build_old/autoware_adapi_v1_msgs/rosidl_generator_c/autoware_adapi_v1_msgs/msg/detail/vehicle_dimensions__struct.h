// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/VehicleDimensions.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'footprint'
#include "geometry_msgs/msg/detail/polygon__struct.h"

/// Struct defined in msg/VehicleDimensions in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__VehicleDimensions
{
  float wheel_radius;
  float wheel_width;
  float wheel_base;
  float wheel_tread;
  float front_overhang;
  float rear_overhang;
  float left_overhang;
  float right_overhang;
  float height;
  geometry_msgs__msg__Polygon footprint;
} autoware_adapi_v1_msgs__msg__VehicleDimensions;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__VehicleDimensions.
typedef struct autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence
{
  autoware_adapi_v1_msgs__msg__VehicleDimensions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__VehicleDimensions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__STRUCT_H_
