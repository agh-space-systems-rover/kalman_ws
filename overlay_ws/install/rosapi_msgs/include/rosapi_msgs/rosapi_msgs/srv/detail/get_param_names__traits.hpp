// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi_msgs:srv/GetParamNames.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__GET_PARAM_NAMES__TRAITS_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__GET_PARAM_NAMES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosapi_msgs/srv/detail/get_param_names__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetParamNames_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetParamNames_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetParamNames_Request & msg, bool use_flow_style = false)
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

}  // namespace rosapi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosapi_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosapi_msgs::srv::GetParamNames_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::GetParamNames_Request & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::GetParamNames_Request>()
{
  return "rosapi_msgs::srv::GetParamNames_Request";
}

template<>
inline const char * name<rosapi_msgs::srv::GetParamNames_Request>()
{
  return "rosapi_msgs/srv/GetParamNames_Request";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::GetParamNames_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::GetParamNames_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosapi_msgs::srv::GetParamNames_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosapi_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetParamNames_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
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
  const GetParamNames_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
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

inline std::string to_yaml(const GetParamNames_Response & msg, bool use_flow_style = false)
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

}  // namespace rosapi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosapi_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosapi_msgs::srv::GetParamNames_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::srv::GetParamNames_Response & msg)
{
  return rosapi_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::srv::GetParamNames_Response>()
{
  return "rosapi_msgs::srv::GetParamNames_Response";
}

template<>
inline const char * name<rosapi_msgs::srv::GetParamNames_Response>()
{
  return "rosapi_msgs/srv/GetParamNames_Response";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::GetParamNames_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::srv::GetParamNames_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::srv::GetParamNames_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi_msgs::srv::GetParamNames>()
{
  return "rosapi_msgs::srv::GetParamNames";
}

template<>
inline const char * name<rosapi_msgs::srv::GetParamNames>()
{
  return "rosapi_msgs/srv/GetParamNames";
}

template<>
struct has_fixed_size<rosapi_msgs::srv::GetParamNames>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi_msgs::srv::GetParamNames_Request>::value &&
    has_fixed_size<rosapi_msgs::srv::GetParamNames_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi_msgs::srv::GetParamNames>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi_msgs::srv::GetParamNames_Request>::value &&
    has_bounded_size<rosapi_msgs::srv::GetParamNames_Response>::value
  >
{
};

template<>
struct is_service<rosapi_msgs::srv::GetParamNames>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi_msgs::srv::GetParamNames_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi_msgs::srv::GetParamNames_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI_MSGS__SRV__DETAIL__GET_PARAM_NAMES__TRAITS_HPP_
