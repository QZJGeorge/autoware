// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_control_msgs:msg/IsPaused.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__IS_PAUSED__BUILDER_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__IS_PAUSED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_control_msgs/msg/detail/is_paused__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_control_msgs
{

namespace msg
{

namespace builder
{

class Init_IsPaused_data
{
public:
  explicit Init_IsPaused_data(::tier4_control_msgs::msg::IsPaused & msg)
  : msg_(msg)
  {}
  ::tier4_control_msgs::msg::IsPaused data(::tier4_control_msgs::msg::IsPaused::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_control_msgs::msg::IsPaused msg_;
};

class Init_IsPaused_stamp
{
public:
  Init_IsPaused_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsPaused_data stamp(::tier4_control_msgs::msg::IsPaused::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_IsPaused_data(msg_);
  }

private:
  ::tier4_control_msgs::msg::IsPaused msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_control_msgs::msg::IsPaused>()
{
  return tier4_control_msgs::msg::builder::Init_IsPaused_stamp();
}

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__IS_PAUSED__BUILDER_HPP_
