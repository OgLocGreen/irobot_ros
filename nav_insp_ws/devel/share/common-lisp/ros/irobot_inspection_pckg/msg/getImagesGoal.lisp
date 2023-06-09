; Auto-generated. Do not edit!


(cl:in-package irobot_inspection_pckg-msg)


;//! \htmlinclude getImagesGoal.msg.html

(cl:defclass <getImagesGoal> (roslisp-msg-protocol:ros-message)
  ((folder_path
    :reader folder_path
    :initarg :folder_path
    :type std_msgs-msg:String
    :initform (cl:make-instance 'std_msgs-msg:String))
   (calib_path
    :reader calib_path
    :initarg :calib_path
    :type std_msgs-msg:String
    :initform (cl:make-instance 'std_msgs-msg:String))
   (id_marker
    :reader id_marker
    :initarg :id_marker
    :type cl:integer
    :initform 0))
)

(cl:defclass getImagesGoal (<getImagesGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <getImagesGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'getImagesGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name irobot_inspection_pckg-msg:<getImagesGoal> is deprecated: use irobot_inspection_pckg-msg:getImagesGoal instead.")))

(cl:ensure-generic-function 'folder_path-val :lambda-list '(m))
(cl:defmethod folder_path-val ((m <getImagesGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_inspection_pckg-msg:folder_path-val is deprecated.  Use irobot_inspection_pckg-msg:folder_path instead.")
  (folder_path m))

(cl:ensure-generic-function 'calib_path-val :lambda-list '(m))
(cl:defmethod calib_path-val ((m <getImagesGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_inspection_pckg-msg:calib_path-val is deprecated.  Use irobot_inspection_pckg-msg:calib_path instead.")
  (calib_path m))

(cl:ensure-generic-function 'id_marker-val :lambda-list '(m))
(cl:defmethod id_marker-val ((m <getImagesGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader irobot_inspection_pckg-msg:id_marker-val is deprecated.  Use irobot_inspection_pckg-msg:id_marker instead.")
  (id_marker m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <getImagesGoal>) ostream)
  "Serializes a message object of type '<getImagesGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'folder_path) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'calib_path) ostream)
  (cl:let* ((signed (cl:slot-value msg 'id_marker)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <getImagesGoal>) istream)
  "Deserializes a message object of type '<getImagesGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'folder_path) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'calib_path) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'id_marker) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<getImagesGoal>)))
  "Returns string type for a message object of type '<getImagesGoal>"
  "irobot_inspection_pckg/getImagesGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'getImagesGoal)))
  "Returns string type for a message object of type 'getImagesGoal"
  "irobot_inspection_pckg/getImagesGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<getImagesGoal>)))
  "Returns md5sum for a message object of type '<getImagesGoal>"
  "3f5f55cb2ff4b5f321f0db7c5980bdb9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'getImagesGoal)))
  "Returns md5sum for a message object of type 'getImagesGoal"
  "3f5f55cb2ff4b5f321f0db7c5980bdb9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<getImagesGoal>)))
  "Returns full string definition for message of type '<getImagesGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%std_msgs/String folder_path~%std_msgs/String calib_path~%int32 id_marker~%~%================================================================================~%MSG: std_msgs/String~%string data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'getImagesGoal)))
  "Returns full string definition for message of type 'getImagesGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%std_msgs/String folder_path~%std_msgs/String calib_path~%int32 id_marker~%~%================================================================================~%MSG: std_msgs/String~%string data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <getImagesGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'folder_path))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'calib_path))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <getImagesGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'getImagesGoal
    (cl:cons ':folder_path (folder_path msg))
    (cl:cons ':calib_path (calib_path msg))
    (cl:cons ':id_marker (id_marker msg))
))
