// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/SaveSensorData.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__SaveSensorData __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__SaveSensorData __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveSensorData_
{
  using Type = SaveSensorData_<ContainerAllocator>;

  explicit SaveSensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_custom_file_name = false;
      this->custom_file_name = "";
      this->file_dir = "";
    }
  }

  explicit SaveSensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : custom_file_name(_alloc),
    file_dir(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_custom_file_name = false;
      this->custom_file_name = "";
      this->file_dir = "";
    }
  }

  // field types and members
  using _is_custom_file_name_type =
    bool;
  _is_custom_file_name_type is_custom_file_name;
  using _custom_file_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _custom_file_name_type custom_file_name;
  using _file_dir_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_dir_type file_dir;

  // setters for named parameter idiom
  Type & set__is_custom_file_name(
    const bool & _arg)
  {
    this->is_custom_file_name = _arg;
    return *this;
  }
  Type & set__custom_file_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->custom_file_name = _arg;
    return *this;
  }
  Type & set__file_dir(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_dir = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::SaveSensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::SaveSensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::SaveSensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::SaveSensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SaveSensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SaveSensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SaveSensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SaveSensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::SaveSensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::SaveSensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__SaveSensorData
    std::shared_ptr<morai_msgs::msg::SaveSensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__SaveSensorData
    std::shared_ptr<morai_msgs::msg::SaveSensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveSensorData_ & other) const
  {
    if (this->is_custom_file_name != other.is_custom_file_name) {
      return false;
    }
    if (this->custom_file_name != other.custom_file_name) {
      return false;
    }
    if (this->file_dir != other.file_dir) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveSensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveSensorData_

// alias to use template instance with default allocator
using SaveSensorData =
  morai_msgs::msg::SaveSensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SAVE_SENSOR_DATA__STRUCT_HPP_
