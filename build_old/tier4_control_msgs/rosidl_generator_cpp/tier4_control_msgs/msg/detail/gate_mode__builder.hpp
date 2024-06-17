// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_control_msgs:msg/GateMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__BUILDER_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_control_msgs/msg/detail/gate_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_control_msgs
{

namespace msg
{

namespace builder
{

class Init_GateMode_data
{
public:
  Init_GateMode_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_control_msgs::msg::GateMode data(::tier4_control_msgs::msg::GateMode::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::msg::GateMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::msg::GateMode>()
{
  return tier4_control_msgs::msg::builder::Init_GateMode_data();
}

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__GATE_MODE__BUILDER_HPP_
