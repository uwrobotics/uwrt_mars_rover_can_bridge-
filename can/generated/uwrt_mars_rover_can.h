/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018-2019 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by cantools version 36.2.0 Sat Mar 20 12:07:20 2021.
 */

#ifndef UWRT_MARS_ROVER_CAN_H
#define UWRT_MARS_ROVER_CAN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifndef EINVAL
#    define EINVAL 22
#endif

/* Frame ids. */
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_FRAME_ID (0x00u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_MOTION_DATA_FRAME_ID (0x01u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_FRAME_ID (0x02u)

/* Frame lengths in bytes. */
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_LENGTH (8u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_MOTION_DATA_LENGTH (8u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_LENGTH (8u)

/* Extended or standard frame types. */
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_IS_EXTENDED (0)
#define UWRT_MARS_ROVER_CAN_ARM_SET_MOTION_DATA_IS_EXTENDED (0)
#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_IS_EXTENDED (0)

/* Frame cycle times in milliseconds. */


/* Signal choices. */
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_TURNTABLE_CONTROL_MODE_OPEN_LOOP_CHOICE (0u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_TURNTABLE_CONTROL_MODE_POSITION_CHOICE (1u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_TURNTABLE_CONTROL_MODE_VELOCITY_CHOICE (2u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_TURNTABLE_CONTROL_MODE_CURRENT_CHOICE (3u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_TURNTABLE_CONTROL_MODE_SNA_CHOICE (7u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_SHOULDER_CONTROL_MODE_OPEN_LOOP_CHOICE (0u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_SHOULDER_CONTROL_MODE_POSITION_CHOICE (1u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_SHOULDER_CONTROL_MODE_VELOCITY_CHOICE (2u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_SHOULDER_CONTROL_MODE_CURRENT_CHOICE (3u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_SHOULDER_CONTROL_MODE_SNA_CHOICE (7u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_ELBOW_CONTROL_MODE_OPEN_LOOP_CHOICE (0u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_ELBOW_CONTROL_MODE_POSITION_CHOICE (1u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_ELBOW_CONTROL_MODE_VELOCITY_CHOICE (2u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_ELBOW_CONTROL_MODE_CURRENT_CHOICE (3u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_ELBOW_CONTROL_MODE_SNA_CHOICE (7u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_LEFT_WRIST_CONTROL_MODE_OPEN_LOOP_CHOICE (0u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_LEFT_WRIST_CONTROL_MODE_POSITION_CHOICE (1u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_LEFT_WRIST_CONTROL_MODE_VELOCITY_CHOICE (2u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_LEFT_WRIST_CONTROL_MODE_CURRENT_CHOICE (3u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_LEFT_WRIST_CONTROL_MODE_SNA_CHOICE (7u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_RIGHT_WRIST_CONTROL_MODE_OPEN_LOOP_CHOICE (0u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_RIGHT_WRIST_CONTROL_MODE_POSITION_CHOICE (1u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_RIGHT_WRIST_CONTROL_MODE_VELOCITY_CHOICE (2u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_RIGHT_WRIST_CONTROL_MODE_CURRENT_CHOICE (3u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_RIGHT_WRIST_CONTROL_MODE_SNA_CHOICE (7u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_CLAW_CONTROL_MODE_OPEN_LOOP_CHOICE (0u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_CLAW_CONTROL_MODE_POSITION_CHOICE (1u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_CLAW_CONTROL_MODE_VELOCITY_CHOICE (2u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_CLAW_CONTROL_MODE_CURRENT_CHOICE (3u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_CONTROL_MODE_ARM_CLAW_CONTROL_MODE_SNA_CHOICE (7u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_MOTION_DATA_ARM_TURNTABLE_MOTION_DATA_SNA_CHOICE (65535u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_MOTION_DATA_ARM_SHOULDER_MOTION_DATA_SNA_CHOICE (65535u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_ARM_PID_TUNING_MODE_POSITION_CHOICE (0u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_ARM_PID_TUNING_MODE_VELOCITY_CHOICE (1u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_ARM_PID_TUNING_MODE_CURRENT_CHOICE (2u)
#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_ARM_PID_TUNING_MODE_SNA_CHOICE (3u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_ARM_TURNTABLE_PID_DEADZONE_SNA_CHOICE (65535u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_ARM_TURNTABLE_PIDP_SNA_CHOICE (65535u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_ARM_TURNTABLE_PIDI_SNA_CHOICE (65535u)

#define UWRT_MARS_ROVER_CAN_ARM_SET_TURNTABLE_PID_PARAMS_ARM_TURNTABLE_PIDD_SNA_CHOICE (65535u)

/**
 * Signals in message ARM_setControlMode.
 *
 * Set control mode for arm joints
 *
 * All signal values are as on the CAN bus.
 */
struct uwrt_mars_rover_can_arm_set_control_mode_t {
    /**
     * Arm turntable PID control mode
     *
     * Range: 0..6 (0.0..6.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_turntable_control_mode;

    /**
     * Arm shoulder PID control mode
     *
     * Range: 0..6 (0.0..6.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_shoulder_control_mode;

    /**
     * Arm elbow PID control mode
     *
     * Range: 0..6 (0.0..6.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_elbow_control_mode;

    /**
     * Arm left wrist PID control mode
     *
     * Range: 0..6 (0.0..6.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_left_wrist_control_mode;

    /**
     * Arm right wrist PID control mode
     *
     * Range: 0..6 (0.0..6.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_right_wrist_control_mode;

    /**
     * Arm claw PID control mode
     *
     * Range: 0..6 (0.0..6.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_claw_control_mode;
};

/**
 * Signals in message ARM_setMotionData.
 *
 * Set motion data for arm joints
 *
 * All signal values are as on the CAN bus.
 */
struct uwrt_mars_rover_can_arm_set_motion_data_t {
    /**
     * Arm turntable motion data
     *
     * Range: 0..65534.00000000000063803902400 (0.0..10.0 radians)
     * Scale: 0.00015259254737998596
     * Offset: 0.0
     */
    uint16_t arm_turntable_motion_data;

    /**
     * Arm shoulder motion data
     *
     * Range: 0..65534 (-5.0..4.99969482421875 radians)
     * Scale: 0.000152587890625
     * Offset: -5.0
     */
    uint16_t arm_shoulder_motion_data;
};

/**
 * Signals in message ARM_setTurntablePIDParams.
 *
 * Set arm turntable PID parameters
 *
 * All signal values are as on the CAN bus.
 */
struct uwrt_mars_rover_can_arm_set_turntable_pid_params_t {
    /**
     * Arm PID tuning mode
     *
     * Range: 0..0 (0.0..0.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_pid_tuning_mode;

    /**
     * Arm turntable PID deadzone
     *
     * Range: 0..0 (0.0..0.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_turntable_pid_deadzone;

    /**
     * Arm turntable PID proportional gain
     *
     * Range: 0..0 (0.0..0.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_turntable_pidp;

    /**
     * Arm turntable PID integral gain
     *
     * Range: 0..0 (0.0..0.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_turntable_pidi;

    /**
     * Arm turntable PID derivative gain
     *
     * Range: 0..0 (0.0..0.0 -)
     * Scale: 1.0
     * Offset: 0.0
     */
    uint8_t arm_turntable_pidd;
};

/**
 * Pack message ARM_setControlMode.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int uwrt_mars_rover_can_arm_set_control_mode_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_arm_set_control_mode_t *src_p,
    size_t size);

/**
 * Unpack message ARM_setControlMode.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int uwrt_mars_rover_can_arm_set_control_mode_unpack(
    struct uwrt_mars_rover_can_arm_set_control_mode_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_control_mode_arm_turntable_control_mode_is_in_range(uint8_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_control_mode_arm_shoulder_control_mode_is_in_range(uint8_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_control_mode_arm_elbow_control_mode_is_in_range(uint8_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_control_mode_arm_left_wrist_control_mode_is_in_range(uint8_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_control_mode_arm_right_wrist_control_mode_is_in_range(uint8_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_control_mode_arm_claw_control_mode_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_control_mode_arm_claw_control_mode_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_control_mode_arm_claw_control_mode_is_in_range(uint8_t value);

/**
 * Pack message ARM_setMotionData.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int uwrt_mars_rover_can_arm_set_motion_data_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_arm_set_motion_data_t *src_p,
    size_t size);

/**
 * Unpack message ARM_setMotionData.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int uwrt_mars_rover_can_arm_set_motion_data_unpack(
    struct uwrt_mars_rover_can_arm_set_motion_data_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint16_t uwrt_mars_rover_can_arm_set_motion_data_arm_turntable_motion_data_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_motion_data_arm_turntable_motion_data_decode(uint16_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_motion_data_arm_turntable_motion_data_is_in_range(uint16_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint16_t uwrt_mars_rover_can_arm_set_motion_data_arm_shoulder_motion_data_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_motion_data_arm_shoulder_motion_data_decode(uint16_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_motion_data_arm_shoulder_motion_data_is_in_range(uint16_t value);

/**
 * Pack message ARM_setTurntablePIDParams.
 *
 * @param[out] dst_p Buffer to pack the message into.
 * @param[in] src_p Data to pack.
 * @param[in] size Size of dst_p.
 *
 * @return Size of packed data, or negative error code.
 */
int uwrt_mars_rover_can_arm_set_turntable_pid_params_pack(
    uint8_t *dst_p,
    const struct uwrt_mars_rover_can_arm_set_turntable_pid_params_t *src_p,
    size_t size);

/**
 * Unpack message ARM_setTurntablePIDParams.
 *
 * @param[out] dst_p Object to unpack the message into.
 * @param[in] src_p Message to unpack.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int uwrt_mars_rover_can_arm_set_turntable_pid_params_unpack(
    struct uwrt_mars_rover_can_arm_set_turntable_pid_params_t *dst_p,
    const uint8_t *src_p,
    size_t size);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_pid_tuning_mode_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_pid_tuning_mode_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_pid_tuning_mode_is_in_range(uint8_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_deadzone_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_deadzone_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pid_deadzone_is_in_range(uint8_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pidp_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pidp_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pidp_is_in_range(uint8_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pidi_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pidi_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pidi_is_in_range(uint8_t value);

/**
 * Encode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to encode.
 *
 * @return Encoded signal.
 */
uint8_t uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pidd_encode(double value);

/**
 * Decode given signal by applying scaling and offset.
 *
 * @param[in] value Signal to decode.
 *
 * @return Decoded signal.
 */
double uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pidd_decode(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool uwrt_mars_rover_can_arm_set_turntable_pid_params_arm_turntable_pidd_is_in_range(uint8_t value);


#ifdef __cplusplus
}
#endif

#endif
