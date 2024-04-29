// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_msgs:msg/ConnectedClient.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__TRAITS_HPP_
#define ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbridge_msgs/msg/detail/connected_client__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'connection_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosbridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConnectedClient & msg,
  std::ostream & out)
{
  out << "{";
  // member: ip_address
  {
    out << "ip_address: ";
    rosidl_generator_traits::value_to_yaml(msg.ip_address, out);
    out << ", ";
  }

  // member: connection_time
  {
    out << "connection_time: ";
    to_flow_style_yaml(msg.connection_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConnectedClient & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ip_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip_address: ";
    rosidl_generator_traits::value_to_yaml(msg.ip_address, out);
    out << "\n";
  }

  // member: connection_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_time:\n";
    to_block_style_yaml(msg.connection_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConnectedClient & msg, bool use_flow_style = false)
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

}  // namespace rosbridge_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosbridge_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosbridge_msgs::msg::ConnectedClient & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosbridge_msgs::msg::ConnectedClient & msg)
{
  return rosbridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosbridge_msgs::msg::ConnectedClient>()
{
  return "rosbridge_msgs::msg::ConnectedClient";
}

template<>
inline const char * name<rosbridge_msgs::msg::ConnectedClient>()
{
  return "rosbridge_msgs/msg/ConnectedClient";
}

template<>
struct has_fixed_size<rosbridge_msgs::msg::ConnectedClient>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosbridge_msgs::msg::ConnectedClient>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosbridge_msgs::msg::ConnectedClient>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENT__TRAITS_HPP_
