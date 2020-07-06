// Generated by gencpp from file dbw_mkz_msgs/WatchdogCounter.msg
// DO NOT EDIT!


#ifndef DBW_MKZ_MSGS_MESSAGE_WATCHDOGCOUNTER_H
#define DBW_MKZ_MSGS_MESSAGE_WATCHDOGCOUNTER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dbw_mkz_msgs
{
template <class ContainerAllocator>
struct WatchdogCounter_
{
  typedef WatchdogCounter_<ContainerAllocator> Type;

  WatchdogCounter_()
    : source(0)  {
    }
  WatchdogCounter_(const ContainerAllocator& _alloc)
    : source(0)  {
  (void)_alloc;
    }



   typedef uint8_t _source_type;
  _source_type source;



  enum {
    NONE = 0u,
    OTHER_BRAKE = 1u,
    OTHER_THROTTLE = 2u,
    OTHER_STEERING = 3u,
    BRAKE_COUNTER = 4u,
    BRAKE_DISABLED = 5u,
    BRAKE_COMMAND = 6u,
    BRAKE_REPORT = 7u,
    THROTTLE_COUNTER = 8u,
    THROTTLE_DISABLED = 9u,
    THROTTLE_COMMAND = 10u,
    THROTTLE_REPORT = 11u,
    STEERING_COUNTER = 12u,
    STEERING_DISABLED = 13u,
    STEERING_COMMAND = 14u,
    STEERING_REPORT = 15u,
  };


  typedef boost::shared_ptr< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> const> ConstPtr;

}; // struct WatchdogCounter_

typedef ::dbw_mkz_msgs::WatchdogCounter_<std::allocator<void> > WatchdogCounter;

typedef boost::shared_ptr< ::dbw_mkz_msgs::WatchdogCounter > WatchdogCounterPtr;
typedef boost::shared_ptr< ::dbw_mkz_msgs::WatchdogCounter const> WatchdogCounterConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dbw_mkz_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'dbw_mkz_msgs': ['/home/sundong/Exploring/localplanning/ros_navigation_stack_vrep_simulation/vrep_ws/src/ivrc_msg/dbw_mkz_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "49446aafd000e473e340dfb1d38eeb50";
  }

  static const char* value(const ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x49446aafd000e473ULL;
  static const uint64_t static_value2 = 0xe340dfb1d38eeb50ULL;
};

template<class ContainerAllocator>
struct DataType< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbw_mkz_msgs/WatchdogCounter";
  }

  static const char* value(const ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 source\n\
\n\
uint8 NONE=0               # No source for watchdog counter fault\n\
uint8 OTHER_BRAKE=1        # Fault determined by brake controller\n\
uint8 OTHER_THROTTLE=2     # Fault determined by throttle controller\n\
uint8 OTHER_STEERING=3     # Fault determined by steering controller\n\
uint8 BRAKE_COUNTER=4      # Brake command counter failed to increment\n\
uint8 BRAKE_DISABLED=5     # Brake transition to disabled while in gear or moving\n\
uint8 BRAKE_COMMAND=6      # Brake command timeout after 100ms\n\
uint8 BRAKE_REPORT=7       # Brake report timeout after 100ms\n\
uint8 THROTTLE_COUNTER=8   # Throttle command counter failed to increment\n\
uint8 THROTTLE_DISABLED=9  # Throttle transition to disabled while in gear or moving\n\
uint8 THROTTLE_COMMAND=10  # Throttle command timeout after 100ms\n\
uint8 THROTTLE_REPORT=11   # Throttle report timeout after 100ms\n\
uint8 STEERING_COUNTER=12  # Steering command counter failed to increment\n\
uint8 STEERING_DISABLED=13 # Steering transition to disabled while in gear or moving\n\
uint8 STEERING_COMMAND=14  # Steering command timeout after 100ms\n\
uint8 STEERING_REPORT=15   # Steering report timeout after 100ms\n\
";
  }

  static const char* value(const ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.source);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WatchdogCounter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dbw_mkz_msgs::WatchdogCounter_<ContainerAllocator>& v)
  {
    s << indent << "source: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.source);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DBW_MKZ_MSGS_MESSAGE_WATCHDOGCOUNTER_H
