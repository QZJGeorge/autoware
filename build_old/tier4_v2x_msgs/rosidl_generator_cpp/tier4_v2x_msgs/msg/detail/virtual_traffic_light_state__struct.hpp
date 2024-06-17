// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE__STRUCT_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_v2x_msgs__msg__VirtualTrafficLightState __attribute__((deprecated))
#else
# define DEPRECATED__tier4_v2x_msgs__msg__VirtualTrafficLightState __declspec(deprecated)
#endif

namespace tier4_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualTrafficLightState_
{
  using Type = VirtualTrafficLightState_<ContainerAllocator>;

  explicit VirtualTrafficLightState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->id = "";
      this->approval = false;
      this->is_finalized = false;
    }
  }

  explicit VirtualTrafficLightState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    type(_alloc),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->id = "";
      this->approval = false;
      this->is_finalized = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _approval_type =
    bool;
  _approval_type approval;
  using _is_finalized_type =
    bool;
  _is_finalized_type is_finalized;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__approval(
    const bool & _arg)
  {
    this->approval = _arg;
    return *this;
  }
  Type & set__is_finalized(
    const bool & _arg)
  {
    this->is_finalized = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_v2x_msgs__msg__VirtualTrafficLightState
    std::shared_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_v2x_msgs__msg__VirtualTrafficLightState
    std::shared_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualTrafficLightState_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->approval != other.approval) {
      return false;
    }
    if (this->is_finalized != other.is_finalized) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualTrafficLightState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualTrafficLightState_

// alias to use template instance with default allocator
using VirtualTrafficLightState =
  tier4_v2x_msgs::msg::VirtualTrafficLightState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_v2x_msgs

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE__STRUCT_HPP_
