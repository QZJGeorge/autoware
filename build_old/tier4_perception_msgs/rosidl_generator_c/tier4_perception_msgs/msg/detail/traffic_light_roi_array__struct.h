// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_perception_msgs:msg/TrafficLightRoiArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_H_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'rois'
#include "tier4_perception_msgs/msg/detail/traffic_light_roi__struct.h"

/// Struct defined in msg/TrafficLightRoiArray in the package tier4_perception_msgs.
typedef struct tier4_perception_msgs__msg__TrafficLightRoiArray
{
  std_msgs__msg__Header header;
  tier4_perception_msgs__msg__TrafficLightRoi__Sequence rois;
} tier4_perception_msgs__msg__TrafficLightRoiArray;

// Struct for a sequence of tier4_perception_msgs__msg__TrafficLightRoiArray.
typedef struct tier4_perception_msgs__msg__TrafficLightRoiArray__Sequence
{
  tier4_perception_msgs__msg__TrafficLightRoiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_perception_msgs__msg__TrafficLightRoiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__STRUCT_H_
