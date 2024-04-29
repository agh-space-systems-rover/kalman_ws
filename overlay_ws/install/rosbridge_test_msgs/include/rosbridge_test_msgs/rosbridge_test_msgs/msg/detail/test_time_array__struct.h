// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:msg/TestTimeArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_TIME_ARRAY__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_TIME_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'times'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TestTimeArray in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__msg__TestTimeArray
{
  builtin_interfaces__msg__Time__Sequence times;
} rosbridge_test_msgs__msg__TestTimeArray;

// Struct for a sequence of rosbridge_test_msgs__msg__TestTimeArray.
typedef struct rosbridge_test_msgs__msg__TestTimeArray__Sequence
{
  rosbridge_test_msgs__msg__TestTimeArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__msg__TestTimeArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_TIME_ARRAY__STRUCT_H_
