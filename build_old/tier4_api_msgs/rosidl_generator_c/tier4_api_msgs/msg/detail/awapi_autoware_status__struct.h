// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_api_msgs:msg/AwapiAutowareStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__STRUCT_H_
#define TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__STRUCT_H_

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
// Member 'autoware_state'
#include "rosidl_runtime_c/string.h"
// Member 'hazard_status'
#include "tier4_system_msgs/msg/detail/hazard_status_stamped__struct.h"
// Member 'stop_reason'
#include "tier4_planning_msgs/msg/detail/stop_reason_array__struct.h"
// Member 'diagnostics'
// Member 'error_diagnostics'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.h"

/// Struct defined in msg/AwapiAutowareStatus in the package tier4_api_msgs.
typedef struct tier4_api_msgs__msg__AwapiAutowareStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String autoware_state;
  int32_t control_mode;
  int32_t gate_mode;
  bool emergency_stopped;
  float current_max_velocity;
  tier4_system_msgs__msg__HazardStatusStamped hazard_status;
  tier4_planning_msgs__msg__StopReasonArray stop_reason;
  diagnostic_msgs__msg__DiagnosticStatus__Sequence diagnostics;
  diagnostic_msgs__msg__DiagnosticStatus__Sequence error_diagnostics;
  bool autonomous_overridden;
  bool arrived_goal;
} tier4_api_msgs__msg__AwapiAutowareStatus;

// Struct for a sequence of tier4_api_msgs__msg__AwapiAutowareStatus.
typedef struct tier4_api_msgs__msg__AwapiAutowareStatus__Sequence
{
  tier4_api_msgs__msg__AwapiAutowareStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_api_msgs__msg__AwapiAutowareStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_API_MSGS__MSG__DETAIL__AWAPI_AUTOWARE_STATUS__STRUCT_H_
