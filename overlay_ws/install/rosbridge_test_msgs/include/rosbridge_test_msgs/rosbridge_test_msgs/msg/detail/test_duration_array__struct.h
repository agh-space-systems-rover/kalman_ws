// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:msg/TestDurationArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_DURATION_ARRAY__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_DURATION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'durations'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/TestDurationArray in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__msg__TestDurationArray
{
  builtin_interfaces__msg__Duration__Sequence durations;
} rosbridge_test_msgs__msg__TestDurationArray;

// Struct for a sequence of rosbridge_test_msgs__msg__TestDurationArray.
typedef struct rosbridge_test_msgs__msg__TestDurationArray__Sequence
{
  rosbridge_test_msgs__msg__TestDurationArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__msg__TestDurationArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_DURATION_ARRAY__STRUCT_H_
