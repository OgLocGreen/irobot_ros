// Generated by gencpp from file irobot_fcpp_simul/ComputeDefectsDecompGoal.msg
// DO NOT EDIT!


#ifndef IROBOT_FCPP_SIMUL_MESSAGE_COMPUTEDEFECTSDECOMPGOAL_H
#define IROBOT_FCPP_SIMUL_MESSAGE_COMPUTEDEFECTSDECOMPGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Polygon.h>
#include <geometry_msgs/Polygon.h>
#include <geometry_msgs/Polygon.h>
#include <geometry_msgs/Polygon.h>
#include <geometry_msgs/Polygon.h>

namespace irobot_fcpp_simul
{
template <class ContainerAllocator>
struct ComputeDefectsDecompGoal_
{
  typedef ComputeDefectsDecompGoal_<ContainerAllocator> Type;

  ComputeDefectsDecompGoal_()
    : chapa_id(0)
    , poly_defect()
    , zone0()
    , zone90()
    , zone180()
    , zone270()
    , xmax(0.0)
    , ymax(0.0)  {
    }
  ComputeDefectsDecompGoal_(const ContainerAllocator& _alloc)
    : chapa_id(0)
    , poly_defect(_alloc)
    , zone0(_alloc)
    , zone90(_alloc)
    , zone180(_alloc)
    , zone270(_alloc)
    , xmax(0.0)
    , ymax(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _chapa_id_type;
  _chapa_id_type chapa_id;

   typedef  ::geometry_msgs::Polygon_<ContainerAllocator>  _poly_defect_type;
  _poly_defect_type poly_defect;

   typedef  ::geometry_msgs::Polygon_<ContainerAllocator>  _zone0_type;
  _zone0_type zone0;

   typedef  ::geometry_msgs::Polygon_<ContainerAllocator>  _zone90_type;
  _zone90_type zone90;

   typedef  ::geometry_msgs::Polygon_<ContainerAllocator>  _zone180_type;
  _zone180_type zone180;

   typedef  ::geometry_msgs::Polygon_<ContainerAllocator>  _zone270_type;
  _zone270_type zone270;

   typedef float _xmax_type;
  _xmax_type xmax;

   typedef float _ymax_type;
  _ymax_type ymax;





  typedef boost::shared_ptr< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ComputeDefectsDecompGoal_

typedef ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<std::allocator<void> > ComputeDefectsDecompGoal;

typedef boost::shared_ptr< ::irobot_fcpp_simul::ComputeDefectsDecompGoal > ComputeDefectsDecompGoalPtr;
typedef boost::shared_ptr< ::irobot_fcpp_simul::ComputeDefectsDecompGoal const> ComputeDefectsDecompGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace irobot_fcpp_simul

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg', '/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'irobot_fcpp_simul': ['/home/irobot/catkin_ws/src/irobot_fcpp_simul/msg', '/home/irobot/catkin_ws/devel/share/irobot_fcpp_simul/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "100a9f9d0c5c91d1ec171cccc3fdc2c8";
  }

  static const char* value(const ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x100a9f9d0c5c91d1ULL;
  static const uint64_t static_value2 = 0xec171cccc3fdc2c8ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "irobot_fcpp_simul/ComputeDefectsDecompGoal";
  }

  static const char* value(const ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
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

  static const char* value(const ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.chapa_id);
      stream.next(m.poly_defect);
      stream.next(m.zone0);
      stream.next(m.zone90);
      stream.next(m.zone180);
      stream.next(m.zone270);
      stream.next(m.xmax);
      stream.next(m.ymax);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComputeDefectsDecompGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::irobot_fcpp_simul::ComputeDefectsDecompGoal_<ContainerAllocator>& v)
  {
    s << indent << "chapa_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.chapa_id);
    s << indent << "poly_defect: ";
    s << std::endl;
    Printer< ::geometry_msgs::Polygon_<ContainerAllocator> >::stream(s, indent + "  ", v.poly_defect);
    s << indent << "zone0: ";
    s << std::endl;
    Printer< ::geometry_msgs::Polygon_<ContainerAllocator> >::stream(s, indent + "  ", v.zone0);
    s << indent << "zone90: ";
    s << std::endl;
    Printer< ::geometry_msgs::Polygon_<ContainerAllocator> >::stream(s, indent + "  ", v.zone90);
    s << indent << "zone180: ";
    s << std::endl;
    Printer< ::geometry_msgs::Polygon_<ContainerAllocator> >::stream(s, indent + "  ", v.zone180);
    s << indent << "zone270: ";
    s << std::endl;
    Printer< ::geometry_msgs::Polygon_<ContainerAllocator> >::stream(s, indent + "  ", v.zone270);
    s << indent << "xmax: ";
    Printer<float>::stream(s, indent + "  ", v.xmax);
    s << indent << "ymax: ";
    Printer<float>::stream(s, indent + "  ", v.ymax);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IROBOT_FCPP_SIMUL_MESSAGE_COMPUTEDEFECTSDECOMPGOAL_H
