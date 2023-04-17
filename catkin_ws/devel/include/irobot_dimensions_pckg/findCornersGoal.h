// Generated by gencpp from file irobot_dimensions_pckg/findCornersGoal.msg
// DO NOT EDIT!


#ifndef IROBOT_DIMENSIONS_PCKG_MESSAGE_FINDCORNERSGOAL_H
#define IROBOT_DIMENSIONS_PCKG_MESSAGE_FINDCORNERSGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace irobot_dimensions_pckg
{
template <class ContainerAllocator>
struct findCornersGoal_
{
  typedef findCornersGoal_<ContainerAllocator> Type;

  findCornersGoal_()
    : folder_path()  {
    }
  findCornersGoal_(const ContainerAllocator& _alloc)
    : folder_path(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _folder_path_type;
  _folder_path_type folder_path;





  typedef boost::shared_ptr< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> const> ConstPtr;

}; // struct findCornersGoal_

typedef ::irobot_dimensions_pckg::findCornersGoal_<std::allocator<void> > findCornersGoal;

typedef boost::shared_ptr< ::irobot_dimensions_pckg::findCornersGoal > findCornersGoalPtr;
typedef boost::shared_ptr< ::irobot_dimensions_pckg::findCornersGoal const> findCornersGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace irobot_dimensions_pckg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'irobot_dimensions_pckg': ['/home/irobot/catkin_ws/src/irobot_dimensions_pckg/msg', '/home/irobot/catkin_ws/devel/share/irobot_dimensions_pckg/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg', '/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7e3638c220b0d90e6c19901c22f34e46";
  }

  static const char* value(const ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7e3638c220b0d90eULL;
  static const uint64_t static_value2 = 0x6c19901c22f34e46ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobot_dimensions_pckg/findCornersGoal";
  }

  static const char* value(const ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
std_msgs/String folder_path\n\
#int32 images_number\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.folder_path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct findCornersGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::irobot_dimensions_pckg::findCornersGoal_<ContainerAllocator>& v)
  {
    s << indent << "folder_path: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.folder_path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IROBOT_DIMENSIONS_PCKG_MESSAGE_FINDCORNERSGOAL_H
