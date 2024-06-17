// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_KINEMATICS__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel__struct.h"
// Member 'predicted_paths'
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_path__struct.h"

/// Struct defined in msg/DynamicObjectKinematics in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__DynamicObjectKinematics
{
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
  geometry_msgs__msg__Accel accel;
  autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence predicted_paths;
} autoware_adapi_v1_msgs__msg__DynamicObjectKinematics;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__DynamicObjectKinematics.
typedef struct autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence
{
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_KINEMATICS__STRUCT_H_
