// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_control_msgs:msg/IsStopped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__IS_STOPPED__STRUCT_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__IS_STOPPED__STRUCT_HPP_

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
# define DEPRECATED__tier4_control_msgs__msg__IsStopped __attribute__((deprecated))
#else
# define DEPRECATED__tier4_control_msgs__msg__IsStopped __declspec(deprecated)
#endif

namespace tier4_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IsStopped_
{
  using Type = IsStopped_<ContainerAllocator>;

  explicit IsStopped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit IsStopped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _data_type =
    bool;
  _data_type data;
  using _requested_sources_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _requested_sources_type requested_sources;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__requested_sources(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->requested_sources = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_control_msgs::msg::IsStopped_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_control_msgs::msg::IsStopped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_control_msgs::msg::IsStopped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_control_msgs::msg::IsStopped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::msg::IsStopped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::msg::IsStopped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_control_msgs::msg::IsStopped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_control_msgs::msg::IsStopped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_control_msgs::msg::IsStopped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_control_msgs::msg::IsStopped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_control_msgs__msg__IsStopped
    std::shared_ptr<tier4_control_msgs::msg::IsStopped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_control_msgs__msg__IsStopped
    std::shared_ptr<tier4_control_msgs::msg::IsStopped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IsStopped_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->requested_sources != other.requested_sources) {
      return false;
    }
    return true;
  }
  bool operator!=(const IsStopped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IsStopped_

// alias to use template instance with default allocator
using IsStopped =
  tier4_control_msgs::msg::IsStopped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_control_msgs

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__IS_STOPPED__STRUCT_HPP_
