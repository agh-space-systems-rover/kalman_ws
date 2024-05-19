// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetGroupUrdf.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_GROUP_URDF__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_GROUP_URDF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/get_group_urdf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGroupUrdf_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: group_name
  {
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGroupUrdf_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGroupUrdf_Request & msg, bool use_flow_style = false)
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

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::srv::GetGroupUrdf_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GetGroupUrdf_Request & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GetGroupUrdf_Request>()
{
  return "moveit_msgs::srv::GetGroupUrdf_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetGroupUrdf_Request>()
{
  return "moveit_msgs/srv/GetGroupUrdf_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetGroupUrdf_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetGroupUrdf_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetGroupUrdf_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGroupUrdf_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    to_flow_style_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: urdf_string
  {
    out << "urdf_string: ";
    rosidl_generator_traits::value_to_yaml(msg.urdf_string, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGroupUrdf_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_block_style_yaml(msg.error_code, out, indentation + 2);
  }

  // member: urdf_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "urdf_string: ";
    rosidl_generator_traits::value_to_yaml(msg.urdf_string, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGroupUrdf_Response & msg, bool use_flow_style = false)
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

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moveit_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moveit_msgs::srv::GetGroupUrdf_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  moveit_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moveit_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const moveit_msgs::srv::GetGroupUrdf_Response & msg)
{
  return moveit_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<moveit_msgs::srv::GetGroupUrdf_Response>()
{
  return "moveit_msgs::srv::GetGroupUrdf_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetGroupUrdf_Response>()
{
  return "moveit_msgs/srv/GetGroupUrdf_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetGroupUrdf_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetGroupUrdf_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetGroupUrdf_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetGroupUrdf>()
{
  return "moveit_msgs::srv::GetGroupUrdf";
}

template<>
inline const char * name<moveit_msgs::srv::GetGroupUrdf>()
{
  return "moveit_msgs/srv/GetGroupUrdf";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetGroupUrdf>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetGroupUrdf_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetGroupUrdf_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetGroupUrdf>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetGroupUrdf_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetGroupUrdf_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetGroupUrdf>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetGroupUrdf_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetGroupUrdf_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_GROUP_URDF__TRAITS_HPP_
