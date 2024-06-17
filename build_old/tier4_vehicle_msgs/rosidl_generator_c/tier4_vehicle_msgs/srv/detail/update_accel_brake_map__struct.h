// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_vehicle_msgs:srv/UpdateAccelBrakeMap.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__STRUCT_H_
#define TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UpdateAccelBrakeMap in the package tier4_vehicle_msgs.
typedef struct tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Request
{
  /// path to directory the map will be saved
  rosidl_runtime_c__String path;
} tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Request;

// Struct for a sequence of tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Request.
typedef struct tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Request__Sequence
{
  tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UpdateAccelBrakeMap in the package tier4_vehicle_msgs.
typedef struct tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Response;

// Struct for a sequence of tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Response.
typedef struct tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Response__Sequence
{
  tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_vehicle_msgs__srv__UpdateAccelBrakeMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_VEHICLE_MSGS__SRV__DETAIL__UPDATE_ACCEL_BRAKE_MAP__STRUCT_H_
