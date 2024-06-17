// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:msg/CalibrationStatusArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CALIBRATION_STATUS_ARRAY__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CALIBRATION_STATUS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/msg/detail/calibration_status_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_CalibrationStatusArray_status_array
{
public:
  explicit Init_CalibrationStatusArray_status_array(::tier4_external_api_msgs::msg::CalibrationStatusArray & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::msg::CalibrationStatusArray status_array(::tier4_external_api_msgs::msg::CalibrationStatusArray::_status_array_type arg)
  {
    msg_.status_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CalibrationStatusArray msg_;
};

class Init_CalibrationStatusArray_stamp
{
public:
  Init_CalibrationStatusArray_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalibrationStatusArray_status_array stamp(::tier4_external_api_msgs::msg::CalibrationStatusArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CalibrationStatusArray_status_array(msg_);
  }

private:
  ::tier4_external_api_msgs::msg::CalibrationStatusArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::msg::CalibrationStatusArray>()
{
  return tier4_external_api_msgs::msg::builder::Init_CalibrationStatusArray_stamp();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__CALIBRATION_STATUS_ARRAY__BUILDER_HPP_
