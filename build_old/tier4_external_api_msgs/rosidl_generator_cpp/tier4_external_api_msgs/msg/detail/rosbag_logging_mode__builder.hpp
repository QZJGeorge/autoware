// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/RosbagLoggingMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/rosbag_logging_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_RosbagLoggingMode_is_operation_mode
{
public:
  Init_RosbagLoggingMode_is_operation_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::msg::RosbagLoggingMode is_operation_mode(::tier4_external_api_msgs::msg::RosbagLoggingMode::_is_operation_mode_type arg)
  {
    msg_.is_operation_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::RosbagLoggingMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::RosbagLoggingMode>()
{
  return tier4_external_api_msgs::msg::builder::Init_RosbagLoggingMode_is_operation_mode();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__ROSBAG_LOGGING_MODE__BUILDER_HPP_
