// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/CooperationCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'cooperator'
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_decision__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__CooperationCommand __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__CooperationCommand __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CooperationCommand_
{
  using Type = CooperationCommand_<ContainerAllocator>;

  explicit CooperationCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uuid(_init),
    cooperator(_init)
  {
    (void)_init;
  }

  explicit CooperationCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uuid(_alloc, _init),
    cooperator(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _uuid_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _uuid_type uuid;
  using _cooperator_type =
    autoware_adapi_v1_msgs::msg::CooperationDecision_<ContainerAllocator>;
  _cooperator_type cooperator;

  // setters for named parameter idiom
  Type & set__uuid(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->uuid = _arg;
    return *this;
  }
  Type & set__cooperator(
    const autoware_adapi_v1_msgs::msg::CooperationDecision_<ContainerAllocator> & _arg)
  {
    this->cooperator = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__CooperationCommand
    std::shared_ptr<autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__CooperationCommand
    std::shared_ptr<autoware_adapi_v1_msgs::msg::CooperationCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CooperationCommand_ & other) const
  {
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->cooperator != other.cooperator) {
      return false;
    }
    return true;
  }
  bool operator!=(const CooperationCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CooperationCommand_

// alias to use template instance with default allocator
using CooperationCommand =
  autoware_adapi_v1_msgs::msg::CooperationCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__STRUCT_HPP_
