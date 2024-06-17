// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/WheelRpm.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WHEEL_RPM__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__WHEEL_RPM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/wheel_rpm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelRpm_right_rear_wheel_rpm
{
public:
  explicit Init_WheelRpm_right_rear_wheel_rpm(::morai_msgs::msg::WheelRpm & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::WheelRpm right_rear_wheel_rpm(::morai_msgs::msg::WheelRpm::_right_rear_wheel_rpm_type arg)
  {
    msg_.right_rear_wheel_rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::WheelRpm msg_;
};

class Init_WheelRpm_right_front_wheel_rpm
{
public:
  explicit Init_WheelRpm_right_front_wheel_rpm(::morai_msgs::msg::WheelRpm & msg)
  : msg_(msg)
  {}
  Init_WheelRpm_right_rear_wheel_rpm right_front_wheel_rpm(::morai_msgs::msg::WheelRpm::_right_front_wheel_rpm_type arg)
  {
    msg_.right_front_wheel_rpm = std::move(arg);
    return Init_WheelRpm_right_rear_wheel_rpm(msg_);
  }

private:
  ::morai_msgs::msg::WheelRpm msg_;
};

class Init_WheelRpm_left_rear_wheel_rpm
{
public:
  explicit Init_WheelRpm_left_rear_wheel_rpm(::morai_msgs::msg::WheelRpm & msg)
  : msg_(msg)
  {}
  Init_WheelRpm_right_front_wheel_rpm left_rear_wheel_rpm(::morai_msgs::msg::WheelRpm::_left_rear_wheel_rpm_type arg)
  {
    msg_.left_rear_wheel_rpm = std::move(arg);
    return Init_WheelRpm_right_front_wheel_rpm(msg_);
  }

private:
  ::morai_msgs::msg::WheelRpm msg_;
};

class Init_WheelRpm_left_front_wheel_rpm
{
public:
  Init_WheelRpm_left_front_wheel_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelRpm_left_rear_wheel_rpm left_front_wheel_rpm(::morai_msgs::msg::WheelRpm::_left_front_wheel_rpm_type arg)
  {
    msg_.left_front_wheel_rpm = std::move(arg);
    return Init_WheelRpm_left_rear_wheel_rpm(msg_);
  }

private:
  ::morai_msgs::msg::WheelRpm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::WheelRpm>()
{
  return morai_msgs::msg::builder::Init_WheelRpm_left_front_wheel_rpm();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__WHEEL_RPM__BUILDER_HPP_
