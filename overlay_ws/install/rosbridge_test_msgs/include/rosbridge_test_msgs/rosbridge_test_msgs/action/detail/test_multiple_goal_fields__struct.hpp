// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbridge_test_msgs:action/TestMultipleGoalFields.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_MULTIPLE_GOAL_FIELDS__STRUCT_HPP_
#define ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_MULTIPLE_GOAL_FIELDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Goal __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Goal __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestMultipleGoalFields_Goal_
{
  using Type = TestMultipleGoalFields_Goal_<ContainerAllocator>;

  explicit TestMultipleGoalFields_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit TestMultipleGoalFields_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Goal
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Goal
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMultipleGoalFields_Goal_ & other) const
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
  bool operator!=(const TestMultipleGoalFields_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMultipleGoalFields_Goal_

// alias to use template instance with default allocator
using TestMultipleGoalFields_Goal =
  rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rosbridge_test_msgs


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Result __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Result __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestMultipleGoalFields_Result_
{
  using Type = TestMultipleGoalFields_Result_<ContainerAllocator>;

  explicit TestMultipleGoalFields_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TestMultipleGoalFields_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Result
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Result
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMultipleGoalFields_Result_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMultipleGoalFields_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMultipleGoalFields_Result_

// alias to use template instance with default allocator
using TestMultipleGoalFields_Result =
  rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rosbridge_test_msgs


#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Feedback __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestMultipleGoalFields_Feedback_
{
  using Type = TestMultipleGoalFields_Feedback_<ContainerAllocator>;

  explicit TestMultipleGoalFields_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TestMultipleGoalFields_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Feedback
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_Feedback
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMultipleGoalFields_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMultipleGoalFields_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMultipleGoalFields_Feedback_

// alias to use template instance with default allocator
using TestMultipleGoalFields_Feedback =
  rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rosbridge_test_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "rosbridge_test_msgs/action/detail/test_multiple_goal_fields__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Request __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestMultipleGoalFields_SendGoal_Request_
{
  using Type = TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator>;

  explicit TestMultipleGoalFields_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TestMultipleGoalFields_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const rosbridge_test_msgs::action::TestMultipleGoalFields_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Request
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Request
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMultipleGoalFields_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMultipleGoalFields_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMultipleGoalFields_SendGoal_Request_

// alias to use template instance with default allocator
using TestMultipleGoalFields_SendGoal_Request =
  rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rosbridge_test_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Response __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestMultipleGoalFields_SendGoal_Response_
{
  using Type = TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator>;

  explicit TestMultipleGoalFields_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TestMultipleGoalFields_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Response
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_SendGoal_Response
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMultipleGoalFields_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMultipleGoalFields_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMultipleGoalFields_SendGoal_Response_

// alias to use template instance with default allocator
using TestMultipleGoalFields_SendGoal_Response =
  rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosbridge_test_msgs
{

namespace action
{

struct TestMultipleGoalFields_SendGoal
{
  using Request = rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Request;
  using Response = rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal_Response;
};

}  // namespace action

}  // namespace rosbridge_test_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Request __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestMultipleGoalFields_GetResult_Request_
{
  using Type = TestMultipleGoalFields_GetResult_Request_<ContainerAllocator>;

  explicit TestMultipleGoalFields_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TestMultipleGoalFields_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Request
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Request
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMultipleGoalFields_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMultipleGoalFields_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMultipleGoalFields_GetResult_Request_

// alias to use template instance with default allocator
using TestMultipleGoalFields_GetResult_Request =
  rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rosbridge_test_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "rosbridge_test_msgs/action/detail/test_multiple_goal_fields__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Response __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestMultipleGoalFields_GetResult_Response_
{
  using Type = TestMultipleGoalFields_GetResult_Response_<ContainerAllocator>;

  explicit TestMultipleGoalFields_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TestMultipleGoalFields_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const rosbridge_test_msgs::action::TestMultipleGoalFields_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Response
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_GetResult_Response
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMultipleGoalFields_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMultipleGoalFields_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMultipleGoalFields_GetResult_Response_

// alias to use template instance with default allocator
using TestMultipleGoalFields_GetResult_Response =
  rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rosbridge_test_msgs

namespace rosbridge_test_msgs
{

namespace action
{

struct TestMultipleGoalFields_GetResult
{
  using Request = rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Request;
  using Response = rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult_Response;
};

}  // namespace action

}  // namespace rosbridge_test_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "rosbridge_test_msgs/action/detail/test_multiple_goal_fields__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_FeedbackMessage __declspec(deprecated)
#endif

namespace rosbridge_test_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TestMultipleGoalFields_FeedbackMessage_
{
  using Type = TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator>;

  explicit TestMultipleGoalFields_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TestMultipleGoalFields_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_FeedbackMessage
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbridge_test_msgs__action__TestMultipleGoalFields_FeedbackMessage
    std::shared_ptr<rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TestMultipleGoalFields_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TestMultipleGoalFields_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TestMultipleGoalFields_FeedbackMessage_

// alias to use template instance with default allocator
using TestMultipleGoalFields_FeedbackMessage =
  rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace rosbridge_test_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace rosbridge_test_msgs
{

namespace action
{

struct TestMultipleGoalFields
{
  /// The goal message defined in the action definition.
  using Goal = rosbridge_test_msgs::action::TestMultipleGoalFields_Goal;
  /// The result message defined in the action definition.
  using Result = rosbridge_test_msgs::action::TestMultipleGoalFields_Result;
  /// The feedback message defined in the action definition.
  using Feedback = rosbridge_test_msgs::action::TestMultipleGoalFields_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = rosbridge_test_msgs::action::TestMultipleGoalFields_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = rosbridge_test_msgs::action::TestMultipleGoalFields_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = rosbridge_test_msgs::action::TestMultipleGoalFields_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TestMultipleGoalFields TestMultipleGoalFields;

}  // namespace action

}  // namespace rosbridge_test_msgs

#endif  // ROSBRIDGE_TEST_MSGS__ACTION__DETAIL__TEST_MULTIPLE_GOAL_FIELDS__STRUCT_HPP_
