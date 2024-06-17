// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/MoraiSimProcHandle.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__MoraiSimProcHandle __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__MoraiSimProcHandle __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoraiSimProcHandle_
{
  using Type = MoraiSimProcHandle_<ContainerAllocator>;

  explicit MoraiSimProcHandle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sim_process_status = 0;
      this->replay_option = 0;
      this->rosbag_file_name = "";
      this->replay_target_option = 0;
      this->replay_speed = 0l;
      this->start_time = 0l;
    }
  }

  explicit MoraiSimProcHandle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rosbag_file_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sim_process_status = 0;
      this->replay_option = 0;
      this->rosbag_file_name = "";
      this->replay_target_option = 0;
      this->replay_speed = 0l;
      this->start_time = 0l;
    }
  }

  // field types and members
  using _sim_process_status_type =
    uint8_t;
  _sim_process_status_type sim_process_status;
  using _replay_option_type =
    int16_t;
  _replay_option_type replay_option;
  using _rosbag_file_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rosbag_file_name_type rosbag_file_name;
  using _replay_target_option_type =
    int16_t;
  _replay_target_option_type replay_target_option;
  using _replay_speed_type =
    int32_t;
  _replay_speed_type replay_speed;
  using _start_time_type =
    int32_t;
  _start_time_type start_time;

  // setters for named parameter idiom
  Type & set__sim_process_status(
    const uint8_t & _arg)
  {
    this->sim_process_status = _arg;
    return *this;
  }
  Type & set__replay_option(
    const int16_t & _arg)
  {
    this->replay_option = _arg;
    return *this;
  }
  Type & set__rosbag_file_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rosbag_file_name = _arg;
    return *this;
  }
  Type & set__replay_target_option(
    const int16_t & _arg)
  {
    this->replay_target_option = _arg;
    return *this;
  }
  Type & set__replay_speed(
    const int32_t & _arg)
  {
    this->replay_speed = _arg;
    return *this;
  }
  Type & set__start_time(
    const int32_t & _arg)
  {
    this->start_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__MoraiSimProcHandle
    std::shared_ptr<morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__MoraiSimProcHandle
    std::shared_ptr<morai_msgs::msg::MoraiSimProcHandle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoraiSimProcHandle_ & other) const
  {
    if (this->sim_process_status != other.sim_process_status) {
      return false;
    }
    if (this->replay_option != other.replay_option) {
      return false;
    }
    if (this->rosbag_file_name != other.rosbag_file_name) {
      return false;
    }
    if (this->replay_target_option != other.replay_target_option) {
      return false;
    }
    if (this->replay_speed != other.replay_speed) {
      return false;
    }
    if (this->start_time != other.start_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoraiSimProcHandle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoraiSimProcHandle_

// alias to use template instance with default allocator
using MoraiSimProcHandle =
  morai_msgs::msg::MoraiSimProcHandle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_PROC_HANDLE__STRUCT_HPP_
