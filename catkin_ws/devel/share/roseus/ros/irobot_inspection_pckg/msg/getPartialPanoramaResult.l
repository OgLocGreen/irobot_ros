;; Auto-generated. Do not edit!


(when (boundp 'irobot_inspection_pckg::getPartialPanoramaResult)
  (if (not (find-package "IROBOT_INSPECTION_PCKG"))
    (make-package "IROBOT_INSPECTION_PCKG"))
  (shadow 'getPartialPanoramaResult (find-package "IROBOT_INSPECTION_PCKG")))
(unless (find-package "IROBOT_INSPECTION_PCKG::GETPARTIALPANORAMARESULT")
  (make-package "IROBOT_INSPECTION_PCKG::GETPARTIALPANORAMARESULT"))

(in-package "ROS")
;;//! \htmlinclude getPartialPanoramaResult.msg.html


(defclass irobot_inspection_pckg::getPartialPanoramaResult
  :super ros::object
  :slots (_finished ))

(defmethod irobot_inspection_pckg::getPartialPanoramaResult
  (:init
   (&key
    ((:finished __finished) nil)
    )
   (send-super :init)
   (setq _finished __finished)
   self)
  (:finished
   (&optional __finished)
   (if __finished (setq _finished __finished)) _finished)
  (:serialization-length
   ()
   (+
    ;; bool _finished
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _finished
       (if _finished (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _finished
     (setq _finished (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get irobot_inspection_pckg::getPartialPanoramaResult :md5sum-) "e2797c797e620a950ba704492d72873b")
(setf (get irobot_inspection_pckg::getPartialPanoramaResult :datatype-) "irobot_inspection_pckg/getPartialPanoramaResult")
(setf (get irobot_inspection_pckg::getPartialPanoramaResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result definition
bool finished

")



(provide :irobot_inspection_pckg/getPartialPanoramaResult "e2797c797e620a950ba704492d72873b")

