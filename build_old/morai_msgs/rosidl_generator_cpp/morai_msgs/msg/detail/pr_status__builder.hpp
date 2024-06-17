// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/PRStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__PR_STATUS__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__PR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/pr_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_PRStatus_mount_status
{
public:
  explicit Init_PRStatus_mount_status(::morai_msgs::msg::PRStatus & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::PRStatus mount_status(::morai_msgs::msg::PRStatus::_mount_status_type arg)
  {
    msg_.mount_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::PRStatus msg_;
};

class Init_PRStatus_heading
{
public:
  explicit Init_PRStatus_heading(::morai_msgs::msg::PRStatus & msg)
  : msg_(msg)
  {}
  Init_PRStatus_mount_status heading(::morai_msgs::msg::PRStatus::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_PRStatus_mount_status(msg_);
  }

private:
  ::morai_msgs::msg::PRStatus msg_;
};

class Init_PRStatus_position_z
{
public:
  explicit Init_PRStatus_position_z(::morai_msgs::msg::PRStatus & msg)
  : msg_(msg)
  {}
  Init_PRStatus_heading position_z(::morai_msgs::msg::PRStatus::_position_z_type arg)
  {
    msg_.position_z = std::move(arg);
    return Init_PRStatus_heading(msg_);
  }

private:
  ::morai_msgs::msg::PRStatus msg_;
};

class Init_PRStatus_position_y
{
public:
  explicit Init_PRStatus_position_y(::morai_msgs::msg::PRStatus & msg)
  : msg_(msg)
  {}
  Init_PRStatus_position_z position_y(::morai_msgs::msg::PRStatus::_position_y_type arg)
  {
    msg_.position_y = std::move(arg);
    return Init_PRStatus_position_z(msg_);
  }

private:
  ::morai_msgs::msg::PRStatus msg_;
};

class Init_PRStatus_position_x
{
public:
  explicit Init_PRStatus_position_x(::morai_msgs::msg::PRStatus & msg)
  : msg_(msg)
  {}
  Init_PRStatus_position_y position_x(::morai_msgs::msg::PRStatus::_position_x_type arg)
  {
    msg_.position_x = std::move(arg);
    return Init_PRStatus_position_y(msg_);
  }

private:
  ::morai_msgs::msg::PRStatus msg_;
};

class Init_PRStatus_header
{
public:
  Init_PRStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PRStatus_position_x header(::morai_msgs::msg::PRStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PRStatus_position_x(msg_);
  }

private:
  ::morai_msgs::msg::PRStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::PRStatus>()
{
  return morai_msgs::msg::builder::Init_PRStatus_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__PR_STATUS__BUILDER_HPP_
