// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/PathChangeModuleId.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  tier4_planning_msgs__msg__PathChangeModuleId__NONE = 0l
};

/// Constant 'AVOIDANCE'.
enum
{
  tier4_planning_msgs__msg__PathChangeModuleId__AVOIDANCE = 1l
};

/// Constant 'LANE_CHANGE'.
enum
{
  tier4_planning_msgs__msg__PathChangeModuleId__LANE_CHANGE = 2l
};

/// Constant 'FORCE_LANE_CHANGE'.
enum
{
  tier4_planning_msgs__msg__PathChangeModuleId__FORCE_LANE_CHANGE = 3l
};

/// Constant 'GOAL_PLANNER'.
enum
{
  tier4_planning_msgs__msg__PathChangeModuleId__GOAL_PLANNER = 4l
};

/// Constant 'START_PLANNER'.
enum
{
  tier4_planning_msgs__msg__PathChangeModuleId__START_PLANNER = 5l
};

/// Struct defined in msg/PathChangeModuleId in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__PathChangeModuleId
{
  int32_t type;
} tier4_planning_msgs__msg__PathChangeModuleId;

// Struct for a sequence of tier4_planning_msgs__msg__PathChangeModuleId.
typedef struct tier4_planning_msgs__msg__PathChangeModuleId__Sequence
{
  tier4_planning_msgs__msg__PathChangeModuleId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__PathChangeModuleId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__STRUCT_H_
