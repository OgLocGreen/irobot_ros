; Auto-generated. Do not edit!


(cl:in-package inspection_realsense-msg)


;//! \htmlinclude moveLeftStepGoal.msg.html

(cl:defclass <moveLeftStepGoal> (roslisp-msg-protocol:ros-message)
  ((vel
    :reader vel
    :initarg :vel
    :type cl:float
    :initform 0.0)
   (step
    :reader step
    :initarg :step
    :type cl:float
    :initform 0.0))
)

(cl:defclass moveLeftStepGoal (<moveLeftStepGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <moveLeftStepGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'moveLeftStepGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name inspection_realsense-msg:<moveLeftStepGoal> is deprecated: use inspection_realsense-msg:moveLeftStepGoal instead.")))

(cl:ensure-generic-function 'vel-val :lambda-list '(m))
(cl:defmethod vel-val ((m <moveLeftStepGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader inspection_realsense-msg:vel-val is deprecated.  Use inspection_realsense-msg:vel instead.")
  (vel m))

(cl:ensure-generic-function 'step-val :lambda-list '(m))
(cl:defmethod step-val ((m <moveLeftStepGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader inspection_realsense-msg:step-val is deprecated.  Use inspection_realsense-msg:step instead.")
  (step m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <moveLeftStepGoal>) ostream)
  "Serializes a message object of type '<moveLeftStepGoal>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'vel))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'step))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <moveLeftStepGoal>) istream)
  "Deserializes a message object of type '<moveLeftStepGoal>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'vel) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'step) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<moveLeftStepGoal>)))
  "Returns string type for a message object of type '<moveLeftStepGoal>"
  "inspection_realsense/moveLeftStepGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'moveLeftStepGoal)))
  "Returns string type for a message object of type 'moveLeftStepGoal"
  "inspection_realsense/moveLeftStepGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<moveLeftStepGoal>)))
  "Returns md5sum for a message object of type '<moveLeftStepGoal>"
  "9ada90ea3a4f18220a8f5d7e68a0f457")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'moveLeftStepGoal)))
  "Returns md5sum for a message object of type 'moveLeftStepGoal"
  "9ada90ea3a4f18220a8f5d7e68a0f457")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<moveLeftStepGoal>)))
  "Returns full string definition for message of type '<moveLeftStepGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%float32 vel~%float32 step~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'moveLeftStepGoal)))
  "Returns full string definition for message of type 'moveLeftStepGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%float32 vel~%float32 step~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <moveLeftStepGoal>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <moveLeftStepGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'moveLeftStepGoal
    (cl:cons ':vel (vel msg))
    (cl:cons ':step (step msg))
))
