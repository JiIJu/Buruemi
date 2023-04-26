// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:srv/FinishTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/srv/finish_trajectory__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/srv/finish_trajectory__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember FinishTrajectory_Request__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_member_array[1] = {
  {
    "trajectory_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__FinishTrajectory_Request, trajectory_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FinishTrajectory_Request__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "FinishTrajectory_Request",  // message name
  1,  // number of fields
  sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Request),
  FinishTrajectory_Request__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FinishTrajectory_Request__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_type_support_handle = {
  0,
  &FinishTrajectory_Request__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Request)() {
  if (!FinishTrajectory_Request__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    FinishTrajectory_Request__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FinishTrajectory_Request__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartographer_ros_msgs/srv/finish_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartographer_ros_msgs/srv/finish_trajectory__struct.h"


// Include directives for member types
// Member `status`
#include "cartographer_ros_msgs/msg/status_response.h"
// Member `status`
#include "cartographer_ros_msgs/msg/status_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember FinishTrajectory_Response__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__FinishTrajectory_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FinishTrajectory_Response__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "FinishTrajectory_Response",  // message name
  1,  // number of fields
  sizeof(cartographer_ros_msgs__srv__FinishTrajectory_Response),
  FinishTrajectory_Response__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FinishTrajectory_Response__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_type_support_handle = {
  0,
  &FinishTrajectory_Response__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Response)() {
  FinishTrajectory_Response__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, StatusResponse)();
  if (!FinishTrajectory_Response__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    FinishTrajectory_Response__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FinishTrajectory_Response__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cartographer_ros_msgs/srv/finish_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cartographer_ros_msgs__srv__finish_trajectory__rosidl_typesupport_introspection_c__FinishTrajectory_service_members = {
  "cartographer_ros_msgs__srv",  // service namespace
  "FinishTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cartographer_ros_msgs__srv__finish_trajectory__rosidl_typesupport_introspection_c__FinishTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // cartographer_ros_msgs__srv__finish_trajectory__rosidl_typesupport_introspection_c__FinishTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t cartographer_ros_msgs__srv__finish_trajectory__rosidl_typesupport_introspection_c__FinishTrajectory_service_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__finish_trajectory__rosidl_typesupport_introspection_c__FinishTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory)() {
  if (!cartographer_ros_msgs__srv__finish_trajectory__rosidl_typesupport_introspection_c__FinishTrajectory_service_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__finish_trajectory__rosidl_typesupport_introspection_c__FinishTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cartographer_ros_msgs__srv__finish_trajectory__rosidl_typesupport_introspection_c__FinishTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, FinishTrajectory_Response)()->data;
  }

  return &cartographer_ros_msgs__srv__finish_trajectory__rosidl_typesupport_introspection_c__FinishTrajectory_service_type_support_handle;
}
