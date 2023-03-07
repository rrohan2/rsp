// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from assignment1_msgs:msg/OddNo.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT1_MSGS__MSG__DETAIL__ODD_NO__STRUCT_H_
#define ASSIGNMENT1_MSGS__MSG__DETAIL__ODD_NO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/OddNo in the package assignment1_msgs.
typedef struct assignment1_msgs__msg__OddNo
{
  int64_t oddnos;
} assignment1_msgs__msg__OddNo;

// Struct for a sequence of assignment1_msgs__msg__OddNo.
typedef struct assignment1_msgs__msg__OddNo__Sequence
{
  assignment1_msgs__msg__OddNo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} assignment1_msgs__msg__OddNo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ASSIGNMENT1_MSGS__MSG__DETAIL__ODD_NO__STRUCT_H_
