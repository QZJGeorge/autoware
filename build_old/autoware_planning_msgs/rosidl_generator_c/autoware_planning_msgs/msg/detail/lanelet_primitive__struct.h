// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_planning_msgs:msg/LaneletPrimitive.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__STRUCT_H_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'primitive_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LaneletPrimitive in the package autoware_planning_msgs.
typedef struct autoware_planning_msgs__msg__LaneletPrimitive
{
  int64_t id;
  rosidl_runtime_c__String primitive_type;
} autoware_planning_msgs__msg__LaneletPrimitive;

// Struct for a sequence of autoware_planning_msgs__msg__LaneletPrimitive.
typedef struct autoware_planning_msgs__msg__LaneletPrimitive__Sequence
{
  autoware_planning_msgs__msg__LaneletPrimitive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_planning_msgs__msg__LaneletPrimitive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__STRUCT_H_
