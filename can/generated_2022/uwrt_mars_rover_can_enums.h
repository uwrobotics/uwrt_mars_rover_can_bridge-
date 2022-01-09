// AUTO-GENERATED FILE. DO NOT MODIFY. GENERATED BY
// scripts/generate_can_enums.py

#pragma once

namespace HWBRIDGE {

constexpr uint32_t ROVER_CANBUS_FREQUENCY_HZ = 1000000;
constexpr uint16_t ROVER_CANID_FILTER_MASK   = 0x7E0;  // Use bits 5:10 for addressing, bits 0:4 for message type

typedef double CANSignalValue_t;  // Generalize all signal values as double

typedef struct {
  uint8_t raw[8];
} CANMsgData_t;

enum class CANBUSID {
  CANBUS1,
  CANBUS2,
};

enum class CANFILTER {
  COMMON_FILTER = 0x720,
  NO_MESSAGES   = 0x7E0,

};

enum class CANID {
  // Roboteq CAN IDs
  TEMP = 0x0,

  // Rover boards CAN IDs

};

enum class CANSIGNAL {

};

}  // namespace HWBRIDGE
