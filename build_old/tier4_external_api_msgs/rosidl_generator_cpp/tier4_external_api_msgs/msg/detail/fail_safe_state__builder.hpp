// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/FailSafeState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/fail_safe_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_FailSafeState_state
{
public:
  Init_FailSafeState_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::msg::FailSafeState state(::tier4_external_api_msgs::msg::FailSafeState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::FailSafeState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::FailSafeState>()
{
  return tier4_external_api_msgs::msg::builder::Init_FailSafeState_state();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE__BUILDER_HPP_
