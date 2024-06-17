// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dummy_perception_publisher:msg/InitialState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dummy_perception_publisher/msg/detail/initial_state__rosidl_typesupport_introspection_c.h"
#include "dummy_perception_publisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dummy_perception_publisher/msg/detail/initial_state__functions.h"
#include "dummy_perception_publisher/msg/detail/initial_state__struct.h"


// Include directives for member types
// Member `pose_covariance`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `twist_covariance`
#include "geometry_msgs/msg/twist_with_covariance.h"
// Member `twist_covariance`
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `accel_covariance`
#include "geometry_msgs/msg/accel_with_covariance.h"
// Member `accel_covariance`
#include "geometry_msgs/msg/detail/accel_with_covariance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dummy_perception_publisher__msg__InitialState__init(message_memory);
}

void dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_fini_function(void * message_memory)
{
  dummy_perception_publisher__msg__InitialState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_member_array[3] = {
  {
    "pose_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dummy_perception_publisher__msg__InitialState, pose_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dummy_perception_publisher__msg__InitialState, twist_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dummy_perception_publisher__msg__InitialState, accel_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_members = {
  "dummy_perception_publisher__msg",  // message namespace
  "InitialState",  // message name
  3,  // number of fields
  sizeof(dummy_perception_publisher__msg__InitialState),
  dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_member_array,  // message members
  dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_init_function,  // function to initialize message memory (memory has to be allocated)
  dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_type_support_handle = {
  0,
  &dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dummy_perception_publisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dummy_perception_publisher, msg, InitialState)() {
  dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, AccelWithCovariance)();
  if (!dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_type_support_handle.typesupport_identifier) {
    dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dummy_perception_publisher__msg__InitialState__rosidl_typesupport_introspection_c__InitialState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
