// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment1_msgs:srv/Average.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT1_MSGS__SRV__DETAIL__AVERAGE__STRUCT_H_
#define ASSIGNMENT1_MSGS__SRV__DETAIL__AVERAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Average in the package assignment1_msgs.
typedef struct assignment1_msgs__srv__Average_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} assignment1_msgs__srv__Average_Request;

// Struct for a sequence of assignment1_msgs__srv__Average_Request.
typedef struct assignment1_msgs__srv__Average_Request__Sequence
{
  assignment1_msgs__srv__Average_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1_msgs__srv__Average_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Average in the package assignment1_msgs.
typedef struct assignment1_msgs__srv__Average_Response
{
  int64_t average;
} assignment1_msgs__srv__Average_Response;

// Struct for a sequence of assignment1_msgs__srv__Average_Response.
typedef struct assignment1_msgs__srv__Average_Response__Sequence
{
  assignment1_msgs__srv__Average_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1_msgs__srv__Average_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT1_MSGS__SRV__DETAIL__AVERAGE__STRUCT_H_
