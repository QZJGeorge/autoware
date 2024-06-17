// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__TrafficLight __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__TrafficLight __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLight_
{
  using Type = TrafficLight_<ContainerAllocator>;

  explicit TrafficLight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->light = 0;
      this->num_of_light = 0;
    }
  }

  explicit TrafficLight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->light = 0;
      this->num_of_light = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _light_type =
    int16_t;
  _light_type light;
  using _num_of_light_type =
    int16_t;
  _num_of_light_type num_of_light;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__light(
    const int16_t & _arg)
  {
    this->light = _arg;
    return *this;
  }
  Type & set__num_of_light(
    const int16_t & _arg)
  {
    this->num_of_light = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::TrafficLight_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::TrafficLight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::TrafficLight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::TrafficLight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::TrafficLight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::TrafficLight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::TrafficLight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::TrafficLight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::TrafficLight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::TrafficLight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__TrafficLight
    std::shared_ptr<morai_msgs::msg::TrafficLight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__TrafficLight
    std::shared_ptr<morai_msgs::msg::TrafficLight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLight_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->light != other.light) {
      return false;
    }
    if (this->num_of_light != other.num_of_light) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficLight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLight_

// alias to use template instance with default allocator
using TrafficLight =
  morai_msgs::msg::TrafficLight_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_
