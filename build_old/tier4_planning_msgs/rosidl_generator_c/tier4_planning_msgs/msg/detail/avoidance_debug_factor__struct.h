// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugFactor.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_FACTOR__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_FACTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OBJECT_IS_NOT_TYPE'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__OBJECT_IS_NOT_TYPE = "ObjectIsNotType";

/// Constant 'OBJECT_IS_BEHIND_THRESHOLD'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__OBJECT_IS_BEHIND_THRESHOLD = "ObjectIsBehindThreshold";

/// Constant 'OBJECT_IS_IN_FRONT_THRESHOLD'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__OBJECT_IS_IN_FRONT_THRESHOLD = "ObjectIsInFrontThreshold";

/// Constant 'OBJECT_BEHIND_PATH_GOAL'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__OBJECT_BEHIND_PATH_GOAL = "ObjectBehindPathGoal";

/// Constant 'NOT_PARKING_OBJECT'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__NOT_PARKING_OBJECT = "NotParkingObject";

/// Constant 'MOVING_OBJECT'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__MOVING_OBJECT = "MovingObject";

/// Constant 'SAME_DIRECTION_SHIFT'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__SAME_DIRECTION_SHIFT = "SameDirectionShift";

/// Constant 'TOO_NEAR_TO_CENTERLINE'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__TOO_NEAR_TO_CENTERLINE = "TooNearToCenterLine";

/// Constant 'INSUFFICIENT_LATERAL_MARGIN'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__INSUFFICIENT_LATERAL_MARGIN = "InsufficientLateralMargin";

/// Constant 'REMAINING_DISTANCE_LESS_THAN_ZERO'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__REMAINING_DISTANCE_LESS_THAN_ZERO = "RemainingDistanceLessThanZero";

/// Constant 'TOO_LARGE_JERK'.
static const char * const tier4_planning_msgs__msg__AvoidanceDebugFactor__TOO_LARGE_JERK = "TooLargeJerk";

/// Struct defined in msg/AvoidanceDebugFactor in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__AvoidanceDebugFactor
{
  uint8_t structure_needs_at_least_one_member;
} tier4_planning_msgs__msg__AvoidanceDebugFactor;

// Struct for a sequence of tier4_planning_msgs__msg__AvoidanceDebugFactor.
typedef struct tier4_planning_msgs__msg__AvoidanceDebugFactor__Sequence
{
  tier4_planning_msgs__msg__AvoidanceDebugFactor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__AvoidanceDebugFactor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_FACTOR__STRUCT_H_
