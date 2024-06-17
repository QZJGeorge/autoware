// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_api_msgs:msg/ObstacleAvoidanceStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__BUILDER_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_api_msgs/msg/detail/obstacle_avoidance_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_api_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleAvoidanceStatus_candidate_path
{
public:
  explicit Init_ObstacleAvoidanceStatus_candidate_path(::tier4_api_msgs::msg::ObstacleAvoidanceStatus & msg)
  : msg_(msg)
  {}
  ::tier4_api_msgs::msg::ObstacleAvoidanceStatus candidate_path(::tier4_api_msgs::msg::ObstacleAvoidanceStatus::_candidate_path_type arg)
  {
    msg_.candidate_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_api_msgs::msg::ObstacleAvoidanceStatus msg_;
};

class Init_ObstacleAvoidanceStatus_obstacle_avoidance_ready
{
public:
  explicit Init_ObstacleAvoidanceStatus_obstacle_avoidance_ready(::tier4_api_msgs::msg::ObstacleAvoidanceStatus & msg)
  : msg_(msg)
  {}
  Init_ObstacleAvoidanceStatus_candidate_path obstacle_avoidance_ready(::tier4_api_msgs::msg::ObstacleAvoidanceStatus::_obstacle_avoidance_ready_type arg)
  {
    msg_.obstacle_avoidance_ready = std::move(arg);
    return Init_ObstacleAvoidanceStatus_candidate_path(msg_);
  }

private:
  ::tier4_api_msgs::msg::ObstacleAvoidanceStatus msg_;
};

class Init_ObstacleAvoidanceStatus_header
{
public:
  Init_ObstacleAvoidanceStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleAvoidanceStatus_obstacle_avoidance_ready header(::tier4_api_msgs::msg::ObstacleAvoidanceStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleAvoidanceStatus_obstacle_avoidance_ready(msg_);
  }

private:
  ::tier4_api_msgs::msg::ObstacleAvoidanceStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_api_msgs::msg::ObstacleAvoidanceStatus>()
{
  return tier4_api_msgs::msg::builder::Init_ObstacleAvoidanceStatus_header();
}

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__OBSTACLE_AVOIDANCE_STATUS__BUILDER_HPP_
