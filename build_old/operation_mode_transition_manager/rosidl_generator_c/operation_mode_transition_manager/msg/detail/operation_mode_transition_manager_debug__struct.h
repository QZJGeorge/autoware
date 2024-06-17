// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
// generated code does not contain a copyright notice

#ifndef OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__STRUCT_H_
#define OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__STRUCT_H_

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
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OperationModeTransitionManagerDebug in the package operation_mode_transition_manager.
typedef struct operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug
{
  builtin_interfaces__msg__Time stamp;
  /// states
  rosidl_runtime_c__String status;
  bool in_autoware_control;
  bool in_transition;
  /// flags for engage permission
  bool is_all_ok;
  bool engage_allowed_for_stopped_vehicle;
  bool trajectory_available_ok;
  bool lateral_deviation_ok;
  bool yaw_deviation_ok;
  bool speed_upper_deviation_ok;
  bool speed_lower_deviation_ok;
  bool stop_ok;
  bool large_acceleration_ok;
  bool large_lateral_acceleration_ok;
  bool large_lateral_acceleration_diff_ok;
  /// values
  double current_speed;
  double target_control_speed;
  double target_planning_speed;
  double target_control_acceleration;
  double lateral_acceleration;
  double lateral_acceleration_deviation;
  double lateral_deviation;
  double yaw_deviation;
  double speed_deviation;
} operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug;

// Struct for a sequence of operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug.
typedef struct operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence
{
  operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} operation_mode_transition_manager__msg__OperationModeTransitionManagerDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPERATION_MODE_TRANSITION_MANAGER__MSG__DETAIL__OPERATION_MODE_TRANSITION_MANAGER_DEBUG__STRUCT_H_
