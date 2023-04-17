// Auto-generated. Do not edit!

// (in-package irobot_inspection_pckg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class getImagesGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.folder_path = null;
      this.calib_path = null;
      this.id_marker = null;
    }
    else {
      if (initObj.hasOwnProperty('folder_path')) {
        this.folder_path = initObj.folder_path
      }
      else {
        this.folder_path = new std_msgs.msg.String();
      }
      if (initObj.hasOwnProperty('calib_path')) {
        this.calib_path = initObj.calib_path
      }
      else {
        this.calib_path = new std_msgs.msg.String();
      }
      if (initObj.hasOwnProperty('id_marker')) {
        this.id_marker = initObj.id_marker
      }
      else {
        this.id_marker = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type getImagesGoal
    // Serialize message field [folder_path]
    bufferOffset = std_msgs.msg.String.serialize(obj.folder_path, buffer, bufferOffset);
    // Serialize message field [calib_path]
    bufferOffset = std_msgs.msg.String.serialize(obj.calib_path, buffer, bufferOffset);
    // Serialize message field [id_marker]
    bufferOffset = _serializer.int32(obj.id_marker, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type getImagesGoal
    let len;
    let data = new getImagesGoal(null);
    // Deserialize message field [folder_path]
    data.folder_path = std_msgs.msg.String.deserialize(buffer, bufferOffset);
    // Deserialize message field [calib_path]
    data.calib_path = std_msgs.msg.String.deserialize(buffer, bufferOffset);
    // Deserialize message field [id_marker]
    data.id_marker = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.String.getMessageSize(object.folder_path);
    length += std_msgs.msg.String.getMessageSize(object.calib_path);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'irobot_inspection_pckg/getImagesGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3f5f55cb2ff4b5f321f0db7c5980bdb9';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #goal definition
    std_msgs/String folder_path
    std_msgs/String calib_path
    int32 id_marker
    
    ================================================================================
    MSG: std_msgs/String
    string data
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new getImagesGoal(null);
    if (msg.folder_path !== undefined) {
      resolved.folder_path = std_msgs.msg.String.Resolve(msg.folder_path)
    }
    else {
      resolved.folder_path = new std_msgs.msg.String()
    }

    if (msg.calib_path !== undefined) {
      resolved.calib_path = std_msgs.msg.String.Resolve(msg.calib_path)
    }
    else {
      resolved.calib_path = new std_msgs.msg.String()
    }

    if (msg.id_marker !== undefined) {
      resolved.id_marker = msg.id_marker;
    }
    else {
      resolved.id_marker = 0
    }

    return resolved;
    }
};

module.exports = getImagesGoal;
