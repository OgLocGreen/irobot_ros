;; Auto-generated. Do not edit!


(when (boundp 'irobot_fcpp_simul::ExecutePathFeedback)
  (if (not (find-package "IROBOT_FCPP_SIMUL"))
    (make-package "IROBOT_FCPP_SIMUL"))
  (shadow 'ExecutePathFeedback (find-package "IROBOT_FCPP_SIMUL")))
(unless (find-package "IROBOT_FCPP_SIMUL::EXECUTEPATHFEEDBACK")
  (make-package "IROBOT_FCPP_SIMUL::EXECUTEPATHFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude ExecutePathFeedback.msg.html


(defclass irobot_fcpp_simul::ExecutePathFeedback
  :super ros::object
  :slots (_recorrido ))

(defmethod irobot_fcpp_simul::ExecutePathFeedback
  (:init
   (&key
    ((:recorrido __recorrido) nil)
    )
   (send-super :init)
   (setq _recorrido __recorrido)
   self)
  (:recorrido
   (&optional __recorrido)
   (if __recorrido (setq _recorrido __recorrido)) _recorrido)
  (:serialization-length
   ()
   (+
    ;; bool _recorrido
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _recorrido
       (if _recorrido (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _recorrido
     (setq _recorrido (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get irobot_fcpp_simul::ExecutePathFeedback :md5sum-) "ca38ebdc9ec96d5ed4262d9bf2765883")
(setf (get irobot_fcpp_simul::ExecutePathFeedback :datatype-) "irobot_fcpp_simul/ExecutePathFeedback")
(setf (get irobot_fcpp_simul::ExecutePathFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define a feedback message
bool recorrido


")



(provide :irobot_fcpp_simul/ExecutePathFeedback "ca38ebdc9ec96d5ed4262d9bf2765883")

