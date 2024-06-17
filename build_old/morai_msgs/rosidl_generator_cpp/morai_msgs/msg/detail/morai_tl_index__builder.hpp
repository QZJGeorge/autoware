// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/MoraiTLIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/morai_tl_index__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_MoraiTLIndex_idx
{
public:
  Init_MoraiTLIndex_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::msg::MoraiTLIndex idx(::morai_msgs::msg::MoraiTLIndex::_idx_type arg)
  {
    msg_.idx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::MoraiTLIndex msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::MoraiTLIndex>()
{
  return morai_msgs::msg::builder::Init_MoraiTLIndex_idx();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__BUILDER_HPP_
