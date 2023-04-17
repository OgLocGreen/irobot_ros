// Generated by gencpp from file robotnik_msgs/Alarms.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_ALARMS_H
#define ROBOTNIK_MSGS_MESSAGE_ALARMS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <robotnik_msgs/AlarmSensor.h>

namespace robotnik_msgs
{
template <class ContainerAllocator>
struct Alarms_
{
  typedef Alarms_<ContainerAllocator> Type;

  Alarms_()
    : alarms()  {
    }
  Alarms_(const ContainerAllocator& _alloc)
    : alarms(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >::other >  _alarms_type;
  _alarms_type alarms;





  typedef boost::shared_ptr< ::robotnik_msgs::Alarms_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::Alarms_<ContainerAllocator> const> ConstPtr;

}; // struct Alarms_

typedef ::robotnik_msgs::Alarms_<std::allocator<void> > Alarms;

typedef boost::shared_ptr< ::robotnik_msgs::Alarms > AlarmsPtr;
typedef boost::shared_ptr< ::robotnik_msgs::Alarms const> AlarmsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::Alarms_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::Alarms_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'robotnik_msgs': ['/home/irobot/catkin_ws/src/simulacion/robotnik_msgs/msg', '/home/irobot/catkin_ws/devel/share/robotnik_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::Alarms_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::Alarms_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::Alarms_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::Alarms_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::Alarms_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::Alarms_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::Alarms_<ContainerAllocator> >
{
  static const char* value()
  {
    return "83113d787282f31e7cff7eb72a2096c0";
  }

  static const char* value(const ::robotnik_msgs::Alarms_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x83113d787282f31eULL;
  static const uint64_t static_value2 = 0x7cff7eb72a2096c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::Alarms_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/Alarms";
  }

  static const char* value(const ::robotnik_msgs::Alarms_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::Alarms_<ContainerAllocator> >
{
  static const char* value()
  {
    return "AlarmSensor[] alarms\n\
\n\
================================================================================\n\
MSG: robotnik_msgs/AlarmSensor\n\
int8 id\n\
string description\n\
string message\n\
\n\
";
  }

  static const char* value(const ::robotnik_msgs::Alarms_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::Alarms_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.alarms);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Alarms_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::Alarms_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::Alarms_<ContainerAllocator>& v)
  {
    s << indent << "alarms[]" << std::endl;
    for (size_t i = 0; i < v.alarms.size(); ++i)
    {
      s << indent << "  alarms[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::robotnik_msgs::AlarmSensor_<ContainerAllocator> >::stream(s, indent + "    ", v.alarms[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_ALARMS_H