// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/MoraiSimConfig.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/morai_sim_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_MoraiSimConfig_radar_list
{
public:
  explicit Init_MoraiSimConfig_radar_list(::morai_msgs::msg::MoraiSimConfig & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::MoraiSimConfig radar_list(::morai_msgs::msg::MoraiSimConfig::_radar_list_type arg)
  {
    msg_.radar_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimConfig msg_;
};

class Init_MoraiSimConfig_lidar_list
{
public:
  explicit Init_MoraiSimConfig_lidar_list(::morai_msgs::msg::MoraiSimConfig & msg)
  : msg_(msg)
  {}
  Init_MoraiSimConfig_radar_list lidar_list(::morai_msgs::msg::MoraiSimConfig::_lidar_list_type arg)
  {
    msg_.lidar_list = std::move(arg);
    return Init_MoraiSimConfig_radar_list(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimConfig msg_;
};

class Init_MoraiSimConfig_imu_list
{
public:
  explicit Init_MoraiSimConfig_imu_list(::morai_msgs::msg::MoraiSimConfig & msg)
  : msg_(msg)
  {}
  Init_MoraiSimConfig_lidar_list imu_list(::morai_msgs::msg::MoraiSimConfig::_imu_list_type arg)
  {
    msg_.imu_list = std::move(arg);
    return Init_MoraiSimConfig_lidar_list(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimConfig msg_;
};

class Init_MoraiSimConfig_gps_list
{
public:
  explicit Init_MoraiSimConfig_gps_list(::morai_msgs::msg::MoraiSimConfig & msg)
  : msg_(msg)
  {}
  Init_MoraiSimConfig_imu_list gps_list(::morai_msgs::msg::MoraiSimConfig::_gps_list_type arg)
  {
    msg_.gps_list = std::move(arg);
    return Init_MoraiSimConfig_imu_list(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimConfig msg_;
};

class Init_MoraiSimConfig_camera_list
{
public:
  explicit Init_MoraiSimConfig_camera_list(::morai_msgs::msg::MoraiSimConfig & msg)
  : msg_(msg)
  {}
  Init_MoraiSimConfig_gps_list camera_list(::morai_msgs::msg::MoraiSimConfig::_camera_list_type arg)
  {
    msg_.camera_list = std::move(arg);
    return Init_MoraiSimConfig_gps_list(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimConfig msg_;
};

class Init_MoraiSimConfig_service_list
{
public:
  explicit Init_MoraiSimConfig_service_list(::morai_msgs::msg::MoraiSimConfig & msg)
  : msg_(msg)
  {}
  Init_MoraiSimConfig_camera_list service_list(::morai_msgs::msg::MoraiSimConfig::_service_list_type arg)
  {
    msg_.service_list = std::move(arg);
    return Init_MoraiSimConfig_camera_list(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimConfig msg_;
};

class Init_MoraiSimConfig_subscriber_list
{
public:
  explicit Init_MoraiSimConfig_subscriber_list(::morai_msgs::msg::MoraiSimConfig & msg)
  : msg_(msg)
  {}
  Init_MoraiSimConfig_service_list subscriber_list(::morai_msgs::msg::MoraiSimConfig::_subscriber_list_type arg)
  {
    msg_.subscriber_list = std::move(arg);
    return Init_MoraiSimConfig_service_list(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimConfig msg_;
};

class Init_MoraiSimConfig_publisher_list
{
public:
  explicit Init_MoraiSimConfig_publisher_list(::morai_msgs::msg::MoraiSimConfig & msg)
  : msg_(msg)
  {}
  Init_MoraiSimConfig_subscriber_list publisher_list(::morai_msgs::msg::MoraiSimConfig::_publisher_list_type arg)
  {
    msg_.publisher_list = std::move(arg);
    return Init_MoraiSimConfig_subscriber_list(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimConfig msg_;
};

class Init_MoraiSimConfig_sensor_config_file_name
{
public:
  Init_MoraiSimConfig_sensor_config_file_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoraiSimConfig_publisher_list sensor_config_file_name(::morai_msgs::msg::MoraiSimConfig::_sensor_config_file_name_type arg)
  {
    msg_.sensor_config_file_name = std::move(arg);
    return Init_MoraiSimConfig_publisher_list(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::MoraiSimConfig>()
{
  return morai_msgs::msg::builder::Init_MoraiSimConfig_sensor_config_file_name();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__BUILDER_HPP_
