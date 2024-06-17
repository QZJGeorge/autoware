// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/TurnSignalStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL_STAMPED__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/turn_signal_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_TurnSignalStamped_turn_signal
{
public:
  explicit Init_TurnSignalStamped_turn_signal(::tier4_external_api_msgs::msg::TurnSignalStamped & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::TurnSignalStamped turn_signal(::tier4_external_api_msgs::msg::TurnSignalStamped::_turn_signal_type arg)
  {
    msg_.turn_signal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::TurnSignalStamped msg_;
};

class Init_TurnSignalStamped_stamp
{
public:
  Init_TurnSignalStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurnSignalStamped_turn_signal stamp(::tier4_external_api_msgs::msg::TurnSignalStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TurnSignalStamped_turn_signal(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::TurnSignalStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::TurnSignalStamped>()
{
  return tier4_external_api_msgs::msg::builder::Init_TurnSignalStamped_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL_STAMPED__BUILDER_HPP_
