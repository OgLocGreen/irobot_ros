; Auto-generated. Do not edit!


(cl:in-package flexbe_msgs-msg)


;//! \htmlinclude BehaviorInputFeedback.msg.html

(cl:defclass <BehaviorInputFeedback> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass BehaviorInputFeedback (<BehaviorInputFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <BehaviorInputFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'BehaviorInputFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name flexbe_msgs-msg:<BehaviorInputFeedback> is deprecated: use flexbe_msgs-msg:BehaviorInputFeedback instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <BehaviorInputFeedback>) ostream)
  "Serializes a message object of type '<BehaviorInputFeedback>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <BehaviorInputFeedback>) istream)
  "Deserializes a message object of type '<BehaviorInputFeedback>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<BehaviorInputFeedback>)))
  "Returns string type for a message object of type '<BehaviorInputFeedback>"
  "flexbe_msgs/BehaviorInputFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'BehaviorInputFeedback)))
  "Returns string type for a message object of type 'BehaviorInputFeedback"
  "flexbe_msgs/BehaviorInputFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<BehaviorInputFeedback>)))
  "Returns md5sum for a message object of type '<BehaviorInputFeedback>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'BehaviorInputFeedback)))
  "Returns md5sum for a message object of type 'BehaviorInputFeedback"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<BehaviorInputFeedback>)))
  "Returns full string definition for message of type '<BehaviorInputFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'BehaviorInputFeedback)))
  "Returns full string definition for message of type 'BehaviorInputFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <BehaviorInputFeedback>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <BehaviorInputFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'BehaviorInputFeedback
))
