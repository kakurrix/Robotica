// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mensaje:srv/Kinematics.idl
// generated code does not contain a copyright notice

#ifndef MENSAJE__SRV__DETAIL__KINEMATICS__STRUCT_H_
#define MENSAJE__SRV__DETAIL__KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Kinematics in the package mensaje.
typedef struct mensaje__srv__Kinematics_Request
{
  double theta1;
  double theta2;
  double theta3;
  double theta4;
} mensaje__srv__Kinematics_Request;

// Struct for a sequence of mensaje__srv__Kinematics_Request.
typedef struct mensaje__srv__Kinematics_Request__Sequence
{
  mensaje__srv__Kinematics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mensaje__srv__Kinematics_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/Kinematics in the package mensaje.
typedef struct mensaje__srv__Kinematics_Response
{
  geometry_msgs__msg__Pose pose;
} mensaje__srv__Kinematics_Response;

// Struct for a sequence of mensaje__srv__Kinematics_Response.
typedef struct mensaje__srv__Kinematics_Response__Sequence
{
  mensaje__srv__Kinematics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mensaje__srv__Kinematics_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MENSAJE__SRV__DETAIL__KINEMATICS__STRUCT_H_
