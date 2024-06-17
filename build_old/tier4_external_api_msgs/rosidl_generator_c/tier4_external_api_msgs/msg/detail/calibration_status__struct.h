// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/CalibrationStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CALIBRATION_STATUS__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CALIBRATION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACCEL_BRAKE_MAP'.
enum
{
  tier4_external_api_msgs__msg__CalibrationStatus__ACCEL_BRAKE_MAP = 1
};

/// Constant 'NORMAL'.
/**
  * status constants
 */
enum
{
  tier4_external_api_msgs__msg__CalibrationStatus__NORMAL = 0
};

/// Constant 'CALIBRATION_REQUIRED'.
enum
{
  tier4_external_api_msgs__msg__CalibrationStatus__CALIBRATION_REQUIRED = 1
};

/// Constant 'UNAVAILABLE'.
enum
{
  tier4_external_api_msgs__msg__CalibrationStatus__UNAVAILABLE = 2
};

/// Struct defined in msg/CalibrationStatus in the package tier4_external_api_msgs.
/**
  * calibration target
 */
typedef struct tier4_external_api_msgs__msg__CalibrationStatus
{
  /// fields
  uint8_t target;
  uint8_t status;
} tier4_external_api_msgs__msg__CalibrationStatus;

// Struct for a sequence of tier4_external_api_msgs__msg__CalibrationStatus.
typedef struct tier4_external_api_msgs__msg__CalibrationStatus__Sequence
{
  tier4_external_api_msgs__msg__CalibrationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__CalibrationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CALIBRATION_STATUS__STRUCT_H_
