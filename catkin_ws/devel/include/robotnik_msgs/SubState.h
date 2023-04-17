// Generated by gencpp from file robotnik_msgs/SubState.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_SUBSTATE_H
#define ROBOTNIK_MSGS_MESSAGE_SUBSTATE_H


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
struct SubState_
{
  typedef SubState_<ContainerAllocator> Type;

  SubState_()
    : substate(0)
    , substate_description()
    , msg()  {
    }
  SubState_(const ContainerAllocator& _alloc)
    : substate(0)
    , substate_description(_alloc)
    , msg(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _substate_type;
  _substate_type substate;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _substate_description_type;
  _substate_description_type substate_description;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _msg_type;
  _msg_type msg;





  typedef boost::shared_ptr< ::robotnik_msgs::SubState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::SubState_<ContainerAllocator> const> ConstPtr;

}; // struct SubState_

typedef ::robotnik_msgs::SubState_<std::allocator<void> > SubState;

typedef boost::shared_ptr< ::robotnik_msgs::SubState > SubStatePtr;
typedef boost::shared_ptr< ::robotnik_msgs::SubState const> SubStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::SubState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::SubState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::robotnik_msgs::SubState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::SubState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::SubState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::SubState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::SubState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::SubState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::SubState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d67ef59716a56f2892e9ebccd174a9e5";
  }

  static const char* value(const ::robotnik_msgs::SubState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd67ef59716a56f28ULL;
  static const uint64_t static_value2 = 0x92e9ebccd174a9e5ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::SubState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/SubState";
  }

  static const char* value(const ::robotnik_msgs::SubState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::SubState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
# substate of the component\n\
# each component has its own state machines on each state \n\
int32 substate\n\
\n\
# Description of the substate\n\
string substate_description\n\
\n\
# Text message - additional status information\n\
string msg\n\
";
  }

  static const char* value(const ::robotnik_msgs::SubState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::SubState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.substate);
      stream.next(m.substate_description);
      stream.next(m.msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SubState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::SubState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::SubState_<ContainerAllocator>& v)
  {
    s << indent << "substate: ";
    Printer<int32_t>::stream(s, indent + "  ", v.substate);
    s << indent << "substate_description: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.substate_description);
    s << indent << "msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_SUBSTATE_H
