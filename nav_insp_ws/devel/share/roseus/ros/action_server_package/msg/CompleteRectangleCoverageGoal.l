;; Auto-generated. Do not edit!


(when (boundp 'action_server_package::CompleteRectangleCoverageGoal)
  (if (not (find-package "ACTION_SERVER_PACKAGE"))
    (make-package "ACTION_SERVER_PACKAGE"))
  (shadow 'CompleteRectangleCoverageGoal (find-package "ACTION_SERVER_PACKAGE")))
(unless (find-package "ACTION_SERVER_PACKAGE::COMPLETERECTANGLECOVERAGEGOAL")
  (make-package "ACTION_SERVER_PACKAGE::COMPLETERECTANGLECOVERAGEGOAL"))

(in-package "ROS")
;;//! \htmlinclude CompleteRectangleCoverageGoal.msg.html


(defclass action_server_package::CompleteRectangleCoverageGoal
  :super ros::object
  :slots (_rect_long _rect_width _step _dist_lr _laser_width _vel ))

(defmethod action_server_package::CompleteRectangleCoverageGoal
  (:init
   (&key
    ((:rect_long __rect_long) 0.0)
    ((:rect_width __rect_width) 0.0)
    ((:step __step) 0.0)
    ((:dist_lr __dist_lr) 0.0)
    ((:laser_width __laser_width) 0.0)
    ((:vel __vel) 0.0)
    )
   (send-super :init)
   (setq _rect_long (float __rect_long))
   (setq _rect_width (float __rect_width))
   (setq _step (float __step))
   (setq _dist_lr (float __dist_lr))
   (setq _laser_width (float __laser_width))
   (setq _vel (float __vel))
   self)
  (:rect_long
   (&optional __rect_long)
   (if __rect_long (setq _rect_long __rect_long)) _rect_long)
  (:rect_width
   (&optional __rect_width)
   (if __rect_width (setq _rect_width __rect_width)) _rect_width)
  (:step
   (&optional __step)
   (if __step (setq _step __step)) _step)
  (:dist_lr
   (&optional __dist_lr)
   (if __dist_lr (setq _dist_lr __dist_lr)) _dist_lr)
  (:laser_width
   (&optional __laser_width)
   (if __laser_width (setq _laser_width __laser_width)) _laser_width)
  (:vel
   (&optional __vel)
   (if __vel (setq _vel __vel)) _vel)
  (:serialization-length
   ()
   (+
    ;; float32 _rect_long
    4
    ;; float32 _rect_width
    4
    ;; float32 _step
    4
    ;; float32 _dist_lr
    4
    ;; float32 _laser_width
    4
    ;; float32 _vel
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _rect_long
       (sys::poke _rect_long (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _rect_width
       (sys::poke _rect_width (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _step
       (sys::poke _step (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _dist_lr
       (sys::poke _dist_lr (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _laser_width
       (sys::poke _laser_width (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _vel
       (sys::poke _vel (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _rect_long
     (setq _rect_long (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _rect_width
     (setq _rect_width (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _step
     (setq _step (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _dist_lr
     (setq _dist_lr (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _laser_width
     (setq _laser_width (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _vel
     (setq _vel (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get action_server_package::CompleteRectangleCoverageGoal :md5sum-) "99f0c81406704524af476d87104d837e")
(setf (get action_server_package::CompleteRectangleCoverageGoal :datatype-) "action_server_package/CompleteRectangleCoverageGoal")
(setf (get action_server_package::CompleteRectangleCoverageGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the goal
float32 rect_long
float32 rect_width
float32 step
float32 dist_lr
float32 laser_width

float32 vel

")



(provide :action_server_package/CompleteRectangleCoverageGoal "99f0c81406704524af476d87104d837e")


