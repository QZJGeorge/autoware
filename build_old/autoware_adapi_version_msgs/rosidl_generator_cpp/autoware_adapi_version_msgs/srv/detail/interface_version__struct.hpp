// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_version_msgs:srv/InterfaceVersion.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__STRUCT_HPP_
#define AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_adapi_version_msgs__srv__InterfaceVersion_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_version_msgs__srv__InterfaceVersion_Request __declspec(deprecated)
#endif

namespace autoware_adapi_version_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InterfaceVersion_Request_
{
  using Type = InterfaceVersion_Request_<ContainerAllocator>;

  explicit InterfaceVersion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit InterfaceVersion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_version_msgs__srv__InterfaceVersion_Request
    std::shared_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_version_msgs__srv__InterfaceVersion_Request
    std::shared_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterfaceVersion_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterfaceVersion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterfaceVersion_Request_

// alias to use template instance with default allocator
using InterfaceVersion_Request =
  autoware_adapi_version_msgs::srv::InterfaceVersion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_adapi_version_msgs


#ifndef _WIN32
# define DEPRECATED__autoware_adapi_version_msgs__srv__InterfaceVersion_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_version_msgs__srv__InterfaceVersion_Response __declspec(deprecated)
#endif

namespace autoware_adapi_version_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InterfaceVersion_Response_
{
  using Type = InterfaceVersion_Response_<ContainerAllocator>;

  explicit InterfaceVersion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->major = 0;
      this->minor = 0;
      this->patch = 0;
    }
  }

  explicit InterfaceVersion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->major = 0;
      this->minor = 0;
      this->patch = 0;
    }
  }

  // field types and members
  using _major_type =
    uint16_t;
  _major_type major;
  using _minor_type =
    uint16_t;
  _minor_type minor;
  using _patch_type =
    uint16_t;
  _patch_type patch;

  // setters for named parameter idiom
  Type & set__major(
    const uint16_t & _arg)
  {
    this->major = _arg;
    return *this;
  }
  Type & set__minor(
    const uint16_t & _arg)
  {
    this->minor = _arg;
    return *this;
  }
  Type & set__patch(
    const uint16_t & _arg)
  {
    this->patch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_version_msgs__srv__InterfaceVersion_Response
    std::shared_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_version_msgs__srv__InterfaceVersion_Response
    std::shared_ptr<autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterfaceVersion_Response_ & other) const
  {
    if (this->major != other.major) {
      return false;
    }
    if (this->minor != other.minor) {
      return false;
    }
    if (this->patch != other.patch) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterfaceVersion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterfaceVersion_Response_

// alias to use template instance with default allocator
using InterfaceVersion_Response =
  autoware_adapi_version_msgs::srv::InterfaceVersion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_adapi_version_msgs

namespace autoware_adapi_version_msgs
{

namespace srv
{

struct InterfaceVersion
{
  using Request = autoware_adapi_version_msgs::srv::InterfaceVersion_Request;
  using Response = autoware_adapi_version_msgs::srv::InterfaceVersion_Response;
};

}  // namespace srv

}  // namespace autoware_adapi_version_msgs

#endif  // AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__STRUCT_HPP_
