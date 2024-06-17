// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_perception_msgs:msg/TrafficLightElement.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ELEMENT__STRUCT_H_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ELEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RED'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__RED = 1
};

/// Constant 'AMBER'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__AMBER = 2
};

/// Constant 'GREEN'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__GREEN = 3
};

/// Constant 'WHITE'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__WHITE = 4
};

/// Constant 'CIRCLE'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__CIRCLE = 5
};

/// Constant 'LEFT_ARROW'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__LEFT_ARROW = 6
};

/// Constant 'RIGHT_ARROW'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__RIGHT_ARROW = 7
};

/// Constant 'UP_ARROW'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__UP_ARROW = 8
};

/// Constant 'UP_LEFT_ARROW'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__UP_LEFT_ARROW = 9
};

/// Constant 'UP_RIGHT_ARROW'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__UP_RIGHT_ARROW = 10
};

/// Constant 'DOWN_ARROW'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__DOWN_ARROW = 11
};

/// Constant 'DOWN_LEFT_ARROW'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__DOWN_LEFT_ARROW = 12
};

/// Constant 'DOWN_RIGHT_ARROW'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__DOWN_RIGHT_ARROW = 13
};

/// Constant 'CROSS'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__CROSS = 14
};

/// Constant 'SOLID_OFF'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__SOLID_OFF = 15
};

/// Constant 'SOLID_ON'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__SOLID_ON = 16
};

/// Constant 'FLASHING'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__FLASHING = 17
};

/// Constant 'UNKNOWN'.
enum
{
  tier4_perception_msgs__msg__TrafficLightElement__UNKNOWN = 18
};

/// Struct defined in msg/TrafficLightElement in the package tier4_perception_msgs.
typedef struct tier4_perception_msgs__msg__TrafficLightElement
{
  uint8_t color;
  uint8_t shape;
  uint8_t status;
  double confidence;
} tier4_perception_msgs__msg__TrafficLightElement;

// Struct for a sequence of tier4_perception_msgs__msg__TrafficLightElement.
typedef struct tier4_perception_msgs__msg__TrafficLightElement__Sequence
{
  tier4_perception_msgs__msg__TrafficLightElement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_perception_msgs__msg__TrafficLightElement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ELEMENT__STRUCT_H_
