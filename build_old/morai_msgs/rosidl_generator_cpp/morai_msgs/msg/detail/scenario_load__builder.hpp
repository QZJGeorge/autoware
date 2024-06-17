// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/ScenarioLoad.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SCENARIO_LOAD__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__SCENARIO_LOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/scenario_load__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_ScenarioLoad_set_pause
{
public:
  explicit Init_ScenarioLoad_set_pause(::morai_msgs::msg::ScenarioLoad & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::ScenarioLoad set_pause(::morai_msgs::msg::ScenarioLoad::_set_pause_type arg)
  {
    msg_.set_pause = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::ScenarioLoad msg_;
};

class Init_ScenarioLoad_load_obstacle_data
{
public:
  explicit Init_ScenarioLoad_load_obstacle_data(::morai_msgs::msg::ScenarioLoad & msg)
  : msg_(msg)
  {}
  Init_ScenarioLoad_set_pause load_obstacle_data(::morai_msgs::msg::ScenarioLoad::_load_obstacle_data_type arg)
  {
    msg_.load_obstacle_data = std::move(arg);
    return Init_ScenarioLoad_set_pause(msg_);
  }

private:
  ::morai_msgs::msg::ScenarioLoad msg_;
};

class Init_ScenarioLoad_load_pedestrian_data
{
public:
  explicit Init_ScenarioLoad_load_pedestrian_data(::morai_msgs::msg::ScenarioLoad & msg)
  : msg_(msg)
  {}
  Init_ScenarioLoad_load_obstacle_data load_pedestrian_data(::morai_msgs::msg::ScenarioLoad::_load_pedestrian_data_type arg)
  {
    msg_.load_pedestrian_data = std::move(arg);
    return Init_ScenarioLoad_load_obstacle_data(msg_);
  }

private:
  ::morai_msgs::msg::ScenarioLoad msg_;
};

class Init_ScenarioLoad_load_surrounding_vehicle_data
{
public:
  explicit Init_ScenarioLoad_load_surrounding_vehicle_data(::morai_msgs::msg::ScenarioLoad & msg)
  : msg_(msg)
  {}
  Init_ScenarioLoad_load_pedestrian_data load_surrounding_vehicle_data(::morai_msgs::msg::ScenarioLoad::_load_surrounding_vehicle_data_type arg)
  {
    msg_.load_surrounding_vehicle_data = std::move(arg);
    return Init_ScenarioLoad_load_pedestrian_data(msg_);
  }

private:
  ::morai_msgs::msg::ScenarioLoad msg_;
};

class Init_ScenarioLoad_load_ego_vehicle_data
{
public:
  explicit Init_ScenarioLoad_load_ego_vehicle_data(::morai_msgs::msg::ScenarioLoad & msg)
  : msg_(msg)
  {}
  Init_ScenarioLoad_load_surrounding_vehicle_data load_ego_vehicle_data(::morai_msgs::msg::ScenarioLoad::_load_ego_vehicle_data_type arg)
  {
    msg_.load_ego_vehicle_data = std::move(arg);
    return Init_ScenarioLoad_load_surrounding_vehicle_data(msg_);
  }

private:
  ::morai_msgs::msg::ScenarioLoad msg_;
};

class Init_ScenarioLoad_delete_all
{
public:
  explicit Init_ScenarioLoad_delete_all(::morai_msgs::msg::ScenarioLoad & msg)
  : msg_(msg)
  {}
  Init_ScenarioLoad_load_ego_vehicle_data delete_all(::morai_msgs::msg::ScenarioLoad::_delete_all_type arg)
  {
    msg_.delete_all = std::move(arg);
    return Init_ScenarioLoad_load_ego_vehicle_data(msg_);
  }

private:
  ::morai_msgs::msg::ScenarioLoad msg_;
};

class Init_ScenarioLoad_load_network_connection_data
{
public:
  explicit Init_ScenarioLoad_load_network_connection_data(::morai_msgs::msg::ScenarioLoad & msg)
  : msg_(msg)
  {}
  Init_ScenarioLoad_delete_all load_network_connection_data(::morai_msgs::msg::ScenarioLoad::_load_network_connection_data_type arg)
  {
    msg_.load_network_connection_data = std::move(arg);
    return Init_ScenarioLoad_delete_all(msg_);
  }

private:
  ::morai_msgs::msg::ScenarioLoad msg_;
};

class Init_ScenarioLoad_file_name
{
public:
  Init_ScenarioLoad_file_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScenarioLoad_load_network_connection_data file_name(::morai_msgs::msg::ScenarioLoad::_file_name_type arg)
  {
    msg_.file_name = std::move(arg);
    return Init_ScenarioLoad_load_network_connection_data(msg_);
  }

private:
  ::morai_msgs::msg::ScenarioLoad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::ScenarioLoad>()
{
  return morai_msgs::msg::builder::Init_ScenarioLoad_file_name();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SCENARIO_LOAD__BUILDER_HPP_
