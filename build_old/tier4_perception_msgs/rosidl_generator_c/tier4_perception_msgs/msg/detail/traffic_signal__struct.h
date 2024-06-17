// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_H_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'elements'
#include "tier4_perception_msgs/msg/detail/traffic_light_element__struct.h"

/// Struct defined in msg/TrafficSignal in the package tier4_perception_msgs.
typedef struct tier4_perception_msgs__msg__TrafficSignal
{
  int64_t traffic_light_id;
  tier4_perception_msgs__msg__TrafficLightElement__Sequence elements;
} tier4_perception_msgs__msg__TrafficSignal;

// Struct for a sequence of tier4_perception_msgs__msg__TrafficSignal.
typedef struct tier4_perception_msgs__msg__TrafficSignal__Sequence
{
  tier4_perception_msgs__msg__TrafficSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_perception_msgs__msg__TrafficSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_H_
