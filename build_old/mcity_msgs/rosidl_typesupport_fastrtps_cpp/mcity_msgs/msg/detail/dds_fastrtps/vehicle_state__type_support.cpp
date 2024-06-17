// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mcity_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "mcity_msgs/msg/detail/vehicle_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mcity_msgs/msg/detail/vehicle_state__struct.hpp"

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

namespace mcity_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mcity_msgs
cdr_serialize(
  const mcity_msgs::msg::VehicleState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  // Member: z
  cdr << ros_message.z;
  // Member: speed_x
  cdr << ros_message.speed_x;
  // Member: speed_y
  cdr << ros_message.speed_y;
  // Member: speed_z
  cdr << ros_message.speed_z;
  // Member: acc_x
  cdr << ros_message.acc_x;
  // Member: acc_y
  cdr << ros_message.acc_y;
  // Member: acc_z
  cdr << ros_message.acc_z;
  // Member: heading
  cdr << ros_message.heading;
  // Member: yaw_rate
  cdr << ros_message.yaw_rate;
  // Member: by_wire_enabled
  cdr << (ros_message.by_wire_enabled ? true : false);
  // Member: throttle_cmd
  cdr << ros_message.throttle_cmd;
  // Member: throttle_input
  cdr << ros_message.throttle_input;
  // Member: throttle_state
  cdr << ros_message.throttle_state;
  // Member: throttle_enabled
  cdr << (ros_message.throttle_enabled ? true : false);
  // Member: throttle_override
  cdr << (ros_message.throttle_override ? true : false);
  // Member: throttle_driver
  cdr << (ros_message.throttle_driver ? true : false);
  // Member: throttle_timeout
  cdr << (ros_message.throttle_timeout ? true : false);
  // Member: brake_cmd
  cdr << ros_message.brake_cmd;
  // Member: brake_input
  cdr << ros_message.brake_input;
  // Member: brake_state
  cdr << ros_message.brake_state;
  // Member: brake_torq_cmd
  cdr << ros_message.brake_torq_cmd;
  // Member: brake_torq_input
  cdr << ros_message.brake_torq_input;
  // Member: brake_torq_state
  cdr << ros_message.brake_torq_state;
  // Member: brake_boo_output
  cdr << (ros_message.brake_boo_output ? true : false);
  // Member: brake_enabled
  cdr << (ros_message.brake_enabled ? true : false);
  // Member: brake_override
  cdr << (ros_message.brake_override ? true : false);
  // Member: brake_driver
  cdr << (ros_message.brake_driver ? true : false);
  // Member: brake_timeout
  cdr << (ros_message.brake_timeout ? true : false);
  // Member: steer_cmd
  cdr << ros_message.steer_cmd;
  // Member: steer_state
  cdr << ros_message.steer_state;
  // Member: steer_torque
  cdr << ros_message.steer_torque;
  // Member: steer_enabled
  cdr << (ros_message.steer_enabled ? true : false);
  // Member: steer_override
  cdr << (ros_message.steer_override ? true : false);
  // Member: steer_timeout
  cdr << (ros_message.steer_timeout ? true : false);
  // Member: gear_pos
  cdr << ros_message.gear_pos;
  // Member: wheel_v_front_left
  cdr << ros_message.wheel_v_front_left;
  // Member: wheel_v_front_right
  cdr << ros_message.wheel_v_front_right;
  // Member: wheel_v_rear_left
  cdr << ros_message.wheel_v_rear_left;
  // Member: wheel_v_rear_right
  cdr << ros_message.wheel_v_rear_right;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mcity_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mcity_msgs::msg::VehicleState & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  // Member: z
  cdr >> ros_message.z;

  // Member: speed_x
  cdr >> ros_message.speed_x;

  // Member: speed_y
  cdr >> ros_message.speed_y;

  // Member: speed_z
  cdr >> ros_message.speed_z;

  // Member: acc_x
  cdr >> ros_message.acc_x;

  // Member: acc_y
  cdr >> ros_message.acc_y;

  // Member: acc_z
  cdr >> ros_message.acc_z;

  // Member: heading
  cdr >> ros_message.heading;

  // Member: yaw_rate
  cdr >> ros_message.yaw_rate;

  // Member: by_wire_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.by_wire_enabled = tmp ? true : false;
  }

  // Member: throttle_cmd
  cdr >> ros_message.throttle_cmd;

  // Member: throttle_input
  cdr >> ros_message.throttle_input;

  // Member: throttle_state
  cdr >> ros_message.throttle_state;

  // Member: throttle_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.throttle_enabled = tmp ? true : false;
  }

  // Member: throttle_override
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.throttle_override = tmp ? true : false;
  }

  // Member: throttle_driver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.throttle_driver = tmp ? true : false;
  }

  // Member: throttle_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.throttle_timeout = tmp ? true : false;
  }

  // Member: brake_cmd
  cdr >> ros_message.brake_cmd;

  // Member: brake_input
  cdr >> ros_message.brake_input;

  // Member: brake_state
  cdr >> ros_message.brake_state;

  // Member: brake_torq_cmd
  cdr >> ros_message.brake_torq_cmd;

  // Member: brake_torq_input
  cdr >> ros_message.brake_torq_input;

  // Member: brake_torq_state
  cdr >> ros_message.brake_torq_state;

  // Member: brake_boo_output
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.brake_boo_output = tmp ? true : false;
  }

  // Member: brake_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.brake_enabled = tmp ? true : false;
  }

  // Member: brake_override
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.brake_override = tmp ? true : false;
  }

  // Member: brake_driver
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.brake_driver = tmp ? true : false;
  }

  // Member: brake_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.brake_timeout = tmp ? true : false;
  }

  // Member: steer_cmd
  cdr >> ros_message.steer_cmd;

  // Member: steer_state
  cdr >> ros_message.steer_state;

  // Member: steer_torque
  cdr >> ros_message.steer_torque;

  // Member: steer_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.steer_enabled = tmp ? true : false;
  }

  // Member: steer_override
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.steer_override = tmp ? true : false;
  }

  // Member: steer_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.steer_timeout = tmp ? true : false;
  }

  // Member: gear_pos
  cdr >> ros_message.gear_pos;

  // Member: wheel_v_front_left
  cdr >> ros_message.wheel_v_front_left;

  // Member: wheel_v_front_right
  cdr >> ros_message.wheel_v_front_right;

  // Member: wheel_v_rear_left
  cdr >> ros_message.wheel_v_rear_left;

  // Member: wheel_v_rear_right
  cdr >> ros_message.wheel_v_rear_right;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mcity_msgs
