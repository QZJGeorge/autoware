// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SyncModeCmdResponse.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CMD_RESPONSE__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CMD_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/sync_mode_cmd_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncModeCmdResponse_time_step
{
public:
  explicit Init_SyncModeCmdResponse_time_step(::morai_msgs::msg::SyncModeCmdResponse & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SyncModeCmdResponse time_step(::morai_msgs::msg::SyncModeCmdResponse::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeCmdResponse msg_;
};

class Init_SyncModeCmdResponse_result
{
public:
  explicit Init_SyncModeCmdResponse_result(::morai_msgs::msg::SyncModeCmdResponse & msg)
  : msg_(msg)
  {}
  Init_SyncModeCmdResponse_time_step result(::morai_msgs::msg::SyncModeCmdResponse::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_SyncModeCmdResponse_time_step(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeCmdResponse msg_;
};

class Init_SyncModeCmdResponse_frame
{
public:
  explicit Init_SyncModeCmdResponse_frame(::morai_msgs::msg::SyncModeCmdResponse & msg)
  : msg_(msg)
  {}
  Init_SyncModeCmdResponse_result frame(::morai_msgs::msg::SyncModeCmdResponse::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_SyncModeCmdResponse_result(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeCmdResponse msg_;
};

class Init_SyncModeCmdResponse_user_id
{
public:
  Init_SyncModeCmdResponse_user_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncModeCmdResponse_frame user_id(::morai_msgs::msg::SyncModeCmdResponse::_user_id_type arg)
  {
    msg_.user_id = std::move(arg);
    return Init_SyncModeCmdResponse_frame(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeCmdResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SyncModeCmdResponse>()
{
  return morai_msgs::msg::builder::Init_SyncModeCmdResponse_user_id();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CMD_RESPONSE__BUILDER_HPP_
