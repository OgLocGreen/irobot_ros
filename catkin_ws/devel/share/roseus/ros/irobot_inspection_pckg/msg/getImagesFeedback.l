;; Auto-generated. Do not edit!


(when (boundp 'irobot_inspection_pckg::getImagesFeedback)
  (if (not (find-package "IROBOT_INSPECTION_PCKG"))
    (make-package "IROBOT_INSPECTION_PCKG"))
  (shadow 'getImagesFeedback (find-package "IROBOT_INSPECTION_PCKG")))
(unless (find-package "IROBOT_INSPECTION_PCKG::GETIMAGESFEEDBACK")
  (make-package "IROBOT_INSPECTION_PCKG::GETIMAGESFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude getImagesFeedback.msg.html


(defclass irobot_inspection_pckg::getImagesFeedback
  :super ros::object
  :slots (_n_imgs ))

(defmethod irobot_inspection_pckg::getImagesFeedback
  (:init
   (&key
    ((:n_imgs __n_imgs) 0)
    )
   (send-super :init)
   (setq _n_imgs (round __n_imgs))
   self)
  (:n_imgs
   (&optional __n_imgs)
   (if __n_imgs (setq _n_imgs __n_imgs)) _n_imgs)
  (:serialization-length
   ()
   (+
    ;; int32 _n_imgs
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _n_imgs
       (write-long _n_imgs s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _n_imgs
     (setq _n_imgs (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get irobot_inspection_pckg::getImagesFeedback :md5sum-) "42d742e201b01c82efbb9f90e7a251d7")
(setf (get irobot_inspection_pckg::getImagesFeedback :datatype-) "irobot_inspection_pckg/getImagesFeedback")
(setf (get irobot_inspection_pckg::getImagesFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#feedback
int32 n_imgs



")



(provide :irobot_inspection_pckg/getImagesFeedback "42d742e201b01c82efbb9f90e7a251d7")


