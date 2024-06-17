// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:msg/ActuationCommandStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND_STAMPED__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/msg/detail/actuation_command_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuationCommandStamped_actuation
{
public:
  explicit Init_ActuationCommandStamped_actuation(::tier4_vehicle_msgs::msg::ActuationCommandStamped & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::msg::ActuationCommandStamped actuation(::tier4_vehicle_msgs::msg::ActuationCommandStamped::_actuation_type arg)
  {
    msg_.actuation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ActuationCommandStamped msg_;
};

class Init_ActuationCommandStamped_header
{
public:
  Init_ActuationCommandStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuationCommandStamped_actuation header(::tier4_vehicle_msgs::msg::ActuationCommandStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActuationCommandStamped_actuation(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::ActuationCommandStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::msg::ActuationCommandStamped>()
{
  return tier4_vehicle_msgs::msg::builder::Init_ActuationCommandStamped_header();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__ACTUATION_COMMAND_STAMPED__BUILDER_HPP_
