// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_map_msgs:msg/LaneletMapBin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__STRUCT_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__STRUCT_HPP_

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
# define DEPRECATED__autoware_map_msgs__msg__LaneletMapBin __attribute__((deprecated))
#else
# define DEPRECATED__autoware_map_msgs__msg__LaneletMapBin __declspec(deprecated)
#endif

namespace autoware_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneletMapBin_
{
  using Type = LaneletMapBin_<ContainerAllocator>;

  explicit LaneletMapBin_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version_map_format = "";
      this->version_map = "";
      this->name_map = "";
    }
  }

  explicit LaneletMapBin_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    version_map_format(_alloc),
    version_map(_alloc),
    name_map(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version_map_format = "";
      this->version_map = "";
      this->name_map = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _version_map_format_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_map_format_type version_map_format;
  using _version_map_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_map_type version_map;
  using _name_map_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_map_type name_map;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__version_map_format(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_map_format = _arg;
    return *this;
  }
  Type & set__version_map(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version_map = _arg;
    return *this;
  }
  Type & set__name_map(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name_map = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_map_msgs__msg__LaneletMapBin
    std::shared_ptr<autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_map_msgs__msg__LaneletMapBin
    std::shared_ptr<autoware_map_msgs::msg::LaneletMapBin_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneletMapBin_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->version_map_format != other.version_map_format) {
      return false;
    }
    if (this->version_map != other.version_map) {
      return false;
    }
    if (this->name_map != other.name_map) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneletMapBin_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneletMapBin_

// alias to use template instance with default allocator
using LaneletMapBin =
  autoware_map_msgs::msg::LaneletMapBin_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__STRUCT_HPP_
