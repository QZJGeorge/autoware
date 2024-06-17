// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_external_api_msgs:srv/SetRoute.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_ROUTE__STRUCT_H_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'route'
#include "tier4_external_api_msgs/msg/detail/route__struct.h"

/// Struct defined in srv/SetRoute in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__srv__SetRoute_Request
{
  tier4_external_api_msgs__msg__Route route;
} tier4_external_api_msgs__srv__SetRoute_Request;

// Struct for a sequence of tier4_external_api_msgs__srv__SetRoute_Request.
typedef struct tier4_external_api_msgs__srv__SetRoute_Request__Sequence
{
  tier4_external_api_msgs__srv__SetRoute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__srv__SetRoute_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/SetRoute in the package tier4_external_api_msgs.
typedef struct tier4_external_api_msgs__srv__SetRoute_Response
{
  tier4_external_api_msgs__msg__ResponseStatus status;
} tier4_external_api_msgs__srv__SetRoute_Response;

// Struct for a sequence of tier4_external_api_msgs__srv__SetRoute_Response.
typedef struct tier4_external_api_msgs__srv__SetRoute_Response__Sequence
{
  tier4_external_api_msgs__srv__SetRoute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_external_api_msgs__srv__SetRoute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__SET_ROUTE__STRUCT_H_
