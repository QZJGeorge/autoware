// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/WheelTorque.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WHEEL_TORQUE__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__WHEEL_TORQUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/wheel_torque__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelTorque_right_rear_wheel_torque_off
{
public:
  explicit Init_WheelTorque_right_rear_wheel_torque_off(::morai_msgs::msg::WheelTorque & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::WheelTorque right_rear_wheel_torque_off(::morai_msgs::msg::WheelTorque::_right_rear_wheel_torque_off_type arg)
  {
    msg_.right_rear_wheel_torque_off = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::WheelTorque msg_;
};

class Init_WheelTorque_right_front_wheel_torque_off
{
public:
  explicit Init_WheelTorque_right_front_wheel_torque_off(::morai_msgs::msg::WheelTorque & msg)
  : msg_(msg)
  {}
  Init_WheelTorque_right_rear_wheel_torque_off right_front_wheel_torque_off(::morai_msgs::msg::WheelTorque::_right_front_wheel_torque_off_type arg)
  {
    msg_.right_front_wheel_torque_off = std::move(arg);
    return Init_WheelTorque_right_rear_wheel_torque_off(msg_);
  }

private:
  ::morai_msgs::msg::WheelTorque msg_;
};

class Init_WheelTorque_left_rear_wheel_torque_off
{
public:
  explicit Init_WheelTorque_left_rear_wheel_torque_off(::morai_msgs::msg::WheelTorque & msg)
  : msg_(msg)
  {}
  Init_WheelTorque_right_front_wheel_torque_off left_rear_wheel_torque_off(::morai_msgs::msg::WheelTorque::_left_rear_wheel_torque_off_type arg)
  {
    msg_.left_rear_wheel_torque_off = std::move(arg);
    return Init_WheelTorque_right_front_wheel_torque_off(msg_);
  }

private:
  ::morai_msgs::msg::WheelTorque msg_;
};

class Init_WheelTorque_left_front_wheel_torque_off
{
public:
  Init_WheelTorque_left_front_wheel_torque_off()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelTorque_left_rear_wheel_torque_off left_front_wheel_torque_off(::morai_msgs::msg::WheelTorque::_left_front_wheel_torque_off_type arg)
  {
    msg_.left_front_wheel_torque_off = std::move(arg);
    return Init_WheelTorque_left_rear_wheel_torque_off(msg_);
  }

private:
  ::morai_msgs::msg::WheelTorque msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::WheelTorque>()
{
  return morai_msgs::msg::builder::Init_WheelTorque_left_front_wheel_torque_off();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__WHEEL_TORQUE__BUILDER_HPP_
