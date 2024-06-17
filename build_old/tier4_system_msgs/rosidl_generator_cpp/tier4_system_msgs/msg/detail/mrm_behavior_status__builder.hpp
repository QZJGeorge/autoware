// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_system_msgs:msg/MrmBehaviorStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__MRM_BEHAVIOR_STATUS__BUILDER_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__MRM_BEHAVIOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_system_msgs/msg/detail/mrm_behavior_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_system_msgs
{

namespace msg
{

namespace builder
{

class Init_MrmBehaviorStatus_state
{
public:
  explicit Init_MrmBehaviorStatus_state(::tier4_system_msgs::msg::MrmBehaviorStatus & msg)
  : msg_(msg)
  {}
  ::tier4_system_msgs::msg::MrmBehaviorStatus state(::tier4_system_msgs::msg::MrmBehaviorStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_system_msgs::msg::MrmBehaviorStatus msg_;
};

class Init_MrmBehaviorStatus_stamp
{
public:
  Init_MrmBehaviorStatus_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrmBehaviorStatus_state stamp(::tier4_system_msgs::msg::MrmBehaviorStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_MrmBehaviorStatus_state(msg_);
  }

private:
  ::tier4_system_msgs::msg::MrmBehaviorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_system_msgs::msg::MrmBehaviorStatus>()
{
  return tier4_system_msgs::msg::builder::Init_MrmBehaviorStatus_stamp();
}

}  // namespace tier4_system_msgs

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__MRM_BEHAVIOR_STATUS__BUILDER_HPP_
