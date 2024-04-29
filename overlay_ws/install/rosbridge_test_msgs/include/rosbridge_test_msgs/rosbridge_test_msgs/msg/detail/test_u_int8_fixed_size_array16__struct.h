// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbridge_test_msgs:msg/TestUInt8FixedSizeArray16.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__STRUCT_H_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TestUInt8FixedSizeArray16 in the package rosbridge_test_msgs.
typedef struct rosbridge_test_msgs__msg__TestUInt8FixedSizeArray16
{
  uint8_t data[16];
} rosbridge_test_msgs__msg__TestUInt8FixedSizeArray16;

// Struct for a sequence of rosbridge_test_msgs__msg__TestUInt8FixedSizeArray16.
typedef struct rosbridge_test_msgs__msg__TestUInt8FixedSizeArray16__Sequence
{
  rosbridge_test_msgs__msg__TestUInt8FixedSizeArray16 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbridge_test_msgs__msg__TestUInt8FixedSizeArray16__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_U_INT8_FIXED_SIZE_ARRAY16__STRUCT_H_
