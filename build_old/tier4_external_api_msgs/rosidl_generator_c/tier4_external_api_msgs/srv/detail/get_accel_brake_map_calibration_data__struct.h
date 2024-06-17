// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:srv/GetAccelBrakeMapCalibrationData.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetAccelBrakeMapCalibrationData in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request
{
  uint8_t structure_needs_at_least_one_member;
} tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request;

// Struct for a sequence of tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request.
typedef struct tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence
{
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'graph_image'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'accel_map'
// Member 'brake_map'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetAccelBrakeMapCalibrationData in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response
{
  rosidl_runtime_c__uint8__Sequence graph_image;
  rosidl_runtime_c__String accel_map;
  rosidl_runtime_c__String brake_map;
} tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response;

// Struct for a sequence of tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response.
typedef struct tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence
{
  tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__STRUCT_H_
