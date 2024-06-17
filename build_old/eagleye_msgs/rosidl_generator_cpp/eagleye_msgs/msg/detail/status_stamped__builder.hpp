// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/StatusStamped.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__STATUS_STAMPED__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__STATUS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_StatusStamped_status
{
public:
  explicit Init_StatusStamped_status(::eagleye_msgs::msg::StatusStamped & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::StatusStamped status(::eagleye_msgs::msg::StatusStamped::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::StatusStamped msg_;
};

class Init_StatusStamped_header
{
public:
  Init_StatusStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatusStamped_status header(::eagleye_msgs::msg::StatusStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StatusStamped_status(msg_);
  }

private:
  ::eagleye_msgs::msg::StatusStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::StatusStamped>()
{
  return eagleye_msgs::msg::builder::Init_StatusStamped_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__STATUS_STAMPED__BUILDER_HPP_
