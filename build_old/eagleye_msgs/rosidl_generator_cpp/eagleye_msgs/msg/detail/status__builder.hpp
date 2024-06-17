// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_error_code
{
public:
  explicit Init_Status_error_code(::eagleye_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::Status error_code(::eagleye_msgs::msg::Status::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::Status msg_;
};

class Init_Status_is_abnormal
{
public:
  explicit Init_Status_is_abnormal(::eagleye_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_error_code is_abnormal(::eagleye_msgs::msg::Status::_is_abnormal_type arg)
  {
    msg_.is_abnormal = std::move(arg);
    return Init_Status_error_code(msg_);
  }

private:
  ::eagleye_msgs::msg::Status msg_;
};

class Init_Status_estimate_status
{
public:
  explicit Init_Status_estimate_status(::eagleye_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_is_abnormal estimate_status(::eagleye_msgs::msg::Status::_estimate_status_type arg)
  {
    msg_.estimate_status = std::move(arg);
    return Init_Status_is_abnormal(msg_);
  }

private:
  ::eagleye_msgs::msg::Status msg_;
};

class Init_Status_enabled_status
{
public:
  Init_Status_enabled_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_estimate_status enabled_status(::eagleye_msgs::msg::Status::_enabled_status_type arg)
  {
    msg_.enabled_status = std::move(arg);
    return Init_Status_estimate_status(msg_);
  }

private:
  ::eagleye_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::Status>()
{
  return eagleye_msgs::msg::builder::Init_Status_enabled_status();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
