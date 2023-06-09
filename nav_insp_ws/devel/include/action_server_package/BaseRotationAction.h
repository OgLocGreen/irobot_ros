// Generated by gencpp from file action_server_package/BaseRotationAction.msg
// DO NOT EDIT!


#ifndef ACTION_SERVER_PACKAGE_MESSAGE_BASEROTATIONACTION_H
#define ACTION_SERVER_PACKAGE_MESSAGE_BASEROTATIONACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <action_server_package/BaseRotationActionGoal.h>
#include <action_server_package/BaseRotationActionResult.h>
#include <action_server_package/BaseRotationActionFeedback.h>

namespace action_server_package
{
template <class ContainerAllocator>
struct BaseRotationAction_
{
  typedef BaseRotationAction_<ContainerAllocator> Type;

  BaseRotationAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  BaseRotationAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::action_server_package::BaseRotationActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::action_server_package::BaseRotationActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::action_server_package::BaseRotationActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::action_server_package::BaseRotationAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::action_server_package::BaseRotationAction_<ContainerAllocator> const> ConstPtr;

}; // struct BaseRotationAction_

typedef ::action_server_package::BaseRotationAction_<std::allocator<void> > BaseRotationAction;

typedef boost::shared_ptr< ::action_server_package::BaseRotationAction > BaseRotationActionPtr;
typedef boost::shared_ptr< ::action_server_package::BaseRotationAction const> BaseRotationActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::action_server_package::BaseRotationAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::action_server_package::BaseRotationAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace action_server_package

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'action_server_package': ['/home/irobot/nav_insp_ws/devel/share/action_server_package/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::action_server_package::BaseRotationAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::action_server_package::BaseRotationAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::action_server_package::BaseRotationAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::action_server_package::BaseRotationAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::action_server_package::BaseRotationAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::action_server_package::BaseRotationAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::action_server_package::BaseRotationAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "190ed08ebb2ee590db51d6504ffd6b2b";
  }

  static const char* value(const ::action_server_package::BaseRotationAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x190ed08ebb2ee590ULL;
  static const uint64_t static_value2 = 0xdb51d6504ffd6b2bULL;
};

template<class ContainerAllocator>
struct DataType< ::action_server_package::BaseRotationAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "action_server_package/BaseRotationAction";
  }

  static const char* value(const ::action_server_package::BaseRotationAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::action_server_package::BaseRotationAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
BaseRotationActionGoal action_goal\n\
BaseRotationActionResult action_result\n\
BaseRotationActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: action_server_package/BaseRotationActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
BaseRotationGoal goal\n\
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
MSG: action_server_package/BaseRotationGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
float32 number_of_degrees\n\
\n\
================================================================================\n\
MSG: action_server_package/BaseRotationActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
BaseRotationResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: action_server_package/BaseRotationResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the result\n\
float32 final_yaw\n\
\n\
================================================================================\n\
MSG: action_server_package/BaseRotationActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
BaseRotationFeedback feedback\n\
\n\
================================================================================\n\
MSG: action_server_package/BaseRotationFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define a feedback message\n\
float32 degrees_rotated\n\
";
  }

  static const char* value(const ::action_server_package::BaseRotationAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::action_server_package::BaseRotationAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BaseRotationAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::action_server_package::BaseRotationAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::action_server_package::BaseRotationAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::action_server_package::BaseRotationActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::action_server_package::BaseRotationActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::action_server_package::BaseRotationActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTION_SERVER_PACKAGE_MESSAGE_BASEROTATIONACTION_H
