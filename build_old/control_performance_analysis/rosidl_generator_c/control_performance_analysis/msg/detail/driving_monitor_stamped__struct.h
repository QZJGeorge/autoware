// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__STRUCT_H_
#define CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'longitudinal_acceleration'
// Member 'longitudinal_jerk'
// Member 'lateral_acceleration'
// Member 'lateral_jerk'
// Member 'desired_steering_angle'
// Member 'controller_processing_time'
#include "control_performance_analysis/msg/detail/float_stamped__struct.h"

/// Struct defined in msg/DrivingMonitorStamped in the package control_performance_analysis.
typedef struct control_performance_analysis__msg__DrivingMonitorStamped
{
  control_performance_analysis__msg__FloatStamped longitudinal_acceleration;
  control_performance_analysis__msg__FloatStamped longitudinal_jerk;
  control_performance_analysis__msg__FloatStamped lateral_acceleration;
  control_performance_analysis__msg__FloatStamped lateral_jerk;
  control_performance_analysis__msg__FloatStamped desired_steering_angle;
  control_performance_analysis__msg__FloatStamped controller_processing_time;
} control_performance_analysis__msg__DrivingMonitorStamped;

// Struct for a sequence of control_performance_analysis__msg__DrivingMonitorStamped.
typedef struct control_performance_analysis__msg__DrivingMonitorStamped__Sequence
{
  control_performance_analysis__msg__DrivingMonitorStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_performance_analysis__msg__DrivingMonitorStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_PERFORMANCE_ANALYSIS__MSG__DETAIL__DRIVING_MONITOR_STAMPED__STRUCT_H_
