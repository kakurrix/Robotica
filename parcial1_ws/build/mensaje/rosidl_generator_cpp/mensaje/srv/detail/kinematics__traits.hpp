// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mensaje:srv/Kinematics.idl
// generated code does not contain a copyright notice

#ifndef MENSAJE__SRV__DETAIL__KINEMATICS__TRAITS_HPP_
#define MENSAJE__SRV__DETAIL__KINEMATICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mensaje/srv/detail/kinematics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mensaje
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kinematics_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: theta1
  {
    out << "theta1: ";
    rosidl_generator_traits::value_to_yaml(msg.theta1, out);
    out << ", ";
  }

  // member: theta2
  {
    out << "theta2: ";
    rosidl_generator_traits::value_to_yaml(msg.theta2, out);
    out << ", ";
  }

  // member: theta3
  {
    out << "theta3: ";
    rosidl_generator_traits::value_to_yaml(msg.theta3, out);
    out << ", ";
  }

  // member: theta4
  {
    out << "theta4: ";
    rosidl_generator_traits::value_to_yaml(msg.theta4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: theta1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta1: ";
    rosidl_generator_traits::value_to_yaml(msg.theta1, out);
    out << "\n";
  }

  // member: theta2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta2: ";
    rosidl_generator_traits::value_to_yaml(msg.theta2, out);
    out << "\n";
  }

  // member: theta3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta3: ";
    rosidl_generator_traits::value_to_yaml(msg.theta3, out);
    out << "\n";
  }

  // member: theta4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta4: ";
    rosidl_generator_traits::value_to_yaml(msg.theta4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kinematics_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mensaje

namespace rosidl_generator_traits
{

[[deprecated("use mensaje::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mensaje::srv::Kinematics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mensaje::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mensaje::srv::to_yaml() instead")]]
inline std::string to_yaml(const mensaje::srv::Kinematics_Request & msg)
{
  return mensaje::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mensaje::srv::Kinematics_Request>()
{
  return "mensaje::srv::Kinematics_Request";
}

template<>
inline const char * name<mensaje::srv::Kinematics_Request>()
{
  return "mensaje/srv/Kinematics_Request";
}

template<>
struct has_fixed_size<mensaje::srv::Kinematics_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mensaje::srv::Kinematics_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mensaje::srv::Kinematics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace mensaje
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kinematics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kinematics_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mensaje

namespace rosidl_generator_traits
{

[[deprecated("use mensaje::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mensaje::srv::Kinematics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mensaje::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mensaje::srv::to_yaml() instead")]]
inline std::string to_yaml(const mensaje::srv::Kinematics_Response & msg)
{
  return mensaje::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mensaje::srv::Kinematics_Response>()
{
  return "mensaje::srv::Kinematics_Response";
}

template<>
inline const char * name<mensaje::srv::Kinematics_Response>()
{
  return "mensaje/srv/Kinematics_Response";
}

template<>
struct has_fixed_size<mensaje::srv::Kinematics_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<mensaje::srv::Kinematics_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<mensaje::srv::Kinematics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mensaje::srv::Kinematics>()
{
  return "mensaje::srv::Kinematics";
}

template<>
inline const char * name<mensaje::srv::Kinematics>()
{
  return "mensaje/srv/Kinematics";
}

template<>
struct has_fixed_size<mensaje::srv::Kinematics>
  : std::integral_constant<
    bool,
    has_fixed_size<mensaje::srv::Kinematics_Request>::value &&
    has_fixed_size<mensaje::srv::Kinematics_Response>::value
  >
{
};

template<>
struct has_bounded_size<mensaje::srv::Kinematics>
  : std::integral_constant<
    bool,
    has_bounded_size<mensaje::srv::Kinematics_Request>::value &&
    has_bounded_size<mensaje::srv::Kinematics_Response>::value
  >
{
};

template<>
struct is_service<mensaje::srv::Kinematics>
  : std::true_type
{
};

template<>
struct is_service_request<mensaje::srv::Kinematics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mensaje::srv::Kinematics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MENSAJE__SRV__DETAIL__KINEMATICS__TRAITS_HPP_
