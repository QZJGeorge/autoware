// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eagleye_msgs:msg/YawrateOffset.idl
// generated code does not contain a copyright notice

#ifndef EAGLEYE_MSGS__MSG__DETAIL__YAWRATE_OFFSET__BUILDER_HPP_
#define EAGLEYE_MSGS__MSG__DETAIL__YAWRATE_OFFSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eagleye_msgs/msg/detail/yawrate_offset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eagleye_msgs
{

namespace msg
{

namespace builder
{

class Init_YawrateOffset_status
{
public:
  explicit Init_YawrateOffset_status(::eagleye_msgs::msg::YawrateOffset & msg)
  : msg_(msg)
  {}
  ::eagleye_msgs::msg::YawrateOffset status(::eagleye_msgs::msg::YawrateOffset::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eagleye_msgs::msg::YawrateOffset msg_;
};

class Init_YawrateOffset_yaw_rate_offset
{
public:
  explicit Init_YawrateOffset_yaw_rate_offset(::eagleye_msgs::msg::YawrateOffset & msg)
  : msg_(msg)
  {}
  Init_YawrateOffset_status yaw_rate_offset(::eagleye_msgs::msg::YawrateOffset::_yaw_rate_offset_type arg)
  {
    msg_.yaw_rate_offset = std::move(arg);
    return Init_YawrateOffset_status(msg_);
  }

private:
  ::eagleye_msgs::msg::YawrateOffset msg_;
};

class Init_YawrateOffset_header
{
public:
  Init_YawrateOffset_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawrateOffset_yaw_rate_offset header(::eagleye_msgs::msg::YawrateOffset::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_YawrateOffset_yaw_rate_offset(msg_);
  }

private:
  ::eagleye_msgs::msg::YawrateOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eagleye_msgs::msg::YawrateOffset>()
{
  return eagleye_msgs::msg::builder::Init_YawrateOffset_header();
}

}  // namespace eagleye_msgs

#endif  // EAGLEYE_MSGS__MSG__DETAIL__YAWRATE_OFFSET__BUILDER_HPP_
