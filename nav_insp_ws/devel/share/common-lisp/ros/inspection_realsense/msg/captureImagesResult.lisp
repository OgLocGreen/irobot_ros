; Auto-generated. Do not edit!


(cl:in-package inspection_realsense-msg)


;//! \htmlinclude captureImagesResult.msg.html

(cl:defclass <captureImagesResult> (roslisp-msg-protocol:ros-message)
  ((finished
    :reader finished
    :initarg :finished
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass captureImagesResult (<captureImagesResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <captureImagesResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'captureImagesResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name inspection_realsense-msg:<captureImagesResult> is deprecated: use inspection_realsense-msg:captureImagesResult instead.")))

(cl:ensure-generic-function 'finished-val :lambda-list '(m))
(cl:defmethod finished-val ((m <captureImagesResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader inspection_realsense-msg:finished-val is deprecated.  Use inspection_realsense-msg:finished instead.")
  (finished m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <captureImagesResult>) ostream)
  "Serializes a message object of type '<captureImagesResult>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'finished) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <captureImagesResult>) istream)
  "Deserializes a message object of type '<captureImagesResult>"
    (cl:setf (cl:slot-value msg 'finished) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<captureImagesResult>)))
  "Returns string type for a message object of type '<captureImagesResult>"
  "inspection_realsense/captureImagesResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'captureImagesResult)))
  "Returns string type for a message object of type 'captureImagesResult"
  "inspection_realsense/captureImagesResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<captureImagesResult>)))
  "Returns md5sum for a message object of type '<captureImagesResult>"
  "e2797c797e620a950ba704492d72873b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'captureImagesResult)))
  "Returns md5sum for a message object of type 'captureImagesResult"
  "e2797c797e620a950ba704492d72873b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<captureImagesResult>)))
  "Returns full string definition for message of type '<captureImagesResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result definition~%bool finished~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'captureImagesResult)))
  "Returns full string definition for message of type 'captureImagesResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result definition~%bool finished~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <captureImagesResult>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <captureImagesResult>))
  "Converts a ROS message object to a list"
  (cl:list 'captureImagesResult
    (cl:cons ':finished (finished msg))
))
