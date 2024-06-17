// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_perception_msgs:msg/State.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_perception_msgs/msg/detail/state__rosidl_typesupport_introspection_c.h"
#include "tier4_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_perception_msgs/msg/detail/state__functions.h"
#include "tier4_perception_msgs/msg/detail/state__struct.h"


// Include directives for member types
// Member `pose_covariance`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose_covariance`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `twist_covariance`
#include "geometry_msgs/msg/twist_with_covariance.h"
// Member `twist_covariance`
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `acceleration_covariance`
#include "geometry_msgs/msg/accel_with_covariance.h"
// Member `acceleration_covariance`
#include "geometry_msgs/msg/detail/accel_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `predicted_paths`
#include "tier4_perception_msgs/msg/predicted_path.h"
// Member `predicted_paths`
#include "tier4_perception_msgs/msg/detail/predicted_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_perception_msgs__msg__State__init(message_memory);
}

void tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_fini_function(void * message_memory)
{
  tier4_perception_msgs__msg__State__fini(message_memory);
}

size_t tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__predicted_paths(
  const void * untyped_member)
{
  const tier4_perception_msgs__msg__PredictedPath__Sequence * member =
    (const tier4_perception_msgs__msg__PredictedPath__Sequence *)(untyped_member);
  return member->size;
}

const void * tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__predicted_paths(
  const void * untyped_member, size_t index)
{
  const tier4_perception_msgs__msg__PredictedPath__Sequence * member =
    (const tier4_perception_msgs__msg__PredictedPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__predicted_paths(
  void * untyped_member, size_t index)
{
  tier4_perception_msgs__msg__PredictedPath__Sequence * member =
    (tier4_perception_msgs__msg__PredictedPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__predicted_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tier4_perception_msgs__msg__PredictedPath * item =
    ((const tier4_perception_msgs__msg__PredictedPath *)
    tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__predicted_paths(untyped_member, index));
  tier4_perception_msgs__msg__PredictedPath * value =
    (tier4_perception_msgs__msg__PredictedPath *)(untyped_value);
  *value = *item;
}

void tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__predicted_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tier4_perception_msgs__msg__PredictedPath * item =
    ((tier4_perception_msgs__msg__PredictedPath *)
    tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__predicted_paths(untyped_member, index));
  const tier4_perception_msgs__msg__PredictedPath * value =
    (const tier4_perception_msgs__msg__PredictedPath *)(untyped_value);
  *item = *value;
}

bool tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__resize_function__State__predicted_paths(
  void * untyped_member, size_t size)
{
  tier4_perception_msgs__msg__PredictedPath__Sequence * member =
    (tier4_perception_msgs__msg__PredictedPath__Sequence *)(untyped_member);
  tier4_perception_msgs__msg__PredictedPath__Sequence__fini(member);
  return tier4_perception_msgs__msg__PredictedPath__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[7] = {
  {
    "pose_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__State, pose_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_reliable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__State, orientation_reliable),  // bytes offset in struct
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
    offsetof(tier4_perception_msgs__msg__State, twist_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist_reliable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__State, twist_reliable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__State, acceleration_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_reliable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__State, acceleration_reliable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_perception_msgs__msg__State, predicted_paths),  // bytes offset in struct
    NULL,  // default value
    tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__predicted_paths,  // size() function pointer
    tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__predicted_paths,  // get_const(index) function pointer
    tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__predicted_paths,  // get(index) function pointer
    tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__predicted_paths,  // fetch(index, &value) function pointer
    tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__predicted_paths,  // assign(index, value) function pointer
    tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__resize_function__State__predicted_paths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_members = {
  "tier4_perception_msgs__msg",  // message namespace
  "State",  // message name
  7,  // number of fields
  sizeof(tier4_perception_msgs__msg__State),
  tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array,  // message members
  tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_init_function,  // function to initialize message memory (memory has to be allocated)
  tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle = {
  0,
  &tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, State)() {
  tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, AccelWithCovariance)();
  tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_perception_msgs, msg, PredictedPath)();
  if (!tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle.typesupport_identifier) {
    tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tier4_perception_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
