// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_api_msgs:msg/AwapiVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__STRUCT_H_
#define TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'eulerangle'
#include "tier4_api_msgs/msg/detail/euler__struct.h"
// Member 'geo_point'
#include "geographic_msgs/msg/detail/geo_point__struct.h"

/// Struct defined in msg/AwapiVehicleStatus in the package tier4_api_msgs.
typedef struct tier4_api_msgs__msg__AwapiVehicleStatus
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  tier4_api_msgs__msg__Euler eulerangle;
  geographic_msgs__msg__GeoPoint geo_point;
  double velocity;
  double acceleration;
  double steering;
  double steering_velocity;
  double angular_velocity;
  int32_t gear;
  float energy_level;
  int32_t turn_signal;
  double target_velocity;
  double target_acceleration;
  double target_steering;
  double target_steering_velocity;
} tier4_api_msgs__msg__AwapiVehicleStatus;

// Struct for a sequence of tier4_api_msgs__msg__AwapiVehicleStatus.
typedef struct tier4_api_msgs__msg__AwapiVehicleStatus__Sequence
{
  tier4_api_msgs__msg__AwapiVehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_api_msgs__msg__AwapiVehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_API_MSGS__MSG__DETAIL__AWAPI_VEHICLE_STATUS__STRUCT_H_
