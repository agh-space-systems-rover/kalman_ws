// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:msg/TestHeaderArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_ARRAY__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_ARRAY__STRUCT_H_

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

/// Struct defined in msg/TestHeaderArray in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__msg__TestHeaderArray
{
  std_msgs__msg__Header__Sequence header;
} rosbridge_test_msgs__msg__TestHeaderArray;

// Struct for a sequence of rosbridge_test_msgs__msg__TestHeaderArray.
typedef struct rosbridge_test_msgs__msg__TestHeaderArray__Sequence
{
  rosbridge_test_msgs__msg__TestHeaderArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__msg__TestHeaderArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_HEADER_ARRAY__STRUCT_H_
