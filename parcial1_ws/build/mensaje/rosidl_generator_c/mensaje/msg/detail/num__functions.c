// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mensaje:msg/Num.idl
// generated code does not contain a copyright notice
#include "mensaje/msg/detail/num__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
mensaje__msg__Num__init(mensaje__msg__Num * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_value
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mensaje__msg__Num__fini(msg);
    return false;
  }
  return true;
}

void
mensaje__msg__Num__fini(mensaje__msg__Num * msg)
{
  if (!msg) {
    return;
  }
  // sensor_value
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
mensaje__msg__Num__are_equal(const mensaje__msg__Num * lhs, const mensaje__msg__Num * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_value
  if (lhs->sensor_value != rhs->sensor_value) {
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
mensaje__msg__Num__copy(
  const mensaje__msg__Num * input,
  mensaje__msg__Num * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_value
  output->sensor_value = input->sensor_value;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

mensaje__msg__Num *
mensaje__msg__Num__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mensaje__msg__Num * msg = (mensaje__msg__Num *)allocator.allocate(sizeof(mensaje__msg__Num), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mensaje__msg__Num));
  bool success = mensaje__msg__Num__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mensaje__msg__Num__destroy(mensaje__msg__Num * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mensaje__msg__Num__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mensaje__msg__Num__Sequence__init(mensaje__msg__Num__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mensaje__msg__Num * data = NULL;

  if (size) {
    data = (mensaje__msg__Num *)allocator.zero_allocate(size, sizeof(mensaje__msg__Num), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mensaje__msg__Num__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mensaje__msg__Num__fini(&data[i - 1]);
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
mensaje__msg__Num__Sequence__fini(mensaje__msg__Num__Sequence * array)
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
      mensaje__msg__Num__fini(&array->data[i]);
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

mensaje__msg__Num__Sequence *
mensaje__msg__Num__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mensaje__msg__Num__Sequence * array = (mensaje__msg__Num__Sequence *)allocator.allocate(sizeof(mensaje__msg__Num__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mensaje__msg__Num__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mensaje__msg__Num__Sequence__destroy(mensaje__msg__Num__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mensaje__msg__Num__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mensaje__msg__Num__Sequence__are_equal(const mensaje__msg__Num__Sequence * lhs, const mensaje__msg__Num__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mensaje__msg__Num__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mensaje__msg__Num__Sequence__copy(
  const mensaje__msg__Num__Sequence * input,
  mensaje__msg__Num__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mensaje__msg__Num);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mensaje__msg__Num * data =
      (mensaje__msg__Num *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mensaje__msg__Num__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mensaje__msg__Num__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mensaje__msg__Num__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
