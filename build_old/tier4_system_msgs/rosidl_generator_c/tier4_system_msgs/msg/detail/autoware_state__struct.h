// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_system_msgs:msg/AutowareState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__STRUCT_H_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INITIALIZING_VEHICLE'.
static const char * const tier4_system_msgs__msg__AutowareState__INITIALIZING_VEHICLE = "InitializingVehicle";

/// Constant 'WAITING_FOR_ROUTE'.
static const char * const tier4_system_msgs__msg__AutowareState__WAITING_FOR_ROUTE = "WaitingForRoute";

/// Constant 'PLANNING'.
static const char * const tier4_system_msgs__msg__AutowareState__PLANNING = "Planning";

/// Constant 'WAITING_FOR_ENGAGE'.
static const char * const tier4_system_msgs__msg__AutowareState__WAITING_FOR_ENGAGE = "WaitingForEngage";

/// Constant 'DRIVING'.
static const char * const tier4_system_msgs__msg__AutowareState__DRIVING = "Driving";

/// Constant 'ARRIVAL_GOAL'.
static const char * const tier4_system_msgs__msg__AutowareState__ARRIVAL_GOAL = "ArrivedGoal";

/// Constant 'EMERGENCY'.
static const char * const tier4_system_msgs__msg__AutowareState__EMERGENCY = "Emergency";

/// Constant 'FINALIZING'.
static const char * const tier4_system_msgs__msg__AutowareState__FINALIZING = "Finalizing";

// Include directives for member types
// Member 'state'
// Member 'msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AutowareState in the package tier4_system_msgs.
typedef struct tier4_system_msgs__msg__AutowareState
{
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String msg;
} tier4_system_msgs__msg__AutowareState;

// Struct for a sequence of tier4_system_msgs__msg__AutowareState.
typedef struct tier4_system_msgs__msg__AutowareState__Sequence
{
  tier4_system_msgs__msg__AutowareState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__msg__AutowareState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__STRUCT_H_
