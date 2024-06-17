// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__STRUCT_H_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NO_FAULT'.
enum
{
  tier4_system_msgs__msg__HazardStatus__NO_FAULT = 0l
};

/// Constant 'SAFE_FAULT'.
enum
{
  tier4_system_msgs__msg__HazardStatus__SAFE_FAULT = 1l
};

/// Constant 'LATENT_FAULT'.
enum
{
  tier4_system_msgs__msg__HazardStatus__LATENT_FAULT = 2l
};

/// Constant 'SINGLE_POINT_FAULT'.
enum
{
  tier4_system_msgs__msg__HazardStatus__SINGLE_POINT_FAULT = 3l
};

// Include directives for member types
// Member 'diagnostics_nf'
// Member 'diagnostics_sf'
// Member 'diagnostics_lf'
// Member 'diagnostics_spf'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.h"

/// Struct defined in msg/HazardStatus in the package tier4_system_msgs.
typedef struct tier4_system_msgs__msg__HazardStatus
{
  int32_t level;
  bool emergency;
  bool emergency_holding;
  /// diagnostics categorized as no fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence diagnostics_nf;
  /// diagnostics categorized as safe fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence diagnostics_sf;
  /// diagnostics categorized as latent fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence diagnostics_lf;
  /// diagnostics categorized as single point fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence diagnostics_spf;
} tier4_system_msgs__msg__HazardStatus;

// Struct for a sequence of tier4_system_msgs__msg__HazardStatus.
typedef struct tier4_system_msgs__msg__HazardStatus__Sequence
{
  tier4_system_msgs__msg__HazardStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_system_msgs__msg__HazardStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__STRUCT_H_
