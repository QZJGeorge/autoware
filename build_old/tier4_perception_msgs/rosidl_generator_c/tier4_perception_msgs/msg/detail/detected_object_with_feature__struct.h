// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_perception_msgs:msg/DetectedObjectWithFeature.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__STRUCT_H_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object'
#include "autoware_auto_perception_msgs/msg/detail/detected_object__struct.h"
// Member 'feature'
#include "tier4_perception_msgs/msg/detail/feature__struct.h"

/// Struct defined in msg/DetectedObjectWithFeature in the package tier4_perception_msgs.
typedef struct tier4_perception_msgs__msg__DetectedObjectWithFeature
{
  autoware_auto_perception_msgs__msg__DetectedObject object;
  tier4_perception_msgs__msg__Feature feature;
} tier4_perception_msgs__msg__DetectedObjectWithFeature;

// Struct for a sequence of tier4_perception_msgs__msg__DetectedObjectWithFeature.
typedef struct tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence
{
  tier4_perception_msgs__msg__DetectedObjectWithFeature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_WITH_FEATURE__STRUCT_H_
