// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_control_msgs:msg/ExternalCommandSelectorMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__EXTERNAL_COMMAND_SELECTOR_MODE__BUILDER_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__EXTERNAL_COMMAND_SELECTOR_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_control_msgs/msg/detail/external_command_selector_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_control_msgs
{

namespace msg
{

namespace builder
{

class Init_ExternalCommandSelectorMode_data
{
public:
  Init_ExternalCommandSelectorMode_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_control_msgs::msg::ExternalCommandSelectorMode data(::tier4_control_msgs::msg::ExternalCommandSelectorMode::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::msg::ExternalCommandSelectorMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::msg::ExternalCommandSelectorMode>()
{
  return tier4_control_msgs::msg::builder::Init_ExternalCommandSelectorMode_data();
}

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__EXTERNAL_COMMAND_SELECTOR_MODE__BUILDER_HPP_
