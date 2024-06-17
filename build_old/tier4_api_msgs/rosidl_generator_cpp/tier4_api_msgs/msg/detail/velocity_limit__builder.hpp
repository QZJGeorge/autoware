// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_api_msgs:msg/VelocityLimit.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__VELOCITY_LIMIT__BUILDER_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__VELOCITY_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_api_msgs/msg/detail/velocity_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_api_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityLimit_max_velocity
{
public:
  explicit Init_VelocityLimit_max_velocity(::tier4_api_msgs::msg::VelocityLimit & msg)
  : msg_(msg)
  {}
  ::tier4_api_msgs::msg::VelocityLimit max_velocity(::tier4_api_msgs::msg::VelocityLimit::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_api_msgs::msg::VelocityLimit msg_;
};

class Init_VelocityLimit_stamp
{
public:
  Init_VelocityLimit_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityLimit_max_velocity stamp(::tier4_api_msgs::msg::VelocityLimit::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VelocityLimit_max_velocity(msg_);
  }

private:
  ::tier4_api_msgs::msg::VelocityLimit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_api_msgs::msg::VelocityLimit>()
{
  return tier4_api_msgs::msg::builder::Init_VelocityLimit_stamp();
}

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__VELOCITY_LIMIT__BUILDER_HPP_
