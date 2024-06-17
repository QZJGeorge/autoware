// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/ERP42Info.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__ERP42_INFO__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__ERP42_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/erp42_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_ERP42Info_steering
{
public:
  explicit Init_ERP42Info_steering(::morai_msgs::msg::ERP42Info & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::ERP42Info steering(::morai_msgs::msg::ERP42Info::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::ERP42Info msg_;
};

class Init_ERP42Info_velocity
{
public:
  explicit Init_ERP42Info_velocity(::morai_msgs::msg::ERP42Info & msg)
  : msg_(msg)
  {}
  Init_ERP42Info_steering velocity(::morai_msgs::msg::ERP42Info::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ERP42Info_steering(msg_);
  }

private:
  ::morai_msgs::msg::ERP42Info msg_;
};

class Init_ERP42Info_yaw
{
public:
  explicit Init_ERP42Info_yaw(::morai_msgs::msg::ERP42Info & msg)
  : msg_(msg)
  {}
  Init_ERP42Info_velocity yaw(::morai_msgs::msg::ERP42Info::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_ERP42Info_velocity(msg_);
  }

private:
  ::morai_msgs::msg::ERP42Info msg_;
};

class Init_ERP42Info_pitch
{
public:
  explicit Init_ERP42Info_pitch(::morai_msgs::msg::ERP42Info & msg)
  : msg_(msg)
  {}
  Init_ERP42Info_yaw pitch(::morai_msgs::msg::ERP42Info::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_ERP42Info_yaw(msg_);
  }

private:
  ::morai_msgs::msg::ERP42Info msg_;
};

class Init_ERP42Info_roll
{
public:
  explicit Init_ERP42Info_roll(::morai_msgs::msg::ERP42Info & msg)
  : msg_(msg)
  {}
  Init_ERP42Info_pitch roll(::morai_msgs::msg::ERP42Info::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_ERP42Info_pitch(msg_);
  }

private:
  ::morai_msgs::msg::ERP42Info msg_;
};

class Init_ERP42Info_position_z
{
public:
  explicit Init_ERP42Info_position_z(::morai_msgs::msg::ERP42Info & msg)
  : msg_(msg)
  {}
  Init_ERP42Info_roll position_z(::morai_msgs::msg::ERP42Info::_position_z_type arg)
  {
    msg_.position_z = std::move(arg);
    return Init_ERP42Info_roll(msg_);
  }

private:
  ::morai_msgs::msg::ERP42Info msg_;
};

class Init_ERP42Info_position_y
{
public:
  explicit Init_ERP42Info_position_y(::morai_msgs::msg::ERP42Info & msg)
  : msg_(msg)
  {}
  Init_ERP42Info_position_z position_y(::morai_msgs::msg::ERP42Info::_position_y_type arg)
  {
    msg_.position_y = std::move(arg);
    return Init_ERP42Info_position_z(msg_);
  }

private:
  ::morai_msgs::msg::ERP42Info msg_;
};

class Init_ERP42Info_position_x
{
public:
  explicit Init_ERP42Info_position_x(::morai_msgs::msg::ERP42Info & msg)
  : msg_(msg)
  {}
  Init_ERP42Info_position_y position_x(::morai_msgs::msg::ERP42Info::_position_x_type arg)
  {
    msg_.position_x = std::move(arg);
    return Init_ERP42Info_position_y(msg_);
  }

private:
  ::morai_msgs::msg::ERP42Info msg_;
};

class Init_ERP42Info_longl_cmd_type
{
public:
  Init_ERP42Info_longl_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ERP42Info_position_x longl_cmd_type(::morai_msgs::msg::ERP42Info::_longl_cmd_type_type arg)
  {
    msg_.longl_cmd_type = std::move(arg);
    return Init_ERP42Info_position_x(msg_);
  }

private:
  ::morai_msgs::msg::ERP42Info msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::ERP42Info>()
{
  return morai_msgs::msg::builder::Init_ERP42Info_longl_cmd_type();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__ERP42_INFO__BUILDER_HPP_
