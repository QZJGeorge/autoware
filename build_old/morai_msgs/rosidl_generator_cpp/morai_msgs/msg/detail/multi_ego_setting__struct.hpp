// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/MultiEgoSetting.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__MultiEgoSetting __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__MultiEgoSetting __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiEgoSetting_
{
  using Type = MultiEgoSetting_<ContainerAllocator>;

  explicit MultiEgoSetting_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number_of_ego_vehicle = 0l;
      this->camera_index = 0l;
    }
  }

  explicit MultiEgoSetting_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number_of_ego_vehicle = 0l;
      this->camera_index = 0l;
    }
  }

  // field types and members
  using _number_of_ego_vehicle_type =
    int32_t;
  _number_of_ego_vehicle_type number_of_ego_vehicle;
  using _camera_index_type =
    int32_t;
  _camera_index_type camera_index;
  using _ego_index_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _ego_index_type ego_index;
  using _global_position_x_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _global_position_x_type global_position_x;
  using _global_position_y_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _global_position_y_type global_position_y;
  using _global_position_z_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _global_position_z_type global_position_z;
  using _global_roll_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _global_roll_type global_roll;
  using _global_pitch_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _global_pitch_type global_pitch;
  using _global_yaw_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _global_yaw_type global_yaw;
  using _velocity_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _velocity_type velocity;
  using _gear_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _gear_type gear;
  using _ctrl_mode_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _ctrl_mode_type ctrl_mode;

  // setters for named parameter idiom
  Type & set__number_of_ego_vehicle(
    const int32_t & _arg)
  {
    this->number_of_ego_vehicle = _arg;
    return *this;
  }
  Type & set__camera_index(
    const int32_t & _arg)
  {
    this->camera_index = _arg;
    return *this;
  }
  Type & set__ego_index(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->ego_index = _arg;
    return *this;
  }
  Type & set__global_position_x(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->global_position_x = _arg;
    return *this;
  }
  Type & set__global_position_y(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->global_position_y = _arg;
    return *this;
  }
  Type & set__global_position_z(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->global_position_z = _arg;
    return *this;
  }
  Type & set__global_roll(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->global_roll = _arg;
    return *this;
  }
  Type & set__global_pitch(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->global_pitch = _arg;
    return *this;
  }
  Type & set__global_yaw(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->global_yaw = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__gear(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__ctrl_mode(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->ctrl_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::MultiEgoSetting_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::MultiEgoSetting_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::MultiEgoSetting_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::MultiEgoSetting_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MultiEgoSetting_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MultiEgoSetting_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MultiEgoSetting_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MultiEgoSetting_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::MultiEgoSetting_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::MultiEgoSetting_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__MultiEgoSetting
    std::shared_ptr<morai_msgs::msg::MultiEgoSetting_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__MultiEgoSetting
    std::shared_ptr<morai_msgs::msg::MultiEgoSetting_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiEgoSetting_ & other) const
  {
    if (this->number_of_ego_vehicle != other.number_of_ego_vehicle) {
      return false;
    }
    if (this->camera_index != other.camera_index) {
      return false;
    }
    if (this->ego_index != other.ego_index) {
      return false;
    }
    if (this->global_position_x != other.global_position_x) {
      return false;
    }
    if (this->global_position_y != other.global_position_y) {
      return false;
    }
    if (this->global_position_z != other.global_position_z) {
      return false;
    }
    if (this->global_roll != other.global_roll) {
      return false;
    }
    if (this->global_pitch != other.global_pitch) {
      return false;
    }
    if (this->global_yaw != other.global_yaw) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->ctrl_mode != other.ctrl_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiEgoSetting_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiEgoSetting_

// alias to use template instance with default allocator
using MultiEgoSetting =
  morai_msgs::msg::MultiEgoSetting_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MULTI_EGO_SETTING__STRUCT_HPP_
