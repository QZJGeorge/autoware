// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/StopReason.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INTERSECTION'.
static const char * const tier4_planning_msgs__msg__StopReason__INTERSECTION = "Intersection";

/// Constant 'MERGE_FROM_PRIVATE_ROAD'.
static const char * const tier4_planning_msgs__msg__StopReason__MERGE_FROM_PRIVATE_ROAD = "MergeFromPrivateRoad";

/// Constant 'CROSSWALK'.
static const char * const tier4_planning_msgs__msg__StopReason__CROSSWALK = "Crosswalk";

/// Constant 'WALKWAY'.
static const char * const tier4_planning_msgs__msg__StopReason__WALKWAY = "Walkway";

/// Constant 'STOP_LINE'.
static const char * const tier4_planning_msgs__msg__StopReason__STOP_LINE = "StopLine";

/// Constant 'DETECTION_AREA'.
static const char * const tier4_planning_msgs__msg__StopReason__DETECTION_AREA = "DetectionArea";

/// Constant 'NO_STOPPING_AREA'.
static const char * const tier4_planning_msgs__msg__StopReason__NO_STOPPING_AREA = "NoStoppingArea";

/// Constant 'TRAFFIC_LIGHT'.
static const char * const tier4_planning_msgs__msg__StopReason__TRAFFIC_LIGHT = "TrafficLight";

/// Constant 'OBSTACLE_STOP'.
static const char * const tier4_planning_msgs__msg__StopReason__OBSTACLE_STOP = "ObstacleStop";

/// Constant 'SURROUND_OBSTACLE_CHECK'.
static const char * const tier4_planning_msgs__msg__StopReason__SURROUND_OBSTACLE_CHECK = "SurroundObstacleCheck";

/// Constant 'BLIND_SPOT'.
static const char * const tier4_planning_msgs__msg__StopReason__BLIND_SPOT = "BlindSpot";

/// Constant 'BLOCKED_BY_OBSTACLE'.
static const char * const tier4_planning_msgs__msg__StopReason__BLOCKED_BY_OBSTACLE = "BlockedByObstacle";

/// Constant 'STOPPING_LANE_CHANGE'.
static const char * const tier4_planning_msgs__msg__StopReason__STOPPING_LANE_CHANGE = "StoppingLaneChange";

/// Constant 'REMOTE_EMERGENCY_STOP'.
static const char * const tier4_planning_msgs__msg__StopReason__REMOTE_EMERGENCY_STOP = "RemoteEmergencyStop";

/// Constant 'VIRTUAL_TRAFFIC_LIGHT'.
static const char * const tier4_planning_msgs__msg__StopReason__VIRTUAL_TRAFFIC_LIGHT = "VirtualTrafficLight";

/// Constant 'OUT_OF_LANE'.
static const char * const tier4_planning_msgs__msg__StopReason__OUT_OF_LANE = "OutOfLane";

/// Constant 'NO_DRIVABLE_LANE'.
static const char * const tier4_planning_msgs__msg__StopReason__NO_DRIVABLE_LANE = "NoDrivableLane";

/// Constant 'AVOIDANCE'.
static const char * const tier4_planning_msgs__msg__StopReason__AVOIDANCE = "Avoidance";

/// Constant 'AVOIDANCE_BY_LANE_CHANGE'.
static const char * const tier4_planning_msgs__msg__StopReason__AVOIDANCE_BY_LANE_CHANGE = "AvoidanceByLaneChange";

/// Constant 'EXTERNAL_LANE_CHANGE'.
static const char * const tier4_planning_msgs__msg__StopReason__EXTERNAL_LANE_CHANGE = "ExternalLaneChange";

/// Constant 'LANE_CHANGE'.
static const char * const tier4_planning_msgs__msg__StopReason__LANE_CHANGE = "LaneChange";

/// Constant 'GOAL_PLANNER'.
static const char * const tier4_planning_msgs__msg__StopReason__GOAL_PLANNER = "GoalPlanner";

/// Constant 'START_PLANNER'.
static const char * const tier4_planning_msgs__msg__StopReason__START_PLANNER = "StartPlanner";

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"
// Member 'stop_factors'
#include "tier4_planning_msgs/msg/detail/stop_factor__struct.h"

/// Struct defined in msg/StopReason in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__StopReason
{
  rosidl_runtime_c__String reason;
  tier4_planning_msgs__msg__StopFactor__Sequence stop_factors;
} tier4_planning_msgs__msg__StopReason;

// Struct for a sequence of tier4_planning_msgs__msg__StopReason.
typedef struct tier4_planning_msgs__msg__StopReason__Sequence
{
  tier4_planning_msgs__msg__StopReason * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__StopReason__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__STOP_REASON__STRUCT_H_
