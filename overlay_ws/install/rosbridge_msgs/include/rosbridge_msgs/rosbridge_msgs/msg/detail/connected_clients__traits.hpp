// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_msgs:msg/ConnectedClients.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__TRAITS_HPP_
#define ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbridge_msgs/msg/detail/connected_clients__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'clients'
#include "rosbridge_msgs/msg/detail/connected_client__traits.hpp"

namespace rosbridge_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConnectedClients & msg,
  std::ostream & out)
{
  out << "{";
  // member: clients
  {
    if (msg.clients.size() == 0) {
      out << "clients: []";
    } else {
      out << "clients: [";
      size_t pending_items = msg.clients.size();
      for (auto item : msg.clients) {
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
  const ConnectedClients & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: clients
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.clients.size() == 0) {
      out << "clients: []\n";
    } else {
      out << "clients:\n";
      for (auto item : msg.clients) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConnectedClients & msg, bool use_flow_style = false)
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
  const rosbridge_msgs::msg::ConnectedClients & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbridge_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbridge_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosbridge_msgs::msg::ConnectedClients & msg)
{
  return rosbridge_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosbridge_msgs::msg::ConnectedClients>()
{
  return "rosbridge_msgs::msg::ConnectedClients";
}

template<>
inline const char * name<rosbridge_msgs::msg::ConnectedClients>()
{
  return "rosbridge_msgs/msg/ConnectedClients";
}

template<>
struct has_fixed_size<rosbridge_msgs::msg::ConnectedClients>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosbridge_msgs::msg::ConnectedClients>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosbridge_msgs::msg::ConnectedClients>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_MSGS__MSG__DETAIL__CONNECTED_CLIENTS__TRAITS_HPP_
