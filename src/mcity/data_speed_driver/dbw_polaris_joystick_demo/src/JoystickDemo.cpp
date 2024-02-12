/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2020-2021, Dataspeed Inc.
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

#include "JoystickDemo.hpp"

namespace dbw_polaris_joystick_demo {

JoystickDemo::JoystickDemo(const rclcpp::NodeOptions &options) : rclcpp::Node("joy_demo", options) {
  joy_.axes.resize(AXIS_COUNT_X, 0);
  joy_.buttons.resize(BTN_COUNT_X, 0);

  brake_ = declare_parameter<bool>("brake", true);
  throttle_ = declare_parameter<bool>("throttle", true);
  steer_ = declare_parameter<bool>("steer", true);
  shift_ = declare_parameter<bool>("shift", true);
  brake_gain_ = declare_parameter<float>("brake_gain", 1.0f);
  throttle_gain_ = declare_parameter<float>("throttle_gain", 1.0f);
  brake_gain_    = std::clamp<float>(brake_gain_,    0, 1);
  throttle_gain_ = std::clamp<float>(throttle_gain_, 0, 1);

  last_steering_filt_output_ = 0.0;
  ignore_ = declare_parameter<bool>("ignore", false);
  enable_ = declare_parameter<bool>("enable", true);
  count_ = declare_parameter<bool>("count", false);
  strq_ = declare_parameter<bool>("strq", false);
  svel_ = declare_parameter<float>("svel", 0.0f);

  using std::placeholders::_1;
  sub_joy_ = create_subscription<sensor_msgs::msg::Joy>("/joy", 1, std::bind(&JoystickDemo::recvJoy, this, _1));

  data_.brake_joy = 0.0;
  data_.gear_cmd = dbw_polaris_msgs::msg::Gear::NONE;
  data_.steering_joy = 0.0;
  data_.steering_mult = false;
  data_.steering_cal = false;
  data_.throttle_joy = 0.0;
  data_.joy_throttle_valid = false;
  data_.joy_brake_valid = false;

  if (brake_) {
    pub_brake_ = create_publisher<dbw_polaris_msgs::msg::BrakeCmd>("brake_cmd", 1);
  }
  if (throttle_) {
    pub_throttle_ = create_publisher<dbw_polaris_msgs::msg::ThrottleCmd>("throttle_cmd", 1);
  }
  if (steer_) {
    pub_steering_ = create_publisher<dbw_polaris_msgs::msg::SteeringCmd>("steering_cmd", 1);
  }
  if (shift_) {
    pub_gear_ = create_publisher<dbw_polaris_msgs::msg::GearCmd>("gear_cmd", 1);
  }
  if (enable_) {
    pub_enable_ = create_publisher<std_msgs::msg::Empty>("enable", 1);
    pub_disable_ = create_publisher<std_msgs::msg::Empty>("disable", 1);
  }

  // Initilize timestamp to be old (timeout)
  data_.stamp = now() - std::chrono::seconds(1);
  timer_ = create_wall_timer(std::chrono::milliseconds(20), std::bind(&JoystickDemo::cmdCallback, this));
}

void JoystickDemo::cmdCallback() {
  // Detect joy timeouts and reset
  if (now() - data_.stamp > std::chrono::milliseconds(100)) {
    data_.joy_throttle_valid = false;
    data_.joy_brake_valid = false;
    last_steering_filt_output_ = 0.0;
    return;
  }

  // Optional watchdog counter
  if (count_) {
    counter_++;
  }

  // Brake
  if (brake_) {
    dbw_polaris_msgs::msg::BrakeCmd msg;
    msg.enable = true;
    msg.ignore = ignore_;
    msg.count = counter_;
    msg.pedal_cmd_type = dbw_polaris_msgs::msg::BrakeCmd::CMD_PERCENT;
    msg.pedal_cmd = data_.brake_joy * brake_gain_;
    pub_brake_->publish(msg);
  }

  // Throttle
  if (throttle_) {
    dbw_polaris_msgs::msg::ThrottleCmd msg;
    msg.enable = true;
    msg.ignore = ignore_;
    msg.count = counter_;
    msg.pedal_cmd_type = dbw_polaris_msgs::msg::ThrottleCmd::CMD_PERCENT;
    msg.pedal_cmd = data_.throttle_joy * throttle_gain_;
    pub_throttle_->publish(msg);
  }

  // Steering
  if (steer_) {
    dbw_polaris_msgs::msg::SteeringCmd msg;
    msg.enable = true;
    msg.ignore = ignore_;
    msg.count = counter_;
    msg.calibrate = data_.steering_cal;
    if (!strq_) {
      msg.cmd_type = dbw_polaris_msgs::msg::SteeringCmd::CMD_ANGLE;

      float raw_steering_cmd;
      if (data_.steering_mult) {
        raw_steering_cmd = dbw_polaris_msgs::msg::SteeringCmd::ANGLE_MAX * data_.steering_joy;
      } else {
        raw_steering_cmd = 0.5 * dbw_polaris_msgs::msg::SteeringCmd::ANGLE_MAX * data_.steering_joy;
      }

      float tau = 0.1;
      float filtered_steering_cmd = 0.02 / tau * raw_steering_cmd + (1 - 0.02 / tau) * last_steering_filt_output_;
      last_steering_filt_output_ = filtered_steering_cmd;

      msg.steering_wheel_angle_velocity = svel_;
      msg.steering_wheel_angle_cmd = filtered_steering_cmd;
    } else {
      msg.cmd_type = dbw_polaris_msgs::msg::SteeringCmd::CMD_TORQUE;
      msg.steering_wheel_torque_cmd = dbw_polaris_msgs::msg::SteeringCmd::TORQUE_MAX * data_.steering_joy;
    }
    pub_steering_->publish(msg);
  }

  // Gear
  if (shift_) {
    if (data_.gear_cmd != dbw_polaris_msgs::msg::Gear::NONE) {
      dbw_polaris_msgs::msg::GearCmd msg;
      msg.cmd.gear = data_.gear_cmd;
      pub_gear_->publish(msg);
    }
  }
}

void JoystickDemo::recvJoy(const sensor_msgs::msg::Joy::ConstSharedPtr msg) {
  // Check for expected sizes
  if (msg->axes.size() != (size_t)AXIS_COUNT_X && msg->buttons.size() != (size_t)BTN_COUNT_X) {
    if (msg->axes.size() == (size_t)AXIS_COUNT_D && msg->buttons.size() == (size_t)BTN_COUNT_D) {
      RCLCPP_ERROR_THROTTLE(
          get_logger(), *get_clock(), 2e3,
          "Detected Logitech Gamepad F310 in DirectInput (D) mode. Please select (X) with the switch on "
          "the back to select XInput mode.");
    }
    if (msg->axes.size() != (size_t)AXIS_COUNT_X) {
      RCLCPP_ERROR_THROTTLE(get_logger(), *get_clock(), 2e3, "Expected %zu joy axis count, received %zu",
                            (size_t)AXIS_COUNT_X, msg->axes.size());
    }
    if (msg->buttons.size() != (size_t)BTN_COUNT_X) {
      RCLCPP_ERROR_THROTTLE(get_logger(), *get_clock(), 2e3, "Expected %zu joy button count, received %zu",
                            (size_t)BTN_COUNT_X, msg->buttons.size());
    }
    return;
  }

  // Handle joystick startup
  if (msg->axes[AXIS_THROTTLE] != 0.0) {
    data_.joy_throttle_valid = true;
  }
  if (msg->axes[AXIS_BRAKE] != 0.0) {
    data_.joy_brake_valid = true;
  }

  // Throttle
  if (data_.joy_throttle_valid) {
    data_.throttle_joy = 0.5 - 0.5 * msg->axes[AXIS_THROTTLE];
  }

  // Brake
  if (data_.joy_brake_valid) {
    data_.brake_joy = 0.5 - 0.5 * msg->axes[AXIS_BRAKE];
  }

  // Gear
  if (msg->buttons[BTN_PARK]) {
    data_.gear_cmd = dbw_polaris_msgs::msg::Gear::PARK;
  } else if (msg->buttons[BTN_REVERSE]) {
    data_.gear_cmd = dbw_polaris_msgs::msg::Gear::REVERSE;
  } else if (msg->buttons[BTN_DRIVE]) {
    data_.gear_cmd = dbw_polaris_msgs::msg::Gear::DRIVE;
  } else if (msg->buttons[BTN_NEUTRAL]) {
    data_.gear_cmd = dbw_polaris_msgs::msg::Gear::NEUTRAL;
  } else {
    data_.gear_cmd = dbw_polaris_msgs::msg::Gear::NONE;
  }

  // Steering
  if(fabs(msg->axes[AXIS_STEER_1]) > fabs(msg->axes[AXIS_STEER_2])) {
    data_.steering_joy = msg->axes[AXIS_STEER_1];
  } else {
    data_.steering_joy = msg->axes[AXIS_STEER_2];
  }
  data_.steering_mult = msg->buttons[BTN_STEER_MULT_1] || msg->buttons[BTN_STEER_MULT_2];
  data_.steering_cal = msg->buttons[BTN_STEER_MULT_1] && msg->buttons[BTN_STEER_MULT_2];

  // Optional enable and disable buttons
  if (enable_) {
    if (msg->buttons[BTN_ENABLE]) {
      pub_enable_->publish(std_msgs::msg::Empty());
    }
    if (msg->buttons[BTN_DISABLE]) {
      pub_disable_->publish(std_msgs::msg::Empty());
    }
  }

  data_.stamp = now();
  joy_ = *msg;
}

} // namespace dbw_polaris_joystick_demo

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(dbw_polaris_joystick_demo::JoystickDemo)
