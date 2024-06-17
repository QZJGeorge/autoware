// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/IsAvoidancePossible.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__IS_AVOIDANCE_POSSIBLE__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__IS_AVOIDANCE_POSSIBLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/is_avoidance_possible__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_IsAvoidancePossible_is_avoidance_possible
{
public:
  explicit Init_IsAvoidancePossible_is_avoidance_possible(::tier4_planning_msgs::msg::IsAvoidancePossible & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::IsAvoidancePossible is_avoidance_possible(::tier4_planning_msgs::msg::IsAvoidancePossible::_is_avoidance_possible_type arg)
  {
    msg_.is_avoidance_possible = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::IsAvoidancePossible msg_;
};

class Init_IsAvoidancePossible_stamp
{
public:
  Init_IsAvoidancePossible_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsAvoidancePossible_is_avoidance_possible stamp(::tier4_planning_msgs::msg::IsAvoidancePossible::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_IsAvoidancePossible_is_avoidance_possible(msg_);
  }

private:
  ::tier4_planning_msgs::msg::IsAvoidancePossible msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::IsAvoidancePossible>()
{
  return tier4_planning_msgs::msg::builder::Init_IsAvoidancePossible_stamp();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__IS_AVOIDANCE_POSSIBLE__BUILDER_HPP_
