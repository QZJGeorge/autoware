// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/EventInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__EVENT_INFO__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__EVENT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/event_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_EventInfo_set_pause
{
public:
  explicit Init_EventInfo_set_pause(::morai_msgs::msg::EventInfo & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::EventInfo set_pause(::morai_msgs::msg::EventInfo::_set_pause_type arg)
  {
    msg_.set_pause = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::EventInfo msg_;
};

class Init_EventInfo_lamps
{
public:
  explicit Init_EventInfo_lamps(::morai_msgs::msg::EventInfo & msg)
  : msg_(msg)
  {}
  Init_EventInfo_set_pause lamps(::morai_msgs::msg::EventInfo::_lamps_type arg)
  {
    msg_.lamps = std::move(arg);
    return Init_EventInfo_set_pause(msg_);
  }

private:
  ::morai_msgs::msg::EventInfo msg_;
};

class Init_EventInfo_gear
{
public:
  explicit Init_EventInfo_gear(::morai_msgs::msg::EventInfo & msg)
  : msg_(msg)
  {}
  Init_EventInfo_lamps gear(::morai_msgs::msg::EventInfo::_gear_type arg)
  {
    msg_.gear = std::move(arg);
    return Init_EventInfo_lamps(msg_);
  }

private:
  ::morai_msgs::msg::EventInfo msg_;
};

class Init_EventInfo_ctrl_mode
{
public:
  explicit Init_EventInfo_ctrl_mode(::morai_msgs::msg::EventInfo & msg)
  : msg_(msg)
  {}
  Init_EventInfo_gear ctrl_mode(::morai_msgs::msg::EventInfo::_ctrl_mode_type arg)
  {
    msg_.ctrl_mode = std::move(arg);
    return Init_EventInfo_gear(msg_);
  }

private:
  ::morai_msgs::msg::EventInfo msg_;
};

class Init_EventInfo_option
{
public:
  Init_EventInfo_option()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventInfo_ctrl_mode option(::morai_msgs::msg::EventInfo::_option_type arg)
  {
    msg_.option = std::move(arg);
    return Init_EventInfo_ctrl_mode(msg_);
  }

private:
  ::morai_msgs::msg::EventInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::EventInfo>()
{
  return morai_msgs::msg::builder::Init_EventInfo_option();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__EVENT_INFO__BUILDER_HPP_
