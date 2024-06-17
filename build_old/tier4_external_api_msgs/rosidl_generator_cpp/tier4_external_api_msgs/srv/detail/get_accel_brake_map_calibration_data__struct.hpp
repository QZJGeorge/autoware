// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:srv/GetAccelBrakeMapCalibrationData.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAccelBrakeMapCalibrationData_Request_
{
  using Type = GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator>;

  explicit GetAccelBrakeMapCalibrationData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetAccelBrakeMapCalibrationData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request
    std::shared_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Request
    std::shared_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAccelBrakeMapCalibrationData_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAccelBrakeMapCalibrationData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAccelBrakeMapCalibrationData_Request_

// alias to use template instance with default allocator
using GetAccelBrakeMapCalibrationData_Request =
  tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_external_api_msgs


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAccelBrakeMapCalibrationData_Response_
{
  using Type = GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator>;

  explicit GetAccelBrakeMapCalibrationData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_map = "";
      this->brake_map = "";
    }
  }

  explicit GetAccelBrakeMapCalibrationData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accel_map(_alloc),
    brake_map(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_map = "";
      this->brake_map = "";
    }
  }

  // field types and members
  using _graph_image_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _graph_image_type graph_image;
  using _accel_map_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _accel_map_type accel_map;
  using _brake_map_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _brake_map_type brake_map;

  // setters for named parameter idiom
  Type & set__graph_image(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->graph_image = _arg;
    return *this;
  }
  Type & set__accel_map(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->accel_map = _arg;
    return *this;
  }
  Type & set__brake_map(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->brake_map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response
    std::shared_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__srv__GetAccelBrakeMapCalibrationData_Response
    std::shared_ptr<tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAccelBrakeMapCalibrationData_Response_ & other) const
  {
    if (this->graph_image != other.graph_image) {
      return false;
    }
    if (this->accel_map != other.accel_map) {
      return false;
    }
    if (this->brake_map != other.brake_map) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAccelBrakeMapCalibrationData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAccelBrakeMapCalibrationData_Response_

// alias to use template instance with default allocator
using GetAccelBrakeMapCalibrationData_Response =
  tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tier4_external_api_msgs

namespace tier4_external_api_msgs
{

namespace srv
{

struct GetAccelBrakeMapCalibrationData
{
  using Request = tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Request;
  using Response = tier4_external_api_msgs::srv::GetAccelBrakeMapCalibrationData_Response;
};

}  // namespace srv

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__GET_ACCEL_BRAKE_MAP_CALIBRATION_DATA__STRUCT_HPP_
