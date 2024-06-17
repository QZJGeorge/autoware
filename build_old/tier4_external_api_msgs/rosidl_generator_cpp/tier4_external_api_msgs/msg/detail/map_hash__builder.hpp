// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/MapHash.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__MAP_HASH__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__MAP_HASH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/map_hash__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_MapHash_pcd
{
public:
  explicit Init_MapHash_pcd(::tier4_external_api_msgs::msg::MapHash & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::MapHash pcd(::tier4_external_api_msgs::msg::MapHash::_pcd_type arg)
  {
    msg_.pcd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::MapHash msg_;
};

class Init_MapHash_lanelet
{
public:
  Init_MapHash_lanelet()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapHash_pcd lanelet(::tier4_external_api_msgs::msg::MapHash::_lanelet_type arg)
  {
    msg_.lanelet = std::move(arg);
    return Init_MapHash_pcd(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::MapHash msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::MapHash>()
{
  return tier4_external_api_msgs::msg::builder::Init_MapHash_lanelet();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__MAP_HASH__BUILDER_HPP_
