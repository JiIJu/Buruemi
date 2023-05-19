// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/ApplyBodyWrench.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__APPLY_BODY_WRENCH__FUNCTIONS_H_
#define GAZEBO_MSGS__SRV__APPLY_BODY_WRENCH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "gazebo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gazebo_msgs/srv/apply_body_wrench__struct.h"

/// Initialize srv/ApplyBodyWrench message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gazebo_msgs__srv__ApplyBodyWrench_Request
 * )) before or use
 * gazebo_msgs__srv__ApplyBodyWrench_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__srv__ApplyBodyWrench_Request__init(gazebo_msgs__srv__ApplyBodyWrench_Request * msg);

/// Finalize srv/ApplyBodyWrench message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__ApplyBodyWrench_Request__fini(gazebo_msgs__srv__ApplyBodyWrench_Request * msg);

/// Create srv/ApplyBodyWrench message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gazebo_msgs__srv__ApplyBodyWrench_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__srv__ApplyBodyWrench_Request *
gazebo_msgs__srv__ApplyBodyWrench_Request__create();

/// Destroy srv/ApplyBodyWrench message.
/**
 * It calls
 * gazebo_msgs__srv__ApplyBodyWrench_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__ApplyBodyWrench_Request__destroy(gazebo_msgs__srv__ApplyBodyWrench_Request * msg);


/// Initialize array of srv/ApplyBodyWrench messages.
/**
 * It allocates the memory for the number of elements and calls
 * gazebo_msgs__srv__ApplyBodyWrench_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence__init(gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence * array, size_t size);

/// Finalize array of srv/ApplyBodyWrench messages.
/**
 * It calls
 * gazebo_msgs__srv__ApplyBodyWrench_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence__fini(gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence * array);

/// Create array of srv/ApplyBodyWrench messages.
/**
 * It allocates the memory for the array and calls
 * gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence *
gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence__create(size_t size);

/// Destroy array of srv/ApplyBodyWrench messages.
/**
 * It calls
 * gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence__destroy(gazebo_msgs__srv__ApplyBodyWrench_Request__Sequence * array);

/// Initialize srv/ApplyBodyWrench message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gazebo_msgs__srv__ApplyBodyWrench_Response
 * )) before or use
 * gazebo_msgs__srv__ApplyBodyWrench_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__srv__ApplyBodyWrench_Response__init(gazebo_msgs__srv__ApplyBodyWrench_Response * msg);

/// Finalize srv/ApplyBodyWrench message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__ApplyBodyWrench_Response__fini(gazebo_msgs__srv__ApplyBodyWrench_Response * msg);

/// Create srv/ApplyBodyWrench message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gazebo_msgs__srv__ApplyBodyWrench_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__srv__ApplyBodyWrench_Response *
gazebo_msgs__srv__ApplyBodyWrench_Response__create();

/// Destroy srv/ApplyBodyWrench message.
/**
 * It calls
 * gazebo_msgs__srv__ApplyBodyWrench_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__ApplyBodyWrench_Response__destroy(gazebo_msgs__srv__ApplyBodyWrench_Response * msg);


/// Initialize array of srv/ApplyBodyWrench messages.
/**
 * It allocates the memory for the number of elements and calls
 * gazebo_msgs__srv__ApplyBodyWrench_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence__init(gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence * array, size_t size);

/// Finalize array of srv/ApplyBodyWrench messages.
/**
 * It calls
 * gazebo_msgs__srv__ApplyBodyWrench_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence__fini(gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence * array);

/// Create array of srv/ApplyBodyWrench messages.
/**
 * It allocates the memory for the array and calls
 * gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence *
gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence__create(size_t size);

/// Destroy array of srv/ApplyBodyWrench messages.
/**
 * It calls
 * gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence__destroy(gazebo_msgs__srv__ApplyBodyWrench_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__APPLY_BODY_WRENCH__FUNCTIONS_H_
