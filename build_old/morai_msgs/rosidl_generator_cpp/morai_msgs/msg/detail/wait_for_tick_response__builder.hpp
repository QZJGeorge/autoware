// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/WaitForTickResponse.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "morai_msgs/msg/detail/wait_for_tick_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_WaitForTickResponse_time
{
public:
  explicit Init_WaitForTickResponse_time(::morai_msgs::msg::WaitForTickResponse & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::WaitForTickResponse time(::morai_msgs::msg::WaitForTickResponse::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::WaitForTickResponse msg_;
};

class Init_WaitForTickResponse_vehicle_status
{
public:
  explicit Init_WaitForTickResponse_vehicle_status(::morai_msgs::msg::WaitForTickResponse & msg)
  : msg_(msg)
  {}
  Init_WaitForTickResponse_time vehicle_status(::morai_msgs::msg::WaitForTickResponse::_vehicle_status_type arg)
  {
    msg_.vehicle_status = std::move(arg);
    return Init_WaitForTickResponse_time(msg_);
  }

private:
  ::morai_msgs::msg::WaitForTickResponse msg_;
};

class Init_WaitForTickResponse_frame
{
public:
  explicit Init_WaitForTickResponse_frame(::morai_msgs::msg::WaitForTickResponse & msg)
  : msg_(msg)
  {}
  Init_WaitForTickResponse_vehicle_status frame(::morai_msgs::msg::WaitForTickResponse::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_WaitForTickResponse_vehicle_status(msg_);
  }

private:
  ::morai_msgs::msg::WaitForTickResponse msg_;
};

class Init_WaitForTickResponse_pause_status
{
public:
  explicit Init_WaitForTickResponse_pause_status(::morai_msgs::msg::WaitForTickResponse & msg)
  : msg_(msg)
  {}
  Init_WaitForTickResponse_frame pause_status(::morai_msgs::msg::WaitForTickResponse::_pause_status_type arg)
  {
    msg_.pause_status = std::move(arg);
    return Init_WaitForTickResponse_frame(msg_);
  }

private:
  ::morai_msgs::msg::WaitForTickResponse msg_;
};

class Init_WaitForTickResponse_tick_status
{
public:
  Init_WaitForTickResponse_tick_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaitForTickResponse_pause_status tick_status(::morai_msgs::msg::WaitForTickResponse::_tick_status_type arg)
  {
    msg_.tick_status = std::move(arg);
    return Init_WaitForTickResponse_pause_status(msg_);
  }

private:
  ::morai_msgs::msg::WaitForTickResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::WaitForTickResponse>()
{
  return morai_msgs::msg::builder::Init_WaitForTickResponse_tick_status();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__WAIT_FOR_TICK_RESPONSE__BUILDER_HPP_
