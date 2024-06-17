// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from operation_mode_transition_manager:msg/OperationModeTransitionManagerDebug.idl
// generated code does not contain a copyright notice
#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__rosidl_typesupport_fastrtps_cpp.hpp"
#include "operation_mode_transition_manager/msg/detail/operation_mode_transition_manager_debug__struct.hpp"

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


namespace operation_mode_transition_manager
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_operation_mode_transition_manager
cdr_serialize(
  const operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: status
  cdr << ros_message.status;
  // Member: in_autoware_control
  cdr << (ros_message.in_autoware_control ? true : false);
  // Member: in_transition
  cdr << (ros_message.in_transition ? true : false);
  // Member: is_all_ok
  cdr << (ros_message.is_all_ok ? true : false);
  // Member: engage_allowed_for_stopped_vehicle
  cdr << (ros_message.engage_allowed_for_stopped_vehicle ? true : false);
  // Member: trajectory_available_ok
  cdr << (ros_message.trajectory_available_ok ? true : false);
  // Member: lateral_deviation_ok
  cdr << (ros_message.lateral_deviation_ok ? true : false);
  // Member: yaw_deviation_ok
  cdr << (ros_message.yaw_deviation_ok ? true : false);
  // Member: speed_upper_deviation_ok
  cdr << (ros_message.speed_upper_deviation_ok ? true : false);
  // Member: speed_lower_deviation_ok
  cdr << (ros_message.speed_lower_deviation_ok ? true : false);
  // Member: stop_ok
  cdr << (ros_message.stop_ok ? true : false);
  // Member: large_acceleration_ok
  cdr << (ros_message.large_acceleration_ok ? true : false);
  // Member: large_lateral_acceleration_ok
  cdr << (ros_message.large_lateral_acceleration_ok ? true : false);
  // Member: large_lateral_acceleration_diff_ok
  cdr << (ros_message.large_lateral_acceleration_diff_ok ? true : false);
  // Member: current_speed
  cdr << ros_message.current_speed;
  // Member: target_control_speed
  cdr << ros_message.target_control_speed;
  // Member: target_planning_speed
  cdr << ros_message.target_planning_speed;
  // Member: target_control_acceleration
  cdr << ros_message.target_control_acceleration;
  // Member: lateral_acceleration
  cdr << ros_message.lateral_acceleration;
  // Member: lateral_acceleration_deviation
  cdr << ros_message.lateral_acceleration_deviation;
  // Member: lateral_deviation
  cdr << ros_message.lateral_deviation;
  // Member: yaw_deviation
  cdr << ros_message.yaw_deviation;
  // Member: speed_deviation
  cdr << ros_message.speed_deviation;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_operation_mode_transition_manager
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: status
  cdr >> ros_message.status;

  // Member: in_autoware_control
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_autoware_control = tmp ? true : false;
  }

  // Member: in_transition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_transition = tmp ? true : false;
  }

  // Member: is_all_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_all_ok = tmp ? true : false;
  }

  // Member: engage_allowed_for_stopped_vehicle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engage_allowed_for_stopped_vehicle = tmp ? true : false;
  }

  // Member: trajectory_available_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.trajectory_available_ok = tmp ? true : false;
  }

  // Member: lateral_deviation_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lateral_deviation_ok = tmp ? true : false;
  }

  // Member: yaw_deviation_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.yaw_deviation_ok = tmp ? true : false;
  }

  // Member: speed_upper_deviation_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.speed_upper_deviation_ok = tmp ? true : false;
  }

  // Member: speed_lower_deviation_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.speed_lower_deviation_ok = tmp ? true : false;
  }

  // Member: stop_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stop_ok = tmp ? true : false;
  }

  // Member: large_acceleration_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.large_acceleration_ok = tmp ? true : false;
  }

  // Member: large_lateral_acceleration_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.large_lateral_acceleration_ok = tmp ? true : false;
  }

  // Member: large_lateral_acceleration_diff_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.large_lateral_acceleration_diff_ok = tmp ? true : false;
  }

  // Member: current_speed
  cdr >> ros_message.current_speed;

  // Member: target_control_speed
  cdr >> ros_message.target_control_speed;

  // Member: target_planning_speed
  cdr >> ros_message.target_planning_speed;

  // Member: target_control_acceleration
  cdr >> ros_message.target_control_acceleration;

  // Member: lateral_acceleration
  cdr >> ros_message.lateral_acceleration;

  // Member: lateral_acceleration_deviation
  cdr >> ros_message.lateral_acceleration_deviation;

  // Member: lateral_deviation
  cdr >> ros_message.lateral_deviation;

  // Member: yaw_deviation
  cdr >> ros_message.yaw_deviation;

  // Member: speed_deviation
  cdr >> ros_message.speed_deviation;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_operation_mode_transition_manager
