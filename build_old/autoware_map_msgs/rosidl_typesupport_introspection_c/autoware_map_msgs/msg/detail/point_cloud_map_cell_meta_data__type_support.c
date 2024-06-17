// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_map_msgs:msg/PointCloudMapCellMetaData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__rosidl_typesupport_introspection_c.h"
#include "autoware_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__functions.h"
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_map_msgs__msg__PointCloudMapCellMetaData__init(message_memory);
}

void autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_fini_function(void * message_memory)
{
  autoware_map_msgs__msg__PointCloudMapCellMetaData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_message_member_array[4] = {
  {
    "min_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__PointCloudMapCellMetaData, min_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__PointCloudMapCellMetaData, min_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__PointCloudMapCellMetaData, max_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__PointCloudMapCellMetaData, max_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_message_members = {
  "autoware_map_msgs__msg",  // message namespace
  "PointCloudMapCellMetaData",  // message name
  4,  // number of fields
  sizeof(autoware_map_msgs__msg__PointCloudMapCellMetaData),
  autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_message_member_array,  // message members
  autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_message_type_support_handle = {
  0,
  &autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, msg, PointCloudMapCellMetaData)() {
  if (!autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_message_type_support_handle.typesupport_identifier) {
    autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_map_msgs__msg__PointCloudMapCellMetaData__rosidl_typesupport_introspection_c__PointCloudMapCellMetaData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
