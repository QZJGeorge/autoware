// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientation.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__STRUCT_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/GnssInsOrientation in the package autoware_sensing_msgs.
/**
  * GNSS(Global Navigation Satellite System) INS(Inertial Navigation System) orientation message
  *
  * Represents a 3D orientation in a global coordinate system.
  *
  * ROS uses ENU axes convention (East, North, Up) corresponds to (x, y, z).
 */
typedef struct autoware_sensing_msgs__msg__GnssInsOrientation
{
  /// Quaternion representation of the orientation.
  geometry_msgs__msg__Quaternion orientation;
  /// Root mean square error of the rotation
  /// (x, y, z) axes corresponding to (roll, pitch, yaw)
  float rmse_rotation_x;
  float rmse_rotation_y;
  float rmse_rotation_z;
} autoware_sensing_msgs__msg__GnssInsOrientation;

// Struct for a sequence of autoware_sensing_msgs__msg__GnssInsOrientation.
typedef struct autoware_sensing_msgs__msg__GnssInsOrientation__Sequence
{
  autoware_sensing_msgs__msg__GnssInsOrientation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_sensing_msgs__msg__GnssInsOrientation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__STRUCT_H_
