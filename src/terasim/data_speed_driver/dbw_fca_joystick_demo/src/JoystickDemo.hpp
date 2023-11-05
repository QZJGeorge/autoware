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

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <std_msgs/msg/empty.hpp>

#include <dbw_fca_msgs/msg/brake_cmd.hpp>
#include <dbw_fca_msgs/msg/gear_cmd.hpp>
#include <dbw_fca_msgs/msg/steering_cmd.hpp>
#include <dbw_fca_msgs/msg/throttle_cmd.hpp>
#include <dbw_fca_msgs/msg/misc_cmd.hpp>

namespace dbw_fca_joystick_demo {

typedef struct {
  rclcpp::Time stamp;
  float brake_joy;
  float throttle_joy;
  float steering_joy;
  bool steering_mult;
  int gear_cmd;
  int turn_signal_cmd;
  int door_select;
  int door_action;
  bool joy_throttle_valid;
  bool joy_brake_valid;
} JoystickDataStruct;

class JoystickDemo : public rclcpp::Node {
public:
  JoystickDemo(const rclcpp::NodeOptions& options);

private:
  void recvJoy(const sensor_msgs::msg::Joy::ConstSharedPtr msg);
  void cmdCallback();

  // Topics
  rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr sub_joy_;
  rclcpp::Publisher<dbw_fca_msgs::msg::BrakeCmd>::SharedPtr pub_brake_;
  rclcpp::Publisher<dbw_fca_msgs::msg::ThrottleCmd>::SharedPtr pub_throttle_;
  rclcpp::Publisher<dbw_fca_msgs::msg::SteeringCmd>::SharedPtr pub_steering_;
  rclcpp::Publisher<dbw_fca_msgs::msg::GearCmd>::SharedPtr pub_gear_;
  rclcpp::Publisher<dbw_fca_msgs::msg::MiscCmd>::SharedPtr pub_misc_;
  rclcpp::Publisher<std_msgs::msg::Empty>::SharedPtr pub_enable_;
  rclcpp::Publisher<std_msgs::msg::Empty>::SharedPtr pub_disable_;

  // Parameters
  bool brake_;     // Send brake commands
  bool throttle_;  // Send throttle commands
  bool steer_;     // Send steering commands
  bool shift_;     // Send shift commands
  bool signal_;    // Send turn signal commands

  // Parameters
  float brake_gain_;     // Adjust brake value
  float throttle_gain_;  // Adjust throttle value

  // Parameters
  bool ignore_;  // Ignore driver overrides
  bool enable_;  // Use enable and disable buttons
  bool count_;   // Increment counter to enable watchdog
  bool strq_;    // Steering torque command (otherwise angle)
  float svel_;   // Steering command speed

  // Variables
  rclcpp::TimerBase::SharedPtr timer_;
  JoystickDataStruct data_;
  sensor_msgs::msg::Joy joy_;
  uint8_t counter_ = 0;
  float last_steering_filt_output_;

  enum {
    BTN_PARK = 3,
    BTN_REVERSE = 1,
    BTN_NEUTRAL = 2,
    BTN_DRIVE = 0,
    BTN_ENABLE = 5,
    BTN_DISABLE = 4,
    BTN_STEER_MULT_1 = 6,
    BTN_STEER_MULT_2 = 7,
    BTN_TRUNK_OPEN = 9,
    BTN_TRUNK_CLOSE = 10,
    BTN_COUNT_X = 11,
    BTN_COUNT_D = 12,
    AXIS_THROTTLE = 5,
    AXIS_BRAKE = 2,
    AXIS_STEER_1 = 0,
    AXIS_STEER_2 = 3,
    AXIS_TURN_SIG = 6,
    AXIS_DOOR_SELECT = 6,
    AXIS_DOOR_ACTION = 7,
    AXIS_COUNT_D = 6,
    AXIS_COUNT_X = 8,
  };
};

} // namespace dbw_fca_joystick_demo
