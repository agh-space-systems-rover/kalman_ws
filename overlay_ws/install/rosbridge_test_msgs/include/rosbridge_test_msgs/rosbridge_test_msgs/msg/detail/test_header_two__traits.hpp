// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:msg/TestHeaderTwo.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_TWO__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_TWO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbridge_test_msgs/msg/detail/test_header_two__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosbridge_test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestHeaderTwo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestHeaderTwo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestHeaderTwo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rosbridge_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosbridge_test_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosbridge_test_msgs::msg::TestHeaderTwo & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbridge_test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbridge_test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosbridge_test_msgs::msg::TestHeaderTwo & msg)
{
  return rosbridge_test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosbridge_test_msgs::msg::TestHeaderTwo>()
{
  return "rosbridge_test_msgs::msg::TestHeaderTwo";
}

template<>
inline const char * name<rosbridge_test_msgs::msg::TestHeaderTwo>()
{
  return "rosbridge_test_msgs/msg/TestHeaderTwo";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::msg::TestHeaderTwo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::msg::TestHeaderTwo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rosbridge_test_msgs::msg::TestHeaderTwo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_TWO__TRAITS_HPP_
