// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/ReplayInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__STRUCT_H_

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'npc_list'
// Member 'pedestrian_list'
// Member 'obstacle_list'
#include "morai_msgs/msg/detail/object_status__struct.h"

/// Struct defined in msg/ReplayInfo in the package morai_msgs.
typedef struct morai_msgs__msg__ReplayInfo
{
  std_msgs__msg__Header header;
  double ego_acc;
  double ego_brake;
  double ego_steer;
  geometry_msgs__msg__Quaternion orientation;
  geometry_msgs__msg__Vector3 linear_acceleration;
  geometry_msgs__msg__Vector3 angular_velocity;
  int32_t num_of_npcs;
  int32_t num_of_pedestrian;
  int32_t num_of_obstacle;
  morai_msgs__msg__ObjectStatus__Sequence npc_list;
  morai_msgs__msg__ObjectStatus__Sequence pedestrian_list;
  morai_msgs__msg__ObjectStatus__Sequence obstacle_list;
} morai_msgs__msg__ReplayInfo;

// Struct for a sequence of morai_msgs__msg__ReplayInfo.
typedef struct morai_msgs__msg__ReplayInfo__Sequence
{
  morai_msgs__msg__ReplayInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__ReplayInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__REPLAY_INFO__STRUCT_H_
