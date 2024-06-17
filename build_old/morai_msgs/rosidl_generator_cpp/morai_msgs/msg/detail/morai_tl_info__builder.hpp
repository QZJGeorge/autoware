// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/MoraiTLInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_TL_INFO__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_TL_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/morai_tl_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_MoraiTLInfo_status
{
public:
  explicit Init_MoraiTLInfo_status(::morai_msgs::msg::MoraiTLInfo & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::MoraiTLInfo status(::morai_msgs::msg::MoraiTLInfo::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::MoraiTLInfo msg_;
};

class Init_MoraiTLInfo_idx
{
public:
  explicit Init_MoraiTLInfo_idx(::morai_msgs::msg::MoraiTLInfo & msg)
  : msg_(msg)
  {}
  Init_MoraiTLInfo_status idx(::morai_msgs::msg::MoraiTLInfo::_idx_type arg)
  {
    msg_.idx = std::move(arg);
    return Init_MoraiTLInfo_status(msg_);
  }

private:
  ::morai_msgs::msg::MoraiTLInfo msg_;
};

class Init_MoraiTLInfo_header
{
public:
  Init_MoraiTLInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoraiTLInfo_idx header(::morai_msgs::msg::MoraiTLInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MoraiTLInfo_idx(msg_);
  }

private:
  ::morai_msgs::msg::MoraiTLInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::MoraiTLInfo>()
{
  return morai_msgs::msg::builder::Init_MoraiTLInfo_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_TL_INFO__BUILDER_HPP_
