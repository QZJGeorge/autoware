// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/AccXOffset.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__ACC_X_OFFSET__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__ACC_X_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/acc_x_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_AccXOffset_status
{
public:
  explicit Init_AccXOffset_status(::eagleye_msgs::msg::AccXOffset & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::AccXOffset status(::eagleye_msgs::msg::AccXOffset::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::AccXOffset msg_;
};

class Init_AccXOffset_acc_x_offset
{
public:
  explicit Init_AccXOffset_acc_x_offset(::eagleye_msgs::msg::AccXOffset & msg)
  : msg_(msg)
  {}
  Init_AccXOffset_status acc_x_offset(::eagleye_msgs::msg::AccXOffset::_acc_x_offset_type arg)
  {
    msg_.acc_x_offset = std::move(arg);
    return Init_AccXOffset_status(msg_);
  }

private:
  ::eagleye_msgs::msg::AccXOffset msg_;
};

class Init_AccXOffset_header
{
public:
  Init_AccXOffset_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccXOffset_acc_x_offset header(::eagleye_msgs::msg::AccXOffset::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AccXOffset_acc_x_offset(msg_);
  }

private:
  ::eagleye_msgs::msg::AccXOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::AccXOffset>()
{
  return eagleye_msgs::msg::builder::Init_AccXOffset_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__ACC_X_OFFSET__BUILDER_HPP_
