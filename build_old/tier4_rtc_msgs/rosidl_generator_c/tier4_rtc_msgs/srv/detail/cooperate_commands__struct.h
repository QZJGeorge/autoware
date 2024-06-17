// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_rtc_msgs:srv/CooperateCommands.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__STRUCT_H_
#define TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__STRUCT_H_

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
// Member 'commands'
#include "tier4_rtc_msgs/msg/detail/cooperate_command__struct.h"

/// Struct defined in srv/CooperateCommands in the package tier4_rtc_msgs.
typedef struct tier4_rtc_msgs__srv__CooperateCommands_Request
{
  builtin_interfaces__msg__Time stamp;
  tier4_rtc_msgs__msg__CooperateCommand__Sequence commands;
} tier4_rtc_msgs__srv__CooperateCommands_Request;

// Struct for a sequence of tier4_rtc_msgs__srv__CooperateCommands_Request.
typedef struct tier4_rtc_msgs__srv__CooperateCommands_Request__Sequence
{
  tier4_rtc_msgs__srv__CooperateCommands_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_rtc_msgs__srv__CooperateCommands_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'responses'
#include "tier4_rtc_msgs/msg/detail/cooperate_response__struct.h"

/// Struct defined in srv/CooperateCommands in the package tier4_rtc_msgs.
typedef struct tier4_rtc_msgs__srv__CooperateCommands_Response
{
  tier4_rtc_msgs__msg__CooperateResponse__Sequence responses;
} tier4_rtc_msgs__srv__CooperateCommands_Response;

// Struct for a sequence of tier4_rtc_msgs__srv__CooperateCommands_Response.
typedef struct tier4_rtc_msgs__srv__CooperateCommands_Response__Sequence
{
  tier4_rtc_msgs__srv__CooperateCommands_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_rtc_msgs__srv__CooperateCommands_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_RTC_MSGS__SRV__DETAIL__COOPERATE_COMMANDS__STRUCT_H_
