// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_control_msgs:msg/Longitudinal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL__STRUCT_H_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// Member 'control_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Longitudinal in the package autoware_control_msgs.
/**
  * Longitudinal control message
  *
  * Values are in the base_link frame in X axis
  *
  * Positive values represent forward motion (+X)
  * Negative values represent backward motion (-X)
 */
typedef struct autoware_control_msgs__msg__Longitudinal
{
  /// Time this message was created
  builtin_interfaces__msg__Time stamp;
  /// Time this configuration state is expected to be achieved in (optional)
  builtin_interfaces__msg__Time control_time;
  /// Desired vehicle velocity in in m/s
  float velocity;
  /// Desired vehicle acceleration in m/s²
  float acceleration;
  /// Desired vehicle jerk in m/s³
  float jerk;
  /// Controller has filled in the acceleration value
  bool is_defined_acceleration;
  /// Controller has filled in the jerk value
  bool is_defined_jerk;
} autoware_control_msgs__msg__Longitudinal;

// Struct for a sequence of autoware_control_msgs__msg__Longitudinal.
typedef struct autoware_control_msgs__msg__Longitudinal__Sequence
{
  autoware_control_msgs__msg__Longitudinal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_control_msgs__msg__Longitudinal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL__STRUCT_H_
