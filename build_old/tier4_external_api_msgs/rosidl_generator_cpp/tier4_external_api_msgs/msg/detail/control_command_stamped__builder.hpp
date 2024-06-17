// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/ControlCommandStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND_STAMPED__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/control_command_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlCommandStamped_control
{
public:
  explicit Init_ControlCommandStamped_control(::tier4_external_api_msgs::msg::ControlCommandStamped & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::ControlCommandStamped control(::tier4_external_api_msgs::msg::ControlCommandStamped::_control_type arg)
  {
    msg_.control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::ControlCommandStamped msg_;
};

class Init_ControlCommandStamped_stamp
{
public:
  Init_ControlCommandStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCommandStamped_control stamp(::tier4_external_api_msgs::msg::ControlCommandStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ControlCommandStamped_control(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::ControlCommandStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::ControlCommandStamped>()
{
  return tier4_external_api_msgs::msg::builder::Init_ControlCommandStamped_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CONTROL_COMMAND_STAMPED__BUILDER_HPP_
