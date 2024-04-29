// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi_msgs:msg/TypeDef.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__TRAITS_HPP_
#define ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosapi_msgs/msg/detail/type_def__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosapi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TypeDef & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: fieldnames
  {
    if (msg.fieldnames.size() == 0) {
      out << "fieldnames: []";
    } else {
      out << "fieldnames: [";
      size_t pending_items = msg.fieldnames.size();
      for (auto item : msg.fieldnames) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fieldtypes
  {
    if (msg.fieldtypes.size() == 0) {
      out << "fieldtypes: []";
    } else {
      out << "fieldtypes: [";
      size_t pending_items = msg.fieldtypes.size();
      for (auto item : msg.fieldtypes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fieldarraylen
  {
    if (msg.fieldarraylen.size() == 0) {
      out << "fieldarraylen: []";
    } else {
      out << "fieldarraylen: [";
      size_t pending_items = msg.fieldarraylen.size();
      for (auto item : msg.fieldarraylen) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: examples
  {
    if (msg.examples.size() == 0) {
      out << "examples: []";
    } else {
      out << "examples: [";
      size_t pending_items = msg.examples.size();
      for (auto item : msg.examples) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: constnames
  {
    if (msg.constnames.size() == 0) {
      out << "constnames: []";
    } else {
      out << "constnames: [";
      size_t pending_items = msg.constnames.size();
      for (auto item : msg.constnames) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: constvalues
  {
    if (msg.constvalues.size() == 0) {
      out << "constvalues: []";
    } else {
      out << "constvalues: [";
      size_t pending_items = msg.constvalues.size();
      for (auto item : msg.constvalues) {
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
  const TypeDef & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: fieldnames
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fieldnames.size() == 0) {
      out << "fieldnames: []\n";
    } else {
      out << "fieldnames:\n";
      for (auto item : msg.fieldnames) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fieldtypes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fieldtypes.size() == 0) {
      out << "fieldtypes: []\n";
    } else {
      out << "fieldtypes:\n";
      for (auto item : msg.fieldtypes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fieldarraylen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fieldarraylen.size() == 0) {
      out << "fieldarraylen: []\n";
    } else {
      out << "fieldarraylen:\n";
      for (auto item : msg.fieldarraylen) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: examples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.examples.size() == 0) {
      out << "examples: []\n";
    } else {
      out << "examples:\n";
      for (auto item : msg.examples) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: constnames
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constnames.size() == 0) {
      out << "constnames: []\n";
    } else {
      out << "constnames:\n";
      for (auto item : msg.constnames) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: constvalues
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constvalues.size() == 0) {
      out << "constvalues: []\n";
    } else {
      out << "constvalues:\n";
      for (auto item : msg.constvalues) {
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

inline std::string to_yaml(const TypeDef & msg, bool use_flow_style = false)
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

}  // namespace rosapi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosapi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosapi_msgs::msg::TypeDef & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosapi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosapi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosapi_msgs::msg::TypeDef & msg)
{
  return rosapi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosapi_msgs::msg::TypeDef>()
{
  return "rosapi_msgs::msg::TypeDef";
}

template<>
inline const char * name<rosapi_msgs::msg::TypeDef>()
{
  return "rosapi_msgs/msg/TypeDef";
}

template<>
struct has_fixed_size<rosapi_msgs::msg::TypeDef>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi_msgs::msg::TypeDef>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi_msgs::msg::TypeDef>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI_MSGS__MSG__DETAIL__TYPE_DEF__TRAITS_HPP_
