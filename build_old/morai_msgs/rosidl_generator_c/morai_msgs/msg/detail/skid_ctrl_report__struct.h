// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/SkidCtrlReport.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'acceleration'
// Member 'position'
// Member 'velocity'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'skid_model_report'
#include "morai_msgs/msg/detail/skid_model__struct.h"

/// Struct defined in msg/SkidCtrlReport in the package morai_msgs.
typedef struct morai_msgs__msg__SkidCtrlReport
{
  std_msgs__msg__Header header;
  int32_t ctrl_mode;
  geometry_msgs__msg__Vector3 acceleration;
  geometry_msgs__msg__Vector3 position;
  geometry_msgs__msg__Vector3 velocity;
  geometry_msgs__msg__Vector3 angular_velocity;
  float heading;
  int32_t cmd_type;
  morai_msgs__msg__SkidModel skid_model_report;
} morai_msgs__msg__SkidCtrlReport;

// Struct for a sequence of morai_msgs__msg__SkidCtrlReport.
typedef struct morai_msgs__msg__SkidCtrlReport__Sequence
{
  morai_msgs__msg__SkidCtrlReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__SkidCtrlReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__STRUCT_H_
