// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosapi_msgs:srv/HasParam.idl
// generated code does not contain a copyright notice
#include "rosapi_msgs/srv/detail/has_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
rosapi_msgs__srv__HasParam_Request__init(rosapi_msgs__srv__HasParam_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rosapi_msgs__srv__HasParam_Request__fini(msg);
    return false;
  }
  return true;
}

void
rosapi_msgs__srv__HasParam_Request__fini(rosapi_msgs__srv__HasParam_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
rosapi_msgs__srv__HasParam_Request__are_equal(const rosapi_msgs__srv__HasParam_Request * lhs, const rosapi_msgs__srv__HasParam_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
rosapi_msgs__srv__HasParam_Request__copy(
  const rosapi_msgs__srv__HasParam_Request * input,
  rosapi_msgs__srv__HasParam_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

rosapi_msgs__srv__HasParam_Request *
rosapi_msgs__srv__HasParam_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosapi_msgs__srv__HasParam_Request * msg = (rosapi_msgs__srv__HasParam_Request *)allocator.allocate(sizeof(rosapi_msgs__srv__HasParam_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosapi_msgs__srv__HasParam_Request));
  bool success = rosapi_msgs__srv__HasParam_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosapi_msgs__srv__HasParam_Request__destroy(rosapi_msgs__srv__HasParam_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosapi_msgs__srv__HasParam_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosapi_msgs__srv__HasParam_Request__Sequence__init(rosapi_msgs__srv__HasParam_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosapi_msgs__srv__HasParam_Request * data = NULL;

  if (size) {
    data = (rosapi_msgs__srv__HasParam_Request *)allocator.zero_allocate(size, sizeof(rosapi_msgs__srv__HasParam_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosapi_msgs__srv__HasParam_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosapi_msgs__srv__HasParam_Request__fini(&data[i - 1]);
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
rosapi_msgs__srv__HasParam_Request__Sequence__fini(rosapi_msgs__srv__HasParam_Request__Sequence * array)
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
      rosapi_msgs__srv__HasParam_Request__fini(&array->data[i]);
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

rosapi_msgs__srv__HasParam_Request__Sequence *
rosapi_msgs__srv__HasParam_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosapi_msgs__srv__HasParam_Request__Sequence * array = (rosapi_msgs__srv__HasParam_Request__Sequence *)allocator.allocate(sizeof(rosapi_msgs__srv__HasParam_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosapi_msgs__srv__HasParam_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosapi_msgs__srv__HasParam_Request__Sequence__destroy(rosapi_msgs__srv__HasParam_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosapi_msgs__srv__HasParam_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosapi_msgs__srv__HasParam_Request__Sequence__are_equal(const rosapi_msgs__srv__HasParam_Request__Sequence * lhs, const rosapi_msgs__srv__HasParam_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosapi_msgs__srv__HasParam_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosapi_msgs__srv__HasParam_Request__Sequence__copy(
  const rosapi_msgs__srv__HasParam_Request__Sequence * input,
  rosapi_msgs__srv__HasParam_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosapi_msgs__srv__HasParam_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosapi_msgs__srv__HasParam_Request * data =
      (rosapi_msgs__srv__HasParam_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosapi_msgs__srv__HasParam_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosapi_msgs__srv__HasParam_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosapi_msgs__srv__HasParam_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rosapi_msgs__srv__HasParam_Response__init(rosapi_msgs__srv__HasParam_Response * msg)
{
  if (!msg) {
    return false;
  }
  // exists
  return true;
}

void
rosapi_msgs__srv__HasParam_Response__fini(rosapi_msgs__srv__HasParam_Response * msg)
{
  if (!msg) {
    return;
  }
  // exists
}

bool
rosapi_msgs__srv__HasParam_Response__are_equal(const rosapi_msgs__srv__HasParam_Response * lhs, const rosapi_msgs__srv__HasParam_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // exists
  if (lhs->exists != rhs->exists) {
    return false;
  }
  return true;
}

bool
rosapi_msgs__srv__HasParam_Response__copy(
  const rosapi_msgs__srv__HasParam_Response * input,
  rosapi_msgs__srv__HasParam_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // exists
  output->exists = input->exists;
  return true;
}

rosapi_msgs__srv__HasParam_Response *
rosapi_msgs__srv__HasParam_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosapi_msgs__srv__HasParam_Response * msg = (rosapi_msgs__srv__HasParam_Response *)allocator.allocate(sizeof(rosapi_msgs__srv__HasParam_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosapi_msgs__srv__HasParam_Response));
  bool success = rosapi_msgs__srv__HasParam_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosapi_msgs__srv__HasParam_Response__destroy(rosapi_msgs__srv__HasParam_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosapi_msgs__srv__HasParam_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosapi_msgs__srv__HasParam_Response__Sequence__init(rosapi_msgs__srv__HasParam_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosapi_msgs__srv__HasParam_Response * data = NULL;

  if (size) {
    data = (rosapi_msgs__srv__HasParam_Response *)allocator.zero_allocate(size, sizeof(rosapi_msgs__srv__HasParam_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosapi_msgs__srv__HasParam_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosapi_msgs__srv__HasParam_Response__fini(&data[i - 1]);
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
rosapi_msgs__srv__HasParam_Response__Sequence__fini(rosapi_msgs__srv__HasParam_Response__Sequence * array)
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
      rosapi_msgs__srv__HasParam_Response__fini(&array->data[i]);
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

rosapi_msgs__srv__HasParam_Response__Sequence *
rosapi_msgs__srv__HasParam_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosapi_msgs__srv__HasParam_Response__Sequence * array = (rosapi_msgs__srv__HasParam_Response__Sequence *)allocator.allocate(sizeof(rosapi_msgs__srv__HasParam_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosapi_msgs__srv__HasParam_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosapi_msgs__srv__HasParam_Response__Sequence__destroy(rosapi_msgs__srv__HasParam_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosapi_msgs__srv__HasParam_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosapi_msgs__srv__HasParam_Response__Sequence__are_equal(const rosapi_msgs__srv__HasParam_Response__Sequence * lhs, const rosapi_msgs__srv__HasParam_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosapi_msgs__srv__HasParam_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosapi_msgs__srv__HasParam_Response__Sequence__copy(
  const rosapi_msgs__srv__HasParam_Response__Sequence * input,
  rosapi_msgs__srv__HasParam_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosapi_msgs__srv__HasParam_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosapi_msgs__srv__HasParam_Response * data =
      (rosapi_msgs__srv__HasParam_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosapi_msgs__srv__HasParam_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosapi_msgs__srv__HasParam_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosapi_msgs__srv__HasParam_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
