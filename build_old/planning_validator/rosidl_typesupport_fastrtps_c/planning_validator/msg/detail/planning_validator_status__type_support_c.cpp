// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from planning_validator:msg/PlanningValidatorStatus.idl
// generated code does not contain a copyright notice
#include "planning_validator/msg/detail/planning_validator_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "planning_validator/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "planning_validator/msg/detail/planning_validator_status__struct.h"
#include "planning_validator/msg/detail/planning_validator_status__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_validator
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_validator
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planning_validator
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _PlanningValidatorStatus__ros_msg_type = planning_validator__msg__PlanningValidatorStatus;

static bool _PlanningValidatorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanningValidatorStatus__ros_msg_type * ros_message = static_cast<const _PlanningValidatorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: is_valid_finite_value
  {
    cdr << (ros_message->is_valid_finite_value ? true : false);
  }

  // Field name: is_valid_interval
  {
    cdr << (ros_message->is_valid_interval ? true : false);
  }

  // Field name: is_valid_relative_angle
  {
    cdr << (ros_message->is_valid_relative_angle ? true : false);
  }

  // Field name: is_valid_curvature
  {
    cdr << (ros_message->is_valid_curvature ? true : false);
  }

  // Field name: is_valid_lateral_acc
  {
    cdr << (ros_message->is_valid_lateral_acc ? true : false);
  }

  // Field name: is_valid_longitudinal_max_acc
  {
    cdr << (ros_message->is_valid_longitudinal_max_acc ? true : false);
  }

  // Field name: is_valid_longitudinal_min_acc
  {
    cdr << (ros_message->is_valid_longitudinal_min_acc ? true : false);
  }

  // Field name: is_valid_steering
  {
    cdr << (ros_message->is_valid_steering ? true : false);
  }

  // Field name: is_valid_steering_rate
  {
    cdr << (ros_message->is_valid_steering_rate ? true : false);
  }

  // Field name: is_valid_velocity_deviation
  {
    cdr << (ros_message->is_valid_velocity_deviation ? true : false);
  }

  // Field name: is_valid_distance_deviation
  {
    cdr << (ros_message->is_valid_distance_deviation ? true : false);
  }

  // Field name: max_interval_distance
  {
    cdr << ros_message->max_interval_distance;
  }

  // Field name: max_relative_angle
  {
    cdr << ros_message->max_relative_angle;
  }

  // Field name: max_curvature
  {
    cdr << ros_message->max_curvature;
  }

  // Field name: max_lateral_acc
  {
    cdr << ros_message->max_lateral_acc;
  }

  // Field name: max_longitudinal_acc
  {
    cdr << ros_message->max_longitudinal_acc;
  }

  // Field name: min_longitudinal_acc
  {
    cdr << ros_message->min_longitudinal_acc;
  }

  // Field name: max_steering
  {
    cdr << ros_message->max_steering;
  }

  // Field name: max_steering_rate
  {
    cdr << ros_message->max_steering_rate;
  }

  // Field name: velocity_deviation
  {
    cdr << ros_message->velocity_deviation;
  }

  // Field name: distance_deviation
  {
    cdr << ros_message->distance_deviation;
  }

  // Field name: invalid_count
  {
    cdr << ros_message->invalid_count;
  }

  return true;
}

