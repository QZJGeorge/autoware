// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mcity_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "mcity_msgs/msg/detail/vehicle_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mcity_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mcity_msgs/msg/detail/vehicle_state__struct.h"
#include "mcity_msgs/msg/detail/vehicle_state__functions.h"
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


using _VehicleState__ros_msg_type = mcity_msgs__msg__VehicleState;

static bool _VehicleState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleState__ros_msg_type * ros_message = static_cast<const _VehicleState__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: speed_x
  {
    cdr << ros_message->speed_x;
  }

  // Field name: speed_y
  {
    cdr << ros_message->speed_y;
  }

  // Field name: speed_z
  {
    cdr << ros_message->speed_z;
  }

  // Field name: acc_x
  {
    cdr << ros_message->acc_x;
  }

  // Field name: acc_y
  {
    cdr << ros_message->acc_y;
  }

  // Field name: acc_z
  {
    cdr << ros_message->acc_z;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: by_wire_enabled
  {
    cdr << (ros_message->by_wire_enabled ? true : false);
  }

  // Field name: throttle_cmd
  {
    cdr << ros_message->throttle_cmd;
  }

  // Field name: throttle_input
  {
    cdr << ros_message->throttle_input;
  }

  // Field name: throttle_state
  {
    cdr << ros_message->throttle_state;
  }

  // Field name: throttle_enabled
  {
    cdr << (ros_message->throttle_enabled ? true : false);
  }

  // Field name: throttle_override
  {
    cdr << (ros_message->throttle_override ? true : false);
  }

  // Field name: throttle_driver
  {
    cdr << (ros_message->throttle_driver ? true : false);
  }

  // Field name: throttle_timeout
  {
    cdr << (ros_message->throttle_timeout ? true : false);
  }

  // Field name: brake_cmd
  {
    cdr << ros_message->brake_cmd;
  }

  // Field name: brake_input
  {
    cdr << ros_message->brake_input;
  }

  // Field name: brake_state
  {
    cdr << ros_message->brake_state;
  }

  // Field name: brake_torq_cmd
  {
    cdr << ros_message->brake_torq_cmd;
  }

  // Field name: brake_torq_input
  {
    cdr << ros_message->brake_torq_input;
  }

  // Field name: brake_torq_state
  {
    cdr << ros_message->brake_torq_state;
  }

  // Field name: brake_boo_output
  {
    cdr << (ros_message->brake_boo_output ? true : false);
  }

  // Field name: brake_enabled
  {
    cdr << (ros_message->brake_enabled ? true : false);
  }

  // Field name: brake_override
  {
    cdr << (ros_message->brake_override ? true : false);
  }

  // Field name: brake_driver
  {
    cdr << (ros_message->brake_driver ? true : false);
  }

  // Field name: brake_timeout
  {
    cdr << (ros_message->brake_timeout ? true : false);
  }

  // Field name: steer_cmd
  {
    cdr << ros_message->steer_cmd;
  }

  // Field name: steer_state
  {
    cdr << ros_message->steer_state;
  }

  // Field name: steer_torque
  {
    cdr << ros_message->steer_torque;
  }

  // Field name: steer_enabled
  {
    cdr << (ros_message->steer_enabled ? true : false);
  }

  // Field name: steer_override
  {
    cdr << (ros_message->steer_override ? true : false);
  }

  // Field name: steer_timeout
  {
    cdr << (ros_message->steer_timeout ? true : false);
  }

  // Field name: gear_pos
  {
    cdr << ros_message->gear_pos;
  }

  // Field name: wheel_v_front_left
  {
    cdr << ros_message->wheel_v_front_left;
  }

  // Field name: wheel_v_front_right
  {
    cdr << ros_message->wheel_v_front_right;
  }

  // Field name: wheel_v_rear_left
  {
    cdr << ros_message->wheel_v_rear_left;
  }

  // Field name: wheel_v_rear_right
  {
    cdr << ros_message->wheel_v_rear_right;
  }

  return true;
}

