// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__TRAJECTORY2_D__STRUCT_H_
#define DWB_MSGS__MSG__TRAJECTORY2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'velocity'
#include "nav_2d_msgs/msg/twist2_d__struct.h"
// Member 'duration'
#include "builtin_interfaces/msg/duration__struct.h"
// Member 'poses'
#include "geometry_msgs/msg/pose2_d__struct.h"

// Struct defined in msg/Trajectory2D in the package dwb_msgs.
typedef struct dwb_msgs__msg__Trajectory2D
{
  nav_2d_msgs__msg__Twist2D velocity;
  builtin_interfaces__msg__Duration duration;
  geometry_msgs__msg__Pose2D__Sequence poses;
} dwb_msgs__msg__Trajectory2D;

// Struct for a sequence of dwb_msgs__msg__Trajectory2D.
typedef struct dwb_msgs__msg__Trajectory2D__Sequence
{
  dwb_msgs__msg__Trajectory2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__msg__Trajectory2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__MSG__TRAJECTORY2_D__STRUCT_H_
