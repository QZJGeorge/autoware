// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/MapSpec.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MAP_SPEC__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__MAP_SPEC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'utm_offset'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'ellipse'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MapSpec in the package morai_msgs.
typedef struct morai_msgs__msg__MapSpec
{
  int32_t plane_coordinate_system;
  int32_t utm_num;
  geometry_msgs__msg__Vector3 utm_offset;
  rosidl_runtime_c__String ellipse;
  double central_latitude;
  double central_meridian;
  double scale_factor;
  double false_easting;
  double false_northing;
} morai_msgs__msg__MapSpec;

// Struct for a sequence of morai_msgs__msg__MapSpec.
typedef struct morai_msgs__msg__MapSpec__Sequence
{
  morai_msgs__msg__MapSpec * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__MapSpec__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__MAP_SPEC__STRUCT_H_
