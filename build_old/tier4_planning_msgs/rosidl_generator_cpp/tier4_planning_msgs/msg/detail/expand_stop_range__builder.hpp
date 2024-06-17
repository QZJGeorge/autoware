// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/ExpandStopRange.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__EXPAND_STOP_RANGE__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__EXPAND_STOP_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/expand_stop_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_ExpandStopRange_expand_stop_range
{
public:
  explicit Init_ExpandStopRange_expand_stop_range(::tier4_planning_msgs::msg::ExpandStopRange & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::ExpandStopRange expand_stop_range(::tier4_planning_msgs::msg::ExpandStopRange::_expand_stop_range_type arg)
  {
    msg_.expand_stop_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::ExpandStopRange msg_;
};

class Init_ExpandStopRange_stamp
{
public:
  Init_ExpandStopRange_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpandStopRange_expand_stop_range stamp(::tier4_planning_msgs::msg::ExpandStopRange::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ExpandStopRange_expand_stop_range(msg_);
  }

private:
  ::tier4_planning_msgs::msg::ExpandStopRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::ExpandStopRange>()
{
  return tier4_planning_msgs::msg::builder::Init_ExpandStopRange_stamp();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__EXPAND_STOP_RANGE__BUILDER_HPP_
