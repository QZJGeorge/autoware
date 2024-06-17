// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/RadarTrack.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'velocity'
// Member 'acceleration'
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__RadarTrack __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__RadarTrack __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarTrack_
{
  using Type = RadarTrack_<ContainerAllocator>;

  explicit RadarTrack_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    velocity(_init),
    acceleration(_init),
    size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uuid = 0;
      this->classification = 0;
      this->amplitude = 0.0f;
    }
  }

  explicit RadarTrack_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    velocity(_alloc, _init),
    acceleration(_alloc, _init),
    size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uuid = 0;
      this->classification = 0;
      this->amplitude = 0.0f;
    }
  }

  // field types and members
  using _uuid_type =
    int8_t;
  _uuid_type uuid;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _size_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _size_type size;
  using _classification_type =
    uint16_t;
  _classification_type classification;
  using _position_covariance_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _position_covariance_type position_covariance;
  using _velocity_covariance_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _velocity_covariance_type velocity_covariance;
  using _acceleration_covariance_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _acceleration_covariance_type acceleration_covariance;
  using _size_covariance_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _size_covariance_type size_covariance;
  using _amplitude_type =
    float;
  _amplitude_type amplitude;

  // setters for named parameter idiom
  Type & set__uuid(
    const int8_t & _arg)
  {
    this->uuid = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__size(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__classification(
    const uint16_t & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__position_covariance(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->position_covariance = _arg;
    return *this;
  }
  Type & set__velocity_covariance(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->velocity_covariance = _arg;
    return *this;
  }
  Type & set__acceleration_covariance(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->acceleration_covariance = _arg;
    return *this;
  }
  Type & set__size_covariance(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->size_covariance = _arg;
    return *this;
  }
  Type & set__amplitude(
    const float & _arg)
  {
    this->amplitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::RadarTrack_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::RadarTrack_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::RadarTrack_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::RadarTrack_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::RadarTrack_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::RadarTrack_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::RadarTrack_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::RadarTrack_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::RadarTrack_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::RadarTrack_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__RadarTrack
    std::shared_ptr<morai_msgs::msg::RadarTrack_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__RadarTrack
    std::shared_ptr<morai_msgs::msg::RadarTrack_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarTrack_ & other) const
  {
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->position_covariance != other.position_covariance) {
      return false;
    }
    if (this->velocity_covariance != other.velocity_covariance) {
      return false;
    }
    if (this->acceleration_covariance != other.acceleration_covariance) {
      return false;
    }
    if (this->size_covariance != other.size_covariance) {
      return false;
    }
    if (this->amplitude != other.amplitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarTrack_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarTrack_

// alias to use template instance with default allocator
using RadarTrack =
  morai_msgs::msg::RadarTrack_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__STRUCT_HPP_
