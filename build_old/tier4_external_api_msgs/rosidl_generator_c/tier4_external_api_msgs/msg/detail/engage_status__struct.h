// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/EngageStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ENGAGE_STATUS__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ENGAGE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/EngageStatus in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__EngageStatus
{
  builtin_interfaces__msg__Time stamp;
  bool engage;
} tier4_external_api_msgs__msg__EngageStatus;

// Struct for a sequence of tier4_external_api_msgs__msg__EngageStatus.
typedef struct tier4_external_api_msgs__msg__EngageStatus__Sequence
{
  tier4_external_api_msgs__msg__EngageStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__EngageStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ENGAGE_STATUS__STRUCT_H_
