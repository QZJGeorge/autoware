// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from control_performance_analysis:msg/DrivingMonitorStamped.idl
// generated code does not contain a copyright notice
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "control_performance_analysis/msg/detail/driving_monitor_stamped__struct.hpp"

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
bool cdr_serialize(
  const control_performance_analysis::msg::FloatStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  control_performance_analysis::msg::FloatStamped &);
size_t get_serialized_size(
  const control_performance_analysis::msg::FloatStamped &,
  size_t current_alignment);
size_t
max_serialized_size_FloatStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace control_performance_analysis

// functions for control_performance_analysis::msg::FloatStamped already declared above

// functions for control_performance_analysis::msg::FloatStamped already declared above

// functions for control_performance_analysis::msg::FloatStamped already declared above

// functions for control_performance_analysis::msg::FloatStamped already declared above

// functions for control_performance_analysis::msg::FloatStamped already declared above


namespace control_performance_analysis
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
cdr_serialize(
  const control_performance_analysis::msg::DrivingMonitorStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: longitudinal_acceleration
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.longitudinal_acceleration,
    cdr);
  // Member: longitudinal_jerk
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.longitudinal_jerk,
    cdr);
  // Member: lateral_acceleration
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lateral_acceleration,
    cdr);
  // Member: lateral_jerk
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lateral_jerk,
    cdr);
  // Member: desired_steering_angle
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.desired_steering_angle,
    cdr);
  // Member: controller_processing_time
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.controller_processing_time,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  control_performance_analysis::msg::DrivingMonitorStamped & ros_message)
{
  // Member: longitudinal_acceleration
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.longitudinal_acceleration);

  // Member: longitudinal_jerk
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.longitudinal_jerk);

  // Member: lateral_acceleration
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lateral_acceleration);

  // Member: lateral_jerk
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lateral_jerk);

  // Member: desired_steering_angle
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.desired_steering_angle);

  // Member: controller_processing_time
  control_performance_analysis::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.controller_processing_time);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
get_serialized_size(
  const control_performance_analysis::msg::DrivingMonitorStamped & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: longitudinal_acceleration

  current_alignment +=
    control_performance_analysis::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.longitudinal_acceleration, current_alignment);
  // Member: longitudinal_jerk

  current_alignment +=
    control_performance_analysis::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.longitudinal_jerk, current_alignment);
  // Member: lateral_acceleration

  current_alignment +=
    control_performance_analysis::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lateral_acceleration, current_alignment);
  // Member: lateral_jerk

  current_alignment +=
    control_performance_analysis::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lateral_jerk, current_alignment);
  // Member: desired_steering_angle

  current_alignment +=
    control_performance_analysis::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.desired_steering_angle, current_alignment);
  // Member: controller_processing_time

  current_alignment +=
    control_performance_analysis::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.controller_processing_time, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_performance_analysis
max_serialized_size_DrivingMonitorStamped(
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


  // Member: longitudinal_acceleration
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        control_performance_analysis::msg::typesupport_fastrtps_cpp::max_serialized_size_FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: longitudinal_jerk
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        control_performance_analysis::msg::typesupport_fastrtps_cpp::max_serialized_size_FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: lateral_acceleration
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        control_performance_analysis::msg::typesupport_fastrtps_cpp::max_serialized_size_FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: lateral_jerk
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        control_performance_analysis::msg::typesupport_fastrtps_cpp::max_serialized_size_FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: desired_steering_angle
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        control_performance_analysis::msg::typesupport_fastrtps_cpp::max_serialized_size_FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: controller_processing_time
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        control_performance_analysis::msg::typesupport_fastrtps_cpp::max_serialized_size_FloatStamped(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = control_performance_analysis::msg::DrivingMonitorStamped;
    is_plain =
      (
      offsetof(DataType, controller_processing_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DrivingMonitorStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const control_performance_analysis::msg::DrivingMonitorStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DrivingMonitorStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<control_performance_analysis::msg::DrivingMonitorStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DrivingMonitorStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const control_performance_analysis::msg::DrivingMonitorStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DrivingMonitorStamped__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DrivingMonitorStamped(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DrivingMonitorStamped__callbacks = {
  "control_performance_analysis::msg",
  "DrivingMonitorStamped",
  _DrivingMonitorStamped__cdr_serialize,
  _DrivingMonitorStamped__cdr_deserialize,
  _DrivingMonitorStamped__get_serialized_size,
  _DrivingMonitorStamped__max_serialized_size
};

static rosidl_message_type_support_t _DrivingMonitorStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DrivingMonitorStamped__callbacks,
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
get_message_type_support_handle<control_performance_analysis::msg::DrivingMonitorStamped>()
{
  return &control_performance_analysis::msg::typesupport_fastrtps_cpp::_DrivingMonitorStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_performance_analysis, msg, DrivingMonitorStamped)() {
  return &control_performance_analysis::msg::typesupport_fastrtps_cpp::_DrivingMonitorStamped__handle;
}

#ifdef __cplusplus
}
#endif
