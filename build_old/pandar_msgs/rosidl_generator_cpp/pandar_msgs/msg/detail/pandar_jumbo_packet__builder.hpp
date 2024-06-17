// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pandar_msgs:msg/PandarJumboPacket.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_JUMBO_PACKET__BUILDER_HPP_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_JUMBO_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pandar_msgs/msg/detail/pandar_jumbo_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pandar_msgs
{

namespace msg
{

namespace builder
{

class Init_PandarJumboPacket_size
{
public:
  explicit Init_PandarJumboPacket_size(::pandar_msgs::msg::PandarJumboPacket & msg)
  : msg_(msg)
  {}
  ::pandar_msgs::msg::PandarJumboPacket size(::pandar_msgs::msg::PandarJumboPacket::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pandar_msgs::msg::PandarJumboPacket msg_;
};

class Init_PandarJumboPacket_data
{
public:
  explicit Init_PandarJumboPacket_data(::pandar_msgs::msg::PandarJumboPacket & msg)
  : msg_(msg)
  {}
  Init_PandarJumboPacket_size data(::pandar_msgs::msg::PandarJumboPacket::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_PandarJumboPacket_size(msg_);
  }

private:
  ::pandar_msgs::msg::PandarJumboPacket msg_;
};

class Init_PandarJumboPacket_stamp
{
public:
  Init_PandarJumboPacket_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PandarJumboPacket_data stamp(::pandar_msgs::msg::PandarJumboPacket::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_PandarJumboPacket_data(msg_);
  }

private:
  ::pandar_msgs::msg::PandarJumboPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pandar_msgs::msg::PandarJumboPacket>()
{
  return pandar_msgs::msg::builder::Init_PandarJumboPacket_stamp();
}

}  // namespace pandar_msgs

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_JUMBO_PACKET__BUILDER_HPP_
