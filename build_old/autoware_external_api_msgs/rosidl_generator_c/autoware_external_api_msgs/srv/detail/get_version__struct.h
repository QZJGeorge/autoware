// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_external_api_msgs:srv/GetVersion.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__STRUCT_H_
#define AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetVersion in the package autoware_external_api_msgs.
typedef struct autoware_external_api_msgs__srv__GetVersion_Request
{
  uint8_t structure_needs_at_least_one_member;
} autoware_external_api_msgs__srv__GetVersion_Request;

// Struct for a sequence of autoware_external_api_msgs__srv__GetVersion_Request.
typedef struct autoware_external_api_msgs__srv__GetVersion_Request__Sequence
{
  autoware_external_api_msgs__srv__GetVersion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_external_api_msgs__srv__GetVersion_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__struct.h"
// Member 'version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetVersion in the package autoware_external_api_msgs.
typedef struct autoware_external_api_msgs__srv__GetVersion_Response
{
  tier4_external_api_msgs__msg__ResponseStatus status;
  rosidl_runtime_c__String version;
} autoware_external_api_msgs__srv__GetVersion_Response;

// Struct for a sequence of autoware_external_api_msgs__srv__GetVersion_Response.
typedef struct autoware_external_api_msgs__srv__GetVersion_Response__Sequence
{
  autoware_external_api_msgs__srv__GetVersion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_external_api_msgs__srv__GetVersion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__STRUCT_H_
