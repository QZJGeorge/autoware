// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__rosidl_typesupport_introspection_c.h"
#include "control_performance_analysis/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__functions.h"
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__struct.h"


// Include directives for member types
// Member `longitudinal_acceleration`
// Member `longitudinal_jerk`
// Member `lateral_acceleration`
// Member `lateral_jerk`
// Member `desired_steering_angle`
// Member `controller_processing_time`
#include "control_performance_analysis/msg/float_stamped.h"
// Member `longitudinal_acceleration`
// Member `longitudinal_jerk`
// Member `lateral_acceleration`
// Member `lateral_jerk`
// Member `desired_steering_angle`
// Member `controller_processing_time`
#include "control_performance_analysis/msg/detail/float_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_performance_analysis__msg__DrivingMonitorStamped__init(message_memory);
}

void control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_fini_function(void * message_memory)
{
  control_performance_analysis__msg__DrivingMonitorStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_member_array[6] = {
  {
    "longitudinal_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_performance_analysis__msg__DrivingMonitorStamped, longitudinal_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitudinal_jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_performance_analysis__msg__DrivingMonitorStamped, longitudinal_jerk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lateral_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_performance_analysis__msg__DrivingMonitorStamped, lateral_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lateral_jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_performance_analysis__msg__DrivingMonitorStamped, lateral_jerk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_steering_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_performance_analysis__msg__DrivingMonitorStamped, desired_steering_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "controller_processing_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_performance_analysis__msg__DrivingMonitorStamped, controller_processing_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_members = {
  "control_performance_analysis__msg",  // message namespace
  "DrivingMonitorStamped",  // message name
  6,  // number of fields
  sizeof(control_performance_analysis__msg__DrivingMonitorStamped),
  control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_member_array,  // message members
  control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_type_support_handle = {
  0,
  &control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_performance_analysis
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_performance_analysis, msg, DrivingMonitorStamped)() {
  control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_performance_analysis, msg, FloatStamped)();
  control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_performance_analysis, msg, FloatStamped)();
  control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_performance_analysis, msg, FloatStamped)();
  control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_performance_analysis, msg, FloatStamped)();
  control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_performance_analysis, msg, FloatStamped)();
  control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_performance_analysis, msg, FloatStamped)();
  if (!control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_type_support_handle.typesupport_identifier) {
    control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &control_performance_analysis__msg__DrivingMonitorStamped__rosidl_typesupport_introspection_c__DrivingMonitorStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
