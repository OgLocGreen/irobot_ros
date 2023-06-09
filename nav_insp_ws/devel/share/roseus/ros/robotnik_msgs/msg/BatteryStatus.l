;; Auto-generated. Do not edit!


(when (boundp 'robotnik_msgs::BatteryStatus)
  (if (not (find-package "ROBOTNIK_MSGS"))
    (make-package "ROBOTNIK_MSGS"))
  (shadow 'BatteryStatus (find-package "ROBOTNIK_MSGS")))
(unless (find-package "ROBOTNIK_MSGS::BATTERYSTATUS")
  (make-package "ROBOTNIK_MSGS::BATTERYSTATUS"))

(in-package "ROS")
;;//! \htmlinclude BatteryStatus.msg.html


(defclass robotnik_msgs::BatteryStatus
  :super ros::object
  :slots (_voltage _level _time_remaining _time_charging _is_charging ))

(defmethod robotnik_msgs::BatteryStatus
  (:init
   (&key
    ((:voltage __voltage) 0.0)
    ((:level __level) 0.0)
    ((:time_remaining __time_remaining) 0)
    ((:time_charging __time_charging) 0)
    ((:is_charging __is_charging) nil)
    )
   (send-super :init)
   (setq _voltage (float __voltage))
   (setq _level (float __level))
   (setq _time_remaining (round __time_remaining))
   (setq _time_charging (round __time_charging))
   (setq _is_charging __is_charging)
   self)
  (:voltage
   (&optional __voltage)
   (if __voltage (setq _voltage __voltage)) _voltage)
  (:level
   (&optional __level)
   (if __level (setq _level __level)) _level)
  (:time_remaining
   (&optional __time_remaining)
   (if __time_remaining (setq _time_remaining __time_remaining)) _time_remaining)
  (:time_charging
   (&optional __time_charging)
   (if __time_charging (setq _time_charging __time_charging)) _time_charging)
  (:is_charging
   (&optional __is_charging)
   (if __is_charging (setq _is_charging __is_charging)) _is_charging)
  (:serialization-length
   ()
   (+
    ;; float32 _voltage
    4
    ;; float32 _level
    4
    ;; uint32 _time_remaining
    4
    ;; uint32 _time_charging
    4
    ;; bool _is_charging
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _voltage
       (sys::poke _voltage (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _level
       (sys::poke _level (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint32 _time_remaining
       (write-long _time_remaining s)
     ;; uint32 _time_charging
       (write-long _time_charging s)
     ;; bool _is_charging
       (if _is_charging (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _voltage
     (setq _voltage (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _level
     (setq _level (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint32 _time_remaining
     (setq _time_remaining (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _time_charging
     (setq _time_charging (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _is_charging
     (setq _is_charging (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get robotnik_msgs::BatteryStatus :md5sum-) "1afa51cf91fcde0accaed73a28682ea9")
(setf (get robotnik_msgs::BatteryStatus :datatype-) "robotnik_msgs/BatteryStatus")
(setf (get robotnik_msgs::BatteryStatus :definition-)
      "float32 voltage			# in volts
float32 level			# in %
uint32 time_remaining		# in minutes
uint32 time_charging            # in minutes 
bool is_charging                # true when connected

")



(provide :robotnik_msgs/BatteryStatus "1afa51cf91fcde0accaed73a28682ea9")


