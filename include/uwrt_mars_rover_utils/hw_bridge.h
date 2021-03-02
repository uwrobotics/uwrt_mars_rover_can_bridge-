#pragma once
#include <string>

namespace HWBRIDGE {
namespace ROVERCONFIG {
constexpr uint16_t ROVER_MOTOR_PWM_FREQ_HZ = 20000;   // 20 kHz
constexpr uint32_t ROVER_CANBUS_FREQUENCY  = 500000;  // 500 kbps
constexpr uint16_t ROVER_CANID_FILTER_MASK = 0xFE0;   // Use bits [5:10] for addressing and 0:7 for command/message type
}  // namespace ROVERCONFIG

enum class CANFILTER {
  ROVER_CANID_FIRST_ERROR_TX      = 0x100,
  ROVER_CANID_FIRST_ARM_RX        = 0x740,
  ROVER_CANID_FIRST_ARM_TX        = 0x758,
  ROVER_CANID_FIRST_SCIENCE_RX    = 0x760,
  ROVER_CANID_FIRST_SCIENCE_TX    = 0x770,
  ROVER_CANID_FIRST_GIMBAL_RX = 0x780,
  ROVER_CANID_FIRST_GIMBAL_TX = 0x790
};

enum class CANERROR {
  // ERROR CAN IDs
  SAFETY_ERROR = 0x100,
  ARM_ERROR,
  SCIENCE_ERROR,
  GIMBAL_ERROR
};

enum class CANHEARTBEAT {
  // ERROR CAN IDs
  JETSON = 0x140,
  SAFETY,
  ARM,
  SCIENCE,
  GIMBAL,
  ROBOTEQ = 0x701
};

enum class CANID {
  // DRIVETRAIN CAN IDs
  TPDO1         = 0x181,
  TPDO2         = 0x281,
  TPDO3         = 0x381,
  TPDO4         = 0x481,
  RPDO1         = 0x201,
  RPDO2         = 0x301,
  RPDO3         = 0x401,
  RPDO4         = 0x501,
  SDO_CMD_QUERY = 0x601,
  SDO_RESPONSE  = 0x581,
  // SAFETY CAN IDs UNIMPLEMENTED
  // ARM CAN IDs
  ARM_RESET                  = 0x720,
  SET_TURNTABLE_CONTROL_MODE = 0x740,
  SET_SHOULDER_CONTROL_MODE,
  SET_ELBOW_CONTROL_MODE,
  SET_LEFT_WRIST_CONTROL_MODE,
  SET_RIGHT_WRIST_CONTROL_MODE,
  SET_CLAW_CONTROL_MODE,
  SET_TURNTABLE_MOTIONDATA = 0x746,
  SET_SHOULDER_MOTIONDATA,
  SET_ELBOW_MOTIONDATA,
  SET_LEFT_WRIST_MOTIONDATA,
  SET_RIGHT_WRIST_MOTIONDATA,
  SET_CLAW_MOTIONDATA,
  SET_TOOL_TIP_MOTIONDATA,
  SET_PID_TUNING_MODE = 0x750,
  SET_JOINT_PID_DEADZONE,
  SET_JOINT_PID_P,
  SET_JOINT_PID_I,
  SET_JOINT_PID_D,
  REPORT_TURNTABLE_MOTION = 0x758,
  REPORT_SHOULDER_MOTION,
  REPORT_ELBOW_MOTION,
  REPORT_LEFT_WRIST_MOTION,
  REPORT_RIGHT_WRIST_MOTION,
  REPORT_CLAW_MOTION,
  FORCE_SENSOR_VALUE,
  // SCIENCE CAN IDs
  SET_GENEVA_ANGLE = 0x760,
  SET_ELEVATOR_HEIGHT,
  SET_COVER_ANGLE,
  SET_SCOOPER_ANGLE,
  REPORT_GENEVA_ANGLE = 0x770,
  REPORT_ELEVATOR_HEIGHT,
  REPORT_MOISTURE_DATA,
  REPORT_TEMPERATURE_DATA,
  // GIMBAL CAN IDS
  SET_PAN_MOTION_DATA = 0x780,
  SET_PITCH_MOTION_DATA,
  SET_ROLL_MOTION_DATA,
  SET_PAN_CONTROL_MODE,
  NEOPIXEL_SET,
  NEOPIXEL_ACK
};

namespace ARM {
enum class ActuatorID { TURNTABLE, SHOULDER, ELBOW, WRISTLEFT, WRISTRIGHT, CLAW };
}

namespace CONTROL {
enum class Mode { OpenLoop, Velocity, Position, Current };
namespace PID {
using TuningApiPayload = struct __attribute__((__packed__)) TuningApiPayload {
  float value;
  ARM::ActuatorID actuatorID;
};
}  // namespace PID
}  // namespace CONTROL
}  // namespace HWBRIDGE
