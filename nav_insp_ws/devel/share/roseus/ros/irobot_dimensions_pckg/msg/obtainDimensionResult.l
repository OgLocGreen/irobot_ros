;; Auto-generated. Do not edit!


(when (boundp 'irobot_dimensions_pckg::obtainDimensionResult)
  (if (not (find-package "IROBOT_DIMENSIONS_PCKG"))
    (make-package "IROBOT_DIMENSIONS_PCKG"))
  (shadow 'obtainDimensionResult (find-package "IROBOT_DIMENSIONS_PCKG")))
(unless (find-package "IROBOT_DIMENSIONS_PCKG::OBTAINDIMENSIONRESULT")
  (make-package "IROBOT_DIMENSIONS_PCKG::OBTAINDIMENSIONRESULT"))

(in-package "ROS")
;;//! \htmlinclude obtainDimensionResult.msg.html


(defclass irobot_dimensions_pckg::obtainDimensionResult
  :super ros::object
  :slots (_large _width ))

(defmethod irobot_dimensions_pckg::obtainDimensionResult
  (:init
   (&key
    ((:large __large) 0.0)
    ((:width __width) 0.0)
    )
   (send-super :init)
   (setq _large (float __large))
   (setq _width (float __width))
   self)
  (:large
   (&optional __large)
   (if __large (setq _large __large)) _large)
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:serialization-length
   ()
   (+
    ;; float32 _large
    4
    ;; float32 _width
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _large
       (sys::poke _large (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _width
       (sys::poke _width (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _large
     (setq _large (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _width
     (setq _width (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get irobot_dimensions_pckg::obtainDimensionResult :md5sum-) "082de46657ae10e0c1a812e48a6d32ba")
(setf (get irobot_dimensions_pckg::obtainDimensionResult :datatype-) "irobot_dimensions_pckg/obtainDimensionResult")
(setf (get irobot_dimensions_pckg::obtainDimensionResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result definition
#bool finished
float32 large
float32 width

")



(provide :irobot_dimensions_pckg/obtainDimensionResult "082de46657ae10e0c1a812e48a6d32ba")


