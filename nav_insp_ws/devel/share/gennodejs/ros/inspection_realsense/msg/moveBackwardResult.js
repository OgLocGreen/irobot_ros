// Auto-generated. Do not edit!

// (in-package inspection_realsense.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class moveBackwardResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.finished = null;
      this.n_pasadas_act = null;
      this.n_imgs_act = null;
    }
    else {
      if (initObj.hasOwnProperty('finished')) {
        this.finished = initObj.finished
      }
      else {
        this.finished = false;
      }
      if (initObj.hasOwnProperty('n_pasadas_act')) {
        this.n_pasadas_act = initObj.n_pasadas_act
      }
      else {
        this.n_pasadas_act = 0;
      }
      if (initObj.hasOwnProperty('n_imgs_act')) {
        this.n_imgs_act = initObj.n_imgs_act
      }
      else {
        this.n_imgs_act = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type moveBackwardResult
    // Serialize message field [finished]
    bufferOffset = _serializer.bool(obj.finished, buffer, bufferOffset);
    // Serialize message field [n_pasadas_act]
    bufferOffset = _serializer.int32(obj.n_pasadas_act, buffer, bufferOffset);
    // Serialize message field [n_imgs_act]
    bufferOffset = _serializer.int32(obj.n_imgs_act, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type moveBackwardResult
    let len;
    let data = new moveBackwardResult(null);
    // Deserialize message field [finished]
    data.finished = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [n_pasadas_act]
    data.n_pasadas_act = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [n_imgs_act]
    data.n_imgs_act = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'inspection_realsense/moveBackwardResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '1eb6bc0e5a253dc264ac900fe4b70f59';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    #result definition
    bool finished
    int32 n_pasadas_act
    int32 n_imgs_act
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new moveBackwardResult(null);
    if (msg.finished !== undefined) {
      resolved.finished = msg.finished;
    }
    else {
      resolved.finished = false
    }

    if (msg.n_pasadas_act !== undefined) {
      resolved.n_pasadas_act = msg.n_pasadas_act;
    }
    else {
      resolved.n_pasadas_act = 0
    }

    if (msg.n_imgs_act !== undefined) {
      resolved.n_imgs_act = msg.n_imgs_act;
    }
    else {
      resolved.n_imgs_act = 0
    }

    return resolved;
    }
};

module.exports = moveBackwardResult;
