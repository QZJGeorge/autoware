// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:srv/SetCooperationPolicies.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_COOPERATION_POLICIES__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_COOPERATION_POLICIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'policies'
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_policy__struct.h"

/// Struct defined in srv/SetCooperationPolicies in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request
{
  autoware_adapi_v1_msgs__msg__CooperationPolicy__Sequence policies;
} autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request;

// Struct for a sequence of autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request.
typedef struct autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence
{
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__struct.h"

/// Struct defined in srv/SetCooperationPolicies in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response
{
  autoware_adapi_v1_msgs__msg__ResponseStatus status;
} autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response;

// Struct for a sequence of autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response.
typedef struct autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence
{
  autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__srv__SetCooperationPolicies_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_COOPERATION_POLICIES__STRUCT_H_
