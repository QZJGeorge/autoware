// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_external_api_msgs:srv/GetVersion.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__STRUCT_HPP_
#define AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_external_api_msgs__srv__GetVersion_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_external_api_msgs__srv__GetVersion_Request __declspec(deprecated)
#endif

namespace autoware_external_api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetVersion_Request_
{
  using Type = GetVersion_Request_<ContainerAllocator>;

  explicit GetVersion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetVersion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_external_api_msgs__srv__GetVersion_Request
    std::shared_ptr<autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_external_api_msgs__srv__GetVersion_Request
    std::shared_ptr<autoware_external_api_msgs::srv::GetVersion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetVersion_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetVersion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetVersion_Request_

// alias to use template instance with default allocator
using GetVersion_Request =
  autoware_external_api_msgs::srv::GetVersion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_external_api_msgs


// Include directives for member types
// Member 'status'
#include "tier4_external_api_msgs/msg/detail/response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_external_api_msgs__srv__GetVersion_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_external_api_msgs__srv__GetVersion_Response __declspec(deprecated)
#endif

namespace autoware_external_api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetVersion_Response_
{
  using Type = GetVersion_Response_<ContainerAllocator>;

  explicit GetVersion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = "";
    }
  }

  explicit GetVersion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = "";
    }
  }

  // field types and members
  using _status_type =
    tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_type version;

  // setters for named parameter idiom
  Type & set__status(
    const tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_external_api_msgs__srv__GetVersion_Response
    std::shared_ptr<autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_external_api_msgs__srv__GetVersion_Response
    std::shared_ptr<autoware_external_api_msgs::srv::GetVersion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetVersion_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetVersion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetVersion_Response_

// alias to use template instance with default allocator
using GetVersion_Response =
  autoware_external_api_msgs::srv::GetVersion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_external_api_msgs

namespace autoware_external_api_msgs
{

namespace srv
{

struct GetVersion
{
  using Request = autoware_external_api_msgs::srv::GetVersion_Request;
  using Response = autoware_external_api_msgs::srv::GetVersion_Response;
};

}  // namespace srv

}  // namespace autoware_external_api_msgs

#endif  // AUTOWARE_EXTERNAL_API_MSGS__SRV__DETAIL__GET_VERSION__STRUCT_HPP_
