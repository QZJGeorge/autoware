// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:msg/CpuUsage.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_USAGE__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_USAGE__STRUCT_H_

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
// Member 'all'
// Member 'cpus'
#include "tier4_external_api_msgs/msg/detail/cpu_status__struct.h"

/// Struct defined in msg/CpuUsage in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__msg__CpuUsage
{
  builtin_interfaces__msg__Time stamp;
  tier4_external_api_msgs__msg__CpuStatus all;
  tier4_external_api_msgs__msg__CpuStatus__Sequence cpus;
} tier4_external_api_msgs__msg__CpuUsage;

// Struct for a sequence of tier4_external_api_msgs__msg__CpuUsage.
typedef struct tier4_external_api_msgs__msg__CpuUsage__Sequence
{
  tier4_external_api_msgs__msg__CpuUsage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__msg__CpuUsage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CPU_USAGE__STRUCT_H_
