// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_system_msgs:msg/OperationModeAvailability.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__STRUCT_H_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__STRUCT_H_

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

/// Struct defined in msg/OperationModeAvailability in the package tier4_system_msgs.
typedef struct tier4_system_msgs__msg__OperationModeAvailability
{
  builtin_interfaces__msg__Time stamp;
  bool stop;
  bool autonomous;
  bool local;
  bool remote;
  bool emergency_stop;
  bool comfortable_stop;
  bool pull_over;
} tier4_system_msgs__msg__OperationModeAvailability;

// Struct for a sequence of tier4_system_msgs__msg__OperationModeAvailability.
typedef struct tier4_system_msgs__msg__OperationModeAvailability__Sequence
{
  tier4_system_msgs__msg__OperationModeAvailability * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__msg__OperationModeAvailability__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__OPERATION_MODE_AVAILABILITY__STRUCT_H_
