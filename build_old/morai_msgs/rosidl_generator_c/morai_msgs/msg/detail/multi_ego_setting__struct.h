// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/MultiEgoSetting.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ego_index'
// Member 'global_position_x'
// Member 'global_position_y'
// Member 'global_position_z'
// Member 'global_roll'
// Member 'global_pitch'
// Member 'global_yaw'
// Member 'velocity'
// Member 'gear'
// Member 'ctrl_mode'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MultiEgoSetting in the package morai_msgs.
typedef struct morai_msgs__msg__MultiEgoSetting
{
  int32_t number_of_ego_vehicle;
  int32_t camera_index;
  rosidl_runtime_c__int32__Sequence ego_index;
  rosidl_runtime_c__double__Sequence global_position_x;
  rosidl_runtime_c__double__Sequence global_position_y;
  rosidl_runtime_c__double__Sequence global_position_z;
  rosidl_runtime_c__float__Sequence global_roll;
  rosidl_runtime_c__float__Sequence global_pitch;
  rosidl_runtime_c__float__Sequence global_yaw;
  rosidl_runtime_c__float__Sequence velocity;
  rosidl_runtime_c__int8__Sequence gear;
  rosidl_runtime_c__int8__Sequence ctrl_mode;
} morai_msgs__msg__MultiEgoSetting;

// Struct for a sequence of morai_msgs__msg__MultiEgoSetting.
typedef struct morai_msgs__msg__MultiEgoSetting__Sequence
{
  morai_msgs__msg__MultiEgoSetting * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__MultiEgoSetting__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__STRUCT_H_
