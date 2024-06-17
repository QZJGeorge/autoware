// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pandar_msgs:msg/PandarScan.idl
// generated code does not contain a copyright notice

#ifndef PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__BUILDER_HPP_
#define PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pandar_msgs/msg/detail/pandar_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pandar_msgs
{

namespace msg
{

namespace builder
{

class Init_PandarScan_packets
{
public:
  explicit Init_PandarScan_packets(::pandar_msgs::msg::PandarScan & msg)
  : msg_(msg)
  {}
  ::pandar_msgs::msg::PandarScan packets(::pandar_msgs::msg::PandarScan::_packets_type arg)
  {
    msg_.packets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pandar_msgs::msg::PandarScan msg_;
};

class Init_PandarScan_header
{
public:
  Init_PandarScan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PandarScan_packets header(::pandar_msgs::msg::PandarScan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PandarScan_packets(msg_);
  }

private:
  ::pandar_msgs::msg::PandarScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pandar_msgs::msg::PandarScan>()
{
  return pandar_msgs::msg::builder::Init_PandarScan_header();
}

}  // namespace pandar_msgs

#endif  // PANDAR_MSGS__MSG__DETAIL__PANDAR_SCAN__BUILDER_HPP_