get_serialized_size(
  const operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug & ros_message,
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
  // Member: status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.status.size() + 1);
  // Member: in_autoware_control
  {
    size_t item_size = sizeof(ros_message.in_autoware_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_transition
  {
    size_t item_size = sizeof(ros_message.in_transition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_all_ok
  {
    size_t item_size = sizeof(ros_message.is_all_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engage_allowed_for_stopped_vehicle
  {
    size_t item_size = sizeof(ros_message.engage_allowed_for_stopped_vehicle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trajectory_available_ok
  {
    size_t item_size = sizeof(ros_message.trajectory_available_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_deviation_ok
  {
    size_t item_size = sizeof(ros_message.lateral_deviation_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_deviation_ok
  {
    size_t item_size = sizeof(ros_message.yaw_deviation_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_upper_deviation_ok
  {
    size_t item_size = sizeof(ros_message.speed_upper_deviation_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_lower_deviation_ok
  {
    size_t item_size = sizeof(ros_message.speed_lower_deviation_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stop_ok
  {
    size_t item_size = sizeof(ros_message.stop_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: large_acceleration_ok
  {
    size_t item_size = sizeof(ros_message.large_acceleration_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: large_lateral_acceleration_ok
  {
    size_t item_size = sizeof(ros_message.large_lateral_acceleration_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: large_lateral_acceleration_diff_ok
  {
    size_t item_size = sizeof(ros_message.large_lateral_acceleration_diff_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_speed
  {
    size_t item_size = sizeof(ros_message.current_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_control_speed
  {
    size_t item_size = sizeof(ros_message.target_control_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_planning_speed
  {
    size_t item_size = sizeof(ros_message.target_planning_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_control_acceleration
  {
    size_t item_size = sizeof(ros_message.target_control_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_acceleration
  {
    size_t item_size = sizeof(ros_message.lateral_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_acceleration_deviation
  {
    size_t item_size = sizeof(ros_message.lateral_acceleration_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_deviation
  {
    size_t item_size = sizeof(ros_message.lateral_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_deviation
  {
    size_t item_size = sizeof(ros_message.yaw_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_deviation
  {
    size_t item_size = sizeof(ros_message.speed_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_operation_mode_transition_manager
max_serialized_size_OperationModeTransitionManagerDebug(
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

  // Member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: in_autoware_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_transition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_all_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engage_allowed_for_stopped_vehicle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trajectory_available_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lateral_deviation_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: yaw_deviation_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_upper_deviation_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_lower_deviation_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stop_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: large_acceleration_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: large_lateral_acceleration_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: large_lateral_acceleration_diff_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: target_control_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: target_planning_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: target_control_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lateral_acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lateral_acceleration_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lateral_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_deviation
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
    using DataType = operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug;
    is_plain =
      (
      offsetof(DataType, speed_deviation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _OperationModeTransitionManagerDebug__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OperationModeTransitionManagerDebug__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OperationModeTransitionManagerDebug__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OperationModeTransitionManagerDebug__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OperationModeTransitionManagerDebug(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OperationModeTransitionManagerDebug__callbacks = {
  "operation_mode_transition_manager::msg",
  "OperationModeTransitionManagerDebug",
  _OperationModeTransitionManagerDebug__cdr_serialize,
  _OperationModeTransitionManagerDebug__cdr_deserialize,
  _OperationModeTransitionManagerDebug__get_serialized_size,
  _OperationModeTransitionManagerDebug__max_serialized_size
};

static rosidl_message_type_support_t _OperationModeTransitionManagerDebug__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OperationModeTransitionManagerDebug__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace operation_mode_transition_manager

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_operation_mode_transition_manager
const rosidl_message_type_support_t *
get_message_type_support_handle<operation_mode_transition_manager::msg::OperationModeTransitionManagerDebug>()
{
  return &operation_mode_transition_manager::msg::typesupport_fastrtps_cpp::_OperationModeTransitionManagerDebug__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, operation_mode_transition_manager, msg, OperationModeTransitionManagerDebug)() {
  return &operation_mode_transition_manager::msg::typesupport_fastrtps_cpp::_OperationModeTransitionManagerDebug__handle;
}

#ifdef __cplusplus
}
#endif
