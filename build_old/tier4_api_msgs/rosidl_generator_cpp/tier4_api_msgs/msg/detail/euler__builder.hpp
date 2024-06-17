// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_api_msgs:msg/Euler.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__EULER__BUILDER_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_api_msgs/msg/detail/euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_api_msgs
{

namespace msg
{

namespace builder
{

class Init_Euler_yaw
{
public:
  explicit Init_Euler_yaw(::tier4_api_msgs::msg::Euler & msg)
  : msg_(msg)
  {}
  ::tier4_api_msgs::msg::Euler yaw(::tier4_api_msgs::msg::Euler::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_api_msgs::msg::Euler msg_;
};

class Init_Euler_pitch
{
public:
  explicit Init_Euler_pitch(::tier4_api_msgs::msg::Euler & msg)
  : msg_(msg)
  {}
  Init_Euler_yaw pitch(::tier4_api_msgs::msg::Euler::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Euler_yaw(msg_);
  }

private:
  ::tier4_api_msgs::msg::Euler msg_;
};

class Init_Euler_roll
{
public:
  Init_Euler_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Euler_pitch roll(::tier4_api_msgs::msg::Euler::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Euler_pitch(msg_);
  }

private:
  ::tier4_api_msgs::msg::Euler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_api_msgs::msg::Euler>()
{
  return tier4_api_msgs::msg::builder::Init_Euler_roll();
}

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__EULER__BUILDER_HPP_
