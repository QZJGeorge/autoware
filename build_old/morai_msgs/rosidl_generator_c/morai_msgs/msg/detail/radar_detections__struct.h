// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/RadarDetections.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_DETECTIONS__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__RADAR_DETECTIONS__STRUCT_H_

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
// Member 'detections'
#include "morai_msgs/msg/detail/radar_detection__struct.h"

/// Struct defined in msg/RadarDetections in the package morai_msgs.
typedef struct morai_msgs__msg__RadarDetections
{
  std_msgs__msg__Header header;
  morai_msgs__msg__RadarDetection__Sequence detections;
} morai_msgs__msg__RadarDetections;

// Struct for a sequence of morai_msgs__msg__RadarDetections.
typedef struct morai_msgs__msg__RadarDetections__Sequence
{
  morai_msgs__msg__RadarDetections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__RadarDetections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_DETECTIONS__STRUCT_H_
