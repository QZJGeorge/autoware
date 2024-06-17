// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_H_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BOUNDING_BOX'.
enum
{
  tier4_perception_msgs__msg__Shape__BOUNDING_BOX = 0
};

/// Constant 'CYLINDER'.
enum
{
  tier4_perception_msgs__msg__Shape__CYLINDER = 1
};

/// Constant 'POLYGON'.
enum
{
  tier4_perception_msgs__msg__Shape__POLYGON = 2
};

// Include directives for member types
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'footprint'
#include "geometry_msgs/msg/detail/polygon__struct.h"

/// Struct defined in msg/Shape in the package tier4_perception_msgs.
typedef struct tier4_perception_msgs__msg__Shape
{
  uint8_t type;
  geometry_msgs__msg__Vector3 dimensions;
  geometry_msgs__msg__Polygon footprint;
} tier4_perception_msgs__msg__Shape;

// Struct for a sequence of tier4_perception_msgs__msg__Shape.
typedef struct tier4_perception_msgs__msg__Shape__Sequence
{
  tier4_perception_msgs__msg__Shape * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_perception_msgs__msg__Shape__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__STRUCT_H_
