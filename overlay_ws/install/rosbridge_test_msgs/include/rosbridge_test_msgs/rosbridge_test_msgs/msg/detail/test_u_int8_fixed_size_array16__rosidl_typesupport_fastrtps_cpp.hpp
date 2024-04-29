// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rosbridge_test_msgs:msg/TestUInt8FixedSizeArray16.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rosbridge_test_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rosbridge_test_msgs/msg/detail/test_u_int8_fixed_size_array16__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rosbridge_test_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbridge_test_msgs
cdr_serialize(
  const rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16 & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbridge_test_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16 & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbridge_test_msgs
get_serialized_size(
  const rosbridge_test_msgs::msg::TestUInt8FixedSizeArray16 & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbridge_test_msgs
max_serialized_size_TestUInt8FixedSizeArray16(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosbridge_test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbridge_test_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbridge_test_msgs, msg, TestUInt8FixedSizeArray16)();

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
