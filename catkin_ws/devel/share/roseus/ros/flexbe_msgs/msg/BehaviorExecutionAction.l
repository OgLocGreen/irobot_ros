;; Auto-generated. Do not edit!


(when (boundp 'flexbe_msgs::BehaviorExecutionAction)
  (if (not (find-package "FLEXBE_MSGS"))
    (make-package "FLEXBE_MSGS"))
  (shadow 'BehaviorExecutionAction (find-package "FLEXBE_MSGS")))
(unless (find-package "FLEXBE_MSGS::BEHAVIOREXECUTIONACTION")
  (make-package "FLEXBE_MSGS::BEHAVIOREXECUTIONACTION"))

(in-package "ROS")
;;//! \htmlinclude BehaviorExecutionAction.msg.html


(defclass flexbe_msgs::BehaviorExecutionAction
  :super ros::object
  :slots (_action_goal _action_result _action_feedback ))

(defmethod flexbe_msgs::BehaviorExecutionAction
  (:init
   (&key
    ((:action_goal __action_goal) (instance flexbe_msgs::BehaviorExecutionActionGoal :init))
    ((:action_result __action_result) (instance flexbe_msgs::BehaviorExecutionActionResult :init))
    ((:action_feedback __action_feedback) (instance flexbe_msgs::BehaviorExecutionActionFeedback :init))
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
    ;; flexbe_msgs/BehaviorExecutionActionGoal _action_goal
    (send _action_goal :serialization-length)
    ;; flexbe_msgs/BehaviorExecutionActionResult _action_result
    (send _action_result :serialization-length)
    ;; flexbe_msgs/BehaviorExecutionActionFeedback _action_feedback
    (send _action_feedback :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; flexbe_msgs/BehaviorExecutionActionGoal _action_goal
       (send _action_goal :serialize s)
     ;; flexbe_msgs/BehaviorExecutionActionResult _action_result
       (send _action_result :serialize s)
     ;; flexbe_msgs/BehaviorExecutionActionFeedback _action_feedback
       (send _action_feedback :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; flexbe_msgs/BehaviorExecutionActionGoal _action_goal
     (send _action_goal :deserialize buf ptr-) (incf ptr- (send _action_goal :serialization-length))
   ;; flexbe_msgs/BehaviorExecutionActionResult _action_result
     (send _action_result :deserialize buf ptr-) (incf ptr- (send _action_result :serialization-length))
   ;; flexbe_msgs/BehaviorExecutionActionFeedback _action_feedback
     (send _action_feedback :deserialize buf ptr-) (incf ptr- (send _action_feedback :serialization-length))
   ;;
   self)
  )

(setf (get flexbe_msgs::BehaviorExecutionAction :md5sum-) "5137e5877c4ee9dbe6ca4796ad090f1a")
(setf (get flexbe_msgs::BehaviorExecutionAction :datatype-) "flexbe_msgs/BehaviorExecutionAction")
(setf (get flexbe_msgs::BehaviorExecutionAction :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

BehaviorExecutionActionGoal action_goal
BehaviorExecutionActionResult action_result
BehaviorExecutionActionFeedback action_feedback

================================================================================
MSG: flexbe_msgs/BehaviorExecutionActionGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
BehaviorExecutionGoal goal

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
MSG: flexbe_msgs/BehaviorExecutionGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Commands the execution of any behavior.

# name of the behavior to be executed
string behavior_name

# optional list of behavior parameters
string[] arg_keys
string[] arg_values

# optional list of initial userdata
string[] input_keys
string[] input_values


================================================================================
MSG: flexbe_msgs/BehaviorExecutionActionResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
BehaviorExecutionResult result

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
MSG: flexbe_msgs/BehaviorExecutionResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

# result of the executed behavior
string outcome


================================================================================
MSG: flexbe_msgs/BehaviorExecutionActionFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
BehaviorExecutionFeedback feedback

================================================================================
MSG: flexbe_msgs/BehaviorExecutionFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

# path of the current state
string current_state


")



(provide :flexbe_msgs/BehaviorExecutionAction "5137e5877c4ee9dbe6ca4796ad090f1a")


