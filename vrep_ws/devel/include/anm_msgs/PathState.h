// Generated by gencpp from file anm_msgs/PathState.msg
// DO NOT EDIT!


#ifndef ANM_MSGS_MESSAGE_PATHSTATE_H
#define ANM_MSGS_MESSAGE_PATHSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace anm_msgs
{
template <class ContainerAllocator>
struct PathState_
{
  typedef PathState_<ContainerAllocator> Type;

  PathState_()
    : x(0.0)
    , y(0.0)
    , theta(0.0)
    , k(0.0)
    , s(0.0)  {
    }
  PathState_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , theta(0.0)
    , k(0.0)
    , s(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _theta_type;
  _theta_type theta;

   typedef double _k_type;
  _k_type k;

   typedef double _s_type;
  _s_type s;





  typedef boost::shared_ptr< ::anm_msgs::PathState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::anm_msgs::PathState_<ContainerAllocator> const> ConstPtr;

}; // struct PathState_

typedef ::anm_msgs::PathState_<std::allocator<void> > PathState;

typedef boost::shared_ptr< ::anm_msgs::PathState > PathStatePtr;
typedef boost::shared_ptr< ::anm_msgs::PathState const> PathStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::anm_msgs::PathState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::anm_msgs::PathState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace anm_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'dbw_mkz_msgs': ['/home/sundong/Exploring/localplanning/ros_navigation_stack_vrep_simulation/vrep_ws/src/ivrc_msg/dbw_mkz_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'anm_msgs': ['/home/sundong/Exploring/localplanning/ros_navigation_stack_vrep_simulation/vrep_ws/src/ivrc_msg/anm_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::anm_msgs::PathState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::anm_msgs::PathState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::anm_msgs::PathState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::anm_msgs::PathState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::anm_msgs::PathState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::anm_msgs::PathState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::anm_msgs::PathState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f01869787c5fbeca1214c9d0f162135";
  }

  static const char* value(const ::anm_msgs::PathState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f01869787c5fbecULL;
  static const uint64_t static_value2 = 0xa1214c9d0f162135ULL;
};

template<class ContainerAllocator>
struct DataType< ::anm_msgs::PathState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "anm_msgs/PathState";
  }

  static const char* value(const ::anm_msgs::PathState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::anm_msgs::PathState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message defines a position along a spiral curve\n\
#\n\
# x = x position in global frame (meters)\n\
# y = y position in global frame (meters)\n\
# theta = angle of curve tangent at position x, y (radians)\n\
# k = curvature of curve at position x, y (1/meters)\n\
# s = length in along (meters)\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
float64 k\n\
float64 s\n\
";
  }

  static const char* value(const ::anm_msgs::PathState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::anm_msgs::PathState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
      stream.next(m.k);
      stream.next(m.s);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PathState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::anm_msgs::PathState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::anm_msgs::PathState_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<double>::stream(s, indent + "  ", v.theta);
    s << indent << "k: ";
    Printer<double>::stream(s, indent + "  ", v.k);
    s << indent << "s: ";
    Printer<double>::stream(s, indent + "  ", v.s);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ANM_MSGS_MESSAGE_PATHSTATE_H
