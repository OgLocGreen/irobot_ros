;; Auto-generated. Do not edit!


(when (boundp 'irobot_inspection_pckg::getImagesAction)
  (if (not (find-package "IROBOT_INSPECTION_PCKG"))
    (make-package "IROBOT_INSPECTION_PCKG"))
  (shadow 'getImagesAction (find-package "IROBOT_INSPECTION_PCKG")))
(unless (find-package "IROBOT_INSPECTION_PCKG::GETIMAGESACTION")
  (make-package "IROBOT_INSPECTION_PCKG::GETIMAGESACTION"))

(in-package "ROS")
;;//! \htmlinclude getImagesAction.msg.html


(defclass irobot_inspection_pckg::getImagesAction
  :super ros::object
  :slots (_action_goal _action_result _action_feedback ))

(defmethod irobot_inspection_pckg::getImagesAction
  (:init
   (&key
    ((:action_goal __action_goal) (instance irobot_inspection_pckg::getImagesActionGoal :init))
    ((:action_result __action_result) (instance irobot_inspection_pckg::getImagesActionResult :init))
    ((:action_feedback __action_feedback) (instance irobot_inspection_pckg::getImagesActionFeedback :init))
    )
   (send-super :init)
   (setq _action_goal __action_goal)
   (setq _action_result __action_result)
   (setq _action_feedback __action_feedback)
   self)
  (:action_goal
   (&rest __action_goal)
   (if (keywordp (car __action_goal))
       (send* _action_goal __action_goal)
     (progn
       (if __action_goal (setq _action_goal (car __action_goal)))
       _action_goal)))
  (:action_result
   (&rest __action_result)
   (if (keywordp (car __action_result))
       (send* _action_result __action_result)
     (progn
       (if __action_result (setq _action_result (car __action_result)))
       _action_result)))
  (:action_feedback
   (&rest __action_feedback)
   (if (keywordp (car __action_feedback))
       (send* _action_feedback __action_feedback)
     (progn
       (if __action_feedback (setq _action_feedback (car __action_feedback)))
       _action_feedback)))
  (:serialization-length
   ()
   (+
    ;; irobot_inspection_pckg/getImagesActionGoal _action_goal
    (send _action_goal :serialization-length)
    ;; irobot_inspection_pckg/getImagesActionResult _action_result
    (send _action_result :serialization-length)
    ;; irobot_inspection_pckg/getImagesActionFeedback _action_feedback
    (send _action_feedback :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; irobot_inspection_pckg/getImagesActionGoal _action_goal
       (send _action_goal :serialize s)
     ;; irobot_inspection_pckg/getImagesActionResult _action_result
       (send _action_result :serialize s)
     ;; irobot_inspection_pckg/getImagesActionFeedback _action_feedback
       (send _action_feedback :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; irobot_inspection_pckg/getImagesActionGoal _action_goal
     (send _action_goal :deserialize buf ptr-) (incf ptr- (send _action_goal :serialization-length))
   ;; irobot_inspection_pckg/getImagesActionResult _action_result
     (send _action_result :deserialize buf ptr-) (incf ptr- (send _action_result :serialization-length))
   ;; irobot_inspection_pckg/getImagesActionFeedback _action_feedback
     (send _action_feedback :deserialize buf ptr-) (incf ptr- (send _action_feedback :serialization-length))
   ;;
   self)
  )

(setf (get irobot_inspection_pckg::getImagesAction :md5sum-) "b270d3c28fb854788f9e6046572b835f")
(setf (get irobot_inspection_pckg::getImagesAction :datatype-) "irobot_inspection_pckg/getImagesAction")
(setf (get irobot_inspection_pckg::getImagesAction :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

getImagesActionGoal action_goal
getImagesActionResult action_result
getImagesActionFeedback action_feedback

================================================================================
MSG: irobot_inspection_pckg/getImagesActionGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
getImagesGoal goal

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: irobot_inspection_pckg/getImagesGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#goal definition
std_msgs/String folder_path
std_msgs/String calib_path
int32 id_marker

================================================================================
MSG: std_msgs/String
string data

================================================================================
MSG: irobot_inspection_pckg/getImagesActionResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
getImagesResult result

================================================================================
MSG: actionlib_msgs/GoalStatus
GoalID goal_id
uint8 status
uint8 PENDING         = 0   # The goal has yet to be processed by the action server
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                            #   and has since completed its execution (Terminal State)
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                            #    to some failure (Terminal State)
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                            #    because the goal was unattainable or invalid (Terminal State)
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                            #    and has not yet completed execution
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                            #    but the action server has not yet confirmed that the goal is canceled
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                            #    and was successfully cancelled (Terminal State)
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                            #    sent over the wire by an action server

#Allow for the user to associate a string with GoalStatus for debugging
string text


================================================================================
MSG: irobot_inspection_pckg/getImagesResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#result definition
bool finished

================================================================================
MSG: irobot_inspection_pckg/getImagesActionFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
getImagesFeedback feedback

================================================================================
MSG: irobot_inspection_pckg/getImagesFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#feedback
int32 n_imgs



")



(provide :irobot_inspection_pckg/getImagesAction "b270d3c28fb854788f9e6046572b835f")


