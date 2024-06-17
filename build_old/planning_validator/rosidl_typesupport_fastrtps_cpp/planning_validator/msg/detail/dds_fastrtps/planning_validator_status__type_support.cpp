// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from planning_validator:msg/PlanningValidatorStatus.idl
// generated code does not contain a copyright notice
#include "planning_validator/msg/detail/planning_validator_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "planning_validator/msg/detail/planning_validator_status__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace planning_validator
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_validator
cdr_serialize(
  const planning_validator::msg::PlanningValidatorStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: is_valid_finite_value
  cdr << (ros_message.is_valid_finite_value ? true : false);
  // Member: is_valid_interval
  cdr << (ros_message.is_valid_interval ? true : false);
  // Member: is_valid_relative_angle
  cdr << (ros_message.is_valid_relative_angle ? true : false);
  // Member: is_valid_curvature
  cdr << (ros_message.is_valid_curvature ? true : false);
  // Member: is_valid_lateral_acc
  cdr << (ros_message.is_valid_lateral_acc ? true : false);
  // Member: is_valid_longitudinal_max_acc
  cdr << (ros_message.is_valid_longitudinal_max_acc ? true : false);
  // Member: is_valid_longitudinal_min_acc
  cdr << (ros_message.is_valid_longitudinal_min_acc ? true : false);
  // Member: is_valid_steering
  cdr << (ros_message.is_valid_steering ? true : false);
  // Member: is_valid_steering_rate
  cdr << (ros_message.is_valid_steering_rate ? true : false);
  // Member: is_valid_velocity_deviation
  cdr << (ros_message.is_valid_velocity_deviation ? true : false);
  // Member: is_valid_distance_deviation
  cdr << (ros_message.is_valid_distance_deviation ? true : false);
  // Member: max_interval_distance
  cdr << ros_message.max_interval_distance;
  // Member: max_relative_angle
  cdr << ros_message.max_relative_angle;
  // Member: max_curvature
  cdr << ros_message.max_curvature;
  // Member: max_lateral_acc
  cdr << ros_message.max_lateral_acc;
  // Member: max_longitudinal_acc
  cdr << ros_message.max_longitudinal_acc;
  // Member: min_longitudinal_acc
  cdr << ros_message.min_longitudinal_acc;
  // Member: max_steering
  cdr << ros_message.max_steering;
  // Member: max_steering_rate
  cdr << ros_message.max_steering_rate;
  // Member: velocity_deviation
  cdr << ros_message.velocity_deviation;
  // Member: distance_deviation
  cdr << ros_message.distance_deviation;
  // Member: invalid_count
  cdr << ros_message.invalid_count;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_validator
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  planning_validator::msg::PlanningValidatorStatus & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: is_valid_finite_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_finite_value = tmp ? true : false;
  }

  // Member: is_valid_interval
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_interval = tmp ? true : false;
  }

  // Member: is_valid_relative_angle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_relative_angle = tmp ? true : false;
  }

  // Member: is_valid_curvature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_curvature = tmp ? true : false;
  }

  // Member: is_valid_lateral_acc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_lateral_acc = tmp ? true : false;
  }

  // Member: is_valid_longitudinal_max_acc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_longitudinal_max_acc = tmp ? true : false;
  }

  // Member: is_valid_longitudinal_min_acc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_longitudinal_min_acc = tmp ? true : false;
  }

  // Member: is_valid_steering
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_steering = tmp ? true : false;
  }

  // Member: is_valid_steering_rate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_steering_rate = tmp ? true : false;
  }

  // Member: is_valid_velocity_deviation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_velocity_deviation = tmp ? true : false;
  }

  // Member: is_valid_distance_deviation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_valid_distance_deviation = tmp ? true : false;
  }

  // Member: max_interval_distance
  cdr >> ros_message.max_interval_distance;

  // Member: max_relative_angle
  cdr >> ros_message.max_relative_angle;

  // Member: max_curvature
  cdr >> ros_message.max_curvature;

  // Member: max_lateral_acc
  cdr >> ros_message.max_lateral_acc;

  // Member: max_longitudinal_acc
  cdr >> ros_message.max_longitudinal_acc;

  // Member: min_longitudinal_acc
  cdr >> ros_message.min_longitudinal_acc;

  // Member: max_steering
  cdr >> ros_message.max_steering;

  // Member: max_steering_rate
  cdr >> ros_message.max_steering_rate;

  // Member: velocity_deviation
  cdr >> ros_message.velocity_deviation;

  // Member: distance_deviation
  cdr >> ros_message.distance_deviation;

  // Member: invalid_count
  cdr >> ros_message.invalid_count;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_validator
