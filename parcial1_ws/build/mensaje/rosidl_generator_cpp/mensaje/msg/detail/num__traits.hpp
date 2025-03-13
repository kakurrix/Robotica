// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mensaje:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MENSAJE__MSG__DETAIL__NUM__TRAITS_HPP_
#define MENSAJE__MSG__DETAIL__NUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mensaje/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mensaje
{

namespace msg
{

inline void to_flow_style_yaml(
  const Num & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_value
  {
    out << "sensor_value: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_value, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_value: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_value, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Num & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mensaje

namespace rosidl_generator_traits
{

[[deprecated("use mensaje::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mensaje::msg::Num & msg,
  std::ostream & out, size_t indentation = 0)
{
  mensaje::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mensaje::msg::to_yaml() instead")]]
inline std::string to_yaml(const mensaje::msg::Num & msg)
{
  return mensaje::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mensaje::msg::Num>()
{
  return "mensaje::msg::Num";
}

template<>
inline const char * name<mensaje::msg::Num>()
{
  return "mensaje/msg/Num";
}

template<>
struct has_fixed_size<mensaje::msg::Num>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mensaje::msg::Num>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mensaje::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MENSAJE__MSG__DETAIL__NUM__TRAITS_HPP_
