// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:srv/SetVelocityLimit.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_VELOCITY_LIMIT__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_VELOCITY_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetVelocityLimit in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__srv__SetVelocityLimit_Request
{
  float velocity;
} tier4_external_api_msgs__srv__SetVelocityLimit_Request;

// Struct for a sequence of tier4_external_api_msgs__srv__SetVelocityLimit_Request.
typedef struct tier4_external_api_msgs__srv__SetVelocityLimit_Request__Sequence
{
  tier4_external_api_msgs__srv__SetVelocityLimit_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__srv__SetVelocityLimit_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/SetVelocityLimit in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__srv__SetVelocityLimit_Response
{
  tier4_external_api_msgs__msg__ResponseStatus status;
} tier4_external_api_msgs__srv__SetVelocityLimit_Response;

// Struct for a sequence of tier4_external_api_msgs__srv__SetVelocityLimit_Response.
typedef struct tier4_external_api_msgs__srv__SetVelocityLimit_Response__Sequence
{
  tier4_external_api_msgs__srv__SetVelocityLimit_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__srv__SetVelocityLimit_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_VELOCITY_LIMIT__STRUCT_H_
