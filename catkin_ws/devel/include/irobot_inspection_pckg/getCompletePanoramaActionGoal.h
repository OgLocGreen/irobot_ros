// Generated by gencpp from file irobot_inspection_pckg/getCompletePanoramaActionGoal.msg
// DO NOT EDIT!


#ifndef IROBOT_INSPECTION_PCKG_MESSAGE_GETCOMPLETEPANORAMAACTIONGOAL_H
#define IROBOT_INSPECTION_PCKG_MESSAGE_GETCOMPLETEPANORAMAACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <irobot_inspection_pckg/getCompletePanoramaGoal.h>

namespace irobot_inspection_pckg
{
template <class ContainerAllocator>
struct getCompletePanoramaActionGoal_
{
  typedef getCompletePanoramaActionGoal_<ContainerAllocator> Type;

  getCompletePanoramaActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  getCompletePanoramaActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::irobot_inspection_pckg::getCompletePanoramaGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct getCompletePanoramaActionGoal_

typedef ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<std::allocator<void> > getCompletePanoramaActionGoal;

typedef boost::shared_ptr< ::irobot_inspection_pckg::getCompletePanoramaActionGoal > getCompletePanoramaActionGoalPtr;
typedef boost::shared_ptr< ::irobot_inspection_pckg::getCompletePanoramaActionGoal const> getCompletePanoramaActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace irobot_inspection_pckg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg', '/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'irobot_inspection_pckg': ['/home/irobot/catkin_ws/src/irobot_inspection_pckg/msg', '/home/irobot/catkin_ws/devel/share/irobot_inspection_pckg/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aba6ef25cb675e4a3f30f14d754f2cbe";
  }

  static const char* value(const ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaba6ef25cb675e4aULL;
  static const uint64_t static_value2 = 0x3f30f14d754f2cbeULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobot_inspection_pckg/getCompletePanoramaActionGoal";
  }

  static const char* value(const ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
getCompletePanoramaGoal goal\n\
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
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: irobot_inspection_pckg/getCompletePanoramaGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
std_msgs/String folder_pano_path\n\
int32 images_number\n\
std_msgs/String name_0\n\
std_msgs/String name_180\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct getCompletePanoramaActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::irobot_inspection_pckg::getCompletePanoramaActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::irobot_inspection_pckg::getCompletePanoramaGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IROBOT_INSPECTION_PCKG_MESSAGE_GETCOMPLETEPANORAMAACTIONGOAL_H