get_serialized_size(
  const mcity_msgs::msg::VehicleState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z
  {
    size_t item_size = sizeof(ros_message.z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_x
  {
    size_t item_size = sizeof(ros_message.speed_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_y
  {
    size_t item_size = sizeof(ros_message.speed_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_z
  {
    size_t item_size = sizeof(ros_message.speed_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_x
  {
    size_t item_size = sizeof(ros_message.acc_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_y
  {
    size_t item_size = sizeof(ros_message.acc_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_z
  {
    size_t item_size = sizeof(ros_message.acc_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate
  {
    size_t item_size = sizeof(ros_message.yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: by_wire_enabled
  {
    size_t item_size = sizeof(ros_message.by_wire_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_cmd
  {
    size_t item_size = sizeof(ros_message.throttle_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_input
  {
    size_t item_size = sizeof(ros_message.throttle_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_state
  {
    size_t item_size = sizeof(ros_message.throttle_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_enabled
  {
    size_t item_size = sizeof(ros_message.throttle_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_override
  {
    size_t item_size = sizeof(ros_message.throttle_override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_driver
  {
    size_t item_size = sizeof(ros_message.throttle_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_timeout
  {
    size_t item_size = sizeof(ros_message.throttle_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_cmd
  {
    size_t item_size = sizeof(ros_message.brake_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_input
  {
    size_t item_size = sizeof(ros_message.brake_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_state
  {
    size_t item_size = sizeof(ros_message.brake_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_torq_cmd
  {
    size_t item_size = sizeof(ros_message.brake_torq_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_torq_input
  {
    size_t item_size = sizeof(ros_message.brake_torq_input);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_torq_state
  {
    size_t item_size = sizeof(ros_message.brake_torq_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_boo_output
  {
    size_t item_size = sizeof(ros_message.brake_boo_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_enabled
  {
    size_t item_size = sizeof(ros_message.brake_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_override
  {
    size_t item_size = sizeof(ros_message.brake_override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_driver
  {
    size_t item_size = sizeof(ros_message.brake_driver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake_timeout
  {
    size_t item_size = sizeof(ros_message.brake_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_cmd
  {
    size_t item_size = sizeof(ros_message.steer_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_state
  {
    size_t item_size = sizeof(ros_message.steer_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_torque
  {
    size_t item_size = sizeof(ros_message.steer_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_enabled
  {
    size_t item_size = sizeof(ros_message.steer_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_override
  {
    size_t item_size = sizeof(ros_message.steer_override);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_timeout
  {
    size_t item_size = sizeof(ros_message.steer_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_pos
  {
    size_t item_size = sizeof(ros_message.gear_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_v_front_left
  {
    size_t item_size = sizeof(ros_message.wheel_v_front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_v_front_right
  {
    size_t item_size = sizeof(ros_message.wheel_v_front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_v_rear_left
  {
    size_t item_size = sizeof(ros_message.wheel_v_rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_v_rear_right
  {
    size_t item_size = sizeof(ros_message.wheel_v_rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mcity_msgs
max_serialized_size_VehicleState(
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


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: by_wire_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: throttle_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: throttle_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: throttle_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: throttle_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: throttle_override
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: throttle_driver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: throttle_timeout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_torq_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_torq_input
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_torq_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: brake_boo_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake_override
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake_driver
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brake_timeout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steer_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steer_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: steer_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_override
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_timeout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: wheel_v_front_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_v_front_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_v_rear_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_v_rear_right
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
    using DataType = mcity_msgs::msg::VehicleState;
    is_plain =
      (
      offsetof(DataType, wheel_v_rear_right) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mcity_msgs::msg::VehicleState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mcity_msgs::msg::VehicleState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mcity_msgs::msg::VehicleState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleState__callbacks = {
  "mcity_msgs::msg",
  "VehicleState",
  _VehicleState__cdr_serialize,
  _VehicleState__cdr_deserialize,
  _VehicleState__get_serialized_size,
  _VehicleState__max_serialized_size
};

static rosidl_message_type_support_t _VehicleState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mcity_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mcity_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mcity_msgs::msg::VehicleState>()
{
  return &mcity_msgs::msg::typesupport_fastrtps_cpp::_VehicleState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mcity_msgs, msg, VehicleState)() {
  return &mcity_msgs::msg::typesupport_fastrtps_cpp::_VehicleState__handle;
}

#ifdef __cplusplus
}
#endif
