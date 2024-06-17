// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/RadarTrack.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__STRUCT_H_

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
// Member 'velocity'
// Member 'acceleration'
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'position_covariance'
// Member 'velocity_covariance'
// Member 'acceleration_covariance'
// Member 'size_covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RadarTrack in the package morai_msgs.
/**
  * This message relates only to FMCW radar.  
  * All variables below are relative to the radar's frame of reference.
  * This message is not meant to be used alone but as part of a stamped or array message.
 */
typedef struct morai_msgs__msg__RadarTrack
{
  /// Object classifications (Additional vendor-specific classifications are permitted starting from 32000 eg. Car)
  /// Note: The z component of these fields is ignored for 2D tracking.
  int8_t uuid;
  /// x, y, z coordinates of the centroid of the object being tracked.
  geometry_msgs__msg__Point position;
  /// The velocity of the object in each spatial dimension.
  geometry_msgs__msg__Vector3 velocity;
  /// The acceleration of the object in each spatial dimension.
  geometry_msgs__msg__Vector3 acceleration;
  /// The object size as represented by the radar sensor eg. length, width, height OR the diameter of an ellipsoid in the x, y, z, dimensions
  /// and is from the sensor frame's view.
  geometry_msgs__msg__Vector3 size;
  /// An optional classification of the object (see above)
  uint16_t classification;
  /// Upper-triangle covariance about the x, y, z axes
  rosidl_runtime_c__float__Sequence position_covariance;
  /// Upper-triangle covariance about the x, y, z axes
  rosidl_runtime_c__float__Sequence velocity_covariance;
  /// Upper-triangle covariance about the x, y, z axes
  rosidl_runtime_c__float__Sequence acceleration_covariance;
  /// Upper-triangle covariance about the x, y, z axes
  rosidl_runtime_c__float__Sequence size_covariance;
  float amplitude;
} morai_msgs__msg__RadarTrack;

// Struct for a sequence of morai_msgs__msg__RadarTrack.
typedef struct morai_msgs__msg__RadarTrack__Sequence
{
  morai_msgs__msg__RadarTrack * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__RadarTrack__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__STRUCT_H_
