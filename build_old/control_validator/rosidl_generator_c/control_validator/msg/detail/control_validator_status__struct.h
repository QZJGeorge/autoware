// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_validator:msg/ControlValidatorStatus.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__STRUCT_H_
#define CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__STRUCT_H_

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

/// Struct defined in msg/ControlValidatorStatus in the package control_validator.
typedef struct control_validator__msg__ControlValidatorStatus
{
  builtin_interfaces__msg__Time stamp;
  /// states
  bool is_valid_max_distance_deviation;
  /// values
  double max_distance_deviation;
  int64_t invalid_count;
} control_validator__msg__ControlValidatorStatus;

// Struct for a sequence of control_validator__msg__ControlValidatorStatus.
typedef struct control_validator__msg__ControlValidatorStatus__Sequence
{
  control_validator__msg__ControlValidatorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_validator__msg__ControlValidatorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_VALIDATOR__MSG__DETAIL__CONTROL_VALIDATOR_STATUS__STRUCT_H_
