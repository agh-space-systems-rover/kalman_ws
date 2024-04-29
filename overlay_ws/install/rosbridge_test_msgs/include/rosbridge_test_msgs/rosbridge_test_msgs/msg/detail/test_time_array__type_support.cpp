// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosbridge_test_msgs:msg/TestTimeArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosbridge_test_msgs/msg/detail/test_time_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbridge_test_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TestTimeArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbridge_test_msgs::msg::TestTimeArray(_init);
}

void TestTimeArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbridge_test_msgs::msg::TestTimeArray *>(message_memory);
  typed_message->~TestTimeArray();
}

size_t size_function__TestTimeArray__times(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TestTimeArray__times(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return &member[index];
}

void * get_function__TestTimeArray__times(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  return &member[index];
}

void fetch_function__TestTimeArray__times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const builtin_interfaces::msg::Time *>(
    get_const_function__TestTimeArray__times(untyped_member, index));
  auto & value = *reinterpret_cast<builtin_interfaces::msg::Time *>(untyped_value);
  value = item;
}

void assign_function__TestTimeArray__times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<builtin_interfaces::msg::Time *>(
    get_function__TestTimeArray__times(untyped_member, index));
  const auto & value = *reinterpret_cast<const builtin_interfaces::msg::Time *>(untyped_value);
  item = value;
}

void resize_function__TestTimeArray__times(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<builtin_interfaces::msg::Time> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestTimeArray_message_member_array[1] = {
  {
    "times",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::msg::TestTimeArray, times),  // bytes offset in struct
    nullptr,  // default value
    size_function__TestTimeArray__times,  // size() function pointer
    get_const_function__TestTimeArray__times,  // get_const(index) function pointer
    get_function__TestTimeArray__times,  // get(index) function pointer
    fetch_function__TestTimeArray__times,  // fetch(index, &value) function pointer
    assign_function__TestTimeArray__times,  // assign(index, value) function pointer
    resize_function__TestTimeArray__times  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestTimeArray_message_members = {
  "rosbridge_test_msgs::msg",  // message namespace
  "TestTimeArray",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs::msg::TestTimeArray),
  TestTimeArray_message_member_array,  // message members
  TestTimeArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TestTimeArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestTimeArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestTimeArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::msg::TestTimeArray>()
{
  return &::rosbridge_test_msgs::msg::rosidl_typesupport_introspection_cpp::TestTimeArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, msg, TestTimeArray)() {
  return &::rosbridge_test_msgs::msg::rosidl_typesupport_introspection_cpp::TestTimeArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
