// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mensaje:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MENSAJE__MSG__DETAIL__NUM__STRUCT_H_
#define MENSAJE__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Num in the package mensaje.
typedef struct mensaje__msg__Num
{
  double sensor_value;
  rosidl_runtime_c__String name;
} mensaje__msg__Num;

// Struct for a sequence of mensaje__msg__Num.
typedef struct mensaje__msg__Num__Sequence
{
  mensaje__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mensaje__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MENSAJE__MSG__DETAIL__NUM__STRUCT_H_
