// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/RosbagCopyStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/rosbag_copy_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_RosbagCopyStatus_message
{
public:
  explicit Init_RosbagCopyStatus_message(::tier4_external_api_msgs::msg::RosbagCopyStatus & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::RosbagCopyStatus message(::tier4_external_api_msgs::msg::RosbagCopyStatus::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::RosbagCopyStatus msg_;
};

class Init_RosbagCopyStatus_date
{
public:
  explicit Init_RosbagCopyStatus_date(::tier4_external_api_msgs::msg::RosbagCopyStatus & msg)
  : msg_(msg)
  {}
  Init_RosbagCopyStatus_message date(::tier4_external_api_msgs::msg::RosbagCopyStatus::_date_type arg)
  {
    msg_.date = std::move(arg);
    return Init_RosbagCopyStatus_message(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::RosbagCopyStatus msg_;
};

class Init_RosbagCopyStatus_vehicle_id
{
public:
  explicit Init_RosbagCopyStatus_vehicle_id(::tier4_external_api_msgs::msg::RosbagCopyStatus & msg)
  : msg_(msg)
  {}
  Init_RosbagCopyStatus_date vehicle_id(::tier4_external_api_msgs::msg::RosbagCopyStatus::_vehicle_id_type arg)
  {
    msg_.vehicle_id = std::move(arg);
    return Init_RosbagCopyStatus_date(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::RosbagCopyStatus msg_;
};

class Init_RosbagCopyStatus_project_id
{
public:
  explicit Init_RosbagCopyStatus_project_id(::tier4_external_api_msgs::msg::RosbagCopyStatus & msg)
  : msg_(msg)
  {}
  Init_RosbagCopyStatus_vehicle_id project_id(::tier4_external_api_msgs::msg::RosbagCopyStatus::_project_id_type arg)
  {
    msg_.project_id = std::move(arg);
    return Init_RosbagCopyStatus_vehicle_id(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::RosbagCopyStatus msg_;
};

class Init_RosbagCopyStatus_progress_percentage
{
public:
  explicit Init_RosbagCopyStatus_progress_percentage(::tier4_external_api_msgs::msg::RosbagCopyStatus & msg)
  : msg_(msg)
  {}
  Init_RosbagCopyStatus_project_id progress_percentage(::tier4_external_api_msgs::msg::RosbagCopyStatus::_progress_percentage_type arg)
  {
    msg_.progress_percentage = std::move(arg);
    return Init_RosbagCopyStatus_project_id(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::RosbagCopyStatus msg_;
};

class Init_RosbagCopyStatus_status
{
public:
  Init_RosbagCopyStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosbagCopyStatus_progress_percentage status(::tier4_external_api_msgs::msg::RosbagCopyStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RosbagCopyStatus_progress_percentage(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::RosbagCopyStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::RosbagCopyStatus>()
{
  return tier4_external_api_msgs::msg::builder::Init_RosbagCopyStatus_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_COPY_STATUS__BUILDER_HPP_
