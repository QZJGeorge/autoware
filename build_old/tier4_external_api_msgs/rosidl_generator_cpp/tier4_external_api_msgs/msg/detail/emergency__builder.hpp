// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/Emergency.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/emergency__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_Emergency_emergency
{
public:
  explicit Init_Emergency_emergency(::tier4_external_api_msgs::msg::Emergency & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::Emergency emergency(::tier4_external_api_msgs::msg::Emergency::_emergency_type arg)
  {
    msg_.emergency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::Emergency msg_;
};

class Init_Emergency_stamp
{
public:
  Init_Emergency_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Emergency_emergency stamp(::tier4_external_api_msgs::msg::Emergency::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Emergency_emergency(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::Emergency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::Emergency>()
{
  return tier4_external_api_msgs::msg::builder::Init_Emergency_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__EMERGENCY__BUILDER_HPP_
