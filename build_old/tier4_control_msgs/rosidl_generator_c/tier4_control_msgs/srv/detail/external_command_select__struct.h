// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_control_msgs:srv/ExternalCommandSelect.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__STRUCT_H_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "tier4_control_msgs/msg/detail/external_command_selector_mode__struct.h"

/// Struct defined in srv/ExternalCommandSelect in the package tier4_control_msgs.
typedef struct tier4_control_msgs__srv__ExternalCommandSelect_Request
{
  tier4_control_msgs__msg__ExternalCommandSelectorMode mode;
} tier4_control_msgs__srv__ExternalCommandSelect_Request;

// Struct for a sequence of tier4_control_msgs__srv__ExternalCommandSelect_Request.
typedef struct tier4_control_msgs__srv__ExternalCommandSelect_Request__Sequence
{
  tier4_control_msgs__srv__ExternalCommandSelect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_control_msgs__srv__ExternalCommandSelect_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ExternalCommandSelect in the package tier4_control_msgs.
typedef struct tier4_control_msgs__srv__ExternalCommandSelect_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} tier4_control_msgs__srv__ExternalCommandSelect_Response;

// Struct for a sequence of tier4_control_msgs__srv__ExternalCommandSelect_Response.
typedef struct tier4_control_msgs__srv__ExternalCommandSelect_Response__Sequence
{
  tier4_control_msgs__srv__ExternalCommandSelect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_control_msgs__srv__ExternalCommandSelect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__STRUCT_H_
