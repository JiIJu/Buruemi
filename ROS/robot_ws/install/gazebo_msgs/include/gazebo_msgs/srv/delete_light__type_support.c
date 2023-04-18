// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:srv/DeleteLight.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/srv/delete_light__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/srv/delete_light__struct.h"


// Include directives for member types
// Member `light_name`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember DeleteLight_Request__rosidl_typesupport_introspection_c__DeleteLight_Request_message_member_array[1] = {
  {
    "light_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__DeleteLight_Request, light_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DeleteLight_Request__rosidl_typesupport_introspection_c__DeleteLight_Request_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "DeleteLight_Request",  // message name
  1,  // number of fields
  sizeof(gazebo_msgs__srv__DeleteLight_Request),
  DeleteLight_Request__rosidl_typesupport_introspection_c__DeleteLight_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DeleteLight_Request__rosidl_typesupport_introspection_c__DeleteLight_Request_message_type_support_handle = {
  0,
  &DeleteLight_Request__rosidl_typesupport_introspection_c__DeleteLight_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, DeleteLight_Request)() {
  if (!DeleteLight_Request__rosidl_typesupport_introspection_c__DeleteLight_Request_message_type_support_handle.typesupport_identifier) {
    DeleteLight_Request__rosidl_typesupport_introspection_c__DeleteLight_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DeleteLight_Request__rosidl_typesupport_introspection_c__DeleteLight_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gazebo_msgs/srv/delete_light__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gazebo_msgs/srv/delete_light__struct.h"


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember DeleteLight_Response__rosidl_typesupport_introspection_c__DeleteLight_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__DeleteLight_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__DeleteLight_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DeleteLight_Response__rosidl_typesupport_introspection_c__DeleteLight_Response_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "DeleteLight_Response",  // message name
  2,  // number of fields
  sizeof(gazebo_msgs__srv__DeleteLight_Response),
  DeleteLight_Response__rosidl_typesupport_introspection_c__DeleteLight_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DeleteLight_Response__rosidl_typesupport_introspection_c__DeleteLight_Response_message_type_support_handle = {
  0,
  &DeleteLight_Response__rosidl_typesupport_introspection_c__DeleteLight_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, DeleteLight_Response)() {
  if (!DeleteLight_Response__rosidl_typesupport_introspection_c__DeleteLight_Response_message_type_support_handle.typesupport_identifier) {
    DeleteLight_Response__rosidl_typesupport_introspection_c__DeleteLight_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DeleteLight_Response__rosidl_typesupport_introspection_c__DeleteLight_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gazebo_msgs/srv/delete_light__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gazebo_msgs__srv__delete_light__rosidl_typesupport_introspection_c__DeleteLight_service_members = {
  "gazebo_msgs__srv",  // service namespace
  "DeleteLight",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gazebo_msgs__srv__delete_light__rosidl_typesupport_introspection_c__DeleteLight_Request_message_type_support_handle,
  NULL  // response message
  // gazebo_msgs__srv__delete_light__rosidl_typesupport_introspection_c__DeleteLight_Response_message_type_support_handle
};

static rosidl_service_type_support_t gazebo_msgs__srv__delete_light__rosidl_typesupport_introspection_c__DeleteLight_service_type_support_handle = {
  0,
  &gazebo_msgs__srv__delete_light__rosidl_typesupport_introspection_c__DeleteLight_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, DeleteLight_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, DeleteLight_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, DeleteLight)() {
  if (!gazebo_msgs__srv__delete_light__rosidl_typesupport_introspection_c__DeleteLight_service_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__delete_light__rosidl_typesupport_introspection_c__DeleteLight_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gazebo_msgs__srv__delete_light__rosidl_typesupport_introspection_c__DeleteLight_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, DeleteLight_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, DeleteLight_Response)()->data;
  }

  return &gazebo_msgs__srv__delete_light__rosidl_typesupport_introspection_c__DeleteLight_service_type_support_handle;
}
