// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/MoraiSimConfig.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__MoraiSimConfig __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__MoraiSimConfig __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoraiSimConfig_
{
  using Type = MoraiSimConfig_<ContainerAllocator>;

  explicit MoraiSimConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_config_file_name = "";
      this->publisher_list = "";
      this->subscriber_list = "";
      this->service_list = "";
      this->camera_list = "";
      this->gps_list = "";
      this->imu_list = "";
      this->lidar_list = "";
      this->radar_list = "";
    }
  }

  explicit MoraiSimConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_config_file_name(_alloc),
    publisher_list(_alloc),
    subscriber_list(_alloc),
    service_list(_alloc),
    camera_list(_alloc),
    gps_list(_alloc),
    imu_list(_alloc),
    lidar_list(_alloc),
    radar_list(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_config_file_name = "";
      this->publisher_list = "";
      this->subscriber_list = "";
      this->service_list = "";
      this->camera_list = "";
      this->gps_list = "";
      this->imu_list = "";
      this->lidar_list = "";
      this->radar_list = "";
    }
  }

  // field types and members
  using _sensor_config_file_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sensor_config_file_name_type sensor_config_file_name;
  using _publisher_list_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _publisher_list_type publisher_list;
  using _subscriber_list_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _subscriber_list_type subscriber_list;
  using _service_list_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_list_type service_list;
  using _camera_list_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_list_type camera_list;
  using _gps_list_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gps_list_type gps_list;
  using _imu_list_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _imu_list_type imu_list;
  using _lidar_list_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lidar_list_type lidar_list;
  using _radar_list_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _radar_list_type radar_list;

  // setters for named parameter idiom
  Type & set__sensor_config_file_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sensor_config_file_name = _arg;
    return *this;
  }
  Type & set__publisher_list(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->publisher_list = _arg;
    return *this;
  }
  Type & set__subscriber_list(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->subscriber_list = _arg;
    return *this;
  }
  Type & set__service_list(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_list = _arg;
    return *this;
  }
  Type & set__camera_list(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_list = _arg;
    return *this;
  }
  Type & set__gps_list(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gps_list = _arg;
    return *this;
  }
  Type & set__imu_list(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->imu_list = _arg;
    return *this;
  }
  Type & set__lidar_list(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lidar_list = _arg;
    return *this;
  }
  Type & set__radar_list(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->radar_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::MoraiSimConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::MoraiSimConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::MoraiSimConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::MoraiSimConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MoraiSimConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MoraiSimConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MoraiSimConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MoraiSimConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::MoraiSimConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::MoraiSimConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__MoraiSimConfig
    std::shared_ptr<morai_msgs::msg::MoraiSimConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__MoraiSimConfig
    std::shared_ptr<morai_msgs::msg::MoraiSimConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoraiSimConfig_ & other) const
  {
    if (this->sensor_config_file_name != other.sensor_config_file_name) {
      return false;
    }
    if (this->publisher_list != other.publisher_list) {
      return false;
    }
    if (this->subscriber_list != other.subscriber_list) {
      return false;
    }
    if (this->service_list != other.service_list) {
      return false;
    }
    if (this->camera_list != other.camera_list) {
      return false;
    }
    if (this->gps_list != other.gps_list) {
      return false;
    }
    if (this->imu_list != other.imu_list) {
      return false;
    }
    if (this->lidar_list != other.lidar_list) {
      return false;
    }
    if (this->radar_list != other.radar_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoraiSimConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoraiSimConfig_

// alias to use template instance with default allocator
using MoraiSimConfig =
  morai_msgs::msg::MoraiSimConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_SIM_CONFIG__STRUCT_HPP_
