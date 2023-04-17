// Auto-generated. Do not edit!

// (in-package flexbe_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let SynthesisErrorCodes = require('./SynthesisErrorCodes.js');
let StateInstantiation = require('./StateInstantiation.js');

//-----------------------------------------------------------

class BehaviorSynthesisResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.error_code = null;
      this.states = null;
    }
    else {
      if (initObj.hasOwnProperty('error_code')) {
        this.error_code = initObj.error_code
      }
      else {
        this.error_code = new SynthesisErrorCodes();
      }
      if (initObj.hasOwnProperty('states')) {
        this.states = initObj.states
      }
      else {
        this.states = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type BehaviorSynthesisResult
    // Serialize message field [error_code]
    bufferOffset = SynthesisErrorCodes.serialize(obj.error_code, buffer, bufferOffset);
    // Serialize message field [states]
    // Serialize the length for message field [states]
    bufferOffset = _serializer.uint32(obj.states.length, buffer, bufferOffset);
    obj.states.forEach((val) => {
      bufferOffset = StateInstantiation.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type BehaviorSynthesisResult
    let len;
    let data = new BehaviorSynthesisResult(null);
    // Deserialize message field [error_code]
    data.error_code = SynthesisErrorCodes.deserialize(buffer, bufferOffset);
    // Deserialize message field [states]
    // Deserialize array length for message field [states]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.states = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.states[i] = StateInstantiation.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.states.forEach((val) => {
      length += StateInstantiation.getMessageSize(val);
    });
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'flexbe_msgs/BehaviorSynthesisResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '088bd6aee1c7ee2902db2babfd6af1c2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    
    # Provides feedback regarding possibly occured errors
    SynthesisErrorCodes error_code
    
    # Result of behavior synthesis as a list of state instantiations
    StateInstantiation[] states
    
    
    ================================================================================
    MSG: flexbe_msgs/SynthesisErrorCodes
    int32 value
    
    # success
    int32 SUCCESS = 1
    
    # all other values will be considered as any sort of error
    ================================================================================
    MSG: flexbe_msgs/StateInstantiation
    # Describes a single instantiation of a state
    
    # Path of this state inside the behavior
    # Last segment of the path is the name of this state
    # e.g. "/Inner_Statemachine/This_State"
    string state_path
    
    # Specifies the class implementing this state
    # Use one of the provided CLASS constants if this is not a primitive state
    # e.g. "CalculationState"
    string CLASS_STATEMACHINE 	= :STATEMACHINE
    string CLASS_CONCURRENCY 	= :CONCURRENCY
    string CLASS_PRIORITY 		= :PRIORITY
    string CLASS_BEHAVIOR 		= :BEHAVIOR
    string state_class
    
    
    
    # Only relevant for state machine, priority, and concurrency
    # Name of the initial state / state to be monitored
    string initial_state_name
    # Input and output keys (can be remapped below)
    string[] input_keys
    string[] output_keys
    
    # Only relevant for concurrency
    # Outcome conditions
    string[] cond_outcome
    OutcomeCondition[] cond_transition
    
    # Only relevant for behavior
    # Name of the class implementing this state
    string behavior_class
    
    # Only relevant for primitive state
    # List of parameter names and values of this state
    # Order of names and values has to match
    string[] parameter_names
    string[] parameter_values
    
    
    
    # Position of this state in the editor [x,y]
    float32[2] position
    
    # Outcomes of this state
    # Defines the order of the lists: transitions, autonomy
    string[] outcomes
    # Transition targets (state names or container outcomes) of the outcomes
    string[] transitions
    # Required autonomy level of the outcomes
    int8[] autonomy
    
    # Userdata of this state
    # Merges own input_keys and output_keys, no duplicates
    string[] userdata_keys
    # Remapping of the corresponding own key (= key used by container)
    string[] userdata_remapping
    ================================================================================
    MSG: flexbe_msgs/OutcomeCondition
    # Defines a conjunction of required state outcomes in order to return a concurrency outcome
    string[] state_name
    string[] state_outcome
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new BehaviorSynthesisResult(null);
    if (msg.error_code !== undefined) {
      resolved.error_code = SynthesisErrorCodes.Resolve(msg.error_code)
    }
    else {
      resolved.error_code = new SynthesisErrorCodes()
    }

    if (msg.states !== undefined) {
      resolved.states = new Array(msg.states.length);
      for (let i = 0; i < resolved.states.length; ++i) {
        resolved.states[i] = StateInstantiation.Resolve(msg.states[i]);
      }
    }
    else {
      resolved.states = []
    }

    return resolved;
    }
};

module.exports = BehaviorSynthesisResult;