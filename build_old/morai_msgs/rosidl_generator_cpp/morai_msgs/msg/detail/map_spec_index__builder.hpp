// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/MapSpecIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/map_spec_index__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_MapSpecIndex_load_map_data
{
public:
  Init_MapSpecIndex_load_map_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::msg::MapSpecIndex load_map_data(::morai_msgs::msg::MapSpecIndex::_load_map_data_type arg)
  {
    msg_.load_map_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::MapSpecIndex msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::MapSpecIndex>()
{
  return morai_msgs::msg::builder::Init_MapSpecIndex_load_map_data();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MAP_SPEC_INDEX__BUILDER_HPP_
