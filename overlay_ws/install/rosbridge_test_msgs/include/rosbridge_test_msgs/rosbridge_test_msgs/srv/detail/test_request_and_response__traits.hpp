// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:srv/TestRequestAndResponse.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_REQUEST_AND_RESPONSE__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_REQUEST_AND_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbridge_test_msgs/srv/detail/test_request_and_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosbridge_test_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TestRequestAndResponse_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestRequestAndResponse_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequestAndResponse_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rosbridge_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosbridge_test_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosbridge_test_msgs::srv::TestRequestAndResponse_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbridge_test_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbridge_test_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosbridge_test_msgs::srv::TestRequestAndResponse_Request & msg)
{
  return rosbridge_test_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosbridge_test_msgs::srv::TestRequestAndResponse_Request>()
{
  return "rosbridge_test_msgs::srv::TestRequestAndResponse_Request";
}

template<>
inline const char * name<rosbridge_test_msgs::srv::TestRequestAndResponse_Request>()
{
  return "rosbridge_test_msgs/srv/TestRequestAndResponse_Request";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::srv::TestRequestAndResponse_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::srv::TestRequestAndResponse_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosbridge_test_msgs::srv::TestRequestAndResponse_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosbridge_test_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TestRequestAndResponse_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestRequestAndResponse_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestRequestAndResponse_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rosbridge_test_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosbridge_test_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosbridge_test_msgs::srv::TestRequestAndResponse_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbridge_test_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbridge_test_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosbridge_test_msgs::srv::TestRequestAndResponse_Response & msg)
{
  return rosbridge_test_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosbridge_test_msgs::srv::TestRequestAndResponse_Response>()
{
  return "rosbridge_test_msgs::srv::TestRequestAndResponse_Response";
}

template<>
inline const char * name<rosbridge_test_msgs::srv::TestRequestAndResponse_Response>()
{
  return "rosbridge_test_msgs/srv/TestRequestAndResponse_Response";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::srv::TestRequestAndResponse_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::srv::TestRequestAndResponse_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosbridge_test_msgs::srv::TestRequestAndResponse_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::srv::TestRequestAndResponse>()
{
  return "rosbridge_test_msgs::srv::TestRequestAndResponse";
}

template<>
inline const char * name<rosbridge_test_msgs::srv::TestRequestAndResponse>()
{
  return "rosbridge_test_msgs/srv/TestRequestAndResponse";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::srv::TestRequestAndResponse>
  : std::integral_constant<
    bool,
    has_fixed_size<rosbridge_test_msgs::srv::TestRequestAndResponse_Request>::value &&
    has_fixed_size<rosbridge_test_msgs::srv::TestRequestAndResponse_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosbridge_test_msgs::srv::TestRequestAndResponse>
  : std::integral_constant<
    bool,
    has_bounded_size<rosbridge_test_msgs::srv::TestRequestAndResponse_Request>::value &&
    has_bounded_size<rosbridge_test_msgs::srv::TestRequestAndResponse_Response>::value
  >
{
};

template<>
struct is_service<rosbridge_test_msgs::srv::TestRequestAndResponse>
  : std::true_type
{
};

template<>
struct is_service_request<rosbridge_test_msgs::srv::TestRequestAndResponse_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosbridge_test_msgs::srv::TestRequestAndResponse_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_TEST_MSGS__SRV__DETAIL__TEST_REQUEST_AND_RESPONSE__TRAITS_HPP_
