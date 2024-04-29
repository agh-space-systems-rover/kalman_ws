// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:msg/TestFloat32Array.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_ARRAY__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_ARRAY__STRUCT_H_

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

/// Struct defined in msg/TestFloat32Array in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__msg__TestFloat32Array
{
  rosidl_runtime_c__float__Sequence data;
} rosbridge_test_msgs__msg__TestFloat32Array;

// Struct for a sequence of rosbridge_test_msgs__msg__TestFloat32Array.
typedef struct rosbridge_test_msgs__msg__TestFloat32Array__Sequence
{
  rosbridge_test_msgs__msg__TestFloat32Array * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__msg__TestFloat32Array__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_ARRAY__STRUCT_H_
