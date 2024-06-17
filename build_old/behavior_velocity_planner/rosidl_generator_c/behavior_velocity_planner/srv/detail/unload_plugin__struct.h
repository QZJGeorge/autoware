// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_velocity_planner:srv/UnloadPlugin.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__STRUCT_H_
#define BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'plugin_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UnloadPlugin in the package behavior_velocity_planner.
typedef struct behavior_velocity_planner__srv__UnloadPlugin_Request
{
  rosidl_runtime_c__String plugin_name;
} behavior_velocity_planner__srv__UnloadPlugin_Request;

// Struct for a sequence of behavior_velocity_planner__srv__UnloadPlugin_Request.
typedef struct behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence
{
  behavior_velocity_planner__srv__UnloadPlugin_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_velocity_planner__srv__UnloadPlugin_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/UnloadPlugin in the package behavior_velocity_planner.
typedef struct behavior_velocity_planner__srv__UnloadPlugin_Response
{
  bool success;
} behavior_velocity_planner__srv__UnloadPlugin_Response;

// Struct for a sequence of behavior_velocity_planner__srv__UnloadPlugin_Response.
typedef struct behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence
{
  behavior_velocity_planner__srv__UnloadPlugin_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_velocity_planner__srv__UnloadPlugin_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_VELOCITY_PLANNER__SRV__DETAIL__UNLOAD_PLUGIN__STRUCT_H_
