// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vehicle_cmd_gate:msg/IsFilterActivated.idl
// generated code does not contain a copyright notice

#ifndef VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__STRUCT_H_
#define VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__STRUCT_H_

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

/// Struct defined in msg/IsFilterActivated in the package vehicle_cmd_gate.
typedef struct vehicle_cmd_gate__msg__IsFilterActivated
{
  builtin_interfaces__msg__Time stamp;
  bool is_activated;
  /// for additional information
  bool is_activated_on_steering;
  bool is_activated_on_steering_rate;
  bool is_activated_on_speed;
  bool is_activated_on_acceleration;
  bool is_activated_on_jerk;
} vehicle_cmd_gate__msg__IsFilterActivated;

// Struct for a sequence of vehicle_cmd_gate__msg__IsFilterActivated.
typedef struct vehicle_cmd_gate__msg__IsFilterActivated__Sequence
{
  vehicle_cmd_gate__msg__IsFilterActivated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vehicle_cmd_gate__msg__IsFilterActivated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VEHICLE_CMD_GATE__MSG__DETAIL__IS_FILTER_ACTIVATED__STRUCT_H_
