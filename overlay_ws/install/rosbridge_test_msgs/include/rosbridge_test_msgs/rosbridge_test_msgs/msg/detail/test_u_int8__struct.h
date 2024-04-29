// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:msg/TestUInt8.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TestUInt8 in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__msg__TestUInt8
{
  rosidl_runtime_c__uint8__Sequence data;
} rosbridge_test_msgs__msg__TestUInt8;

// Struct for a sequence of rosbridge_test_msgs__msg__TestUInt8.
typedef struct rosbridge_test_msgs__msg__TestUInt8__Sequence
{
  rosbridge_test_msgs__msg__TestUInt8 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__msg__TestUInt8__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8__STRUCT_H_
