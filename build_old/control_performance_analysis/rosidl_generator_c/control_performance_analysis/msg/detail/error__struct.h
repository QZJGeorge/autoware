// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_performance_analysis:msg/Error.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__STRUCT_H_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Error in the package control_performance_analysis.
typedef struct control_performance_analysis__msg__Error
{
  double lateral_error;
  double lateral_error_velocity;
  double lateral_error_acceleration;
  double longitudinal_error;
  double longitudinal_error_velocity;
  double longitudinal_error_acceleration;
  double heading_error;
  double heading_error_velocity;
  double control_effort_energy;
  double error_energy;
  double value_approximation;
  double curvature_estimate;
  double curvature_estimate_pp;
  double vehicle_velocity_error;
  double tracking_curvature_discontinuity_ability;
} control_performance_analysis__msg__Error;

// Struct for a sequence of control_performance_analysis__msg__Error.
typedef struct control_performance_analysis__msg__Error__Sequence
{
  control_performance_analysis__msg__Error * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_performance_analysis__msg__Error__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__ERROR__STRUCT_H_
