// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SkidCtrlReport.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/skid_ctrl_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SkidCtrlReport_skid_model_report
{
public:
  explicit Init_SkidCtrlReport_skid_model_report(::morai_msgs::msg::SkidCtrlReport & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SkidCtrlReport skid_model_report(::morai_msgs::msg::SkidCtrlReport::_skid_model_report_type arg)
  {
    msg_.skid_model_report = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlReport msg_;
};

class Init_SkidCtrlReport_cmd_type
{
public:
  explicit Init_SkidCtrlReport_cmd_type(::morai_msgs::msg::SkidCtrlReport & msg)
  : msg_(msg)
  {}
  Init_SkidCtrlReport_skid_model_report cmd_type(::morai_msgs::msg::SkidCtrlReport::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_SkidCtrlReport_skid_model_report(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlReport msg_;
};

class Init_SkidCtrlReport_heading
{
public:
  explicit Init_SkidCtrlReport_heading(::morai_msgs::msg::SkidCtrlReport & msg)
  : msg_(msg)
  {}
  Init_SkidCtrlReport_cmd_type heading(::morai_msgs::msg::SkidCtrlReport::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_SkidCtrlReport_cmd_type(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlReport msg_;
};

class Init_SkidCtrlReport_angular_velocity
{
public:
  explicit Init_SkidCtrlReport_angular_velocity(::morai_msgs::msg::SkidCtrlReport & msg)
  : msg_(msg)
  {}
  Init_SkidCtrlReport_heading angular_velocity(::morai_msgs::msg::SkidCtrlReport::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_SkidCtrlReport_heading(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlReport msg_;
};

class Init_SkidCtrlReport_velocity
{
public:
  explicit Init_SkidCtrlReport_velocity(::morai_msgs::msg::SkidCtrlReport & msg)
  : msg_(msg)
  {}
  Init_SkidCtrlReport_angular_velocity velocity(::morai_msgs::msg::SkidCtrlReport::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SkidCtrlReport_angular_velocity(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlReport msg_;
};

class Init_SkidCtrlReport_position
{
public:
  explicit Init_SkidCtrlReport_position(::morai_msgs::msg::SkidCtrlReport & msg)
  : msg_(msg)
  {}
  Init_SkidCtrlReport_velocity position(::morai_msgs::msg::SkidCtrlReport::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SkidCtrlReport_velocity(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlReport msg_;
};

class Init_SkidCtrlReport_acceleration
{
public:
  explicit Init_SkidCtrlReport_acceleration(::morai_msgs::msg::SkidCtrlReport & msg)
  : msg_(msg)
  {}
  Init_SkidCtrlReport_position acceleration(::morai_msgs::msg::SkidCtrlReport::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_SkidCtrlReport_position(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlReport msg_;
};

class Init_SkidCtrlReport_ctrl_mode
{
public:
  explicit Init_SkidCtrlReport_ctrl_mode(::morai_msgs::msg::SkidCtrlReport & msg)
  : msg_(msg)
  {}
  Init_SkidCtrlReport_acceleration ctrl_mode(::morai_msgs::msg::SkidCtrlReport::_ctrl_mode_type arg)
  {
    msg_.ctrl_mode = std::move(arg);
    return Init_SkidCtrlReport_acceleration(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlReport msg_;
};

class Init_SkidCtrlReport_header
{
public:
  Init_SkidCtrlReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkidCtrlReport_ctrl_mode header(::morai_msgs::msg::SkidCtrlReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SkidCtrlReport_ctrl_mode(msg_);
  }

private:
  ::morai_msgs::msg::SkidCtrlReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SkidCtrlReport>()
{
  return morai_msgs::msg::builder::Init_SkidCtrlReport_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_CTRL_REPORT__BUILDER_HPP_
