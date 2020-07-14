#pragma once
#include <string>

namespace HWBRIDGE {
namespace ROVERCONFIG {
constexpr uint16_t ROVER_MOTOR_PWM_FREQ_HZ = 20000;   // 20 kHz
constexpr uint32_t ROVER_CANBUS_FREQUENCY  = 500000;  // 500 kbps
constexpr uint16_t ROVER_CANID_FILTER_MASK = 0xFE0;   // Use bits [5:10] for addressing and 0:7 for command/message type
}  // namespace ROVERCONFIG

namespace CANFILTER {
enum filtering_t {
  ROVER_CANID_FIRST_ERROR_TX      = 0x100,
  ROVER_CANID_FIRST_ARM_RX        = 0x720,
  ROVER_CANID_FIRST_ARM_TX        = 0x758,
  ROVER_CANID_FIRST_SCIENCE_RX    = 0x760,
  ROVER_CANID_FIRST_SCIENCE_TX    = 0x770,
  ROVER_CANID_FIRST_GIMBTONOMY_RX = 0x780,
  ROVER_CANID_FIRST_GIMBTONOMY_TX = 0x790
};
}

namespace CANERROR {
enum canError_t {
  // ERROR CAN IDs
  SAFETY_ERROR = 0x100,
  ARM_ERROR,
  SCIENCE_ERROR,
  GIMBTONOMY_ERROR
};
}  // namespace CANERROR

namespace CANHEARTBEAT {
enum canHeartbeat_t {
  // ERROR CAN IDs
  JETSON = 0x140,
  SAFETY,
  ARM,
  SCIENCE,
  GIMBTONOMY,
  ROBOTEQ = 0x701
};
}  // namespace CANHEARTBEAT

namespace CANID {
enum canID_t {
  // DRIVETRAIN CAN IDs
  TPDO1 = 0x181,
  TPDO2 = 0x281,
  TPDO3 = 0x381,
  TPDO4 = 0x481,
  RPDO1 = 0x201,
  RPDO2 = 0x301,
  RPDO3 = 0x401,
  RPDO4 = 0x501,
  SDO_CMD_QUERY = 0x601,
  SDO_RESPONSE = 0x581,
  // SAFETY CAN IDs UNIMPLEMENTED
  // ARM CAN IDs
  ARM_RESET = 0x720,
  SET_OVERRIDE_FLAGS,
  SET_TURNTABLE_CONTROL_MODE = 0x740,
  SET_SHOULDER_CONTROL_MODE,
  SET_ELBOW_CONTROL_MODE,
  SET_WRIST_CONTROL_MODE,
  SET_CLAW_CONTROL_MODE,
  SET_TURNTABLE_MOTIONDATA = 0x745,
  SET_SHOULDER_MOTIONDATA,
  SET_ELBOW_MOTIONDATA,
  SET_WRIST_PITCH_MOTIONDATA,
  SET_WRIST_ROLL_MOTIONDATA,
  SET_CLAW_MOTIONDATA,
  SET_TOOL_TIP_DEPLOYMENT,
  RUN_WRIST_CALIBRATION = 0x74C,
  RUN_CLAW_CALIBRATION,
  SET_PID_TUNING_MODE = 0x750,
  SET_PID_DEADZONE,
  SET_JOINT_PID_P,
  SET_JOINT_PID_I,
  SET_JOINT_PID_D,
  SET_JOINT_PID_BIAS,
  REPORT_TURNTABLE_MOTION = 0x758,
  REPORT_SHOULDER_MOTION,
  REPORT_ELBOW_MOTION,
  REPORT_WRIST_PITCH_MOTION,
  REPORT_WRIST_ROLL_MOTION,
  REPORT_CLAW_MOTION,
  FORCE_SENSOR_VALUE,
  // SCIENCE CAN IDs
  SET_GENEVA_INDEX = 0x760,
  SET_DIGGER_LIFT_HEIGHT,
  SET_COVER_INDEX,
  SET_SCOOPER_INDEX,
  REPORT_GENEVA_INDEX = 0x770,
  REPORT_DIGGER_LIFT_POS,
  REPORT_COVER_POS,
  REPORT_SCOOPER_POS,
  // GIMBTONOMY CAN IDS
  GIMBAL_PAN_POSITION = 0x780,
  GIMBAL_PAN_SPEED,
  GIMBAL_PITCH_POS,
  GIMBAL_PAN_MODE,
  NEOPIXEL_SET,
  NEOPIXEL_ACK
};
}  // namespace CANID

namespace ARM {
namespace ACTUATOR {
enum actuatorID_t { TURNTABLE, SHOULDER, ELBOW, WRISTLEFT, WRISTRIGHT, CLAW };
std::string stringifyActuatorID(actuatorID_t actuator);
}  // namespace ACTUATOR
namespace PID {
typedef struct __attribute__((__packed__)) {
  float value;
  bool velocity;
  uint8_t actuatorID;
} payload;
enum parameter_t { P, I, D, DEADZONE, BIAS };
std::string stringifyParam(parameter_t param);
std::string stringifyVelPos(bool vel_pos);
}  // namespace PID
}  // namespace ARM
}  // namespace HWBRIDGE
