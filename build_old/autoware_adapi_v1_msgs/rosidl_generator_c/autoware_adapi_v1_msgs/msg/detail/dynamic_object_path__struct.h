// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObjectPath.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_PATH__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'time_step'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/DynamicObjectPath in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__DynamicObjectPath
{
  geometry_msgs__msg__Pose__Sequence path;
  builtin_interfaces__msg__Duration time_step;
  double confidence;
} autoware_adapi_v1_msgs__msg__DynamicObjectPath;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__DynamicObjectPath.
typedef struct autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence
{
  autoware_adapi_v1_msgs__msg__DynamicObjectPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_PATH__STRUCT_H_
