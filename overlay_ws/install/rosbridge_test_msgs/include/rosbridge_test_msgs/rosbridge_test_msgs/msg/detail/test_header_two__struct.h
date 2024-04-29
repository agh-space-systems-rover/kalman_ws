// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:msg/TestHeaderTwo.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_TWO__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_TWO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/TestHeaderTwo in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__msg__TestHeaderTwo
{
  std_msgs__msg__Header header;
} rosbridge_test_msgs__msg__TestHeaderTwo;

// Struct for a sequence of rosbridge_test_msgs__msg__TestHeaderTwo.
typedef struct rosbridge_test_msgs__msg__TestHeaderTwo__Sequence
{
  rosbridge_test_msgs__msg__TestHeaderTwo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__msg__TestHeaderTwo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_TWO__STRUCT_H_
