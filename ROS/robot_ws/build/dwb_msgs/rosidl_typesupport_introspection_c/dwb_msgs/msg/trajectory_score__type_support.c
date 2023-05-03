// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dwb_msgs/msg/trajectory_score__rosidl_typesupport_introspection_c.h"
#include "dwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dwb_msgs/msg/trajectory_score__struct.h"


// Include directives for member types
// Member `traj`
#include "dwb_msgs/msg/trajectory2_d.h"
// Member `traj`
#include "dwb_msgs/msg/trajectory2_d__rosidl_typesupport_introspection_c.h"
// Member `scores`
#include "dwb_msgs/msg/critic_score.h"
// Member `scores`
#include "dwb_msgs/msg/critic_score__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t TrajectoryScore__rosidl_typesupport_introspection_c__size_function__CriticScore__scores(
  const void * untyped_member)
{
  const dwb_msgs__msg__CriticScore__Sequence * member =
    (const dwb_msgs__msg__CriticScore__Sequence *)(untyped_member);
  return member->size;
}

const void * TrajectoryScore__rosidl_typesupport_introspection_c__get_const_function__CriticScore__scores(
  const void * untyped_member, size_t index)
{
  const dwb_msgs__msg__CriticScore__Sequence * member =
    (const dwb_msgs__msg__CriticScore__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrajectoryScore__rosidl_typesupport_introspection_c__get_function__CriticScore__scores(
  void * untyped_member, size_t index)
{
  dwb_msgs__msg__CriticScore__Sequence * member =
    (dwb_msgs__msg__CriticScore__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrajectoryScore__rosidl_typesupport_introspection_c__resize_function__CriticScore__scores(
  void * untyped_member, size_t size)
{
  dwb_msgs__msg__CriticScore__Sequence * member =
    (dwb_msgs__msg__CriticScore__Sequence *)(untyped_member);
  dwb_msgs__msg__CriticScore__Sequence__fini(member);
  return dwb_msgs__msg__CriticScore__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_member_array[3] = {
  {
    "traj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__TrajectoryScore, traj),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scores",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__TrajectoryScore, scores),  // bytes offset in struct
    NULL,  // default value
    TrajectoryScore__rosidl_typesupport_introspection_c__size_function__CriticScore__scores,  // size() function pointer
    TrajectoryScore__rosidl_typesupport_introspection_c__get_const_function__CriticScore__scores,  // get_const(index) function pointer
    TrajectoryScore__rosidl_typesupport_introspection_c__get_function__CriticScore__scores,  // get(index) function pointer
    TrajectoryScore__rosidl_typesupport_introspection_c__resize_function__CriticScore__scores  // resize(index) function pointer
  },
  {
    "total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dwb_msgs__msg__TrajectoryScore, total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_members = {
  "dwb_msgs__msg",  // message namespace
  "TrajectoryScore",  // message name
  3,  // number of fields
  sizeof(dwb_msgs__msg__TrajectoryScore),
  TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle = {
  0,
  &TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, TrajectoryScore)() {
  TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, Trajectory2D)();
  TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dwb_msgs, msg, CriticScore)();
  if (!TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle.typesupport_identifier) {
    TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryScore__rosidl_typesupport_introspection_c__TrajectoryScore_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif