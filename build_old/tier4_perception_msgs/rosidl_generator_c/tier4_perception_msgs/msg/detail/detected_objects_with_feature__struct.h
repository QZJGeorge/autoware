// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_perception_msgs:msg/DetectedObjectsWithFeature.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__STRUCT_H_
#define TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__STRUCT_H_

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
// Member 'feature_objects'
#include "tier4_perception_msgs/msg/detail/detected_object_with_feature__struct.h"

/// Struct defined in msg/DetectedObjectsWithFeature in the package tier4_perception_msgs.
typedef struct tier4_perception_msgs__msg__DetectedObjectsWithFeature
{
  std_msgs__msg__Header header;
  tier4_perception_msgs__msg__DetectedObjectWithFeature__Sequence feature_objects;
} tier4_perception_msgs__msg__DetectedObjectsWithFeature;

// Struct for a sequence of tier4_perception_msgs__msg__DetectedObjectsWithFeature.
typedef struct tier4_perception_msgs__msg__DetectedObjectsWithFeature__Sequence
{
  tier4_perception_msgs__msg__DetectedObjectsWithFeature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_perception_msgs__msg__DetectedObjectsWithFeature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS_WITH_FEATURE__STRUCT_H_
