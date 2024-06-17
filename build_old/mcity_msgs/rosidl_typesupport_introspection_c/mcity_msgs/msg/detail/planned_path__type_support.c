// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mcity_msgs:msg/PlannedPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mcity_msgs/msg/detail/planned_path__rosidl_typesupport_introspection_c.h"
#include "mcity_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mcity_msgs/msg/detail/planned_path__functions.h"
#include "mcity_msgs/msg/detail/planned_path__struct.h"


// Include directives for member types
// Member `x_vector`
// Member `y_vector`
// Member `vd_vector`
// Member `ori_vector`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mcity_msgs__msg__PlannedPath__init(message_memory);
}

void mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_fini_function(void * message_memory)
{
  mcity_msgs__msg__PlannedPath__fini(message_memory);
}

size_t mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__size_function__PlannedPath__x_vector(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__x_vector(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__x_vector(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__fetch_function__PlannedPath__x_vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__x_vector(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__assign_function__PlannedPath__x_vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__x_vector(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__resize_function__PlannedPath__x_vector(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__size_function__PlannedPath__y_vector(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__y_vector(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__y_vector(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__fetch_function__PlannedPath__y_vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__y_vector(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__assign_function__PlannedPath__y_vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__y_vector(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__resize_function__PlannedPath__y_vector(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__size_function__PlannedPath__vd_vector(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__vd_vector(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__vd_vector(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__fetch_function__PlannedPath__vd_vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__vd_vector(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__assign_function__PlannedPath__vd_vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__vd_vector(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__resize_function__PlannedPath__vd_vector(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__size_function__PlannedPath__ori_vector(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__ori_vector(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__ori_vector(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__fetch_function__PlannedPath__ori_vector(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__ori_vector(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__assign_function__PlannedPath__ori_vector(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__ori_vector(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__resize_function__PlannedPath__ori_vector(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_message_member_array[8] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcity_msgs__msg__PlannedPath, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcity_msgs__msg__PlannedPath, time_resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "go",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcity_msgs__msg__PlannedPath, go),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcity_msgs__msg__PlannedPath, estop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcity_msgs__msg__PlannedPath, x_vector),  // bytes offset in struct
    NULL,  // default value
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__size_function__PlannedPath__x_vector,  // size() function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__x_vector,  // get_const(index) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__x_vector,  // get(index) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__fetch_function__PlannedPath__x_vector,  // fetch(index, &value) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__assign_function__PlannedPath__x_vector,  // assign(index, value) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__resize_function__PlannedPath__x_vector  // resize(index) function pointer
  },
  {
    "y_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcity_msgs__msg__PlannedPath, y_vector),  // bytes offset in struct
    NULL,  // default value
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__size_function__PlannedPath__y_vector,  // size() function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__y_vector,  // get_const(index) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__y_vector,  // get(index) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__fetch_function__PlannedPath__y_vector,  // fetch(index, &value) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__assign_function__PlannedPath__y_vector,  // assign(index, value) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__resize_function__PlannedPath__y_vector  // resize(index) function pointer
  },
  {
    "vd_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcity_msgs__msg__PlannedPath, vd_vector),  // bytes offset in struct
    NULL,  // default value
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__size_function__PlannedPath__vd_vector,  // size() function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__vd_vector,  // get_const(index) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__vd_vector,  // get(index) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__fetch_function__PlannedPath__vd_vector,  // fetch(index, &value) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__assign_function__PlannedPath__vd_vector,  // assign(index, value) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__resize_function__PlannedPath__vd_vector  // resize(index) function pointer
  },
  {
    "ori_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mcity_msgs__msg__PlannedPath, ori_vector),  // bytes offset in struct
    NULL,  // default value
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__size_function__PlannedPath__ori_vector,  // size() function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_const_function__PlannedPath__ori_vector,  // get_const(index) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__get_function__PlannedPath__ori_vector,  // get(index) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__fetch_function__PlannedPath__ori_vector,  // fetch(index, &value) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__assign_function__PlannedPath__ori_vector,  // assign(index, value) function pointer
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__resize_function__PlannedPath__ori_vector  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_message_members = {
  "mcity_msgs__msg",  // message namespace
  "PlannedPath",  // message name
  8,  // number of fields
  sizeof(mcity_msgs__msg__PlannedPath),
  mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_message_member_array,  // message members
  mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_init_function,  // function to initialize message memory (memory has to be allocated)
  mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_message_type_support_handle = {
  0,
  &mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mcity_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mcity_msgs, msg, PlannedPath)() {
  if (!mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_message_type_support_handle.typesupport_identifier) {
    mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mcity_msgs__msg__PlannedPath__rosidl_typesupport_introspection_c__PlannedPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
