// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from control_performance_analysis:msg/Error.idl
// generated code does not contain a copyright notice
#include "control_performance_analysis/msg/detail/error__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "control_performance_analysis/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "control_performance_analysis/msg/detail/error__struct.h"
#include "control_performance_analysis/msg/detail/error__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Error__ros_msg_type = control_performance_analysis__msg__Error;

static bool _Error__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Error__ros_msg_type * ros_message = static_cast<const _Error__ros_msg_type *>(untyped_ros_message);
  // Field name: lateral_error
  {
    cdr << ros_message->lateral_error;
  }

  // Field name: lateral_error_velocity
  {
    cdr << ros_message->lateral_error_velocity;
  }

  // Field name: lateral_error_acceleration
  {
    cdr << ros_message->lateral_error_acceleration;
  }

  // Field name: longitudinal_error
  {
    cdr << ros_message->longitudinal_error;
  }

  // Field name: longitudinal_error_velocity
  {
    cdr << ros_message->longitudinal_error_velocity;
  }

  // Field name: longitudinal_error_acceleration
  {
    cdr << ros_message->longitudinal_error_acceleration;
  }

  // Field name: heading_error
  {
    cdr << ros_message->heading_error;
  }

  // Field name: heading_error_velocity
  {
    cdr << ros_message->heading_error_velocity;
  }

  // Field name: control_effort_energy
  {
    cdr << ros_message->control_effort_energy;
  }

  // Field name: error_energy
  {
    cdr << ros_message->error_energy;
  }

  // Field name: value_approximation
  {
    cdr << ros_message->value_approximation;
  }

  // Field name: curvature_estimate
  {
    cdr << ros_message->curvature_estimate;
  }

  // Field name: curvature_estimate_pp
  {
    cdr << ros_message->curvature_estimate_pp;
  }

  // Field name: vehicle_velocity_error
  {
    cdr << ros_message->vehicle_velocity_error;
  }

  // Field name: tracking_curvature_discontinuity_ability
  {
    cdr << ros_message->tracking_curvature_discontinuity_ability;
  }

  return true;
}

static bool _Error__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Error__ros_msg_type * ros_message = static_cast<_Error__ros_msg_type *>(untyped_ros_message);
  // Field name: lateral_error
  {
    cdr >> ros_message->lateral_error;
  }

  // Field name: lateral_error_velocity
  {
    cdr >> ros_message->lateral_error_velocity;
  }

  // Field name: lateral_error_acceleration
  {
    cdr >> ros_message->lateral_error_acceleration;
  }

  // Field name: longitudinal_error
  {
    cdr >> ros_message->longitudinal_error;
  }

  // Field name: longitudinal_error_velocity
  {
    cdr >> ros_message->longitudinal_error_velocity;
  }

  // Field name: longitudinal_error_acceleration
  {
    cdr >> ros_message->longitudinal_error_acceleration;
  }

  // Field name: heading_error
  {
    cdr >> ros_message->heading_error;
  }

  // Field name: heading_error_velocity
  {
    cdr >> ros_message->heading_error_velocity;
  }

  // Field name: control_effort_energy
  {
    cdr >> ros_message->control_effort_energy;
  }

  // Field name: error_energy
  {
    cdr >> ros_message->error_energy;
  }

  // Field name: value_approximation
  {
    cdr >> ros_message->value_approximation;
  }

  // Field name: curvature_estimate
  {
    cdr >> ros_message->curvature_estimate;
  }

  // Field name: curvature_estimate_pp
  {
    cdr >> ros_message->curvature_estimate_pp;
  }

  // Field name: vehicle_velocity_error
  {
    cdr >> ros_message->vehicle_velocity_error;
  }

  // Field name: tracking_curvature_discontinuity_ability
  {
    cdr >> ros_message->tracking_curvature_discontinuity_ability;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_performance_analysis
size_t get_serialized_size_control_performance_analysis__msg__Error(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Error__ros_msg_type * ros_message = static_cast<const _Error__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lateral_error
  {
    size_t item_size = sizeof(ros_message->lateral_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_error_velocity
  {
    size_t item_size = sizeof(ros_message->lateral_error_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_error_acceleration
  {
    size_t item_size = sizeof(ros_message->lateral_error_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitudinal_error
  {
    size_t item_size = sizeof(ros_message->longitudinal_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitudinal_error_velocity
  {
    size_t item_size = sizeof(ros_message->longitudinal_error_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitudinal_error_acceleration
  {
    size_t item_size = sizeof(ros_message->longitudinal_error_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_error
  {
    size_t item_size = sizeof(ros_message->heading_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_error_velocity
  {
    size_t item_size = sizeof(ros_message->heading_error_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_effort_energy
  {
    size_t item_size = sizeof(ros_message->control_effort_energy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_energy
  {
    size_t item_size = sizeof(ros_message->error_energy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value_approximation
  {
    size_t item_size = sizeof(ros_message->value_approximation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature_estimate
  {
    size_t item_size = sizeof(ros_message->curvature_estimate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature_estimate_pp
  {
    size_t item_size = sizeof(ros_message->curvature_estimate_pp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_velocity_error
  {
    size_t item_size = sizeof(ros_message->vehicle_velocity_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tracking_curvature_discontinuity_ability
  {
    size_t item_size = sizeof(ros_message->tracking_curvature_discontinuity_ability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Error__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_control_performance_analysis__msg__Error(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_control_performance_analysis
size_t max_serialized_size_control_performance_analysis__msg__Error(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: lateral_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lateral_error_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lateral_error_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitudinal_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitudinal_error_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitudinal_error_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading_error_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: control_effort_energy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: error_energy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: value_approximation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: curvature_estimate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: curvature_estimate_pp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vehicle_velocity_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tracking_curvature_discontinuity_ability
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_performance_analysis__msg__Error;
    is_plain =
      (
      offsetof(DataType, tracking_curvature_discontinuity_ability) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Error__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_control_performance_analysis__msg__Error(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Error = {
  "control_performance_analysis::msg",
  "Error",
  _Error__cdr_serialize,
  _Error__cdr_deserialize,
  _Error__get_serialized_size,
  _Error__max_serialized_size
};

static rosidl_message_type_support_t _Error__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Error,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, control_performance_analysis, msg, Error)() {
  return &_Error__type_support;
}

#if defined(__cplusplus)
}
#endif
