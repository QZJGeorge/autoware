// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/EventInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__EVENT_INFO__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__EVENT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lamps'
#include "morai_msgs/msg/detail/lamps__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__EventInfo __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__EventInfo __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventInfo_
{
  using Type = EventInfo_<ContainerAllocator>;

  explicit EventInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lamps(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->option = 0;
      this->ctrl_mode = 0l;
      this->gear = 0l;
      this->set_pause = false;
    }
  }

  explicit EventInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lamps(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->option = 0;
      this->ctrl_mode = 0l;
      this->gear = 0l;
      this->set_pause = false;
    }
  }

  // field types and members
  using _option_type =
    int8_t;
  _option_type option;
  using _ctrl_mode_type =
    int32_t;
  _ctrl_mode_type ctrl_mode;
  using _gear_type =
    int32_t;
  _gear_type gear;
  using _lamps_type =
    morai_msgs::msg::Lamps_<ContainerAllocator>;
  _lamps_type lamps;
  using _set_pause_type =
    bool;
  _set_pause_type set_pause;

  // setters for named parameter idiom
  Type & set__option(
    const int8_t & _arg)
  {
    this->option = _arg;
    return *this;
  }
  Type & set__ctrl_mode(
    const int32_t & _arg)
  {
    this->ctrl_mode = _arg;
    return *this;
  }
  Type & set__gear(
    const int32_t & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__lamps(
    const morai_msgs::msg::Lamps_<ContainerAllocator> & _arg)
  {
    this->lamps = _arg;
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
    morai_msgs::msg::EventInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::EventInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::EventInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::EventInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::EventInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::EventInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::EventInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::EventInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::EventInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::EventInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__EventInfo
    std::shared_ptr<morai_msgs::msg::EventInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__EventInfo
    std::shared_ptr<morai_msgs::msg::EventInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventInfo_ & other) const
  {
    if (this->option != other.option) {
      return false;
    }
    if (this->ctrl_mode != other.ctrl_mode) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->lamps != other.lamps) {
      return false;
    }
    if (this->set_pause != other.set_pause) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventInfo_

// alias to use template instance with default allocator
using EventInfo =
  morai_msgs::msg::EventInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__EVENT_INFO__STRUCT_HPP_
