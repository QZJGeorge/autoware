// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_map_msgs:msg/LaneletMapBin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__STRUCT_H_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__STRUCT_H_

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
// Member 'version_map_format'
// Member 'version_map'
// Member 'name_map'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LaneletMapBin in the package autoware_map_msgs.
/**
  * Lanelet map message
  * This message contains the binary data of a Lanelet map.
  * Also contains the map name, version and format.
 */
typedef struct autoware_map_msgs__msg__LaneletMapBin
{
  /// Header with timestamp when the message is published
  /// And frame of the Lanelet Map origin (probably just "map")
  std_msgs__msg__Header header;
  /// Version of the map format (optional)
  /// Example: "1.1.1"
  rosidl_runtime_c__String version_map_format;
  /// Version of the map (encouraged, optional)
  /// Example: "1.0.0"
  rosidl_runtime_c__String version_map;
  /// Name of the map (encouraged, optional)
  /// Example: "florence-prato-city-center"
  rosidl_runtime_c__String name_map;
  /// Binary map data
  rosidl_runtime_c__uint8__Sequence data;
} autoware_map_msgs__msg__LaneletMapBin;

// Struct for a sequence of autoware_map_msgs__msg__LaneletMapBin.
typedef struct autoware_map_msgs__msg__LaneletMapBin__Sequence
{
  autoware_map_msgs__msg__LaneletMapBin * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_map_msgs__msg__LaneletMapBin__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__STRUCT_H_