static bool _PlanningValidatorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanningValidatorStatus__ros_msg_type * ros_message = static_cast<_PlanningValidatorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: is_valid_finite_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_finite_value = tmp ? true : false;
  }

  // Field name: is_valid_interval
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_interval = tmp ? true : false;
  }

  // Field name: is_valid_relative_angle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_relative_angle = tmp ? true : false;
  }

  // Field name: is_valid_curvature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_curvature = tmp ? true : false;
  }

  // Field name: is_valid_lateral_acc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_lateral_acc = tmp ? true : false;
  }

  // Field name: is_valid_longitudinal_max_acc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_longitudinal_max_acc = tmp ? true : false;
  }

  // Field name: is_valid_longitudinal_min_acc
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_longitudinal_min_acc = tmp ? true : false;
  }

  // Field name: is_valid_steering
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_steering = tmp ? true : false;
  }

  // Field name: is_valid_steering_rate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_steering_rate = tmp ? true : false;
  }

  // Field name: is_valid_velocity_deviation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_velocity_deviation = tmp ? true : false;
  }

  // Field name: is_valid_distance_deviation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid_distance_deviation = tmp ? true : false;
  }

  // Field name: max_interval_distance
  {
    cdr >> ros_message->max_interval_distance;
  }

  // Field name: max_relative_angle
  {
    cdr >> ros_message->max_relative_angle;
  }

  // Field name: max_curvature
  {
    cdr >> ros_message->max_curvature;
  }

  // Field name: max_lateral_acc
  {
    cdr >> ros_message->max_lateral_acc;
  }

  // Field name: max_longitudinal_acc
  {
    cdr >> ros_message->max_longitudinal_acc;
  }

  // Field name: min_longitudinal_acc
  {
    cdr >> ros_message->min_longitudinal_acc;
  }

  // Field name: max_steering
  {
    cdr >> ros_message->max_steering;
  }

  // Field name: max_steering_rate
  {
    cdr >> ros_message->max_steering_rate;
  }

  // Field name: velocity_deviation
  {
    cdr >> ros_message->velocity_deviation;
  }

  // Field name: distance_deviation
  {
    cdr >> ros_message->distance_deviation;
  }

  // Field name: invalid_count
  {
    cdr >> ros_message->invalid_count;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_validator
size_t get_serialized_size_planning_validator__msg__PlanningValidatorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanningValidatorStatus__ros_msg_type * ros_message = static_cast<const _PlanningValidatorStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name is_valid_finite_value
  {
    size_t item_size = sizeof(ros_message->is_valid_finite_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_valid_interval
  {
    size_t item_size = sizeof(ros_message->is_valid_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_valid_relative_angle
  {
    size_t item_size = sizeof(ros_message->is_valid_relative_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_valid_curvature
  {
    size_t item_size = sizeof(ros_message->is_valid_curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_valid_lateral_acc
  {
    size_t item_size = sizeof(ros_message->is_valid_lateral_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_valid_longitudinal_max_acc
  {
    size_t item_size = sizeof(ros_message->is_valid_longitudinal_max_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_valid_longitudinal_min_acc
  {
    size_t item_size = sizeof(ros_message->is_valid_longitudinal_min_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_valid_steering
  {
    size_t item_size = sizeof(ros_message->is_valid_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_valid_steering_rate
  {
    size_t item_size = sizeof(ros_message->is_valid_steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_valid_velocity_deviation
  {
    size_t item_size = sizeof(ros_message->is_valid_velocity_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_valid_distance_deviation
  {
    size_t item_size = sizeof(ros_message->is_valid_distance_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_interval_distance
  {
    size_t item_size = sizeof(ros_message->max_interval_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_relative_angle
  {
    size_t item_size = sizeof(ros_message->max_relative_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_curvature
  {
    size_t item_size = sizeof(ros_message->max_curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_lateral_acc
  {
    size_t item_size = sizeof(ros_message->max_lateral_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_longitudinal_acc
  {
    size_t item_size = sizeof(ros_message->max_longitudinal_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_longitudinal_acc
  {
    size_t item_size = sizeof(ros_message->min_longitudinal_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_steering
  {
    size_t item_size = sizeof(ros_message->max_steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_steering_rate
  {
    size_t item_size = sizeof(ros_message->max_steering_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_deviation
  {
    size_t item_size = sizeof(ros_message->velocity_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_deviation
  {
    size_t item_size = sizeof(ros_message->distance_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name invalid_count
  {
    size_t item_size = sizeof(ros_message->invalid_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanningValidatorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planning_validator__msg__PlanningValidatorStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planning_validator
size_t max_serialized_size_planning_validator__msg__PlanningValidatorStatus(
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

  // member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_valid_finite_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_valid_interval
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_valid_relative_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_valid_curvature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_valid_lateral_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_valid_longitudinal_max_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_valid_longitudinal_min_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_valid_steering
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_valid_steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_valid_velocity_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_valid_distance_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_interval_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_relative_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_curvature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_lateral_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_longitudinal_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: min_longitudinal_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_steering
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_steering_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: velocity_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: distance_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: invalid_count
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
    using DataType = planning_validator__msg__PlanningValidatorStatus;
    is_plain =
      (
      offsetof(DataType, invalid_count) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlanningValidatorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_planning_validator__msg__PlanningValidatorStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanningValidatorStatus = {
  "planning_validator::msg",
  "PlanningValidatorStatus",
  _PlanningValidatorStatus__cdr_serialize,
  _PlanningValidatorStatus__cdr_deserialize,
  _PlanningValidatorStatus__get_serialized_size,
  _PlanningValidatorStatus__max_serialized_size
};

static rosidl_message_type_support_t _PlanningValidatorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanningValidatorStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planning_validator, msg, PlanningValidatorStatus)() {
  return &_PlanningValidatorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
