// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SyncModeResultResponse.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_RESULT_RESPONSE__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_RESULT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/sync_mode_result_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncModeResultResponse_result
{
public:
  Init_SyncModeResultResponse_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::msg::SyncModeResultResponse result(::morai_msgs::msg::SyncModeResultResponse::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeResultResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SyncModeResultResponse>()
{
  return morai_msgs::msg::builder::Init_SyncModeResultResponse_result();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_RESULT_RESPONSE__BUILDER_HPP_
