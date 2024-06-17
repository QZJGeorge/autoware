// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_localization_msgs:srv/PoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
#define TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_localization_msgs/srv/detail/pose_with_covariance_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_localization_msgs
{

namespace srv
{

namespace builder
{

class Init_PoseWithCovarianceStamped_Request_pose_with_covariance
{
public:
  Init_PoseWithCovarianceStamped_Request_pose_with_covariance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request pose_with_covariance(::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request::_pose_with_covariance_type arg)
  {
    msg_.pose_with_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Request>()
{
  return tier4_localization_msgs::srv::builder::Init_PoseWithCovarianceStamped_Request_pose_with_covariance();
}

}  // namespace tier4_localization_msgs


namespace tier4_localization_msgs
{

namespace srv
{

namespace builder
{

class Init_PoseWithCovarianceStamped_Response_pose_with_covariance
{
public:
  explicit Init_PoseWithCovarianceStamped_Response_pose_with_covariance(::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response & msg)
  : msg_(msg)
  {}
  ::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response pose_with_covariance(::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response::_pose_with_covariance_type arg)
  {
    msg_.pose_with_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response msg_;
};

class Init_PoseWithCovarianceStamped_Response_success
{
public:
  Init_PoseWithCovarianceStamped_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseWithCovarianceStamped_Response_pose_with_covariance success(::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PoseWithCovarianceStamped_Response_pose_with_covariance(msg_);
  }

private:
  ::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_localization_msgs::srv::PoseWithCovarianceStamped_Response>()
{
  return tier4_localization_msgs::srv::builder::Init_PoseWithCovarianceStamped_Response_success();
}

}  // namespace tier4_localization_msgs

#endif  // TIER4_LOCALIZATION_MSGS__SRV__DETAIL__POSE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
