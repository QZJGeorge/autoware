// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from control_performance_analysis:msg/Error.idl
// generated code does not contain a copyright notice
#include "control_performance_analysis/msg/detail/error__rosidl_typesupport_fastrtps_cpp.hpp"
#include "control_performance_analysis/msg/detail/error__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace control_performance_analysis
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
cdr_serialize(
  const control_performance_analysis::msg::Error & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lateral_error
  cdr << ros_message.lateral_error;
  // Member: lateral_error_velocity
  cdr << ros_message.lateral_error_velocity;
  // Member: lateral_error_acceleration
  cdr << ros_message.lateral_error_acceleration;
  // Member: longitudinal_error
  cdr << ros_message.longitudinal_error;
  // Member: longitudinal_error_velocity
  cdr << ros_message.longitudinal_error_velocity;
  // Member: longitudinal_error_acceleration
  cdr << ros_message.longitudinal_error_acceleration;
  // Member: heading_error
  cdr << ros_message.heading_error;
  // Member: heading_error_velocity
  cdr << ros_message.heading_error_velocity;
  // Member: control_effort_energy
  cdr << ros_message.control_effort_energy;
  // Member: error_energy
  cdr << ros_message.error_energy;
  // Member: value_approximation
  cdr << ros_message.value_approximation;
  // Member: curvature_estimate
  cdr << ros_message.curvature_estimate;
  // Member: curvature_estimate_pp
  cdr << ros_message.curvature_estimate_pp;
  // Member: vehicle_velocity_error
  cdr << ros_message.vehicle_velocity_error;
  // Member: tracking_curvature_discontinuity_ability
  cdr << ros_message.tracking_curvature_discontinuity_ability;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  control_performance_analysis::msg::Error & ros_message)
{
  // Member: lateral_error
  cdr >> ros_message.lateral_error;

  // Member: lateral_error_velocity
  cdr >> ros_message.lateral_error_velocity;

  // Member: lateral_error_acceleration
  cdr >> ros_message.lateral_error_acceleration;

  // Member: longitudinal_error
  cdr >> ros_message.longitudinal_error;

  // Member: longitudinal_error_velocity
  cdr >> ros_message.longitudinal_error_velocity;

  // Member: longitudinal_error_acceleration
  cdr >> ros_message.longitudinal_error_acceleration;

  // Member: heading_error
  cdr >> ros_message.heading_error;

  // Member: heading_error_velocity
  cdr >> ros_message.heading_error_velocity;

  // Member: control_effort_energy
  cdr >> ros_message.control_effort_energy;

  // Member: error_energy
  cdr >> ros_message.error_energy;

  // Member: value_approximation
  cdr >> ros_message.value_approximation;

  // Member: curvature_estimate
  cdr >> ros_message.curvature_estimate;

  // Member: curvature_estimate_pp
  cdr >> ros_message.curvature_estimate_pp;

  // Member: vehicle_velocity_error
  cdr >> ros_message.vehicle_velocity_error;

  // Member: tracking_curvature_discontinuity_ability
  cdr >> ros_message.tracking_curvature_discontinuity_ability;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
get_serialized_size(
  const control_performance_analysis::msg::Error & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lateral_error
  {
    size_t item_size = sizeof(ros_message.lateral_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_error_velocity
  {
    size_t item_size = sizeof(ros_message.lateral_error_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_error_acceleration
  {
    size_t item_size = sizeof(ros_message.lateral_error_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitudinal_error
  {
    size_t item_size = sizeof(ros_message.longitudinal_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitudinal_error_velocity
  {
    size_t item_size = sizeof(ros_message.longitudinal_error_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitudinal_error_acceleration
  {
    size_t item_size = sizeof(ros_message.longitudinal_error_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_error
  {
    size_t item_size = sizeof(ros_message.heading_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_error_velocity
  {
    size_t item_size = sizeof(ros_message.heading_error_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_effort_energy
  {
    size_t item_size = sizeof(ros_message.control_effort_energy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_energy
  {
    size_t item_size = sizeof(ros_message.error_energy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: value_approximation
  {
    size_t item_size = sizeof(ros_message.value_approximation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature_estimate
  {
    size_t item_size = sizeof(ros_message.curvature_estimate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature_estimate_pp
  {
    size_t item_size = sizeof(ros_message.curvature_estimate_pp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_velocity_error
  {
    size_t item_size = sizeof(ros_message.vehicle_velocity_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tracking_curvature_discontinuity_ability
  {
    size_t item_size = sizeof(ros_message.tracking_curvature_discontinuity_ability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
max_serialized_size_Error(
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


  // Member: lateral_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lateral_error_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lateral_error_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitudinal_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitudinal_error_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitudinal_error_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading_error_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: control_effort_energy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: error_energy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: value_approximation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: curvature_estimate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: curvature_estimate_pp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vehicle_velocity_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tracking_curvature_discontinuity_ability
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
    using DataType = control_performance_analysis::msg::Error;
    is_plain =
      (
      offsetof(DataType, tracking_curvature_discontinuity_ability) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Error__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const control_performance_analysis::msg::Error *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Error__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<control_performance_analysis::msg::Error *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Error__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const control_performance_analysis::msg::Error *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Error__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Error(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Error__callbacks = {
  "control_performance_analysis::msg",
  "Error",
  _Error__cdr_serialize,
  _Error__cdr_deserialize,
  _Error__get_serialized_size,
  _Error__max_serialized_size
};

static rosidl_message_type_support_t _Error__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Error__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace control_performance_analysis

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_control_performance_analysis
const rosidl_message_type_support_t *
get_message_type_support_handle<control_performance_analysis::msg::Error>()
{
  return &control_performance_analysis::msg::typesupport_fastrtps_cpp::_Error__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_performance_analysis, msg, Error)() {
  return &control_performance_analysis::msg::typesupport_fastrtps_cpp::_Error__handle;
}

#ifdef __cplusplus
}
#endif
