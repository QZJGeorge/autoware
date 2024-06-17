// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/SyncModeScenarioLoad.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SyncModeScenarioLoad in the package morai_msgs.
typedef struct morai_msgs__msg__SyncModeScenarioLoad
{
  uint64_t frame;
  rosidl_runtime_c__String file_name;
  bool load_network_connection_data;
  bool delete_all;
  bool load_ego_vehicle_data;
  bool load_surrounding_vehicle_data;
  bool load_pedestrian_data;
  bool load_obstacle_data;
  bool set_pause;
} morai_msgs__msg__SyncModeScenarioLoad;

// Struct for a sequence of morai_msgs__msg__SyncModeScenarioLoad.
typedef struct morai_msgs__msg__SyncModeScenarioLoad__Sequence
{
  morai_msgs__msg__SyncModeScenarioLoad * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__SyncModeScenarioLoad__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__STRUCT_H_
