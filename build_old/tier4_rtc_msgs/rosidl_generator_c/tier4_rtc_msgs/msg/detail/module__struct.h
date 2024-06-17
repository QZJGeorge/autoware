// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_rtc_msgs:msg/Module.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__MODULE__STRUCT_H_
#define TIER4_RTC_MSGS__MSG__DETAIL__MODULE__STRUCT_H_

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
  tier4_rtc_msgs__msg__Module__NONE = 0
};

/// Constant 'LANE_CHANGE_LEFT'.
enum
{
  tier4_rtc_msgs__msg__Module__LANE_CHANGE_LEFT = 1
};

/// Constant 'LANE_CHANGE_RIGHT'.
enum
{
  tier4_rtc_msgs__msg__Module__LANE_CHANGE_RIGHT = 2
};

/// Constant 'AVOIDANCE_LEFT'.
enum
{
  tier4_rtc_msgs__msg__Module__AVOIDANCE_LEFT = 3
};

/// Constant 'AVOIDANCE_RIGHT'.
enum
{
  tier4_rtc_msgs__msg__Module__AVOIDANCE_RIGHT = 4
};

/// Constant 'GOAL_PLANNER'.
enum
{
  tier4_rtc_msgs__msg__Module__GOAL_PLANNER = 5
};

/// Constant 'START_PLANNER'.
enum
{
  tier4_rtc_msgs__msg__Module__START_PLANNER = 6
};

/// Constant 'TRAFFIC_LIGHT'.
enum
{
  tier4_rtc_msgs__msg__Module__TRAFFIC_LIGHT = 7
};

/// Constant 'INTERSECTION'.
enum
{
  tier4_rtc_msgs__msg__Module__INTERSECTION = 8
};

/// Constant 'INTERSECTION_OCCLUSION'.
enum
{
  tier4_rtc_msgs__msg__Module__INTERSECTION_OCCLUSION = 9
};

/// Constant 'CROSSWALK'.
enum
{
  tier4_rtc_msgs__msg__Module__CROSSWALK = 10
};

/// Constant 'BLIND_SPOT'.
enum
{
  tier4_rtc_msgs__msg__Module__BLIND_SPOT = 11
};

/// Constant 'DETECTION_AREA'.
enum
{
  tier4_rtc_msgs__msg__Module__DETECTION_AREA = 12
};

/// Constant 'NO_STOPPING_AREA'.
enum
{
  tier4_rtc_msgs__msg__Module__NO_STOPPING_AREA = 13
};

/// Constant 'OCCLUSION_SPOT'.
enum
{
  tier4_rtc_msgs__msg__Module__OCCLUSION_SPOT = 14
};

/// Constant 'EXT_REQUEST_LANE_CHANGE_LEFT'.
enum
{
  tier4_rtc_msgs__msg__Module__EXT_REQUEST_LANE_CHANGE_LEFT = 15
};

/// Constant 'EXT_REQUEST_LANE_CHANGE_RIGHT'.
enum
{
  tier4_rtc_msgs__msg__Module__EXT_REQUEST_LANE_CHANGE_RIGHT = 16
};

/// Constant 'AVOIDANCE_BY_LC_LEFT'.
enum
{
  tier4_rtc_msgs__msg__Module__AVOIDANCE_BY_LC_LEFT = 17
};

/// Constant 'AVOIDANCE_BY_LC_RIGHT'.
enum
{
  tier4_rtc_msgs__msg__Module__AVOIDANCE_BY_LC_RIGHT = 18
};

/// Struct defined in msg/Module in the package tier4_rtc_msgs.
typedef struct tier4_rtc_msgs__msg__Module
{
  uint8_t type;
} tier4_rtc_msgs__msg__Module;

// Struct for a sequence of tier4_rtc_msgs__msg__Module.
typedef struct tier4_rtc_msgs__msg__Module__Sequence
{
  tier4_rtc_msgs__msg__Module * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_rtc_msgs__msg__Module__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__MODULE__STRUCT_H_
