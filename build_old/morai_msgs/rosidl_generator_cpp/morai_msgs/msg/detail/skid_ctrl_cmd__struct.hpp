// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/SkidCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'skid_model_ctrl'
#include "morai_msgs/msg/detail/skid_model__struct.hpp"
// Member 'velocity_ctrl'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__SkidCtrlCmd __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__SkidCtrlCmd __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkidCtrlCmd_
{
  using Type = SkidCtrlCmd_<ContainerAllocator>;

  explicit SkidCtrlCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : skid_model_ctrl(_init),
    velocity_ctrl(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_type = 0l;
    }
  }

  explicit SkidCtrlCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : skid_model_ctrl(_alloc, _init),
    velocity_ctrl(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_type = 0l;
    }
  }

  // field types and members
  using _cmd_type_type =
    int32_t;
  _cmd_type_type cmd_type;
  using _skid_model_ctrl_type =
    morai_msgs::msg::SkidModel_<ContainerAllocator>;
  _skid_model_ctrl_type skid_model_ctrl;
  using _velocity_ctrl_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_ctrl_type velocity_ctrl;

  // setters for named parameter idiom
  Type & set__cmd_type(
    const int32_t & _arg)
  {
    this->cmd_type = _arg;
    return *this;
  }
  Type & set__skid_model_ctrl(
    const morai_msgs::msg::SkidModel_<ContainerAllocator> & _arg)
  {
    this->skid_model_ctrl = _arg;
    return *this;
  }
  Type & set__velocity_ctrl(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_ctrl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__SkidCtrlCmd
    std::shared_ptr<morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__SkidCtrlCmd
    std::shared_ptr<morai_msgs::msg::SkidCtrlCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkidCtrlCmd_ & other) const
  {
    if (this->cmd_type != other.cmd_type) {
      return false;
    }
    if (this->skid_model_ctrl != other.skid_model_ctrl) {
      return false;
    }
    if (this->velocity_ctrl != other.velocity_ctrl) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkidCtrlCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkidCtrlCmd_

// alias to use template instance with default allocator
using SkidCtrlCmd =
  morai_msgs::msg::SkidCtrlCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SKID_CTRL_CMD__STRUCT_HPP_
