// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/MoraiSrvResponse.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SRV_RESPONSE__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SRV_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/morai_srv_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_MoraiSrvResponse_result
{
public:
  Init_MoraiSrvResponse_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::msg::MoraiSrvResponse result(::morai_msgs::msg::MoraiSrvResponse::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSrvResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::MoraiSrvResponse>()
{
  return morai_msgs::msg::builder::Init_MoraiSrvResponse_result();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SRV_RESPONSE__BUILDER_HPP_
