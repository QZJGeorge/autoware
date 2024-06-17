// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/MoraiSimProcHandle.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/morai_sim_proc_handle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_MoraiSimProcHandle_start_time
{
public:
  explicit Init_MoraiSimProcHandle_start_time(::morai_msgs::msg::MoraiSimProcHandle & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::MoraiSimProcHandle start_time(::morai_msgs::msg::MoraiSimProcHandle::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcHandle msg_;
};

class Init_MoraiSimProcHandle_replay_speed
{
public:
  explicit Init_MoraiSimProcHandle_replay_speed(::morai_msgs::msg::MoraiSimProcHandle & msg)
  : msg_(msg)
  {}
  Init_MoraiSimProcHandle_start_time replay_speed(::morai_msgs::msg::MoraiSimProcHandle::_replay_speed_type arg)
  {
    msg_.replay_speed = std::move(arg);
    return Init_MoraiSimProcHandle_start_time(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcHandle msg_;
};

class Init_MoraiSimProcHandle_replay_target_option
{
public:
  explicit Init_MoraiSimProcHandle_replay_target_option(::morai_msgs::msg::MoraiSimProcHandle & msg)
  : msg_(msg)
  {}
  Init_MoraiSimProcHandle_replay_speed replay_target_option(::morai_msgs::msg::MoraiSimProcHandle::_replay_target_option_type arg)
  {
    msg_.replay_target_option = std::move(arg);
    return Init_MoraiSimProcHandle_replay_speed(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcHandle msg_;
};

class Init_MoraiSimProcHandle_rosbag_file_name
{
public:
  explicit Init_MoraiSimProcHandle_rosbag_file_name(::morai_msgs::msg::MoraiSimProcHandle & msg)
  : msg_(msg)
  {}
  Init_MoraiSimProcHandle_replay_target_option rosbag_file_name(::morai_msgs::msg::MoraiSimProcHandle::_rosbag_file_name_type arg)
  {
    msg_.rosbag_file_name = std::move(arg);
    return Init_MoraiSimProcHandle_replay_target_option(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcHandle msg_;
};

class Init_MoraiSimProcHandle_replay_option
{
public:
  explicit Init_MoraiSimProcHandle_replay_option(::morai_msgs::msg::MoraiSimProcHandle & msg)
  : msg_(msg)
  {}
  Init_MoraiSimProcHandle_rosbag_file_name replay_option(::morai_msgs::msg::MoraiSimProcHandle::_replay_option_type arg)
  {
    msg_.replay_option = std::move(arg);
    return Init_MoraiSimProcHandle_rosbag_file_name(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcHandle msg_;
};

class Init_MoraiSimProcHandle_sim_process_status
{
public:
  Init_MoraiSimProcHandle_sim_process_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoraiSimProcHandle_replay_option sim_process_status(::morai_msgs::msg::MoraiSimProcHandle::_sim_process_status_type arg)
  {
    msg_.sim_process_status = std::move(arg);
    return Init_MoraiSimProcHandle_replay_option(msg_);
  }

private:
  ::morai_msgs::msg::MoraiSimProcHandle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::MoraiSimProcHandle>()
{
  return morai_msgs::msg::builder::Init_MoraiSimProcHandle_sim_process_status();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__BUILDER_HPP_