static bool _VehicleState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleState__ros_msg_type * ros_message = static_cast<_VehicleState__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  // Field name: speed_x
  {
    cdr >> ros_message->speed_x;
  }

  // Field name: speed_y
  {
    cdr >> ros_message->speed_y;
  }

  // Field name: speed_z
  {
    cdr >> ros_message->speed_z;
  }

  // Field name: acc_x
  {
    cdr >> ros_message->acc_x;
  }

  // Field name: acc_y
  {
    cdr >> ros_message->acc_y;
  }

  // Field name: acc_z
  {
    cdr >> ros_message->acc_z;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  // Field name: by_wire_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->by_wire_enabled = tmp ? true : false;
  }

  // Field name: throttle_cmd
  {
    cdr >> ros_message->throttle_cmd;
  }

  // Field name: throttle_input
  {
    cdr >> ros_message->throttle_input;
  }

  // Field name: throttle_state
  {
    cdr >> ros_message->throttle_state;
  }

  // Field name: throttle_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->throttle_enabled = tmp ? true : false;
  }

  // Field name: throttle_override
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->throttle_override = tmp ? true : false;
  }

  // Field name: throttle_driver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->throttle_driver = tmp ? true : false;
  }

  // Field name: throttle_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->throttle_timeout = tmp ? true : false;
  }

  // Field name: brake_cmd
  {
    cdr >> ros_message->brake_cmd;
  }

  // Field name: brake_input
  {
    cdr >> ros_message->brake_input;
  }

  // Field name: brake_state
  {
    cdr >> ros_message->brake_state;
  }

  // Field name: brake_torq_cmd
  {
    cdr >> ros_message->brake_torq_cmd;
  }

  // Field name: brake_torq_input
  {
    cdr >> ros_message->brake_torq_input;
  }

  // Field name: brake_torq_state
  {
    cdr >> ros_message->brake_torq_state;
  }

  // Field name: brake_boo_output
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brake_boo_output = tmp ? true : false;
  }

  // Field name: brake_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brake_enabled = tmp ? true : false;
  }

  // Field name: brake_override
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brake_override = tmp ? true : false;
  }

  // Field name: brake_driver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brake_driver = tmp ? true : false;
  }

  // Field name: brake_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brake_timeout = tmp ? true : false;
  }

  // Field name: steer_cmd
  {
    cdr >> ros_message->steer_cmd;
  }

  // Field name: steer_state
  {
    cdr >> ros_message->steer_state;
  }

  // Field name: steer_torque
  {
    cdr >> ros_message->steer_torque;
  }

  // Field name: steer_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->steer_enabled = tmp ? true : false;
  }

  // Field name: steer_override
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->steer_override = tmp ? true : false;
  }

  // Field name: steer_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->steer_timeout = tmp ? true : false;
  }

  // Field name: gear_pos
  {
    cdr >> ros_message->gear_pos;
  }

  // Field name: wheel_v_front_left
  {
    cdr >> ros_message->wheel_v_front_left;
  }

  // Field name: wheel_v_front_right
  {
    cdr >> ros_message->wheel_v_front_right;
  }

  // Field name: wheel_v_rear_left
  {
    cdr >> ros_message->wheel_v_rear_left;
  }

  // Field name: wheel_v_rear_right
  {
    cdr >> ros_message->wheel_v_rear_right;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mcity_msgs
size_t get_serialized_size_mcity_msgs__msg__VehicleState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleState__ros_msg_type * ros_message = static_cast<const _VehicleState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_x
  {
    size_t item_size = sizeof(ros_message->speed_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_y
  {
    size_t item_size = sizeof(ros_message->speed_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_z
  {
    size_t item_size = sizeof(ros_message->speed_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_x
  {
    size_t item_size = sizeof(ros_message->acc_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_y
  {
    size_t item_size = sizeof(ros_message->acc_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_z
  {
    size_t item_size = sizeof(ros_message->acc_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name by_wire_enabled
  {
    size_t item_size = sizeof(ros_message->by_wire_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_cmd
  {
    size_t item_size = sizeof(ros_message->throttle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_input
  {
    size_t item_size = sizeof(ros_message->throttle_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_state
  {
    size_t item_size = sizeof(ros_message->throttle_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_enabled
  {
    size_t item_size = sizeof(ros_message->throttle_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_override
  {
    size_t item_size = sizeof(ros_message->throttle_override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_driver
  {
    size_t item_size = sizeof(ros_message->throttle_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_timeout
  {
    size_t item_size = sizeof(ros_message->throttle_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_cmd
  {
    size_t item_size = sizeof(ros_message->brake_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_input
  {
    size_t item_size = sizeof(ros_message->brake_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_state
  {
    size_t item_size = sizeof(ros_message->brake_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_torq_cmd
  {
    size_t item_size = sizeof(ros_message->brake_torq_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_torq_input
  {
    size_t item_size = sizeof(ros_message->brake_torq_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_torq_state
  {
    size_t item_size = sizeof(ros_message->brake_torq_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_boo_output
  {
    size_t item_size = sizeof(ros_message->brake_boo_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_enabled
  {
    size_t item_size = sizeof(ros_message->brake_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_override
  {
    size_t item_size = sizeof(ros_message->brake_override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_driver
  {
    size_t item_size = sizeof(ros_message->brake_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_timeout
  {
    size_t item_size = sizeof(ros_message->brake_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_cmd
  {
    size_t item_size = sizeof(ros_message->steer_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_state
  {
    size_t item_size = sizeof(ros_message->steer_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_torque
  {
    size_t item_size = sizeof(ros_message->steer_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_enabled
  {
    size_t item_size = sizeof(ros_message->steer_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_override
  {
    size_t item_size = sizeof(ros_message->steer_override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_timeout
  {
    size_t item_size = sizeof(ros_message->steer_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_pos
  {
    size_t item_size = sizeof(ros_message->gear_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_v_front_left
  {
    size_t item_size = sizeof(ros_message->wheel_v_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_v_front_right
  {
    size_t item_size = sizeof(ros_message->wheel_v_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_v_rear_left
  {
    size_t item_size = sizeof(ros_message->wheel_v_rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_v_rear_right
  {
    size_t item_size = sizeof(ros_message->wheel_v_rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mcity_msgs__msg__VehicleState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mcity_msgs
size_t max_serialized_size_mcity_msgs__msg__VehicleState(
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

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: by_wire_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: throttle_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: throttle_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: throttle_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_override
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_driver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: throttle_timeout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_torq_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_torq_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_torq_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: brake_boo_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_override
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_driver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brake_timeout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steer_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steer_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steer_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_override
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_timeout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wheel_v_front_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheel_v_front_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheel_v_rear_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheel_v_rear_right
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
    using DataType = mcity_msgs__msg__VehicleState;
    is_plain =
      (
      offsetof(DataType, wheel_v_rear_right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mcity_msgs__msg__VehicleState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleState = {
  "mcity_msgs::msg",
  "VehicleState",
  _VehicleState__cdr_serialize,
  _VehicleState__cdr_deserialize,
  _VehicleState__get_serialized_size,
  _VehicleState__max_serialized_size
};

static rosidl_message_type_support_t _VehicleState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mcity_msgs, msg, VehicleState)() {
  return &_VehicleState__type_support;
}

#if defined(__cplusplus)
}
#endif
