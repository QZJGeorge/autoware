// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pandar_msgs:msg/PandarPacket.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__BUILDER_HPP_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pandar_msgs/msg/detail/pandar_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pandar_msgs
{

namespace msg
{

namespace builder
{

class Init_PandarPacket_size
{
public:
  explicit Init_PandarPacket_size(::pandar_msgs::msg::PandarPacket & msg)
  : msg_(msg)
  {}
  ::pandar_msgs::msg::PandarPacket size(::pandar_msgs::msg::PandarPacket::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pandar_msgs::msg::PandarPacket msg_;
};

class Init_PandarPacket_data
{
public:
  explicit Init_PandarPacket_data(::pandar_msgs::msg::PandarPacket & msg)
  : msg_(msg)
  {}
  Init_PandarPacket_size data(::pandar_msgs::msg::PandarPacket::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_PandarPacket_size(msg_);
  }

private:
  ::pandar_msgs::msg::PandarPacket msg_;
};

class Init_PandarPacket_stamp
{
public:
  Init_PandarPacket_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PandarPacket_data stamp(::pandar_msgs::msg::PandarPacket::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_PandarPacket_data(msg_);
  }

private:
  ::pandar_msgs::msg::PandarPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pandar_msgs::msg::PandarPacket>()
{
  return pandar_msgs::msg::builder::Init_PandarPacket_stamp();
}

}  // namespace pandar_msgs

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_PACKET__BUILDER_HPP_
