// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/Scenario.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__SCENARIO__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__SCENARIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EMPTY'.
static const char * const tier4_planning_msgs__msg__Scenario__EMPTY = "Empty";

/// Constant 'LANEDRIVING'.
static const char * const tier4_planning_msgs__msg__Scenario__LANEDRIVING = "LaneDriving";

/// Constant 'PARKING'.
static const char * const tier4_planning_msgs__msg__Scenario__PARKING = "Parking";

// Include directives for member types
// Member 'current_scenario'
// Member 'activating_scenarios'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Scenario in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__Scenario
{
  rosidl_runtime_c__String current_scenario;
  rosidl_runtime_c__String__Sequence activating_scenarios;
} tier4_planning_msgs__msg__Scenario;

// Struct for a sequence of tier4_planning_msgs__msg__Scenario.
typedef struct tier4_planning_msgs__msg__Scenario__Sequence
{
  tier4_planning_msgs__msg__Scenario * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__Scenario__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__SCENARIO__STRUCT_H_
