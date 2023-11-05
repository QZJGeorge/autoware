/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2018-2021, Dataspeed Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Dataspeed Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/

#pragma once
#include <cstdint>

namespace dataspeed_ulc_can {

#pragma pack(push, 1)  // Pack structures to a single byte

typedef struct {
  int16_t lon_command      :16; // speed mode: 0.0025 m/s, -81.920 to 81.915 m/s, +-183 mph
                                // accel mode: 5e-4 m/s^2, -16.384 to 16.3835 m/s^2
  int16_t yaw_command      :16; // yaw rate mode: 0.00025 rad/s, -8.1920 to 8.1915 rad/s
                                // curvature mode: 0.0000061 1/m, -0.1999 1/m to 0.1999 1/m

  uint8_t steering_mode    :1;  // 0 = yaw rate mode, 1 = curvature mode
  uint8_t shift_from_park  :1;
  uint8_t enable_shifting  :1;
  uint8_t enable_steering  :1;
  uint8_t enable_pedals    :1;
  uint8_t clear            :1;
  uint8_t pedals_mode      :1;  // 0 = speed mode, 1 = accel mode
  uint8_t coast_decel      :1;

  uint8_t                  :8;
  uint8_t                  :8;
  uint8_t wdc;
} MsgUlcCmd;
static_assert(8 == sizeof(MsgUlcCmd));

typedef struct {
    uint8_t linear_accel;           // 0.025 m/s^2, 0 to 6.375 m/s^2
    uint8_t linear_decel;           // 0.025 m/s^2, 0 to 6.375 m/s^2
    uint8_t lateral_accel;          // 0.05 m/s^2, 0 to 12.75 m/s^2
    uint8_t angular_accel;          // 0.02 rad/s^2, 0 to 5.1 rad/s^2
    uint8_t jerk_limit_throttle;    // 0.1 m/s^3, 0 to 25.5 m/s^3
    uint8_t jerk_limit_brake;       // 0.1 m/s^3, 0 to 25.5 m/s^3
    uint8_t :8;
    uint8_t wdc;
} MsgUlcCfg;
static_assert(8 == sizeof(MsgUlcCfg));

typedef struct {
  int16_t speed_ref :13; // 0.02 m/s,
  uint16_t timeout :1;
  uint16_t pedals_enabled :1;
  uint16_t pedals_mode :1;
  int16_t speed_meas :13; // 0.02 m/s
  uint16_t override :1;
  uint16_t steering_enabled :1;
  uint16_t steering_mode: 1;
  int8_t  accel_ref; // 0.05 m/s^2
  int8_t accel_meas; // 0.05 m/s^2
  uint8_t max_steering_angle: 7; // 5 deg
  uint8_t coasting: 1;
  uint8_t max_steering_vel :6; //  8 deg/s
  uint8_t steering_preempted: 1;
  uint8_t speed_preempted: 1;
} MsgUlcReport;
static_assert(8 == sizeof(MsgUlcReport));

typedef struct {
  uint8_t module;
  uint8_t platform;
  uint16_t major;
  uint16_t minor;
  uint16_t build;
} MsgVersion;
static_assert(8 == sizeof(MsgVersion));

#pragma pack(pop)  // Undo packing

enum {
  ID_ULC_CMD            = 0x076,
  ID_ULC_CONFIG         = 0x077,
  ID_ULC_REPORT         = 0x078,
  ID_VERSION            = 0x07F,
};

} // namespace dataspeed_ulc_can
