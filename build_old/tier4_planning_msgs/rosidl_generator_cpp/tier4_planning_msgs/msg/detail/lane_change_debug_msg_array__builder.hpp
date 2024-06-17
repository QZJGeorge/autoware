// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsgArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG_ARRAY__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneChangeDebugMsgArray_lane_change_info
{
public:
  explicit Init_LaneChangeDebugMsgArray_lane_change_info(::tier4_planning_msgs::msg::LaneChangeDebugMsgArray & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::LaneChangeDebugMsgArray lane_change_info(::tier4_planning_msgs::msg::LaneChangeDebugMsgArray::_lane_change_info_type arg)
  {
    msg_.lane_change_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LaneChangeDebugMsgArray msg_;
};

class Init_LaneChangeDebugMsgArray_header
{
public:
  Init_LaneChangeDebugMsgArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneChangeDebugMsgArray_lane_change_info header(::tier4_planning_msgs::msg::LaneChangeDebugMsgArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneChangeDebugMsgArray_lane_change_info(msg_);
  }

private:
  ::tier4_planning_msgs::msg::LaneChangeDebugMsgArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::LaneChangeDebugMsgArray>()
{
  return tier4_planning_msgs::msg::builder::Init_LaneChangeDebugMsgArray_header();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG_ARRAY__BUILDER_HPP_
