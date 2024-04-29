// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosapi_msgs:srv/MessageDetails.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__MESSAGE_DETAILS__STRUCT_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__MESSAGE_DETAILS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosapi_msgs__srv__MessageDetails_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosapi_msgs__srv__MessageDetails_Request __declspec(deprecated)
#endif

namespace rosapi_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MessageDetails_Request_
{
  using Type = MessageDetails_Request_<ContainerAllocator>;

  explicit MessageDetails_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  explicit MessageDetails_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi_msgs__srv__MessageDetails_Request
    std::shared_ptr<rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi_msgs__srv__MessageDetails_Request
    std::shared_ptr<rosapi_msgs::srv::MessageDetails_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MessageDetails_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const MessageDetails_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MessageDetails_Request_

// alias to use template instance with default allocator
using MessageDetails_Request =
  rosapi_msgs::srv::MessageDetails_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi_msgs


// Include directives for member types
// Member 'typedefs'
#include "rosapi_msgs/msg/detail/type_def__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosapi_msgs__srv__MessageDetails_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosapi_msgs__srv__MessageDetails_Response __declspec(deprecated)
#endif

namespace rosapi_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MessageDetails_Response_
{
  using Type = MessageDetails_Response_<ContainerAllocator>;

  explicit MessageDetails_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MessageDetails_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _typedefs_type =
    std::vector<rosapi_msgs::msg::TypeDef_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rosapi_msgs::msg::TypeDef_<ContainerAllocator>>>;
  _typedefs_type typedefs;

  // setters for named parameter idiom
  Type & set__typedefs(
    const std::vector<rosapi_msgs::msg::TypeDef_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rosapi_msgs::msg::TypeDef_<ContainerAllocator>>> & _arg)
  {
    this->typedefs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi_msgs__srv__MessageDetails_Response
    std::shared_ptr<rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi_msgs__srv__MessageDetails_Response
    std::shared_ptr<rosapi_msgs::srv::MessageDetails_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MessageDetails_Response_ & other) const
  {
    if (this->typedefs != other.typedefs) {
      return false;
    }
    return true;
  }
  bool operator!=(const MessageDetails_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MessageDetails_Response_

// alias to use template instance with default allocator
using MessageDetails_Response =
  rosapi_msgs::srv::MessageDetails_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosapi_msgs
{

namespace srv
{

struct MessageDetails
{
  using Request = rosapi_msgs::srv::MessageDetails_Request;
  using Response = rosapi_msgs::srv::MessageDetails_Response;
};

}  // namespace srv

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__MESSAGE_DETAILS__STRUCT_HPP_
