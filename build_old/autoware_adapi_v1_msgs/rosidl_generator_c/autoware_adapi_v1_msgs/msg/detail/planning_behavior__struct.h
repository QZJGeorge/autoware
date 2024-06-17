// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/PlanningBehavior.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__PLANNING_BEHAVIOR__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__PLANNING_BEHAVIOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AVOIDANCE'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__AVOIDANCE = "avoidance";

/// Constant 'CROSSWALK'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__CROSSWALK = "crosswalk";

/// Constant 'EMERGENCY_OPERATION'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__EMERGENCY_OPERATION = "emergency-operation";

/// Constant 'INTERSECTION'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__INTERSECTION = "intersection";

/// Constant 'LANE_CHANGE'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__LANE_CHANGE = "lane-change";

/// Constant 'MERGE'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__MERGE = "merge";

/// Constant 'NO_DRIVABLE_LANE'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__NO_DRIVABLE_LANE = "no-drivable-lane";

/// Constant 'NO_STOPPING_AREA'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__NO_STOPPING_AREA = "no-stopping-area";

/// Constant 'REAR_CHECK'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__REAR_CHECK = "rear-check";

/// Constant 'ROUTE_OBSTACLE'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__ROUTE_OBSTACLE = "route-obstacle";

/// Constant 'SIDEWALK'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__SIDEWALK = "sidewalk";

/// Constant 'STOP_SIGN'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__STOP_SIGN = "stop-sign";

/// Constant 'SURROUNDING_OBSTACLE'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__SURROUNDING_OBSTACLE = "surrounding-obstacle";

/// Constant 'TRAFFIC_SIGNAL'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__TRAFFIC_SIGNAL = "traffic-signal";

/// Constant 'USER_DEFINED_DETECTION_AREA'.
static const char * const autoware_adapi_v1_msgs__msg__PlanningBehavior__USER_DEFINED_DETECTION_AREA = "user-defined-attention-area";

/// Struct defined in msg/PlanningBehavior in the package autoware_adapi_v1_msgs.
/**
  * These constants are used in the behavior field of the SteeringFactor/VelocityFactor.
 */
typedef struct autoware_adapi_v1_msgs__msg__PlanningBehavior
{
  uint8_t structure_needs_at_least_one_member;
} autoware_adapi_v1_msgs__msg__PlanningBehavior;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__PlanningBehavior.
typedef struct autoware_adapi_v1_msgs__msg__PlanningBehavior__Sequence
{
  autoware_adapi_v1_msgs__msg__PlanningBehavior * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__PlanningBehavior__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__PLANNING_BEHAVIOR__STRUCT_H_
