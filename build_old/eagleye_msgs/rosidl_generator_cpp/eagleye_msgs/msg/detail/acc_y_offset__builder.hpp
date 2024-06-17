// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/AccYOffset.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__ACC_Y_OFFSET__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__ACC_Y_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/acc_y_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_AccYOffset_status
{
public:
  explicit Init_AccYOffset_status(::eagleye_msgs::msg::AccYOffset & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::AccYOffset status(::eagleye_msgs::msg::AccYOffset::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::AccYOffset msg_;
};

class Init_AccYOffset_acc_y_offset
{
public:
  explicit Init_AccYOffset_acc_y_offset(::eagleye_msgs::msg::AccYOffset & msg)
  : msg_(msg)
  {}
  Init_AccYOffset_status acc_y_offset(::eagleye_msgs::msg::AccYOffset::_acc_y_offset_type arg)
  {
    msg_.acc_y_offset = std::move(arg);
    return Init_AccYOffset_status(msg_);
  }

private:
  ::eagleye_msgs::msg::AccYOffset msg_;
};

class Init_AccYOffset_header
{
public:
  Init_AccYOffset_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccYOffset_acc_y_offset header(::eagleye_msgs::msg::AccYOffset::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AccYOffset_acc_y_offset(msg_);
  }

private:
  ::eagleye_msgs::msg::AccYOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::AccYOffset>()
{
  return eagleye_msgs::msg::builder::Init_AccYOffset_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__ACC_Y_OFFSET__BUILDER_HPP_
