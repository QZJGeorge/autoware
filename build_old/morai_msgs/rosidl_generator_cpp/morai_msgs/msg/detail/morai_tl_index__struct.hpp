// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/MoraiTLIndex.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__MoraiTLIndex __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__MoraiTLIndex __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoraiTLIndex_
{
  using Type = MoraiTLIndex_<ContainerAllocator>;

  explicit MoraiTLIndex_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = "";
    }
  }

  explicit MoraiTLIndex_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : idx(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = "";
    }
  }

  // field types and members
  using _idx_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _idx_type idx;

  // setters for named parameter idiom
  Type & set__idx(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->idx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::MoraiTLIndex_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::MoraiTLIndex_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::MoraiTLIndex_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::MoraiTLIndex_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MoraiTLIndex_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MoraiTLIndex_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::MoraiTLIndex_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::MoraiTLIndex_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::MoraiTLIndex_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::MoraiTLIndex_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__MoraiTLIndex
    std::shared_ptr<morai_msgs::msg::MoraiTLIndex_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__MoraiTLIndex
    std::shared_ptr<morai_msgs::msg::MoraiTLIndex_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoraiTLIndex_ & other) const
  {
    if (this->idx != other.idx) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoraiTLIndex_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoraiTLIndex_

// alias to use template instance with default allocator
using MoraiTLIndex =
  morai_msgs::msg::MoraiTLIndex_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__MORAI_TL_INDEX__STRUCT_HPP_
