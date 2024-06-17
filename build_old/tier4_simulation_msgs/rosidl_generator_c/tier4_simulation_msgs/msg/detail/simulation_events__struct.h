// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_simulation_msgs:msg/SimulationEvents.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__STRUCT_H_
#define TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__STRUCT_H_

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
// Member 'fault_injection_events'
#include "tier4_simulation_msgs/msg/detail/fault_injection_event__struct.h"

/// Struct defined in msg/SimulationEvents in the package tier4_simulation_msgs.
typedef struct tier4_simulation_msgs__msg__SimulationEvents
{
  builtin_interfaces__msg__Time stamp;
  tier4_simulation_msgs__msg__FaultInjectionEvent__Sequence fault_injection_events;
} tier4_simulation_msgs__msg__SimulationEvents;

// Struct for a sequence of tier4_simulation_msgs__msg__SimulationEvents.
typedef struct tier4_simulation_msgs__msg__SimulationEvents__Sequence
{
  tier4_simulation_msgs__msg__SimulationEvents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_simulation_msgs__msg__SimulationEvents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SIMULATION_MSGS__MSG__DETAIL__SIMULATION_EVENTS__STRUCT_H_
