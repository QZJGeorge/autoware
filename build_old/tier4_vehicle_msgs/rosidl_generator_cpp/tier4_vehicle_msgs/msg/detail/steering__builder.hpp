// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_vehicle_msgs:msg/Steering.idl
// generated code does not contain a copyright notice

#ifndef TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING__BUILDER_HPP_
#define TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_vehicle_msgs/msg/detail/steering__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_Steering_data
{
public:
  explicit Init_Steering_data(::tier4_vehicle_msgs::msg::Steering & msg)
  : msg_(msg)
  {}
  ::tier4_vehicle_msgs::msg::Steering data(::tier4_vehicle_msgs::msg::Steering::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::Steering msg_;
};

class Init_Steering_header
{
public:
  Init_Steering_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Steering_data header(::tier4_vehicle_msgs::msg::Steering::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Steering_data(msg_);
  }

private:
  ::tier4_vehicle_msgs::msg::Steering msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_vehicle_msgs::msg::Steering>()
{
  return tier4_vehicle_msgs::msg::builder::Init_Steering_header();
}

}  // namespace tier4_vehicle_msgs

#endif  // TIER4_VEHICLE_MSGS__MSG__DETAIL__STEERING__BUILDER_HPP_
