// Generated by gencpp from file irobot_fcpp_simul/ComputeDefectsDecompActionGoal.msg
// DO NOT EDIT!


#ifndef IROBOT_FCPP_SIMUL_MESSAGE_COMPUTEDEFECTSDECOMPACTIONGOAL_H
#define IROBOT_FCPP_SIMUL_MESSAGE_COMPUTEDEFECTSDECOMPACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <irobot_fcpp_simul/ComputeDefectsDecompGoal.h>

namespace irobot_fcpp_simul
{
template <class ContainerAllocator>
struct ComputeDefectsDecompActionGoal_
{
  typedef ComputeDefectsDecompActionGoal_<ContainerAllocator> Type;

  ComputeDefectsDecompActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  ComputeDefectsDecompActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ComputeDefectsDecompActionGoal_

typedef ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<std::allocator<void> > ComputeDefectsDecompActionGoal;

typedef boost::shared_ptr< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal > ComputeDefectsDecompActionGoalPtr;
typedef boost::shared_ptr< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal const> ComputeDefectsDecompActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace irobot_fcpp_simul

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg', '/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'irobot_fcpp_simul': ['/home/irobot/nav_insp_ws/src/inspection/irobot_fcpp_simul/msg', '/home/irobot/nav_insp_ws/devel/share/irobot_fcpp_simul/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8bb587e0fc42ff2d64039578996b988c";
  }

  static const char* value(const ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8bb587e0fc42ff2dULL;
  static const uint64_t static_value2 = 0x64039578996b988cULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobot_fcpp_simul/ComputeDefectsDecompActionGoal";
  }

  static const char* value(const ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
ComputeDefectsDecompGoal goal\n\
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
MSG: irobot_fcpp_simul/ComputeDefectsDecompGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
int32 chapa_id\n\
\n\
geometry_msgs/Polygon poly_defect\n\
\n\
\n\
geometry_msgs/Polygon zone0\n\
geometry_msgs/Polygon zone90\n\
geometry_msgs/Polygon zone180\n\
geometry_msgs/Polygon zone270\n\
\n\
float32 xmax\n\
float32 ymax\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Polygon\n\
#A specification of a polygon where the first and last points are assumed to be connected\n\
Point32[] points\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComputeDefectsDecompActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::irobot_fcpp_simul::ComputeDefectsDecompActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IROBOT_FCPP_SIMUL_MESSAGE_COMPUTEDEFECTSDECOMPACTIONGOAL_H
