; Auto-generated. Do not edit!


(cl:in-package irobot_fcpp_simul-msg)


;//! \htmlinclude ExecuteDefectsRepairFeedback.msg.html

(cl:defclass <ExecuteDefectsRepairFeedback> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass ExecuteDefectsRepairFeedback (<ExecuteDefectsRepairFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ExecuteDefectsRepairFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ExecuteDefectsRepairFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name irobot_fcpp_simul-msg:<ExecuteDefectsRepairFeedback> is deprecated: use irobot_fcpp_simul-msg:ExecuteDefectsRepairFeedback instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ExecuteDefectsRepairFeedback>) ostream)
  "Serializes a message object of type '<ExecuteDefectsRepairFeedback>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ExecuteDefectsRepairFeedback>) istream)
  "Deserializes a message object of type '<ExecuteDefectsRepairFeedback>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ExecuteDefectsRepairFeedback>)))
  "Returns string type for a message object of type '<ExecuteDefectsRepairFeedback>"
  "irobot_fcpp_simul/ExecuteDefectsRepairFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ExecuteDefectsRepairFeedback)))
  "Returns string type for a message object of type 'ExecuteDefectsRepairFeedback"
  "irobot_fcpp_simul/ExecuteDefectsRepairFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ExecuteDefectsRepairFeedback>)))
  "Returns md5sum for a message object of type '<ExecuteDefectsRepairFeedback>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ExecuteDefectsRepairFeedback)))
  "Returns md5sum for a message object of type 'ExecuteDefectsRepairFeedback"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ExecuteDefectsRepairFeedback>)))
  "Returns full string definition for message of type '<ExecuteDefectsRepairFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define a feedback message~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ExecuteDefectsRepairFeedback)))
  "Returns full string definition for message of type 'ExecuteDefectsRepairFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define a feedback message~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ExecuteDefectsRepairFeedback>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ExecuteDefectsRepairFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'ExecuteDefectsRepairFeedback
))
