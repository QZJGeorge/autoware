// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/AvoidanceDebugMsgArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/avoidance_debug_msg_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_AvoidanceDebugMsgArray_avoidance_info
{
public:
  explicit Init_AvoidanceDebugMsgArray_avoidance_info(::tier4_planning_msgs::msg::AvoidanceDebugMsgArray & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::AvoidanceDebugMsgArray avoidance_info(::tier4_planning_msgs::msg::AvoidanceDebugMsgArray::_avoidance_info_type arg)
  {
    msg_.avoidance_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsgArray msg_;
};

class Init_AvoidanceDebugMsgArray_header
{
public:
  Init_AvoidanceDebugMsgArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvoidanceDebugMsgArray_avoidance_info header(::tier4_planning_msgs::msg::AvoidanceDebugMsgArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AvoidanceDebugMsgArray_avoidance_info(msg_);
  }

private:
  ::tier4_planning_msgs::msg::AvoidanceDebugMsgArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::AvoidanceDebugMsgArray>()
{
  return tier4_planning_msgs::msg::builder::Init_AvoidanceDebugMsgArray_header();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__AVOIDANCE_DEBUG_MSG_ARRAY__BUILDER_HPP_
