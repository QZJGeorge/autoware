// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/GhostMessage.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/ghost_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_GhostMessage_steering_angle
{
public:
  explicit Init_GhostMessage_steering_angle(::morai_msgs::msg::GhostMessage & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::GhostMessage steering_angle(::morai_msgs::msg::GhostMessage::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::GhostMessage msg_;
};

class Init_GhostMessage_velocity
{
public:
  explicit Init_GhostMessage_velocity(::morai_msgs::msg::GhostMessage & msg)
  : msg_(msg)
  {}
  Init_GhostMessage_steering_angle velocity(::morai_msgs::msg::GhostMessage::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_GhostMessage_steering_angle(msg_);
  }

private:
  ::morai_msgs::msg::GhostMessage msg_;
};

class Init_GhostMessage_rotation
{
public:
  explicit Init_GhostMessage_rotation(::morai_msgs::msg::GhostMessage & msg)
  : msg_(msg)
  {}
  Init_GhostMessage_velocity rotation(::morai_msgs::msg::GhostMessage::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_GhostMessage_velocity(msg_);
  }

private:
  ::morai_msgs::msg::GhostMessage msg_;
};

class Init_GhostMessage_position
{
public:
  Init_GhostMessage_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GhostMessage_rotation position(::morai_msgs::msg::GhostMessage::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GhostMessage_rotation(msg_);
  }

private:
  ::morai_msgs::msg::GhostMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::GhostMessage>()
{
  return morai_msgs::msg::builder::Init_GhostMessage_position();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__GHOST_MESSAGE__BUILDER_HPP_
