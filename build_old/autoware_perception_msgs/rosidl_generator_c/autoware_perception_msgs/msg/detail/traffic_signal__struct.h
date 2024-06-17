// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_H_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_H_

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
#include "autoware_perception_msgs/msg/detail/traffic_signal_element__struct.h"

/// Struct defined in msg/TrafficSignal in the package autoware_perception_msgs.
typedef struct autoware_perception_msgs__msg__TrafficSignal
{
  int64_t traffic_signal_id;
  autoware_perception_msgs__msg__TrafficSignalElement__Sequence elements;
} autoware_perception_msgs__msg__TrafficSignal;

// Struct for a sequence of autoware_perception_msgs__msg__TrafficSignal.
typedef struct autoware_perception_msgs__msg__TrafficSignal__Sequence
{
  autoware_perception_msgs__msg__TrafficSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_perception_msgs__msg__TrafficSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_H_
