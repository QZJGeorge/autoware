// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/SkidCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'skid_model_ctrl'
#include "morai_msgs/msg/detail/skid_model__struct.h"
// Member 'velocity_ctrl'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/SkidCtrlCmd in the package morai_msgs.
typedef struct morai_msgs__msg__SkidCtrlCmd
{
  int32_t cmd_type;
  morai_msgs__msg__SkidModel skid_model_ctrl;
  geometry_msgs__msg__Twist velocity_ctrl;
} morai_msgs__msg__SkidCtrlCmd;

// Struct for a sequence of morai_msgs__msg__SkidCtrlCmd.
typedef struct morai_msgs__msg__SkidCtrlCmd__Sequence
{
  morai_msgs__msg__SkidCtrlCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__SkidCtrlCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__STRUCT_H_
