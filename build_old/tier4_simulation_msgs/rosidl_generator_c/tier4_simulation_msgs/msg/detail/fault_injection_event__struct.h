// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_simulation_msgs:msg/FaultInjectionEvent.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__STRUCT_H_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
enum
{
  tier4_simulation_msgs__msg__FaultInjectionEvent__OK = 0
};

/// Constant 'WARN'.
enum
{
  tier4_simulation_msgs__msg__FaultInjectionEvent__WARN = 1
};

/// Constant 'ERROR'.
enum
{
  tier4_simulation_msgs__msg__FaultInjectionEvent__ERROR = 2
};

/// Constant 'STALE'.
enum
{
  tier4_simulation_msgs__msg__FaultInjectionEvent__STALE = 3
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FaultInjectionEvent in the package tier4_simulation_msgs.
typedef struct tier4_simulation_msgs__msg__FaultInjectionEvent
{
  int8_t level;
  rosidl_runtime_c__String name;
} tier4_simulation_msgs__msg__FaultInjectionEvent;

// Struct for a sequence of tier4_simulation_msgs__msg__FaultInjectionEvent.
typedef struct tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence
{
  tier4_simulation_msgs__msg__FaultInjectionEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__FAULT_INJECTION_EVENT__STRUCT_H_
