; Auto-generated. Do not edit!


(cl:in-package irobot_dimensions_pckg-msg)


;//! \htmlinclude findCornersGoal.msg.html

(cl:defclass <findCornersGoal> (roslisp-msg-protocol:ros-message)
  ((folder_path
    :reader folder_path
    :initarg :folder_path
    :type std_msgs-msg:String
    :initform (cl:make-instance 'std_msgs-msg:String)))
)

(cl:defclass findCornersGoal (<findCornersGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <findCornersGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'findCornersGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name irobot_dimensions_pckg-msg:<findCornersGoal> is deprecated: use irobot_dimensions_pckg-msg:findCornersGoal instead.")))

(cl:ensure-generic-function 'folder_path-val :lambda-list '(m))
(cl:defmethod folder_path-val ((m <findCornersGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_dimensions_pckg-msg:folder_path-val is deprecated.  Use irobot_dimensions_pckg-msg:folder_path instead.")
  (folder_path m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <findCornersGoal>) ostream)
  "Serializes a message object of type '<findCornersGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'folder_path) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <findCornersGoal>) istream)
  "Deserializes a message object of type '<findCornersGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'folder_path) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<findCornersGoal>)))
  "Returns string type for a message object of type '<findCornersGoal>"
  "irobot_dimensions_pckg/findCornersGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'findCornersGoal)))
  "Returns string type for a message object of type 'findCornersGoal"
  "irobot_dimensions_pckg/findCornersGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<findCornersGoal>)))
  "Returns md5sum for a message object of type '<findCornersGoal>"
  "7e3638c220b0d90e6c19901c22f34e46")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'findCornersGoal)))
  "Returns md5sum for a message object of type 'findCornersGoal"
  "7e3638c220b0d90e6c19901c22f34e46")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<findCornersGoal>)))
  "Returns full string definition for message of type '<findCornersGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%std_msgs/String folder_path~%#int32 images_number~%~%~%================================================================================~%MSG: std_msgs/String~%string data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'findCornersGoal)))
  "Returns full string definition for message of type 'findCornersGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%std_msgs/String folder_path~%#int32 images_number~%~%~%================================================================================~%MSG: std_msgs/String~%string data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <findCornersGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'folder_path))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <findCornersGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'findCornersGoal
    (cl:cons ':folder_path (folder_path msg))
))
