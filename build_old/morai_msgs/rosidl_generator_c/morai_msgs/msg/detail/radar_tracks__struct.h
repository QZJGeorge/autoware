// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/RadarTracks.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_TRACKS__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__RADAR_TRACKS__STRUCT_H_

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
// Member 'tracks'
#include "morai_msgs/msg/detail/radar_track__struct.h"

/// Struct defined in msg/RadarTracks in the package morai_msgs.
typedef struct morai_msgs__msg__RadarTracks
{
  std_msgs__msg__Header header;
  morai_msgs__msg__RadarTrack__Sequence tracks;
} morai_msgs__msg__RadarTracks;

// Struct for a sequence of morai_msgs__msg__RadarTracks.
typedef struct morai_msgs__msg__RadarTracks__Sequence
{
  morai_msgs__msg__RadarTracks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__RadarTracks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_TRACKS__STRUCT_H_
