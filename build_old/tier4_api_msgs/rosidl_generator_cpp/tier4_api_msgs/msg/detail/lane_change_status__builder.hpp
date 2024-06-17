// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_api_msgs:msg/LaneChangeStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__BUILDER_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_api_msgs/msg/detail/lane_change_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_api_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneChangeStatus_candidate_path
{
public:
  explicit Init_LaneChangeStatus_candidate_path(::tier4_api_msgs::msg::LaneChangeStatus & msg)
  : msg_(msg)
  {}
  ::tier4_api_msgs::msg::LaneChangeStatus candidate_path(::tier4_api_msgs::msg::LaneChangeStatus::_candidate_path_type arg)
  {
    msg_.candidate_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_api_msgs::msg::LaneChangeStatus msg_;
};

class Init_LaneChangeStatus_lane_change_ready
{
public:
  explicit Init_LaneChangeStatus_lane_change_ready(::tier4_api_msgs::msg::LaneChangeStatus & msg)
  : msg_(msg)
  {}
  Init_LaneChangeStatus_candidate_path lane_change_ready(::tier4_api_msgs::msg::LaneChangeStatus::_lane_change_ready_type arg)
  {
    msg_.lane_change_ready = std::move(arg);
    return Init_LaneChangeStatus_candidate_path(msg_);
  }

private:
  ::tier4_api_msgs::msg::LaneChangeStatus msg_;
};

class Init_LaneChangeStatus_force_lane_change_available
{
public:
  explicit Init_LaneChangeStatus_force_lane_change_available(::tier4_api_msgs::msg::LaneChangeStatus & msg)
  : msg_(msg)
  {}
  Init_LaneChangeStatus_lane_change_ready force_lane_change_available(::tier4_api_msgs::msg::LaneChangeStatus::_force_lane_change_available_type arg)
  {
    msg_.force_lane_change_available = std::move(arg);
    return Init_LaneChangeStatus_lane_change_ready(msg_);
  }

private:
  ::tier4_api_msgs::msg::LaneChangeStatus msg_;
};

class Init_LaneChangeStatus_header
{
public:
  Init_LaneChangeStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneChangeStatus_force_lane_change_available header(::tier4_api_msgs::msg::LaneChangeStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneChangeStatus_force_lane_change_available(msg_);
  }

private:
  ::tier4_api_msgs::msg::LaneChangeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_api_msgs::msg::LaneChangeStatus>()
{
  return tier4_api_msgs::msg::builder::Init_LaneChangeStatus_header();
}

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__BUILDER_HPP_
