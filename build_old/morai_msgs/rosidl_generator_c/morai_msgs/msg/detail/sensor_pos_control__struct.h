// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/SensorPosControl.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor_index'
// Member 'pose_x'
// Member 'pose_y'
// Member 'pose_z'
// Member 'roll'
// Member 'pitch'
// Member 'yaw'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SensorPosControl in the package morai_msgs.
typedef struct morai_msgs__msg__SensorPosControl
{
  rosidl_runtime_c__int16__Sequence sensor_index;
  rosidl_runtime_c__float__Sequence pose_x;
  rosidl_runtime_c__float__Sequence pose_y;
  rosidl_runtime_c__float__Sequence pose_z;
  rosidl_runtime_c__float__Sequence roll;
  rosidl_runtime_c__float__Sequence pitch;
  rosidl_runtime_c__float__Sequence yaw;
} morai_msgs__msg__SensorPosControl;

// Struct for a sequence of morai_msgs__msg__SensorPosControl.
typedef struct morai_msgs__msg__SensorPosControl__Sequence
{
  morai_msgs__msg__SensorPosControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__SensorPosControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__SENSOR_POS_CONTROL__STRUCT_H_
