// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/RadarDetection.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/RadarDetection in the package morai_msgs.
/**
  * This message relates only to FMCW radar.  
  * All variables below are relative to the radar's frame of reference.
  * This message is not meant to be used alone but as part of a stamped or array message.
 */
typedef struct morai_msgs__msg__RadarDetection
{
  /// Object classifications (Additional vendor-specific classifications are permitted starting from 32000 eg. Car)
  /// Index of each radar detection point
  uint16_t detection_id;
  /// x, y, z position of each radar detection point
  geometry_msgs__msg__Point position;
  /// azimuth angle of each radar detection point in Degree
  float azimuth;
  /// relative velocity of the radar detected target w.r.t radial direction
  float rangerate;
  /// amplitude of the reflected signal of the radar detected target(rcs)
  float amplitude;
} morai_msgs__msg__RadarDetection;

// Struct for a sequence of morai_msgs__msg__RadarDetection.
typedef struct morai_msgs__msg__RadarDetection__Sequence
{
  morai_msgs__msg__RadarDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__RadarDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_DETECTION__STRUCT_H_
