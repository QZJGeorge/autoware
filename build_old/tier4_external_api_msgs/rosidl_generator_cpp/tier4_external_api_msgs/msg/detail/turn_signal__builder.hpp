// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/turn_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_TurnSignal_data
{
public:
  Init_TurnSignal_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::msg::TurnSignal data(::tier4_external_api_msgs::msg::TurnSignal::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::TurnSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::TurnSignal>()
{
  return tier4_external_api_msgs::msg::builder::Init_TurnSignal_data();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_
