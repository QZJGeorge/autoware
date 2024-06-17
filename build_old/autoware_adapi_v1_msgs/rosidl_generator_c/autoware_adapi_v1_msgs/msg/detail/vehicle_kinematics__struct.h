// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/VehicleKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'geographic_pose'
#include "geographic_msgs/msg/detail/geo_point_stamped__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance_stamped__struct.h"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel_with_covariance_stamped__struct.h"

/// Struct defined in msg/VehicleKinematics in the package autoware_adapi_v1_msgs.
/**
  * Geographic point, using the WGS 84 reference ellipsoid.
  * This data will be invalid If Autoware does not provide projection information between geographic coordinates and local coordinates.
 */
typedef struct autoware_adapi_v1_msgs__msg__VehicleKinematics
{
  geographic_msgs__msg__GeoPointStamped geographic_pose;
  /// Local coordinate from the autoware
  geometry_msgs__msg__PoseWithCovarianceStamped pose;
  geometry_msgs__msg__TwistWithCovarianceStamped twist;
  geometry_msgs__msg__AccelWithCovarianceStamped accel;
} autoware_adapi_v1_msgs__msg__VehicleKinematics;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__VehicleKinematics.
typedef struct autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence
{
  autoware_adapi_v1_msgs__msg__VehicleKinematics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__VehicleKinematics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__STRUCT_H_
