;; Auto-generated. Do not edit!


(when (boundp 'irobot_fcpp_simul::ExecuteDefectsRepairFeedback)
  (if (not (find-package "IROBOT_FCPP_SIMUL"))
    (make-package "IROBOT_FCPP_SIMUL"))
  (shadow 'ExecuteDefectsRepairFeedback (find-package "IROBOT_FCPP_SIMUL")))
(unless (find-package "IROBOT_FCPP_SIMUL::EXECUTEDEFECTSREPAIRFEEDBACK")
  (make-package "IROBOT_FCPP_SIMUL::EXECUTEDEFECTSREPAIRFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude ExecuteDefectsRepairFeedback.msg.html


(defclass irobot_fcpp_simul::ExecuteDefectsRepairFeedback
  :super ros::object
  :slots ())

(defmethod irobot_fcpp_simul::ExecuteDefectsRepairFeedback
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(setf (get irobot_fcpp_simul::ExecuteDefectsRepairFeedback :md5sum-) "d41d8cd98f00b204e9800998ecf8427e")
(setf (get irobot_fcpp_simul::ExecuteDefectsRepairFeedback :datatype-) "irobot_fcpp_simul/ExecuteDefectsRepairFeedback")
(setf (get irobot_fcpp_simul::ExecuteDefectsRepairFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define a feedback message


")



(provide :irobot_fcpp_simul/ExecuteDefectsRepairFeedback "d41d8cd98f00b204e9800998ecf8427e")