get_serialized_size(
  const planning_validator::msg::PlanningValidatorStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: is_valid_finite_value
  {
    size_t item_size = sizeof(ros_message.is_valid_finite_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_valid_interval
  {
    size_t item_size = sizeof(ros_message.is_valid_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_valid_relative_angle
  {
    size_t item_size = sizeof(ros_message.is_valid_relative_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_valid_curvature
  {
    size_t item_size = sizeof(ros_message.is_valid_curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_valid_lateral_acc
  {
    size_t item_size = sizeof(ros_message.is_valid_lateral_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_valid_longitudinal_max_acc
  {
    size_t item_size = sizeof(ros_message.is_valid_longitudinal_max_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_valid_longitudinal_min_acc
  {
    size_t item_size = sizeof(ros_message.is_valid_longitudinal_min_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_valid_steering
  {
    size_t item_size = sizeof(ros_message.is_valid_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_valid_steering_rate
  {
    size_t item_size = sizeof(ros_message.is_valid_steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_valid_velocity_deviation
  {
    size_t item_size = sizeof(ros_message.is_valid_velocity_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_valid_distance_deviation
  {
    size_t item_size = sizeof(ros_message.is_valid_distance_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_interval_distance
  {
    size_t item_size = sizeof(ros_message.max_interval_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_relative_angle
  {
    size_t item_size = sizeof(ros_message.max_relative_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_curvature
  {
    size_t item_size = sizeof(ros_message.max_curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_lateral_acc
  {
    size_t item_size = sizeof(ros_message.max_lateral_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_longitudinal_acc
  {
    size_t item_size = sizeof(ros_message.max_longitudinal_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_longitudinal_acc
  {
    size_t item_size = sizeof(ros_message.min_longitudinal_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_steering
  {
    size_t item_size = sizeof(ros_message.max_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_steering_rate
  {
    size_t item_size = sizeof(ros_message.max_steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_deviation
  {
    size_t item_size = sizeof(ros_message.velocity_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_deviation
  {
    size_t item_size = sizeof(ros_message.distance_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: invalid_count
  {
    size_t item_size = sizeof(ros_message.invalid_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_planning_validator
max_serialized_size_PlanningValidatorStatus(
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


  // Member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_valid_finite_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_valid_interval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_valid_relative_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_valid_curvature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_valid_lateral_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_valid_longitudinal_max_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_valid_longitudinal_min_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_valid_steering
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_valid_steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_valid_velocity_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_valid_distance_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_interval_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_relative_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_curvature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_lateral_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_longitudinal_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_longitudinal_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_steering
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: velocity_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: distance_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: invalid_count
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
    using DataType = planning_validator::msg::PlanningValidatorStatus;
    is_plain =
      (
      offsetof(DataType, invalid_count) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PlanningValidatorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const planning_validator::msg::PlanningValidatorStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanningValidatorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<planning_validator::msg::PlanningValidatorStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanningValidatorStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const planning_validator::msg::PlanningValidatorStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanningValidatorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PlanningValidatorStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PlanningValidatorStatus__callbacks = {
  "planning_validator::msg",
  "PlanningValidatorStatus",
  _PlanningValidatorStatus__cdr_serialize,
  _PlanningValidatorStatus__cdr_deserialize,
  _PlanningValidatorStatus__get_serialized_size,
  _PlanningValidatorStatus__max_serialized_size
};

static rosidl_message_type_support_t _PlanningValidatorStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanningValidatorStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace planning_validator

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_planning_validator
const rosidl_message_type_support_t *
get_message_type_support_handle<planning_validator::msg::PlanningValidatorStatus>()
{
  return &planning_validator::msg::typesupport_fastrtps_cpp::_PlanningValidatorStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, planning_validator, msg, PlanningValidatorStatus)() {
  return &planning_validator::msg::typesupport_fastrtps_cpp::_PlanningValidatorStatus__handle;
}

#ifdef __cplusplus
}
#endif
