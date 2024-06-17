// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planning_validator:msg/PlanningValidatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__STRUCT_H_
#define PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__STRUCT_H_

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
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/PlanningValidatorStatus in the package planning_validator.
typedef struct planning_validator__msg__PlanningValidatorStatus
{
  builtin_interfaces__msg__Time stamp;
  /// states
  bool is_valid_finite_value;
  bool is_valid_interval;
  bool is_valid_relative_angle;
  bool is_valid_curvature;
  bool is_valid_lateral_acc;
  bool is_valid_longitudinal_max_acc;
  bool is_valid_longitudinal_min_acc;
  bool is_valid_steering;
  bool is_valid_steering_rate;
  bool is_valid_velocity_deviation;
  bool is_valid_distance_deviation;
  /// values
  double max_interval_distance;
  double max_relative_angle;
  double max_curvature;
  double max_lateral_acc;
  double max_longitudinal_acc;
  double min_longitudinal_acc;
  double max_steering;
  double max_steering_rate;
  double velocity_deviation;
  double distance_deviation;
  int64_t invalid_count;
} planning_validator__msg__PlanningValidatorStatus;

// Struct for a sequence of planning_validator__msg__PlanningValidatorStatus.
typedef struct planning_validator__msg__PlanningValidatorStatus__Sequence
{
  planning_validator__msg__PlanningValidatorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planning_validator__msg__PlanningValidatorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNING_VALIDATOR__MSG__DETAIL__PLANNING_VALIDATOR_STATUS__STRUCT_H_
