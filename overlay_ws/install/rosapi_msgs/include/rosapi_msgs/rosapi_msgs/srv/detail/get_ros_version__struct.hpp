// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosapi_msgs:srv/GetROSVersion.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__GET_ROS_VERSION__STRUCT_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__GET_ROS_VERSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosapi_msgs__srv__GetROSVersion_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosapi_msgs__srv__GetROSVersion_Request __declspec(deprecated)
#endif

namespace rosapi_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetROSVersion_Request_
{
  using Type = GetROSVersion_Request_<ContainerAllocator>;

  explicit GetROSVersion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetROSVersion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi_msgs__srv__GetROSVersion_Request
    std::shared_ptr<rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi_msgs__srv__GetROSVersion_Request
    std::shared_ptr<rosapi_msgs::srv::GetROSVersion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetROSVersion_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetROSVersion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetROSVersion_Request_

// alias to use template instance with default allocator
using GetROSVersion_Request =
  rosapi_msgs::srv::GetROSVersion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi_msgs


#ifndef _WIN32
# define DEPRECATED__rosapi_msgs__srv__GetROSVersion_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosapi_msgs__srv__GetROSVersion_Response __declspec(deprecated)
#endif

namespace rosapi_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetROSVersion_Response_
{
  using Type = GetROSVersion_Response_<ContainerAllocator>;

  explicit GetROSVersion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->distro = "";
    }
  }

  explicit GetROSVersion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : distro(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->distro = "";
    }
  }

  // field types and members
  using _version_type =
    uint8_t;
  _version_type version;
  using _distro_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _distro_type distro;

  // setters for named parameter idiom
  Type & set__version(
    const uint8_t & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__distro(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->distro = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi_msgs__srv__GetROSVersion_Response
    std::shared_ptr<rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi_msgs__srv__GetROSVersion_Response
    std::shared_ptr<rosapi_msgs::srv::GetROSVersion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetROSVersion_Response_ & other) const
  {
    if (this->version != other.version) {
      return false;
    }
    if (this->distro != other.distro) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetROSVersion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetROSVersion_Response_

// alias to use template instance with default allocator
using GetROSVersion_Response =
  rosapi_msgs::srv::GetROSVersion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosapi_msgs
{

namespace srv
{

struct GetROSVersion
{
  using Request = rosapi_msgs::srv::GetROSVersion_Request;
  using Response = rosapi_msgs::srv::GetROSVersion_Response;
};

}  // namespace srv

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__GET_ROS_VERSION__STRUCT_HPP_
