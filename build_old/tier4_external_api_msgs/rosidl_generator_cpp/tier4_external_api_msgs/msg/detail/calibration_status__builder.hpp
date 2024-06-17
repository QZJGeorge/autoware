// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/CalibrationStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CALIBRATION_STATUS__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CALIBRATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/calibration_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_CalibrationStatus_status
{
public:
  explicit Init_CalibrationStatus_status(::tier4_external_api_msgs::msg::CalibrationStatus & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::CalibrationStatus status(::tier4_external_api_msgs::msg::CalibrationStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CalibrationStatus msg_;
};

class Init_CalibrationStatus_target
{
public:
  Init_CalibrationStatus_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalibrationStatus_status target(::tier4_external_api_msgs::msg::CalibrationStatus::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_CalibrationStatus_status(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CalibrationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::CalibrationStatus>()
{
  return tier4_external_api_msgs::msg::builder::Init_CalibrationStatus_target();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CALIBRATION_STATUS__BUILDER_HPP_
