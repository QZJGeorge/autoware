// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SyncModeAddObj.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_ADD_OBJ__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_ADD_OBJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/sync_mode_add_obj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SyncModeAddObj_frame
{
public:
  explicit Init_SyncModeAddObj_frame(::morai_msgs::msg::SyncModeAddObj & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SyncModeAddObj frame(::morai_msgs::msg::SyncModeAddObj::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeAddObj msg_;
};

class Init_SyncModeAddObj_heading
{
public:
  explicit Init_SyncModeAddObj_heading(::morai_msgs::msg::SyncModeAddObj & msg)
  : msg_(msg)
  {}
  Init_SyncModeAddObj_frame heading(::morai_msgs::msg::SyncModeAddObj::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_SyncModeAddObj_frame(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeAddObj msg_;
};

class Init_SyncModeAddObj_position
{
public:
  explicit Init_SyncModeAddObj_position(::morai_msgs::msg::SyncModeAddObj & msg)
  : msg_(msg)
  {}
  Init_SyncModeAddObj_heading position(::morai_msgs::msg::SyncModeAddObj::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SyncModeAddObj_heading(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeAddObj msg_;
};

class Init_SyncModeAddObj_name
{
public:
  Init_SyncModeAddObj_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SyncModeAddObj_position name(::morai_msgs::msg::SyncModeAddObj::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SyncModeAddObj_position(msg_);
  }

private:
  ::morai_msgs::msg::SyncModeAddObj msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SyncModeAddObj>()
{
  return morai_msgs::msg::builder::Init_SyncModeAddObj_name();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_ADD_OBJ__BUILDER_HPP_
