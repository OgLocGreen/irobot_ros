// Auto-generated. Do not edit!

// (in-package flexbe_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class BehaviorInputGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.request_type = null;
      this.msg = null;
    }
    else {
      if (initObj.hasOwnProperty('request_type')) {
        this.request_type = initObj.request_type
      }
      else {
        this.request_type = 0;
      }
      if (initObj.hasOwnProperty('msg')) {
        this.msg = initObj.msg
      }
      else {
        this.msg = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type BehaviorInputGoal
    // Serialize message field [request_type]
    bufferOffset = _serializer.uint8(obj.request_type, buffer, bufferOffset);
    // Serialize message field [msg]
    bufferOffset = _serializer.string(obj.msg, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type BehaviorInputGoal
    let len;
    let data = new BehaviorInputGoal(null);
    // Deserialize message field [request_type]
    data.request_type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [msg]
    data.msg = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.msg.length;
    return length + 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'flexbe_msgs/BehaviorInputGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7ce7fc3e0d93d66895817ecbe9d411f6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Available request types
    
    uint8 POINT_LOCATION 	    = 0
    uint8 SELECTED_OBJECT_ID    = 1
    uint8 WAYPOINT_GOAL_POSE    = 2
    uint8 GHOST_JOINT_STATES    = 3
    uint8 FOOTSTEP_PLAN_HEADER  = 4
    
    
    # Choose one of the available request types above
    uint8 request_type
    
    # Request message displayed to the operator
    # Provide context information, i.e. for which purpose the data is required.
    # The operator will be told which type of data to provide indepently from this message.
    string msg
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new BehaviorInputGoal(null);
    if (msg.request_type !== undefined) {
      resolved.request_type = msg.request_type;
    }
    else {
      resolved.request_type = 0
    }

    if (msg.msg !== undefined) {
      resolved.msg = msg.msg;
    }
    else {
      resolved.msg = ''
    }

    return resolved;
    }
};

// Constants for message
BehaviorInputGoal.Constants = {
  POINT_LOCATION: 0,
  SELECTED_OBJECT_ID: 1,
  WAYPOINT_GOAL_POSE: 2,
  GHOST_JOINT_STATES: 3,
  FOOTSTEP_PLAN_HEADER: 4,
}

module.exports = BehaviorInputGoal;
