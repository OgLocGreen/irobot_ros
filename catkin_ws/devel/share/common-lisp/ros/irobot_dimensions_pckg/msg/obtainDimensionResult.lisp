; Auto-generated. Do not edit!


(cl:in-package irobot_dimensions_pckg-msg)


;//! \htmlinclude obtainDimensionResult.msg.html

(cl:defclass <obtainDimensionResult> (roslisp-msg-protocol:ros-message)
  ((large
    :reader large
    :initarg :large
    :type cl:float
    :initform 0.0)
   (width
    :reader width
    :initarg :width
    :type cl:float
    :initform 0.0))
)

(cl:defclass obtainDimensionResult (<obtainDimensionResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <obtainDimensionResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'obtainDimensionResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name irobot_dimensions_pckg-msg:<obtainDimensionResult> is deprecated: use irobot_dimensions_pckg-msg:obtainDimensionResult instead.")))

(cl:ensure-generic-function 'large-val :lambda-list '(m))
(cl:defmethod large-val ((m <obtainDimensionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_dimensions_pckg-msg:large-val is deprecated.  Use irobot_dimensions_pckg-msg:large instead.")
  (large m))

(cl:ensure-generic-function 'width-val :lambda-list '(m))
(cl:defmethod width-val ((m <obtainDimensionResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_dimensions_pckg-msg:width-val is deprecated.  Use irobot_dimensions_pckg-msg:width instead.")
  (width m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <obtainDimensionResult>) ostream)
  "Serializes a message object of type '<obtainDimensionResult>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'large))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'width))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <obtainDimensionResult>) istream)
  "Deserializes a message object of type '<obtainDimensionResult>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'large) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'width) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<obtainDimensionResult>)))
  "Returns string type for a message object of type '<obtainDimensionResult>"
  "irobot_dimensions_pckg/obtainDimensionResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'obtainDimensionResult)))
  "Returns string type for a message object of type 'obtainDimensionResult"
  "irobot_dimensions_pckg/obtainDimensionResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<obtainDimensionResult>)))
  "Returns md5sum for a message object of type '<obtainDimensionResult>"
  "082de46657ae10e0c1a812e48a6d32ba")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'obtainDimensionResult)))
  "Returns md5sum for a message object of type 'obtainDimensionResult"
  "082de46657ae10e0c1a812e48a6d32ba")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<obtainDimensionResult>)))
  "Returns full string definition for message of type '<obtainDimensionResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result definition~%#bool finished~%float32 large~%float32 width~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'obtainDimensionResult)))
  "Returns full string definition for message of type 'obtainDimensionResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result definition~%#bool finished~%float32 large~%float32 width~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <obtainDimensionResult>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <obtainDimensionResult>))
  "Converts a ROS message object to a list"
  (cl:list 'obtainDimensionResult
    (cl:cons ':large (large msg))
    (cl:cons ':width (width msg))
))
