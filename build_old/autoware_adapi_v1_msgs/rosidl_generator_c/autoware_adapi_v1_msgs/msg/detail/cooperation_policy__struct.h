// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/CooperationPolicy.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_POLICY__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_POLICY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OPTIONAL'.
enum
{
  autoware_adapi_v1_msgs__msg__CooperationPolicy__OPTIONAL = 1
};

/// Constant 'REQUIRED'.
enum
{
  autoware_adapi_v1_msgs__msg__CooperationPolicy__REQUIRED = 2
};

// Include directives for member types
// Member 'behavior'
// Member 'sequence'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CooperationPolicy in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__CooperationPolicy
{
  rosidl_runtime_c__String behavior;
  rosidl_runtime_c__String sequence;
  uint8_t policy;
} autoware_adapi_v1_msgs__msg__CooperationPolicy;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__CooperationPolicy.
typedef struct autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence
{
  autoware_adapi_v1_msgs__msg__CooperationPolicy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_POLICY__STRUCT_H_
