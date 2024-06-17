// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObjectKinematics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_kinematics__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_kinematics__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_kinematics__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `accel`
#include "geometry_msgs/msg/accel.h"
// Member `accel`
#include "geometry_msgs/msg/detail/accel__rosidl_typesupport_introspection_c.h"
// Member `predicted_paths`
#include "autoware_adapi_v1_msgs/msg/dynamic_object_path.h"
// Member `predicted_paths`
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__init(message_memory);
}

void autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__fini(message_memory);
}

size_t autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__size_function__DynamicObjectKinematics__predicted_paths(
  const void * untyped_member)
{
  const autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__get_const_function__DynamicObjectKinematics__predicted_paths(
  const void * untyped_member, size_t index)
{
  const autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__get_function__DynamicObjectKinematics__predicted_paths(
  void * untyped_member, size_t index)
{
  autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence * member =
    (autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__fetch_function__DynamicObjectKinematics__predicted_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autoware_adapi_v1_msgs__msg__DynamicObjectPath * item =
    ((const autoware_adapi_v1_msgs__msg__DynamicObjectPath *)
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__get_const_function__DynamicObjectKinematics__predicted_paths(untyped_member, index));
  autoware_adapi_v1_msgs__msg__DynamicObjectPath * value =
    (autoware_adapi_v1_msgs__msg__DynamicObjectPath *)(untyped_value);
  *value = *item;
}

void autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__assign_function__DynamicObjectKinematics__predicted_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autoware_adapi_v1_msgs__msg__DynamicObjectPath * item =
    ((autoware_adapi_v1_msgs__msg__DynamicObjectPath *)
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__get_function__DynamicObjectKinematics__predicted_paths(untyped_member, index));
  const autoware_adapi_v1_msgs__msg__DynamicObjectPath * value =
    (const autoware_adapi_v1_msgs__msg__DynamicObjectPath *)(untyped_value);
  *item = *value;
}

bool autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__resize_function__DynamicObjectKinematics__predicted_paths(
  void * untyped_member, size_t size)
{
  autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence * member =
    (autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence *)(untyped_member);
  autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence__fini(member);
  return autoware_adapi_v1_msgs__msg__DynamicObjectPath__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_member_array[4] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics, accel),  // bytes offset in struct
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
    offsetof(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics, predicted_paths),  // bytes offset in struct
    NULL,  // default value
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__size_function__DynamicObjectKinematics__predicted_paths,  // size() function pointer
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__get_const_function__DynamicObjectKinematics__predicted_paths,  // get_const(index) function pointer
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__get_function__DynamicObjectKinematics__predicted_paths,  // get(index) function pointer
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__fetch_function__DynamicObjectKinematics__predicted_paths,  // fetch(index, &value) function pointer
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__assign_function__DynamicObjectKinematics__predicted_paths,  // assign(index, value) function pointer
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__resize_function__DynamicObjectKinematics__predicted_paths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "DynamicObjectKinematics",  // message name
  4,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__DynamicObjectKinematics),
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_member_array,  // message members
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_type_support_handle = {
  0,
  &autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, DynamicObjectKinematics)() {
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Accel)();
  autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, DynamicObjectPath)();
  if (!autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_type_support_handle.typesupport_identifier) {
    autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_adapi_v1_msgs__msg__DynamicObjectKinematics__rosidl_typesupport_introspection_c__DynamicObjectKinematics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
