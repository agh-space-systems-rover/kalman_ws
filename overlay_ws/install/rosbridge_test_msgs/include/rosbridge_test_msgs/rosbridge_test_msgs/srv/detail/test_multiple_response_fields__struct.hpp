// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_test_msgs:srv/TestMultipleResponseFields.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_RESPONSE_FIELDS__STRUCT_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_RESPONSE_FIELDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__srv__TestMultipleResponseFields_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__srv__TestMultipleResponseFields_Request __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TestMultipleResponseFields_Request_
{
  using Type = TestMultipleResponseFields_Request_<ContainerAllocator>;

  explicit TestMultipleResponseFields_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TestMultipleResponseFields_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestMultipleResponseFields_Request
    std::shared_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestMultipleResponseFields_Request
    std::shared_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMultipleResponseFields_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMultipleResponseFields_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMultipleResponseFields_Request_

// alias to use template instance with default allocator
using TestMultipleResponseFields_Request =
  rosbridge_test_msgs::srv::TestMultipleResponseFields_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosbridge_test_msgs


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__srv__TestMultipleResponseFields_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__srv__TestMultipleResponseFields_Response __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TestMultipleResponseFields_Response_
{
  using Type = TestMultipleResponseFields_Response_<ContainerAllocator>;

  explicit TestMultipleResponseFields_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->int_value = 0l;
      this->float_value = 0.0f;
      this->string = "";
      this->bool_value = false;
    }
  }

  explicit TestMultipleResponseFields_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->int_value = 0l;
      this->float_value = 0.0f;
      this->string = "";
      this->bool_value = false;
    }
  }

  // field types and members
  using _int_value_type =
    int32_t;
  _int_value_type int_value;
  using _float_value_type =
    float;
  _float_value_type float_value;
  using _string_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _string_type string;
  using _bool_value_type =
    bool;
  _bool_value_type bool_value;

  // setters for named parameter idiom
  Type & set__int_value(
    const int32_t & _arg)
  {
    this->int_value = _arg;
    return *this;
  }
  Type & set__float_value(
    const float & _arg)
  {
    this->float_value = _arg;
    return *this;
  }
  Type & set__string(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->string = _arg;
    return *this;
  }
  Type & set__bool_value(
    const bool & _arg)
  {
    this->bool_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestMultipleResponseFields_Response
    std::shared_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__srv__TestMultipleResponseFields_Response
    std::shared_ptr<rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMultipleResponseFields_Response_ & other) const
  {
    if (this->int_value != other.int_value) {
      return false;
    }
    if (this->float_value != other.float_value) {
      return false;
    }
    if (this->string != other.string) {
      return false;
    }
    if (this->bool_value != other.bool_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMultipleResponseFields_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMultipleResponseFields_Response_

// alias to use template instance with default allocator
using TestMultipleResponseFields_Response =
  rosbridge_test_msgs::srv::TestMultipleResponseFields_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosbridge_test_msgs

namespace rosbridge_test_msgs
{

namespace srv
{

struct TestMultipleResponseFields
{
  using Request = rosbridge_test_msgs::srv::TestMultipleResponseFields_Request;
  using Response = rosbridge_test_msgs::srv::TestMultipleResponseFields_Response;
};

}  // namespace srv

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_MULTIPLE_RESPONSE_FIELDS__STRUCT_HPP_
