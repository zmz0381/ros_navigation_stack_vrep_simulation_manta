// Generated by gencpp from file dbw_mkz_msgs/SurroundReport.msg
// DO NOT EDIT!


#ifndef DBW_MKZ_MSGS_MESSAGE_SURROUNDREPORT_H
#define DBW_MKZ_MSGS_MESSAGE_SURROUNDREPORT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace dbw_mkz_msgs
{
template <class ContainerAllocator>
struct SurroundReport_
{
  typedef SurroundReport_<ContainerAllocator> Type;

  SurroundReport_()
    : header()
    , cta_left_alert(false)
    , cta_right_alert(false)
    , cta_left_enabled(false)
    , cta_right_enabled(false)
    , blis_left_alert(false)
    , blis_right_alert(false)
    , blis_left_enabled(false)
    , blis_right_enabled(false)
    , sonar_enabled(false)
    , sonar_fault(false)
    , sonar()  {
      sonar.assign(0.0);
  }
  SurroundReport_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cta_left_alert(false)
    , cta_right_alert(false)
    , cta_left_enabled(false)
    , cta_right_enabled(false)
    , blis_left_alert(false)
    , blis_right_alert(false)
    , blis_left_enabled(false)
    , blis_right_enabled(false)
    , sonar_enabled(false)
    , sonar_fault(false)
    , sonar()  {
  (void)_alloc;
      sonar.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _cta_left_alert_type;
  _cta_left_alert_type cta_left_alert;

   typedef uint8_t _cta_right_alert_type;
  _cta_right_alert_type cta_right_alert;

   typedef uint8_t _cta_left_enabled_type;
  _cta_left_enabled_type cta_left_enabled;

   typedef uint8_t _cta_right_enabled_type;
  _cta_right_enabled_type cta_right_enabled;

   typedef uint8_t _blis_left_alert_type;
  _blis_left_alert_type blis_left_alert;

   typedef uint8_t _blis_right_alert_type;
  _blis_right_alert_type blis_right_alert;

   typedef uint8_t _blis_left_enabled_type;
  _blis_left_enabled_type blis_left_enabled;

   typedef uint8_t _blis_right_enabled_type;
  _blis_right_enabled_type blis_right_enabled;

   typedef uint8_t _sonar_enabled_type;
  _sonar_enabled_type sonar_enabled;

   typedef uint8_t _sonar_fault_type;
  _sonar_fault_type sonar_fault;

   typedef boost::array<float, 12>  _sonar_type;
  _sonar_type sonar;



  enum {
    FRONT_LEFT_SIDE = 0u,
    FRONT_LEFT_CORNER = 1u,
    FRONT_LEFT_CENTER = 2u,
    FRONT_RIGHT_CENTER = 3u,
    FRONT_RIGHT_CORNER = 4u,
    FRONT_RIGHT_SIDE = 5u,
    REAR_LEFT_SIDE = 6u,
    REAR_LEFT_CORNER = 7u,
    REAR_LEFT_CENTER = 8u,
    REAR_RIGHT_CENTER = 9u,
    REAR_RIGHT_CORNER = 10u,
    REAR_RIGHT_SIDE = 11u,
  };


  typedef boost::shared_ptr< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> const> ConstPtr;

}; // struct SurroundReport_

typedef ::dbw_mkz_msgs::SurroundReport_<std::allocator<void> > SurroundReport;

typedef boost::shared_ptr< ::dbw_mkz_msgs::SurroundReport > SurroundReportPtr;
typedef boost::shared_ptr< ::dbw_mkz_msgs::SurroundReport const> SurroundReportConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dbw_mkz_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'dbw_mkz_msgs': ['/home/sundong/Exploring/localplanning/ros_navigation_stack_vrep_simulation/vrep_ws/src/ivrc_msg/dbw_mkz_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "17a8c9ed72da4f55d44d6d71483cf0e3";
  }

  static const char* value(const ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x17a8c9ed72da4f55ULL;
  static const uint64_t static_value2 = 0xd44d6d71483cf0e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbw_mkz_msgs/SurroundReport";
  }

  static const char* value(const ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# Cross Traffic Alert (CTA)\n\
bool cta_left_alert\n\
bool cta_right_alert\n\
bool cta_left_enabled\n\
bool cta_right_enabled\n\
\n\
# Blind Spot Information System (BLIS)\n\
bool blis_left_alert\n\
bool blis_right_alert\n\
bool blis_left_enabled\n\
bool blis_right_enabled\n\
\n\
# Sonar Sensors\n\
bool sonar_enabled\n\
bool sonar_fault\n\
\n\
# Sonar ranges in meters, zero is no-detection\n\
float32[12] sonar\n\
\n\
# Sonar index enumeration\n\
uint8 FRONT_LEFT_SIDE=0\n\
uint8 FRONT_LEFT_CORNER=1\n\
uint8 FRONT_LEFT_CENTER=2\n\
uint8 FRONT_RIGHT_CENTER=3\n\
uint8 FRONT_RIGHT_CORNER=4\n\
uint8 FRONT_RIGHT_SIDE=5\n\
uint8 REAR_LEFT_SIDE=6\n\
uint8 REAR_LEFT_CORNER=7\n\
uint8 REAR_LEFT_CENTER=8\n\
uint8 REAR_RIGHT_CENTER=9\n\
uint8 REAR_RIGHT_CORNER=10\n\
uint8 REAR_RIGHT_SIDE=11\n\
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

  static const char* value(const ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cta_left_alert);
      stream.next(m.cta_right_alert);
      stream.next(m.cta_left_enabled);
      stream.next(m.cta_right_enabled);
      stream.next(m.blis_left_alert);
      stream.next(m.blis_right_alert);
      stream.next(m.blis_left_enabled);
      stream.next(m.blis_right_enabled);
      stream.next(m.sonar_enabled);
      stream.next(m.sonar_fault);
      stream.next(m.sonar);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SurroundReport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dbw_mkz_msgs::SurroundReport_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cta_left_alert: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cta_left_alert);
    s << indent << "cta_right_alert: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cta_right_alert);
    s << indent << "cta_left_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cta_left_enabled);
    s << indent << "cta_right_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cta_right_enabled);
    s << indent << "blis_left_alert: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.blis_left_alert);
    s << indent << "blis_right_alert: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.blis_right_alert);
    s << indent << "blis_left_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.blis_left_enabled);
    s << indent << "blis_right_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.blis_right_enabled);
    s << indent << "sonar_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sonar_enabled);
    s << indent << "sonar_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sonar_fault);
    s << indent << "sonar[]" << std::endl;
    for (size_t i = 0; i < v.sonar.size(); ++i)
    {
      s << indent << "  sonar[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.sonar[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DBW_MKZ_MSGS_MESSAGE_SURROUNDREPORT_H
