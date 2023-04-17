;; Auto-generated. Do not edit!


(when (boundp 'flexbe_msgs::BehaviorInputResult)
  (if (not (find-package "FLEXBE_MSGS"))
    (make-package "FLEXBE_MSGS"))
  (shadow 'BehaviorInputResult (find-package "FLEXBE_MSGS")))
(unless (find-package "FLEXBE_MSGS::BEHAVIORINPUTRESULT")
  (make-package "FLEXBE_MSGS::BEHAVIORINPUTRESULT"))

(in-package "ROS")
;;//! \htmlinclude BehaviorInputResult.msg.html


(intern "*RESULT_OK*" (find-package "FLEXBE_MSGS::BEHAVIORINPUTRESULT"))
(shadow '*RESULT_OK* (find-package "FLEXBE_MSGS::BEHAVIORINPUTRESULT"))
(defconstant flexbe_msgs::BehaviorInputResult::*RESULT_OK* 0)
(intern "*RESULT_FAILED*" (find-package "FLEXBE_MSGS::BEHAVIORINPUTRESULT"))
(shadow '*RESULT_FAILED* (find-package "FLEXBE_MSGS::BEHAVIORINPUTRESULT"))
(defconstant flexbe_msgs::BehaviorInputResult::*RESULT_FAILED* 1)
(intern "*RESULT_ABORTED*" (find-package "FLEXBE_MSGS::BEHAVIORINPUTRESULT"))
(shadow '*RESULT_ABORTED* (find-package "FLEXBE_MSGS::BEHAVIORINPUTRESULT"))
(defconstant flexbe_msgs::BehaviorInputResult::*RESULT_ABORTED* 2)
(defclass flexbe_msgs::BehaviorInputResult
  :super ros::object
  :slots (_result_code _data ))

(defmethod flexbe_msgs::BehaviorInputResult
  (:init
   (&key
    ((:result_code __result_code) 0)
    ((:data __data) "")
    )
   (send-super :init)
   (setq _result_code (round __result_code))
   (setq _data (string __data))
   self)
  (:result_code
   (&optional __result_code)
   (if __result_code (setq _result_code __result_code)) _result_code)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; uint8 _result_code
    1
    ;; string _data
    4 (length _data)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _result_code
       (write-byte _result_code s)
     ;; string _data
       (write-long (length _data) s) (princ _data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _result_code
     (setq _result_code (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; string _data
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _data (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get flexbe_msgs::BehaviorInputResult :md5sum-) "e0509f159e7c7bb2268efbc625f63b3f")
(setf (get flexbe_msgs::BehaviorInputResult :datatype-) "flexbe_msgs/BehaviorInputResult")
(setf (get flexbe_msgs::BehaviorInputResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

uint8 RESULT_OK 		= 0
uint8 RESULT_FAILED		= 1
uint8 RESULT_ABORTED	= 2

# Indicates if the request has been successful
uint8 result_code

# Serialized data which was requested
# In case of result_code != RESULT_OK, this field will contain unserialized data regarding the reason of failure instead.
string data


")



(provide :flexbe_msgs/BehaviorInputResult "e0509f159e7c7bb2268efbc625f63b3f")

