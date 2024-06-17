// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientationStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__STRUCT_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__STRUCT_H_

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
// Member 'orientation'
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__struct.h"

/// Struct defined in msg/GnssInsOrientationStamped in the package autoware_sensing_msgs.
/**
  * GNSS(Global Navigation Satellite System) INS(Inertial Navigation System) orientation message
  *
  * Represents a 3D orientation in a global coordinate system with coordinate frame and timestamp.
 */
typedef struct autoware_sensing_msgs__msg__GnssInsOrientationStamped
{
  /// Timestamp this reading was received by the INS sensor
  /// Frame is expected to be of the INS device
  std_msgs__msg__Header header;
  autoware_sensing_msgs__msg__GnssInsOrientation orientation;
} autoware_sensing_msgs__msg__GnssInsOrientationStamped;

// Struct for a sequence of autoware_sensing_msgs__msg__GnssInsOrientationStamped.
typedef struct autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence
{
  autoware_sensing_msgs__msg__GnssInsOrientationStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION_STAMPED__STRUCT_H_
