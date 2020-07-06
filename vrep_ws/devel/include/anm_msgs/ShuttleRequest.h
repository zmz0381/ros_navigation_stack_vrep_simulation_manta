// Generated by gencpp from file anm_msgs/ShuttleRequest.msg
// DO NOT EDIT!


#ifndef ANM_MSGS_MESSAGE_SHUTTLEREQUEST_H
#define ANM_MSGS_MESSAGE_SHUTTLEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace anm_msgs
{
template <class ContainerAllocator>
struct ShuttleRequest_
{
  typedef ShuttleRequest_<ContainerAllocator> Type;

  ShuttleRequest_()
    : header()
    , pickup_waypoint()
    , dropoff_waypoint()  {
    }
  ShuttleRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pickup_waypoint(_alloc)
    , dropoff_waypoint(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _pickup_waypoint_type;
  _pickup_waypoint_type pickup_waypoint;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _dropoff_waypoint_type;
  _dropoff_waypoint_type dropoff_waypoint;





  typedef boost::shared_ptr< ::anm_msgs::ShuttleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::anm_msgs::ShuttleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ShuttleRequest_

typedef ::anm_msgs::ShuttleRequest_<std::allocator<void> > ShuttleRequest;

typedef boost::shared_ptr< ::anm_msgs::ShuttleRequest > ShuttleRequestPtr;
typedef boost::shared_ptr< ::anm_msgs::ShuttleRequest const> ShuttleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::anm_msgs::ShuttleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::anm_msgs::ShuttleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace anm_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'dbw_mkz_msgs': ['/home/sundong/Exploring/localplanning/ros_navigation_stack_vrep_simulation/vrep_ws/src/ivrc_msg/dbw_mkz_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'anm_msgs': ['/home/sundong/Exploring/localplanning/ros_navigation_stack_vrep_simulation/vrep_ws/src/ivrc_msg/anm_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::anm_msgs::ShuttleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::anm_msgs::ShuttleRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::anm_msgs::ShuttleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::anm_msgs::ShuttleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::anm_msgs::ShuttleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::anm_msgs::ShuttleRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::anm_msgs::ShuttleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "01e5c9d9c3c1b369563b3402a45ec191";
  }

  static const char* value(const ::anm_msgs::ShuttleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x01e5c9d9c3c1b369ULL;
  static const uint64_t static_value2 = 0x563b3402a45ec191ULL;
};

template<class ContainerAllocator>
struct DataType< ::anm_msgs::ShuttleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "anm_msgs/ShuttleRequest";
  }

  static const char* value(const ::anm_msgs::ShuttleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::anm_msgs::ShuttleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Pickup and dropoff locations for shuttle demo\n\
\n\
Header header\n\
string pickup_waypoint     # name of pickup anm_waypoint\n\
string dropoff_waypoint    # name of dropoff anm_waypoint\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::anm_msgs::ShuttleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::anm_msgs::ShuttleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pickup_waypoint);
      stream.next(m.dropoff_waypoint);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ShuttleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::anm_msgs::ShuttleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::anm_msgs::ShuttleRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pickup_waypoint: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.pickup_waypoint);
    s << indent << "dropoff_waypoint: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.dropoff_waypoint);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ANM_MSGS_MESSAGE_SHUTTLEREQUEST_H
