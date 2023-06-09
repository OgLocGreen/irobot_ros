// Auto-generated. Do not edit!

// (in-package irobot_inspection_pckg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let getImagesActionGoal = require('./getImagesActionGoal.js');
let getImagesActionResult = require('./getImagesActionResult.js');
let getImagesActionFeedback = require('./getImagesActionFeedback.js');

//-----------------------------------------------------------

class getImagesAction {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.action_goal = null;
      this.action_result = null;
      this.action_feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('action_goal')) {
        this.action_goal = initObj.action_goal
      }
      else {
        this.action_goal = new getImagesActionGoal();
      }
      if (initObj.hasOwnProperty('action_result')) {
        this.action_result = initObj.action_result
      }
      else {
        this.action_result = new getImagesActionResult();
      }
      if (initObj.hasOwnProperty('action_feedback')) {
        this.action_feedback = initObj.action_feedback
      }
      else {
        this.action_feedback = new getImagesActionFeedback();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type getImagesAction
    // Serialize message field [action_goal]
    bufferOffset = getImagesActionGoal.serialize(obj.action_goal, buffer, bufferOffset);
    // Serialize message field [action_result]
    bufferOffset = getImagesActionResult.serialize(obj.action_result, buffer, bufferOffset);
    // Serialize message field [action_feedback]
    bufferOffset = getImagesActionFeedback.serialize(obj.action_feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type getImagesAction
    let len;
    let data = new getImagesAction(null);
    // Deserialize message field [action_goal]
    data.action_goal = getImagesActionGoal.deserialize(buffer, bufferOffset);
    // Deserialize message field [action_result]
    data.action_result = getImagesActionResult.deserialize(buffer, bufferOffset);
    // Deserialize message field [action_feedback]
    data.action_feedback = getImagesActionFeedback.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += getImagesActionGoal.getMessageSize(object.action_goal);
    length += getImagesActionResult.getMessageSize(object.action_result);
    length += getImagesActionFeedback.getMessageSize(object.action_feedback);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'irobot_inspection_pckg/getImagesAction';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b270d3c28fb854788f9e6046572b835f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
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
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new getImagesAction(null);
    if (msg.action_goal !== undefined) {
      resolved.action_goal = getImagesActionGoal.Resolve(msg.action_goal)
    }
    else {
      resolved.action_goal = new getImagesActionGoal()
    }

    if (msg.action_result !== undefined) {
      resolved.action_result = getImagesActionResult.Resolve(msg.action_result)
    }
    else {
      resolved.action_result = new getImagesActionResult()
    }

    if (msg.action_feedback !== undefined) {
      resolved.action_feedback = getImagesActionFeedback.Resolve(msg.action_feedback)
    }
    else {
      resolved.action_feedback = new getImagesActionFeedback()
    }

    return resolved;
    }
};

module.exports = getImagesAction;
