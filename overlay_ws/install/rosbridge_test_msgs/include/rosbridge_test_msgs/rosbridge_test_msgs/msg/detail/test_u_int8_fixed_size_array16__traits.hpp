// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:msg/TestUInt8FixedSizeArray16.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbridge_test_msgs/msg/detail/test_u_int8_fixed_size_array16__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosbridge_test_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestUInt8FixedSizeArray16 & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const TestUInt8FixedSizeArray16 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestUInt8FixedSizeArray16 & msg, bool use_flow_style = false)
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
  const rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16 & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbridge_test_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbridge_test_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16 & msg)
{
  return rosbridge_test_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16>()
{
  return "rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16";
}

template<>
inline const char * name<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16>()
{
  return "rosbridge_test_msgs/msg/TestUInt8FixedSizeArray16";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__TRAITS_HPP_
