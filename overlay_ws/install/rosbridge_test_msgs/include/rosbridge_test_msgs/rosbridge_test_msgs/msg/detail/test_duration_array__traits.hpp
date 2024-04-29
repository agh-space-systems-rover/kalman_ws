// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:msg/TestDurationArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_DURATION_ARRAY__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_DURATION_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbridge_test_msgs/msg/detail/test_duration_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'durations'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosbridge_test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestDurationArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: durations
  {
    if (msg.durations.size() == 0) {
      out << "durations: []";
    } else {
      out << "durations: [";
      size_t pending_items = msg.durations.size();
      for (auto item : msg.durations) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestDurationArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: durations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.durations.size() == 0) {
      out << "durations: []\n";
    } else {
      out << "durations:\n";
      for (auto item : msg.durations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestDurationArray & msg, bool use_flow_style = false)
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
  const rosbridge_test_msgs::msg::TestDurationArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbridge_test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbridge_test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosbridge_test_msgs::msg::TestDurationArray & msg)
{
  return rosbridge_test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosbridge_test_msgs::msg::TestDurationArray>()
{
  return "rosbridge_test_msgs::msg::TestDurationArray";
}

template<>
inline const char * name<rosbridge_test_msgs::msg::TestDurationArray>()
{
  return "rosbridge_test_msgs/msg/TestDurationArray";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::msg::TestDurationArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::msg::TestDurationArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosbridge_test_msgs::msg::TestDurationArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_DURATION_ARRAY__TRAITS_HPP_
