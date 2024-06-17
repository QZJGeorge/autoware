// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/RosbagCopyStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/rosbag_copy_status__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/rosbag_copy_status__functions.h"
#include "tier4_external_api_msgs/msg/detail/rosbag_copy_status__struct.h"


// Include directives for member types
// Member `project_id`
// Member `vehicle_id`
// Member `date`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__RosbagCopyStatus__init(message_memory);
}

void tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__RosbagCopyStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_message_member_array[6] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__RosbagCopyStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "progress_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__RosbagCopyStatus, progress_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "project_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__RosbagCopyStatus, project_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__RosbagCopyStatus, vehicle_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__RosbagCopyStatus, date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__RosbagCopyStatus, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "RosbagCopyStatus",  // message name
  6,  // number of fields
  sizeof(tier4_external_api_msgs__msg__RosbagCopyStatus),
  tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_message_member_array,  // message members
  tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_message_type_support_handle = {
  0,
  &tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, RosbagCopyStatus)() {
  if (!tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_message_type_support_handle.typesupport_identifier) {
    tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_external_api_msgs__msg__RosbagCopyStatus__rosidl_typesupport_introspection_c__RosbagCopyStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
