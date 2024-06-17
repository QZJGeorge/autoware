// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/msg/detail/turn_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_TurnSignal_data
{
public:
  explicit Init_TurnSignal_data(::tier4_vehicle_msgs::msg::TurnSignal & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::msg::TurnSignal data(::tier4_vehicle_msgs::msg::TurnSignal::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::TurnSignal msg_;
};

class Init_TurnSignal_header
{
public:
  Init_TurnSignal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurnSignal_data header(::tier4_vehicle_msgs::msg::TurnSignal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TurnSignal_data(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::TurnSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::msg::TurnSignal>()
{
  return tier4_vehicle_msgs::msg::builder::Init_TurnSignal_header();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__TURN_SIGNAL__BUILDER_HPP_
