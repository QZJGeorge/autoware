// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_localization_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_localization_msgs/msg/detail/kinematic_state__rosidl_typesupport_introspection_c.h"
#include "autoware_localization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_localization_msgs/msg/detail/kinematic_state__functions.h"
#include "autoware_localization_msgs/msg/detail/kinematic_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose_with_covariance`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose_with_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `twist_with_covariance`
#include "geometry_msgs/msg/twist_with_covariance.h"
// Member `twist_with_covariance`
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `accel_with_covariance`
#include "geometry_msgs/msg/accel_with_covariance.h"
// Member `accel_with_covariance`
#include "geometry_msgs/msg/detail/accel_with_covariance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_localization_msgs__msg__KinematicState__init(message_memory);
}

void autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_fini_function(void * message_memory)
{
  autoware_localization_msgs__msg__KinematicState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_localization_msgs__msg__KinematicState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_localization_msgs__msg__KinematicState, child_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_with_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_localization_msgs__msg__KinematicState, pose_with_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist_with_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_localization_msgs__msg__KinematicState, twist_with_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_with_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_localization_msgs__msg__KinematicState, accel_with_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_members = {
  "autoware_localization_msgs__msg",  // message namespace
  "KinematicState",  // message name
  5,  // number of fields
  sizeof(autoware_localization_msgs__msg__KinematicState),
  autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array,  // message members
  autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_type_support_handle = {
  0,
  &autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_localization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_localization_msgs, msg, KinematicState)() {
  autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, AccelWithCovariance)();
  if (!autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_type_support_handle.typesupport_identifier) {
    autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_localization_msgs__msg__KinematicState__rosidl_typesupport_introspection_c__KinematicState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
