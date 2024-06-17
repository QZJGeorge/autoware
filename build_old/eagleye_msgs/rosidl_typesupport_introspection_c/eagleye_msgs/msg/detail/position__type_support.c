// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eagleye_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eagleye_msgs/msg/detail/position__rosidl_typesupport_introspection_c.h"
#include "eagleye_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eagleye_msgs/msg/detail/position__functions.h"
#include "eagleye_msgs/msg/detail/position__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `enu_pos`
// Member `ecef_base_pos`
#include "geometry_msgs/msg/point.h"
// Member `enu_pos`
// Member `ecef_base_pos`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "eagleye_msgs/msg/status.h"
// Member `status`
#include "eagleye_msgs/msg/detail/status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eagleye_msgs__msg__Position__init(message_memory);
}

void eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_fini_function(void * message_memory)
{
  eagleye_msgs__msg__Position__fini(message_memory);
}

size_t eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__size_function__Position__covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__fetch_function__Position__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__assign_function__Position__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eagleye_msgs__msg__Position, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enu_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eagleye_msgs__msg__Position, enu_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ecef_base_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eagleye_msgs__msg__Position, ecef_base_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(eagleye_msgs__msg__Position, covariance),  // bytes offset in struct
    NULL,  // default value
    eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__size_function__Position__covariance,  // size() function pointer
    eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__get_const_function__Position__covariance,  // get_const(index) function pointer
    eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__get_function__Position__covariance,  // get(index) function pointer
    eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__fetch_function__Position__covariance,  // fetch(index, &value) function pointer
    eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__assign_function__Position__covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eagleye_msgs__msg__Position, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_members = {
  "eagleye_msgs__msg",  // message namespace
  "Position",  // message name
  5,  // number of fields
  sizeof(eagleye_msgs__msg__Position),
  eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array,  // message members
  eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_init_function,  // function to initialize message memory (memory has to be allocated)
  eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle = {
  0,
  &eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eagleye_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eagleye_msgs, msg, Position)() {
  eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eagleye_msgs, msg, Status)();
  if (!eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle.typesupport_identifier) {
    eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &eagleye_msgs__msg__Position__rosidl_typesupport_introspection_c__Position_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
