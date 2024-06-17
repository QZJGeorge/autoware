// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/GetAccelBrakeMapCalibrationData.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tier4_external_api_msgs/srv/detail/get_accel_brake_map_calibration_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tier4_external_api_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request>()
{
  return ::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAccelBrakeMapCalibrationData_Response_brake_map
{
public:
  explicit Init_GetAccelBrakeMapCalibrationData_Response_brake_map(::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response & msg)
  : msg_(msg)
  {}
  ::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response brake_map(::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response::_brake_map_type arg)
  {
    msg_.brake_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response msg_;
};

class Init_GetAccelBrakeMapCalibrationData_Response_accel_map
{
public:
  explicit Init_GetAccelBrakeMapCalibrationData_Response_accel_map(::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response & msg)
  : msg_(msg)
  {}
  Init_GetAccelBrakeMapCalibrationData_Response_brake_map accel_map(::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response::_accel_map_type arg)
  {
    msg_.accel_map = std::move(arg);
    return Init_GetAccelBrakeMapCalibrationData_Response_brake_map(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response msg_;
};

class Init_GetAccelBrakeMapCalibrationData_Response_graph_image
{
public:
  Init_GetAccelBrakeMapCalibrationData_Response_graph_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAccelBrakeMapCalibrationData_Response_accel_map graph_image(::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response::_graph_image_type arg)
  {
    msg_.graph_image = std::move(arg);
    return Init_GetAccelBrakeMapCalibrationData_Response_accel_map(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_GetAccelBrakeMapCalibrationData_Response_graph_image();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__BUILDER_HPP_
