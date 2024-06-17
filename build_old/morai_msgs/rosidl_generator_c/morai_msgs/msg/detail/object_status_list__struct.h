// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/ObjectStatusList.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__STRUCT_H_

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
// Member 'npc_list'
// Member 'pedestrian_list'
// Member 'obstacle_list'
#include "morai_msgs/msg/detail/object_status__struct.h"

/// Struct defined in msg/ObjectStatusList in the package morai_msgs.
typedef struct morai_msgs__msg__ObjectStatusList
{
  std_msgs__msg__Header header;
  int32_t num_of_npcs;
  int32_t num_of_pedestrian;
  int32_t num_of_obstacle;
  morai_msgs__msg__ObjectStatus__Sequence npc_list;
  morai_msgs__msg__ObjectStatus__Sequence pedestrian_list;
  morai_msgs__msg__ObjectStatus__Sequence obstacle_list;
} morai_msgs__msg__ObjectStatusList;

// Struct for a sequence of morai_msgs__msg__ObjectStatusList.
typedef struct morai_msgs__msg__ObjectStatusList__Sequence
{
  morai_msgs__msg__ObjectStatusList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__ObjectStatusList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__OBJECT_STATUS_LIST__STRUCT_H_
