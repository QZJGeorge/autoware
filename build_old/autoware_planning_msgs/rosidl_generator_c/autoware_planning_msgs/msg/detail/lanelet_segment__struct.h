// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_planning_msgs:msg/LaneletSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_H_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'preferred_primitive'
// Member 'primitives'
#include "autoware_planning_msgs/msg/detail/lanelet_primitive__struct.h"

/// Struct defined in msg/LaneletSegment in the package autoware_planning_msgs.
typedef struct autoware_planning_msgs__msg__LaneletSegment
{
  autoware_planning_msgs__msg__LaneletPrimitive preferred_primitive;
  autoware_planning_msgs__msg__LaneletPrimitive__Sequence primitives;
} autoware_planning_msgs__msg__LaneletSegment;

// Struct for a sequence of autoware_planning_msgs__msg__LaneletSegment.
typedef struct autoware_planning_msgs__msg__LaneletSegment__Sequence
{
  autoware_planning_msgs__msg__LaneletSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_planning_msgs__msg__LaneletSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_SEGMENT__STRUCT_H_
