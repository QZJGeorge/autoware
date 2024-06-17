// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/SkidModel.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_MODEL__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__SKID_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rpm'
#include "morai_msgs/msg/detail/wheel_rpm__struct.h"
// Member 'torque'
#include "morai_msgs/msg/detail/wheel_torque__struct.h"

/// Struct defined in msg/SkidModel in the package morai_msgs.
typedef struct morai_msgs__msg__SkidModel
{
  morai_msgs__msg__WheelRpm rpm;
  morai_msgs__msg__WheelTorque torque;
} morai_msgs__msg__SkidModel;

// Struct for a sequence of morai_msgs__msg__SkidModel.
typedef struct morai_msgs__msg__SkidModel__Sequence
{
  morai_msgs__msg__SkidModel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__SkidModel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_MODEL__STRUCT_H_
