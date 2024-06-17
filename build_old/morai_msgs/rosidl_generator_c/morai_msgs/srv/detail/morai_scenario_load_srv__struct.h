// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:srv/MoraiScenarioLoadSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_SCENARIO_LOAD_SRV__STRUCT_H_
#define MORAI_MSGS__SRV__DETAIL__MORAI_SCENARIO_LOAD_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "morai_msgs/msg/detail/scenario_load__struct.h"

/// Struct defined in srv/MoraiScenarioLoadSrv in the package morai_msgs.
typedef struct morai_msgs__srv__MoraiScenarioLoadSrv_Request
{
  morai_msgs__msg__ScenarioLoad request;
} morai_msgs__srv__MoraiScenarioLoadSrv_Request;

// Struct for a sequence of morai_msgs__srv__MoraiScenarioLoadSrv_Request.
typedef struct morai_msgs__srv__MoraiScenarioLoadSrv_Request__Sequence
{
  morai_msgs__srv__MoraiScenarioLoadSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__srv__MoraiScenarioLoadSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "morai_msgs/msg/detail/morai_srv_response__struct.h"

/// Struct defined in srv/MoraiScenarioLoadSrv in the package morai_msgs.
typedef struct morai_msgs__srv__MoraiScenarioLoadSrv_Response
{
  morai_msgs__msg__MoraiSrvResponse response;
} morai_msgs__srv__MoraiScenarioLoadSrv_Response;

// Struct for a sequence of morai_msgs__srv__MoraiScenarioLoadSrv_Response.
typedef struct morai_msgs__srv__MoraiScenarioLoadSrv_Response__Sequence
{
  morai_msgs__srv__MoraiScenarioLoadSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__srv__MoraiScenarioLoadSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_SCENARIO_LOAD_SRV__STRUCT_H_
