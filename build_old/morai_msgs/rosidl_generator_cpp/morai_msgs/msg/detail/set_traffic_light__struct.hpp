// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/SetTrafficLight.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__SetTrafficLight __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__SetTrafficLight __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetTrafficLight_
{
  using Type = SetTrafficLight_<ContainerAllocator>;

  explicit SetTrafficLight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_light_index = "";
      this->traffic_light_status = 0;
    }
  }

  explicit SetTrafficLight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : traffic_light_index(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_light_index = "";
      this->traffic_light_status = 0;
    }
  }

  // field types and members
  using _traffic_light_index_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _traffic_light_index_type traffic_light_index;
  using _traffic_light_status_type =
    int16_t;
  _traffic_light_status_type traffic_light_status;

  // setters for named parameter idiom
  Type & set__traffic_light_index(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->traffic_light_index = _arg;
    return *this;
  }
  Type & set__traffic_light_status(
    const int16_t & _arg)
  {
    this->traffic_light_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::SetTrafficLight_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::SetTrafficLight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::SetTrafficLight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::SetTrafficLight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SetTrafficLight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SetTrafficLight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SetTrafficLight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SetTrafficLight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::SetTrafficLight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::SetTrafficLight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__SetTrafficLight
    std::shared_ptr<morai_msgs::msg::SetTrafficLight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__SetTrafficLight
    std::shared_ptr<morai_msgs::msg::SetTrafficLight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTrafficLight_ & other) const
  {
    if (this->traffic_light_index != other.traffic_light_index) {
      return false;
    }
    if (this->traffic_light_status != other.traffic_light_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTrafficLight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTrafficLight_

// alias to use template instance with default allocator
using SetTrafficLight =
  morai_msgs::msg::SetTrafficLight_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SET_TRAFFIC_LIGHT__STRUCT_HPP_
