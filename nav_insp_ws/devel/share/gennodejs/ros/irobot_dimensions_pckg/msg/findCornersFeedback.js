// Auto-generated. Do not edit!

// (in-package irobot_dimensions_pckg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class findCornersFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.n_imgs1 = null;
      this.n_imgs2 = null;
    }
    else {
      if (initObj.hasOwnProperty('n_imgs1')) {
        this.n_imgs1 = initObj.n_imgs1
      }
      else {
        this.n_imgs1 = 0;
      }
      if (initObj.hasOwnProperty('n_imgs2')) {
        this.n_imgs2 = initObj.n_imgs2
      }
      else {
        this.n_imgs2 = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type findCornersFeedback
    // Serialize message field [n_imgs1]
    bufferOffset = _serializer.int32(obj.n_imgs1, buffer, bufferOffset);
    // Serialize message field [n_imgs2]
    bufferOffset = _serializer.int32(obj.n_imgs2, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type findCornersFeedback
    let len;
    let data = new findCornersFeedback(null);
    // Deserialize message field [n_imgs1]
    data.n_imgs1 = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [n_imgs2]
    data.n_imgs2 = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'irobot_dimensions_pckg/findCornersFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b1ad6f2f9b9bf3e9730be353976757f4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #feedback
    int32 n_imgs1
    int32 n_imgs2
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new findCornersFeedback(null);
    if (msg.n_imgs1 !== undefined) {
      resolved.n_imgs1 = msg.n_imgs1;
    }
    else {
      resolved.n_imgs1 = 0
    }

    if (msg.n_imgs2 !== undefined) {
      resolved.n_imgs2 = msg.n_imgs2;
    }
    else {
      resolved.n_imgs2 = 0
    }

    return resolved;
    }
};

module.exports = findCornersFeedback;
