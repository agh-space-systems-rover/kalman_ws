// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosbridge_test_msgs:msg/TestHeaderTwo.idl
// generated code does not contain a copyright notice
#include "rosbridge_test_msgs/msg/detail/test_header_two__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rosbridge_test_msgs__msg__TestHeaderTwo__init(rosbridge_test_msgs__msg__TestHeaderTwo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rosbridge_test_msgs__msg__TestHeaderTwo__fini(msg);
    return false;
  }
  return true;
}

void
rosbridge_test_msgs__msg__TestHeaderTwo__fini(rosbridge_test_msgs__msg__TestHeaderTwo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
}

bool
rosbridge_test_msgs__msg__TestHeaderTwo__are_equal(const rosbridge_test_msgs__msg__TestHeaderTwo * lhs, const rosbridge_test_msgs__msg__TestHeaderTwo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  return true;
}

bool
rosbridge_test_msgs__msg__TestHeaderTwo__copy(
  const rosbridge_test_msgs__msg__TestHeaderTwo * input,
  rosbridge_test_msgs__msg__TestHeaderTwo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  return true;
}

rosbridge_test_msgs__msg__TestHeaderTwo *
rosbridge_test_msgs__msg__TestHeaderTwo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__msg__TestHeaderTwo * msg = (rosbridge_test_msgs__msg__TestHeaderTwo *)allocator.allocate(sizeof(rosbridge_test_msgs__msg__TestHeaderTwo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbridge_test_msgs__msg__TestHeaderTwo));
  bool success = rosbridge_test_msgs__msg__TestHeaderTwo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbridge_test_msgs__msg__TestHeaderTwo__destroy(rosbridge_test_msgs__msg__TestHeaderTwo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbridge_test_msgs__msg__TestHeaderTwo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbridge_test_msgs__msg__TestHeaderTwo__Sequence__init(rosbridge_test_msgs__msg__TestHeaderTwo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__msg__TestHeaderTwo * data = NULL;

  if (size) {
    data = (rosbridge_test_msgs__msg__TestHeaderTwo *)allocator.zero_allocate(size, sizeof(rosbridge_test_msgs__msg__TestHeaderTwo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbridge_test_msgs__msg__TestHeaderTwo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbridge_test_msgs__msg__TestHeaderTwo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rosbridge_test_msgs__msg__TestHeaderTwo__Sequence__fini(rosbridge_test_msgs__msg__TestHeaderTwo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbridge_test_msgs__msg__TestHeaderTwo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rosbridge_test_msgs__msg__TestHeaderTwo__Sequence *
rosbridge_test_msgs__msg__TestHeaderTwo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbridge_test_msgs__msg__TestHeaderTwo__Sequence * array = (rosbridge_test_msgs__msg__TestHeaderTwo__Sequence *)allocator.allocate(sizeof(rosbridge_test_msgs__msg__TestHeaderTwo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbridge_test_msgs__msg__TestHeaderTwo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbridge_test_msgs__msg__TestHeaderTwo__Sequence__destroy(rosbridge_test_msgs__msg__TestHeaderTwo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbridge_test_msgs__msg__TestHeaderTwo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbridge_test_msgs__msg__TestHeaderTwo__Sequence__are_equal(const rosbridge_test_msgs__msg__TestHeaderTwo__Sequence * lhs, const rosbridge_test_msgs__msg__TestHeaderTwo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbridge_test_msgs__msg__TestHeaderTwo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbridge_test_msgs__msg__TestHeaderTwo__Sequence__copy(
  const rosbridge_test_msgs__msg__TestHeaderTwo__Sequence * input,
  rosbridge_test_msgs__msg__TestHeaderTwo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbridge_test_msgs__msg__TestHeaderTwo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbridge_test_msgs__msg__TestHeaderTwo * data =
      (rosbridge_test_msgs__msg__TestHeaderTwo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbridge_test_msgs__msg__TestHeaderTwo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbridge_test_msgs__msg__TestHeaderTwo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbridge_test_msgs__msg__TestHeaderTwo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
