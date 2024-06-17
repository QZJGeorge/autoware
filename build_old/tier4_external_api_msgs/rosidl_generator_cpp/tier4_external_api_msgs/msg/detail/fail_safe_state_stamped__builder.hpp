// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/FailSafeStateStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE_STAMPED__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/fail_safe_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_FailSafeStateStamped_state
{
public:
  explicit Init_FailSafeStateStamped_state(::tier4_external_api_msgs::msg::FailSafeStateStamped & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::FailSafeStateStamped state(::tier4_external_api_msgs::msg::FailSafeStateStamped::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::FailSafeStateStamped msg_;
};

class Init_FailSafeStateStamped_stamp
{
public:
  Init_FailSafeStateStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FailSafeStateStamped_state stamp(::tier4_external_api_msgs::msg::FailSafeStateStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_FailSafeStateStamped_state(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::FailSafeStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::FailSafeStateStamped>()
{
  return tier4_external_api_msgs::msg::builder::Init_FailSafeStateStamped_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE_STAMPED__BUILDER_HPP_
