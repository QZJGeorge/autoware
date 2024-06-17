// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SyncModeRemoveObj.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_REMOVE_OBJ__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_REMOVE_OBJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/sync_mode_remove_obj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncModeRemoveObj_frame
{
public:
  explicit Init_SyncModeRemoveObj_frame(::morai_msgs::msg::SyncModeRemoveObj & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SyncModeRemoveObj frame(::morai_msgs::msg::SyncModeRemoveObj::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeRemoveObj msg_;
};

class Init_SyncModeRemoveObj_unique_id
{
public:
  Init_SyncModeRemoveObj_unique_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncModeRemoveObj_frame unique_id(::morai_msgs::msg::SyncModeRemoveObj::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_SyncModeRemoveObj_frame(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeRemoveObj msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SyncModeRemoveObj>()
{
  return morai_msgs::msg::builder::Init_SyncModeRemoveObj_unique_id();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_REMOVE_OBJ__BUILDER_HPP_
