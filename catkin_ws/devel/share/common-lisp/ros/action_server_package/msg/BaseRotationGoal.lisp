; Auto-generated. Do not edit!


(cl:in-package action_server_package-msg)


;//! \htmlinclude BaseRotationGoal.msg.html

(cl:defclass <BaseRotationGoal> (roslisp-msg-protocol:ros-message)
  ((number_of_degrees
    :reader number_of_degrees
    :initarg :number_of_degrees
    :type cl:float
    :initform 0.0))
)

(cl:defclass BaseRotationGoal (<BaseRotationGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <BaseRotationGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'BaseRotationGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name action_server_package-msg:<BaseRotationGoal> is deprecated: use action_server_package-msg:BaseRotationGoal instead.")))

(cl:ensure-generic-function 'number_of_degrees-val :lambda-list '(m))
(cl:defmethod number_of_degrees-val ((m <BaseRotationGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader action_server_package-msg:number_of_degrees-val is deprecated.  Use action_server_package-msg:number_of_degrees instead.")
  (number_of_degrees m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <BaseRotationGoal>) ostream)
  "Serializes a message object of type '<BaseRotationGoal>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'number_of_degrees))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <BaseRotationGoal>) istream)
  "Deserializes a message object of type '<BaseRotationGoal>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'number_of_degrees) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<BaseRotationGoal>)))
  "Returns string type for a message object of type '<BaseRotationGoal>"
  "action_server_package/BaseRotationGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'BaseRotationGoal)))
  "Returns string type for a message object of type 'BaseRotationGoal"
  "action_server_package/BaseRotationGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<BaseRotationGoal>)))
  "Returns md5sum for a message object of type '<BaseRotationGoal>"
  "b76287a0341f327cec116af10e16f6d8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'BaseRotationGoal)))
  "Returns md5sum for a message object of type 'BaseRotationGoal"
  "b76287a0341f327cec116af10e16f6d8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<BaseRotationGoal>)))
  "Returns full string definition for message of type '<BaseRotationGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%float32 number_of_degrees~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'BaseRotationGoal)))
  "Returns full string definition for message of type 'BaseRotationGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%float32 number_of_degrees~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <BaseRotationGoal>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <BaseRotationGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'BaseRotationGoal
    (cl:cons ':number_of_degrees (number_of_degrees msg))
))