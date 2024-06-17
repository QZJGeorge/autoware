// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mcity_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mcity_msgs/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mcity_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleState_wheel_v_rear_right
{
public:
  explicit Init_VehicleState_wheel_v_rear_right(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::mcity_msgs::msg::VehicleState wheel_v_rear_right(::mcity_msgs::msg::VehicleState::_wheel_v_rear_right_type arg)
  {
    msg_.wheel_v_rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_wheel_v_rear_left
{
public:
  explicit Init_VehicleState_wheel_v_rear_left(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_wheel_v_rear_right wheel_v_rear_left(::mcity_msgs::msg::VehicleState::_wheel_v_rear_left_type arg)
  {
    msg_.wheel_v_rear_left = std::move(arg);
    return Init_VehicleState_wheel_v_rear_right(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_wheel_v_front_right
{
public:
  explicit Init_VehicleState_wheel_v_front_right(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_wheel_v_rear_left wheel_v_front_right(::mcity_msgs::msg::VehicleState::_wheel_v_front_right_type arg)
  {
    msg_.wheel_v_front_right = std::move(arg);
    return Init_VehicleState_wheel_v_rear_left(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_wheel_v_front_left
{
public:
  explicit Init_VehicleState_wheel_v_front_left(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_wheel_v_front_right wheel_v_front_left(::mcity_msgs::msg::VehicleState::_wheel_v_front_left_type arg)
  {
    msg_.wheel_v_front_left = std::move(arg);
    return Init_VehicleState_wheel_v_front_right(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_gear_pos
{
public:
  explicit Init_VehicleState_gear_pos(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_wheel_v_front_left gear_pos(::mcity_msgs::msg::VehicleState::_gear_pos_type arg)
  {
    msg_.gear_pos = std::move(arg);
    return Init_VehicleState_wheel_v_front_left(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_steer_timeout
{
public:
  explicit Init_VehicleState_steer_timeout(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_gear_pos steer_timeout(::mcity_msgs::msg::VehicleState::_steer_timeout_type arg)
  {
    msg_.steer_timeout = std::move(arg);
    return Init_VehicleState_gear_pos(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_steer_override
{
public:
  explicit Init_VehicleState_steer_override(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_steer_timeout steer_override(::mcity_msgs::msg::VehicleState::_steer_override_type arg)
  {
    msg_.steer_override = std::move(arg);
    return Init_VehicleState_steer_timeout(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_steer_enabled
{
public:
  explicit Init_VehicleState_steer_enabled(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_steer_override steer_enabled(::mcity_msgs::msg::VehicleState::_steer_enabled_type arg)
  {
    msg_.steer_enabled = std::move(arg);
    return Init_VehicleState_steer_override(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_steer_torque
{
public:
  explicit Init_VehicleState_steer_torque(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_steer_enabled steer_torque(::mcity_msgs::msg::VehicleState::_steer_torque_type arg)
  {
    msg_.steer_torque = std::move(arg);
    return Init_VehicleState_steer_enabled(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_steer_state
{
public:
  explicit Init_VehicleState_steer_state(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_steer_torque steer_state(::mcity_msgs::msg::VehicleState::_steer_state_type arg)
  {
    msg_.steer_state = std::move(arg);
    return Init_VehicleState_steer_torque(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_steer_cmd
{
public:
  explicit Init_VehicleState_steer_cmd(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_steer_state steer_cmd(::mcity_msgs::msg::VehicleState::_steer_cmd_type arg)
  {
    msg_.steer_cmd = std::move(arg);
    return Init_VehicleState_steer_state(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_timeout
{
public:
  explicit Init_VehicleState_brake_timeout(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_steer_cmd brake_timeout(::mcity_msgs::msg::VehicleState::_brake_timeout_type arg)
  {
    msg_.brake_timeout = std::move(arg);
    return Init_VehicleState_steer_cmd(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_driver
{
public:
  explicit Init_VehicleState_brake_driver(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_timeout brake_driver(::mcity_msgs::msg::VehicleState::_brake_driver_type arg)
  {
    msg_.brake_driver = std::move(arg);
    return Init_VehicleState_brake_timeout(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_override
{
public:
  explicit Init_VehicleState_brake_override(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_driver brake_override(::mcity_msgs::msg::VehicleState::_brake_override_type arg)
  {
    msg_.brake_override = std::move(arg);
    return Init_VehicleState_brake_driver(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_enabled
{
public:
  explicit Init_VehicleState_brake_enabled(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_override brake_enabled(::mcity_msgs::msg::VehicleState::_brake_enabled_type arg)
  {
    msg_.brake_enabled = std::move(arg);
    return Init_VehicleState_brake_override(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_boo_output
{
public:
  explicit Init_VehicleState_brake_boo_output(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_enabled brake_boo_output(::mcity_msgs::msg::VehicleState::_brake_boo_output_type arg)
  {
    msg_.brake_boo_output = std::move(arg);
    return Init_VehicleState_brake_enabled(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_torq_state
{
public:
  explicit Init_VehicleState_brake_torq_state(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_boo_output brake_torq_state(::mcity_msgs::msg::VehicleState::_brake_torq_state_type arg)
  {
    msg_.brake_torq_state = std::move(arg);
    return Init_VehicleState_brake_boo_output(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_torq_input
{
public:
  explicit Init_VehicleState_brake_torq_input(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_torq_state brake_torq_input(::mcity_msgs::msg::VehicleState::_brake_torq_input_type arg)
  {
    msg_.brake_torq_input = std::move(arg);
    return Init_VehicleState_brake_torq_state(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_torq_cmd
{
public:
  explicit Init_VehicleState_brake_torq_cmd(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_torq_input brake_torq_cmd(::mcity_msgs::msg::VehicleState::_brake_torq_cmd_type arg)
  {
    msg_.brake_torq_cmd = std::move(arg);
    return Init_VehicleState_brake_torq_input(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_state
{
public:
  explicit Init_VehicleState_brake_state(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_torq_cmd brake_state(::mcity_msgs::msg::VehicleState::_brake_state_type arg)
  {
    msg_.brake_state = std::move(arg);
    return Init_VehicleState_brake_torq_cmd(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_input
{
public:
  explicit Init_VehicleState_brake_input(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_state brake_input(::mcity_msgs::msg::VehicleState::_brake_input_type arg)
  {
    msg_.brake_input = std::move(arg);
    return Init_VehicleState_brake_state(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_brake_cmd
{
public:
  explicit Init_VehicleState_brake_cmd(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_input brake_cmd(::mcity_msgs::msg::VehicleState::_brake_cmd_type arg)
  {
    msg_.brake_cmd = std::move(arg);
    return Init_VehicleState_brake_input(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_throttle_timeout
{
public:
  explicit Init_VehicleState_throttle_timeout(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_cmd throttle_timeout(::mcity_msgs::msg::VehicleState::_throttle_timeout_type arg)
  {
    msg_.throttle_timeout = std::move(arg);
    return Init_VehicleState_brake_cmd(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_throttle_driver
{
public:
  explicit Init_VehicleState_throttle_driver(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_throttle_timeout throttle_driver(::mcity_msgs::msg::VehicleState::_throttle_driver_type arg)
  {
    msg_.throttle_driver = std::move(arg);
    return Init_VehicleState_throttle_timeout(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_throttle_override
{
public:
  explicit Init_VehicleState_throttle_override(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_throttle_driver throttle_override(::mcity_msgs::msg::VehicleState::_throttle_override_type arg)
  {
    msg_.throttle_override = std::move(arg);
    return Init_VehicleState_throttle_driver(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_throttle_enabled
{
public:
  explicit Init_VehicleState_throttle_enabled(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_throttle_override throttle_enabled(::mcity_msgs::msg::VehicleState::_throttle_enabled_type arg)
  {
    msg_.throttle_enabled = std::move(arg);
    return Init_VehicleState_throttle_override(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_throttle_state
{
public:
  explicit Init_VehicleState_throttle_state(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_throttle_enabled throttle_state(::mcity_msgs::msg::VehicleState::_throttle_state_type arg)
  {
    msg_.throttle_state = std::move(arg);
    return Init_VehicleState_throttle_enabled(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_throttle_input
{
public:
  explicit Init_VehicleState_throttle_input(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_throttle_state throttle_input(::mcity_msgs::msg::VehicleState::_throttle_input_type arg)
  {
    msg_.throttle_input = std::move(arg);
    return Init_VehicleState_throttle_state(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_throttle_cmd
{
public:
  explicit Init_VehicleState_throttle_cmd(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_throttle_input throttle_cmd(::mcity_msgs::msg::VehicleState::_throttle_cmd_type arg)
  {
    msg_.throttle_cmd = std::move(arg);
    return Init_VehicleState_throttle_input(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_by_wire_enabled
{
public:
  explicit Init_VehicleState_by_wire_enabled(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_throttle_cmd by_wire_enabled(::mcity_msgs::msg::VehicleState::_by_wire_enabled_type arg)
  {
    msg_.by_wire_enabled = std::move(arg);
    return Init_VehicleState_throttle_cmd(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_yaw_rate
{
public:
  explicit Init_VehicleState_yaw_rate(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_by_wire_enabled yaw_rate(::mcity_msgs::msg::VehicleState::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_VehicleState_by_wire_enabled(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_heading
{
public:
  explicit Init_VehicleState_heading(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_yaw_rate heading(::mcity_msgs::msg::VehicleState::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_VehicleState_yaw_rate(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_acc_z
{
public:
  explicit Init_VehicleState_acc_z(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_heading acc_z(::mcity_msgs::msg::VehicleState::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return Init_VehicleState_heading(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_acc_y
{
public:
  explicit Init_VehicleState_acc_y(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_acc_z acc_y(::mcity_msgs::msg::VehicleState::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_VehicleState_acc_z(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_acc_x
{
public:
  explicit Init_VehicleState_acc_x(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_acc_y acc_x(::mcity_msgs::msg::VehicleState::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return Init_VehicleState_acc_y(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_speed_z
{
public:
  explicit Init_VehicleState_speed_z(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_acc_x speed_z(::mcity_msgs::msg::VehicleState::_speed_z_type arg)
  {
    msg_.speed_z = std::move(arg);
    return Init_VehicleState_acc_x(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_speed_y
{
public:
  explicit Init_VehicleState_speed_y(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_speed_z speed_y(::mcity_msgs::msg::VehicleState::_speed_y_type arg)
  {
    msg_.speed_y = std::move(arg);
    return Init_VehicleState_speed_z(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_speed_x
{
public:
  explicit Init_VehicleState_speed_x(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_speed_y speed_x(::mcity_msgs::msg::VehicleState::_speed_x_type arg)
  {
    msg_.speed_x = std::move(arg);
    return Init_VehicleState_speed_y(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_z
{
public:
  explicit Init_VehicleState_z(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_speed_x z(::mcity_msgs::msg::VehicleState::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_VehicleState_speed_x(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_y
{
public:
  explicit Init_VehicleState_y(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_z y(::mcity_msgs::msg::VehicleState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_VehicleState_z(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_x
{
public:
  explicit Init_VehicleState_x(::mcity_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_y x(::mcity_msgs::msg::VehicleState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_VehicleState_y(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_timestamp
{
public:
  Init_VehicleState_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_x timestamp(::mcity_msgs::msg::VehicleState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleState_x(msg_);
  }

private:
  ::mcity_msgs::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mcity_msgs::msg::VehicleState>()
{
  return mcity_msgs::msg::builder::Init_VehicleState_timestamp();
}

}  // namespace mcity_msgs

#endif  // MCITY_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
