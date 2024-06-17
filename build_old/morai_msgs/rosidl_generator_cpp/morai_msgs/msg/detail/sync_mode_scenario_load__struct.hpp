// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/SyncModeScenarioLoad.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__SyncModeScenarioLoad __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__SyncModeScenarioLoad __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SyncModeScenarioLoad_
{
  using Type = SyncModeScenarioLoad_<ContainerAllocator>;

  explicit SyncModeScenarioLoad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = 0ull;
      this->file_name = "";
      this->load_network_connection_data = false;
      this->delete_all = false;
      this->load_ego_vehicle_data = false;
      this->load_surrounding_vehicle_data = false;
      this->load_pedestrian_data = false;
      this->load_obstacle_data = false;
      this->set_pause = false;
    }
  }

  explicit SyncModeScenarioLoad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = 0ull;
      this->file_name = "";
      this->load_network_connection_data = false;
      this->delete_all = false;
      this->load_ego_vehicle_data = false;
      this->load_surrounding_vehicle_data = false;
      this->load_pedestrian_data = false;
      this->load_obstacle_data = false;
      this->set_pause = false;
    }
  }

  // field types and members
  using _frame_type =
    uint64_t;
  _frame_type frame;
  using _file_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_name_type file_name;
  using _load_network_connection_data_type =
    bool;
  _load_network_connection_data_type load_network_connection_data;
  using _delete_all_type =
    bool;
  _delete_all_type delete_all;
  using _load_ego_vehicle_data_type =
    bool;
  _load_ego_vehicle_data_type load_ego_vehicle_data;
  using _load_surrounding_vehicle_data_type =
    bool;
  _load_surrounding_vehicle_data_type load_surrounding_vehicle_data;
  using _load_pedestrian_data_type =
    bool;
  _load_pedestrian_data_type load_pedestrian_data;
  using _load_obstacle_data_type =
    bool;
  _load_obstacle_data_type load_obstacle_data;
  using _set_pause_type =
    bool;
  _set_pause_type set_pause;

  // setters for named parameter idiom
  Type & set__frame(
    const uint64_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__file_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_name = _arg;
    return *this;
  }
  Type & set__load_network_connection_data(
    const bool & _arg)
  {
    this->load_network_connection_data = _arg;
    return *this;
  }
  Type & set__delete_all(
    const bool & _arg)
  {
    this->delete_all = _arg;
    return *this;
  }
  Type & set__load_ego_vehicle_data(
    const bool & _arg)
  {
    this->load_ego_vehicle_data = _arg;
    return *this;
  }
  Type & set__load_surrounding_vehicle_data(
    const bool & _arg)
  {
    this->load_surrounding_vehicle_data = _arg;
    return *this;
  }
  Type & set__load_pedestrian_data(
    const bool & _arg)
  {
    this->load_pedestrian_data = _arg;
    return *this;
  }
  Type & set__load_obstacle_data(
    const bool & _arg)
  {
    this->load_obstacle_data = _arg;
    return *this;
  }
  Type & set__set_pause(
    const bool & _arg)
  {
    this->set_pause = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__SyncModeScenarioLoad
    std::shared_ptr<morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__SyncModeScenarioLoad
    std::shared_ptr<morai_msgs::msg::SyncModeScenarioLoad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SyncModeScenarioLoad_ & other) const
  {
    if (this->frame != other.frame) {
      return false;
    }
    if (this->file_name != other.file_name) {
      return false;
    }
    if (this->load_network_connection_data != other.load_network_connection_data) {
      return false;
    }
    if (this->delete_all != other.delete_all) {
      return false;
    }
    if (this->load_ego_vehicle_data != other.load_ego_vehicle_data) {
      return false;
    }
    if (this->load_surrounding_vehicle_data != other.load_surrounding_vehicle_data) {
      return false;
    }
    if (this->load_pedestrian_data != other.load_pedestrian_data) {
      return false;
    }
    if (this->load_obstacle_data != other.load_obstacle_data) {
      return false;
    }
    if (this->set_pause != other.set_pause) {
      return false;
    }
    return true;
  }
  bool operator!=(const SyncModeScenarioLoad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SyncModeScenarioLoad_

// alias to use template instance with default allocator
using SyncModeScenarioLoad =
  morai_msgs::msg::SyncModeScenarioLoad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_SCENARIO_LOAD__STRUCT_HPP_
