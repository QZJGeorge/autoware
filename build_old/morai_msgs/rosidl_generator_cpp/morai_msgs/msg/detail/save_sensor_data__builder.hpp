// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/SaveSensorData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/save_sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveSensorData_file_dir
{
public:
  explicit Init_SaveSensorData_file_dir(::morai_msgs::msg::SaveSensorData & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::SaveSensorData file_dir(::morai_msgs::msg::SaveSensorData::_file_dir_type arg)
  {
    msg_.file_dir = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::SaveSensorData msg_;
};

class Init_SaveSensorData_custom_file_name
{
public:
  explicit Init_SaveSensorData_custom_file_name(::morai_msgs::msg::SaveSensorData & msg)
  : msg_(msg)
  {}
  Init_SaveSensorData_file_dir custom_file_name(::morai_msgs::msg::SaveSensorData::_custom_file_name_type arg)
  {
    msg_.custom_file_name = std::move(arg);
    return Init_SaveSensorData_file_dir(msg_);
  }

private:
  ::morai_msgs::msg::SaveSensorData msg_;
};

class Init_SaveSensorData_is_custom_file_name
{
public:
  Init_SaveSensorData_is_custom_file_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveSensorData_custom_file_name is_custom_file_name(::morai_msgs::msg::SaveSensorData::_is_custom_file_name_type arg)
  {
    msg_.is_custom_file_name = std::move(arg);
    return Init_SaveSensorData_custom_file_name(msg_);
  }

private:
  ::morai_msgs::msg::SaveSensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::SaveSensorData>()
{
  return morai_msgs::msg::builder::Init_SaveSensorData_is_custom_file_name();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__BUILDER_HPP_
