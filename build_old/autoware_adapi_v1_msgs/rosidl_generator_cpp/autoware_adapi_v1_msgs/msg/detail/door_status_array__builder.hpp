// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/DoorStatusArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_STATUS_ARRAY__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_STATUS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/door_status_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorStatusArray_doors
{
public:
  explicit Init_DoorStatusArray_doors(::autoware_adapi_v1_msgs::msg::DoorStatusArray & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::DoorStatusArray doors(::autoware_adapi_v1_msgs::msg::DoorStatusArray::_doors_type arg)
  {
    msg_.doors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DoorStatusArray msg_;
};

class Init_DoorStatusArray_stamp
{
public:
  Init_DoorStatusArray_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorStatusArray_doors stamp(::autoware_adapi_v1_msgs::msg::DoorStatusArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_DoorStatusArray_doors(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::DoorStatusArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::DoorStatusArray>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_DoorStatusArray_stamp();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DOOR_STATUS_ARRAY__BUILDER_HPP_
