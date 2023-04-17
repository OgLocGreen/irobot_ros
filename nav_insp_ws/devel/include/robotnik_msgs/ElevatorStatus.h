// Generated by gencpp from file robotnik_msgs/ElevatorStatus.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_ELEVATORSTATUS_H
#define ROBOTNIK_MSGS_MESSAGE_ELEVATORSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_msgs
{
template <class ContainerAllocator>
struct ElevatorStatus_
{
  typedef ElevatorStatus_<ContainerAllocator> Type;

  ElevatorStatus_()
    : state()
    , position()
    , height(0.0)  {
    }
  ElevatorStatus_(const ContainerAllocator& _alloc)
    : state(_alloc)
    , position(_alloc)
    , height(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _position_type;
  _position_type position;

   typedef float _height_type;
  _height_type height;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  RAISING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  LOWERING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  IDLE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ERROR_G_IO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ERROR_S_IO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ERROR_TIMEOUT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  UP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  UNKNOWN;

  typedef boost::shared_ptr< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ElevatorStatus_

typedef ::robotnik_msgs::ElevatorStatus_<std::allocator<void> > ElevatorStatus;

typedef boost::shared_ptr< ::robotnik_msgs::ElevatorStatus > ElevatorStatusPtr;
typedef boost::shared_ptr< ::robotnik_msgs::ElevatorStatus const> ElevatorStatusConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ElevatorStatus_<ContainerAllocator>::RAISING =
        
          "raising"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ElevatorStatus_<ContainerAllocator>::LOWERING =
        
          "lowering"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ElevatorStatus_<ContainerAllocator>::IDLE =
        
          "idle"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ElevatorStatus_<ContainerAllocator>::ERROR_G_IO =
        
          "error_getting_io"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ElevatorStatus_<ContainerAllocator>::ERROR_S_IO =
        
          "error_setting_io"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ElevatorStatus_<ContainerAllocator>::ERROR_TIMEOUT =
        
          "error_timeout_in_action"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ElevatorStatus_<ContainerAllocator>::UP =
        
          "up"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ElevatorStatus_<ContainerAllocator>::DOWN =
        
          "down"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ElevatorStatus_<ContainerAllocator>::UNKNOWN =
        
          "unknown"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'robotnik_msgs': ['/home/irobot/nav_insp_ws/src/simulation/robotnik_msgs/msg', '/home/irobot/nav_insp_ws/devel/share/robotnik_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4718bff9866c729031e595e6565fdb82";
  }

  static const char* value(const ::robotnik_msgs::ElevatorStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4718bff9866c7290ULL;
  static const uint64_t static_value2 = 0x31e595e6565fdb82ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/ElevatorStatus";
  }

  static const char* value(const ::robotnik_msgs::ElevatorStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# state\n\
string RAISING=raising\n\
string LOWERING=lowering\n\
string IDLE=idle\n\
string ERROR_G_IO=error_getting_io\n\
string ERROR_S_IO=error_setting_io\n\
string ERROR_TIMEOUT=error_timeout_in_action\n\
# position\n\
string UP=up\n\
string DOWN=down\n\
string UNKNOWN=unknown\n\
# IDLE, RAISING, LOWERING\n\
string state\n\
# UP, DOWN, UNKNOWN\n\
string position\n\
float32 height\n\
";
  }

  static const char* value(const ::robotnik_msgs::ElevatorStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
      stream.next(m.position);
      stream.next(m.height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ElevatorStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::ElevatorStatus_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
    s << indent << "position: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.position);
    s << indent << "height: ";
    Printer<float>::stream(s, indent + "  ", v.height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_ELEVATORSTATUS_H
