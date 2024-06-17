// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_api_msgs:msg/DoorStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__BUILDER_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_api_msgs/msg/detail/door_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_api_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorStatus_status
{
public:
  Init_DoorStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_api_msgs::msg::DoorStatus status(::tier4_api_msgs::msg::DoorStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_api_msgs::msg::DoorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_api_msgs::msg::DoorStatus>()
{
  return tier4_api_msgs::msg::builder::Init_DoorStatus_status();
}

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__DOOR_STATUS__BUILDER_HPP_
