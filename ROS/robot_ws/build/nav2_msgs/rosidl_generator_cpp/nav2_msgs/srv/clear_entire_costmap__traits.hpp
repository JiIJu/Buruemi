// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/ClearEntireCostmap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__CLEAR_ENTIRE_COSTMAP__TRAITS_HPP_
#define NAV2_MSGS__SRV__CLEAR_ENTIRE_COSTMAP__TRAITS_HPP_

#include "nav2_msgs/srv/clear_entire_costmap__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'request'
#include "std_msgs/msg/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ClearEntireCostmap_Request>()
{
  return "nav2_msgs::srv::ClearEntireCostmap_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ClearEntireCostmap_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<nav2_msgs::srv::ClearEntireCostmap_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'response'
// already included above
// #include "std_msgs/msg/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ClearEntireCostmap_Response>()
{
  return "nav2_msgs::srv::ClearEntireCostmap_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ClearEntireCostmap_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<nav2_msgs::srv::ClearEntireCostmap_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ClearEntireCostmap>()
{
  return "nav2_msgs::srv::ClearEntireCostmap";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ClearEntireCostmap>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::ClearEntireCostmap_Request>::value &&
    has_fixed_size<nav2_msgs::srv::ClearEntireCostmap_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::ClearEntireCostmap>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::ClearEntireCostmap_Request>::value &&
    has_bounded_size<nav2_msgs::srv::ClearEntireCostmap_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__CLEAR_ENTIRE_COSTMAP__TRAITS_HPP_
