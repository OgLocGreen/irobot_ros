; Auto-generated. Do not edit!


(cl:in-package irobot_dimensions_pckg-msg)


;//! \htmlinclude findCornersFeedback.msg.html

(cl:defclass <findCornersFeedback> (roslisp-msg-protocol:ros-message)
  ((n_imgs1
    :reader n_imgs1
    :initarg :n_imgs1
    :type cl:integer
    :initform 0)
   (n_imgs2
    :reader n_imgs2
    :initarg :n_imgs2
    :type cl:integer
    :initform 0))
)

(cl:defclass findCornersFeedback (<findCornersFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <findCornersFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'findCornersFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name irobot_dimensions_pckg-msg:<findCornersFeedback> is deprecated: use irobot_dimensions_pckg-msg:findCornersFeedback instead.")))

(cl:ensure-generic-function 'n_imgs1-val :lambda-list '(m))
(cl:defmethod n_imgs1-val ((m <findCornersFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_dimensions_pckg-msg:n_imgs1-val is deprecated.  Use irobot_dimensions_pckg-msg:n_imgs1 instead.")
  (n_imgs1 m))

(cl:ensure-generic-function 'n_imgs2-val :lambda-list '(m))
(cl:defmethod n_imgs2-val ((m <findCornersFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_dimensions_pckg-msg:n_imgs2-val is deprecated.  Use irobot_dimensions_pckg-msg:n_imgs2 instead.")
  (n_imgs2 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <findCornersFeedback>) ostream)
  "Serializes a message object of type '<findCornersFeedback>"
  (cl:let* ((signed (cl:slot-value msg 'n_imgs1)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'n_imgs2)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <findCornersFeedback>) istream)
  "Deserializes a message object of type '<findCornersFeedback>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'n_imgs1) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'n_imgs2) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<findCornersFeedback>)))
  "Returns string type for a message object of type '<findCornersFeedback>"
  "irobot_dimensions_pckg/findCornersFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'findCornersFeedback)))
  "Returns string type for a message object of type 'findCornersFeedback"
  "irobot_dimensions_pckg/findCornersFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<findCornersFeedback>)))
  "Returns md5sum for a message object of type '<findCornersFeedback>"
  "b1ad6f2f9b9bf3e9730be353976757f4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'findCornersFeedback)))
  "Returns md5sum for a message object of type 'findCornersFeedback"
  "b1ad6f2f9b9bf3e9730be353976757f4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<findCornersFeedback>)))
  "Returns full string definition for message of type '<findCornersFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%int32 n_imgs1~%int32 n_imgs2~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'findCornersFeedback)))
  "Returns full string definition for message of type 'findCornersFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%int32 n_imgs1~%int32 n_imgs2~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <findCornersFeedback>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <findCornersFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'findCornersFeedback
    (cl:cons ':n_imgs1 (n_imgs1 msg))
    (cl:cons ':n_imgs2 (n_imgs2 msg))
))
