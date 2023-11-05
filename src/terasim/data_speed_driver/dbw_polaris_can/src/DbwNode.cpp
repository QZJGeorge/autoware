/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2020, Dataspeed Inc.
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

#include "DbwNode.hpp"

#include <dbw_polaris_can/dispatch.hpp>
#include <dbw_polaris_can/pedal_lut.hpp>
#include <unordered_set>

// Log once per unique identifier, similar to RCLCPP_INFO_ONCE()
#define DS_LOG_ONCE_ID(logger, log_macro, id, ...) \
  do {                                             \
    static std::unordered_set<int> __set;          \
    if (RCUTILS_UNLIKELY(__set.count(id) == 0)) {  \
      __set.insert((id));                          \
      log_macro((logger), __VA_ARGS__);            \
    }                                              \
  } while (0)

#define DS_INFO_ONCE_ID(logger, id, ...) DS_LOG_ONCE_ID((logger), RCLCPP_INFO, (id), __VA_ARGS__)
#define DS_WARN_ONCE_ID(logger, id, ...) DS_LOG_ONCE_ID((logger), RCLCPP_WARN, (id), __VA_ARGS__)

namespace dbw_polaris_can {
using namespace dataspeed_dbw_common;

// Latest firmware versions
PlatformMap FIRMWARE_LATEST({
  {PlatformVersion(P_POLARIS_GEM,  M_TPEC,  ModuleVersion(1,2,2))},
  {PlatformVersion(P_POLARIS_GEM,  M_STEER, ModuleVersion(1,2,2))},
  {PlatformVersion(P_POLARIS_GEM,  M_BOO,   ModuleVersion(1,2,2))},
  {PlatformVersion(P_POLARIS_RZR,  M_TPEC,  ModuleVersion(0,4,2))},
  {PlatformVersion(P_POLARIS_RZR,  M_STEER, ModuleVersion(0,4,2))},
  {PlatformVersion(P_POLARIS_RZR,  M_BOO,   ModuleVersion(0,4,2))},
});

using std::placeholders::_1;

DbwNode::DbwNode(const rclcpp::NodeOptions &options)
    : rclcpp::Node("dbw_node", options),
      sync_imu_(10, std::bind(&DbwNode::recvCanImu, this, _1), ID_REPORT_ACCEL, ID_REPORT_GYRO) {
  // Reduce synchronization delay
  sync_imu_.setInterMessageLowerBound(std::chrono::milliseconds(3)); // 10ms period

  // Initialize enable state machine
  prev_enable_ = true;
  enable_ = false;
  override_brake_ = false;
  override_throttle_ = false;
  override_steering_ = false;
  override_gear_ = false;
  fault_brakes_ = false;
  fault_throttle_ = false;
  fault_steering_ = false;
  fault_steering_cal_ = false;
  fault_watchdog_ = false;
  fault_watchdog_using_brakes_ = false;
  fault_watchdog_warned_ = false;
  timeout_brakes_ = false;
  timeout_throttle_ = false;
  timeout_steering_ = false;
  enabled_brakes_ = false;
  enabled_throttle_ = false;
  enabled_steering_ = false;
  gear_warned_ = false;

  // Frame ID
  frame_id_ = declare_parameter<std::string>("frame_id", "base_footprint");

  // Warn on received commands
  warn_cmds_ = declare_parameter<bool>("warn_cmds", true);

  // Pedal LUTs (local/embedded)
  pedal_luts_ = declare_parameter<bool>("pedal_luts", false);

  // Ackermann steering parameters
  wheel_radius_ = 0.365;
  acker_wheelbase_ = declare_parameter<double>("ackermann_wheelbase", 1.75); // 68.8 inches
  acker_track_ = declare_parameter<double>("ackermann_track", 1.435); // 56.5 inches
  steering_ratio_ = declare_parameter<double>("steering_ratio", 17.0);

  // Initialize joint states
  joint_state_.position.resize(JOINT_COUNT);
  joint_state_.velocity.resize(JOINT_COUNT);
  joint_state_.effort.resize(JOINT_COUNT);
  joint_state_.name.resize(JOINT_COUNT);
  joint_state_.name[JOINT_FL] = "wheel_fl"; // Front Left
  joint_state_.name[JOINT_FR] = "wheel_fr"; // Front Right
  joint_state_.name[JOINT_RL] = "wheel_rl"; // Rear Left
  joint_state_.name[JOINT_RR] = "wheel_rr"; // Rear Right
  joint_state_.name[JOINT_SL] = "steer_fl";
  joint_state_.name[JOINT_SR] = "steer_fr";

  // Setup Publishers
  pub_can_ = create_publisher<can_msgs::msg::Frame>("can_tx", 10);
  pub_brake_ = create_publisher<dbw_polaris_msgs::msg::BrakeReport>("brake_report", 2);
  pub_throttle_ = create_publisher<dbw_polaris_msgs::msg::ThrottleReport>("throttle_report", 2);
  pub_steering_ = create_publisher<dbw_polaris_msgs::msg::SteeringReport>("steering_report", 2);
  pub_gear_ = create_publisher<dbw_polaris_msgs::msg::GearReport>("gear_report", 2);
  pub_imu_ = create_publisher<sensor_msgs::msg::Imu>("imu/data_raw", 10);
  pub_joint_states_ = create_publisher<sensor_msgs::msg::JointState>("joint_states", 10);
  pub_twist_ = create_publisher<geometry_msgs::msg::TwistStamped>("twist", 10);
  // Due to the way DDS works, this must also be set on the subscriber side
  auto latch_like_qos = rclcpp::QoS(1).transient_local();
  pub_vin_ = create_publisher<std_msgs::msg::String>("vin", latch_like_qos);
  pub_sys_enable_ = create_publisher<std_msgs::msg::Bool>("dbw_enabled", latch_like_qos);
  publishDbwEnabled();

  // Setup Subscribers
  {
    auto bind = std::bind(&DbwNode::recvEnable, this, _1);
    sub_enable_ = create_subscription<std_msgs::msg::Empty>("enable", 10, bind);
  }
  {
    auto bind = std::bind(&DbwNode::recvDisable, this, _1);
    sub_disable_ = create_subscription<std_msgs::msg::Empty>("disable", 10, bind);
  }
  {
    auto bind = std::bind(&DbwNode::recvCAN, this, _1);
    sub_can_ = create_subscription<can_msgs::msg::Frame>("can_rx", 100, bind);
  }
  {
    auto bind = std::bind(&DbwNode::recvBrakeCmd, this, _1);
    sub_brake_ = create_subscription<dbw_polaris_msgs::msg::BrakeCmd>("brake_cmd", 1, bind);
  }
  {
    auto bind = std::bind(&DbwNode::recvThrottleCmd, this, _1);
    sub_throttle_ = create_subscription<dbw_polaris_msgs::msg::ThrottleCmd>("throttle_cmd", 1, bind);
  }
  {
    auto bind = std::bind(&DbwNode::recvSteeringCmd, this, _1);
    sub_steering_ = create_subscription<dbw_polaris_msgs::msg::SteeringCmd>("steering_cmd", 1, bind);
  }
  {
    auto bind = std::bind(&DbwNode::recvGearCmd, this, _1);
    sub_gear_ = create_subscription<dbw_polaris_msgs::msg::GearCmd>("gear_cmd", 1, bind);
  }
  {
    auto bind = std::bind(&DbwNode::recvCalibrateSteering, this, _1);
    sub_calibrate_steering_ = create_subscription<std_msgs::msg::Empty>("calibrate_steering", 1, bind);
  }

  // Setup Timer
  {
    auto bind = std::bind(&DbwNode::timerCallback, this);
    timer_ = create_wall_timer(std::chrono::milliseconds(50), bind);
  }
}

void DbwNode::recvEnable(const std_msgs::msg::Empty::ConstSharedPtr) {
  enableSystem();
}

void DbwNode::recvDisable(const std_msgs::msg::Empty::ConstSharedPtr) {
  disableSystem();
}

void DbwNode::recvCAN(const can_msgs::msg::Frame::ConstSharedPtr msg) {
  sync_imu_.processMsg(msg);
  if (!msg->is_rtr && !msg->is_error && !msg->is_extended) {
    switch (msg->id) {
      case ID_BRAKE_REPORT:
        if (msg->dlc >= sizeof(MsgBrakeReport)) {
          const MsgBrakeReport *ptr = reinterpret_cast<const MsgBrakeReport *>(msg->data.data());
          faultBrakes(ptr->FLT1 || ptr->FLT2);
          faultWatchdog(ptr->FLTWDC, ptr->WDCSRC, ptr->WDCBRK);
          overrideBrake(ptr->OVERRIDE, ptr->TMOUT);
          timeoutBrake(ptr->TMOUT, ptr->ENABLED);
          dbw_polaris_msgs::msg::BrakeReport out;
          out.header.stamp = msg->header.stamp;
          if (ptr->BTYPE == 2 || ptr->BTYPE == 1) {
            // Type 1 is for backwards compatibility only
            out.torque_input = ptr->PI;
            out.torque_cmd = ptr->PC;
            out.torque_output = ptr->PO;
          } else {
            RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5e3, "Unsupported brake report type: %u", ptr->BTYPE);
          }
          out.enabled = ptr->ENABLED ? true : false;
          out.override = ptr->OVERRIDE ? true : false;
          out.driver = ptr->DRIVER ? true : false;
          out.watchdog_counter.source = ptr->WDCSRC;
          out.watchdog_braking = ptr->WDCBRK ? true : false;
          out.fault_wdc = ptr->FLTWDC ? true : false;
          out.fault_ch1 = ptr->FLT1 ? true : false;
          out.fault_ch2 = ptr->FLT2 ? true : false;
          out.fault_power = ptr->FLTPWR ? true : false;
          out.timeout = ptr->TMOUT ? true : false;
          pub_brake_->publish(out);
          if (ptr->FLT1 || ptr->FLT2 || ptr->FLTPWR) {
            RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5e3, "Brake fault.    FLT1: %s FLT2: %s FLTPWR: %s",
                                 ptr->FLT1 ? "true, " : "false,",
                                 ptr->FLT2 ? "true, " : "false,",
                                 ptr->FLTPWR ? "true" : "false");
          }
        }
        break;

      case ID_THROTTLE_REPORT:
        if (msg->dlc >= sizeof(MsgThrottleReport)) {
          const MsgThrottleReport *ptr = reinterpret_cast<const MsgThrottleReport *>(msg->data.data());
          faultThrottle(ptr->FLT1 || ptr->FLT2);
          faultWatchdog(ptr->FLTWDC, ptr->WDCSRC);
          overrideThrottle(ptr->OVERRIDE, ptr->TMOUT);
          timeoutThrottle(ptr->TMOUT, ptr->ENABLED);
          dbw_polaris_msgs::msg::ThrottleReport out;
          out.header.stamp = msg->header.stamp;
          out.pedal_input  = (float)ptr->PI / UINT16_MAX;
          out.pedal_cmd    = (float)ptr->PC / UINT16_MAX;
          out.pedal_output = (float)ptr->PO / UINT16_MAX;
          out.enabled = ptr->ENABLED ? true : false;
          out.override = ptr->OVERRIDE ? true : false;
          out.driver = ptr->DRIVER ? true : false;
          out.watchdog_counter.source = ptr->WDCSRC;
          out.fault_wdc = ptr->FLTWDC ? true : false;
          out.fault_ch1 = ptr->FLT1 ? true : false;
          out.fault_ch2 = ptr->FLT2 ? true : false;
          out.fault_power = ptr->FLTPWR ? true : false;
          out.timeout = ptr->TMOUT ? true : false;
          pub_throttle_->publish(out);
          if (ptr->FLT1 || ptr->FLT2 || ptr->FLTPWR) {
            RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5e3, "Throttle fault. FLT1: %s FLT2: %s FLTPWR: %s",
                                 ptr->FLT1 ? "true, " : "false,",
                                 ptr->FLT2 ? "true, " : "false,",
                                 ptr->FLTPWR ? "true" : "false");
          }
        }
        break;

      case ID_STEERING_REPORT:
        if (msg->dlc >= sizeof(MsgSteeringReport)) {
          const MsgSteeringReport *ptr = reinterpret_cast<const MsgSteeringReport *>(msg->data.data());
          faultSteering(ptr->FLTBUS1 || ptr->FLTBUS2);
          faultSteeringCal(ptr->FLTCAL);
          faultWatchdog(ptr->FLTWDC);
          overrideSteering(ptr->OVERRIDE, ptr->TMOUT);
          timeoutSteering(ptr->TMOUT, ptr->ENABLED);
          dbw_polaris_msgs::msg::SteeringReport out;
          out.header.stamp = msg->header.stamp;
          if ((uint16_t)ptr->ANGLE == 0x8000) {
            out.steering_wheel_angle = NAN;
          } else {
            out.steering_wheel_angle = (float)ptr->ANGLE * (float)(0.1 * M_PI / 180);
          }
          out.steering_wheel_cmd_type = ptr->TMODE ? dbw_polaris_msgs::msg::SteeringReport::CMD_TORQUE
                                                   : dbw_polaris_msgs::msg::SteeringReport::CMD_ANGLE;
          if ((uint16_t)ptr->CMD == 0xC000) {
            out.steering_wheel_cmd = NAN;
          } else if (out.steering_wheel_cmd_type == dbw_polaris_msgs::msg::SteeringReport::CMD_ANGLE) {
            out.steering_wheel_cmd = (float)ptr->CMD * (float)(0.1 * M_PI / 180);
          } else {
            out.steering_wheel_cmd = (float)ptr->CMD / 128.0f;
          }
          if ((uint8_t)ptr->TORQUE == 0x80) {
            out.steering_wheel_torque = NAN;
          } else {
            out.steering_wheel_torque = (float)ptr->TORQUE * (float)0.0625;
          }
          if ((uint16_t)ptr->VEH_VEL == 0x8000) {
            out.speed = NAN;
          } else {
            out.speed = (float)ptr->VEH_VEL * (float)(0.01 / 3.6);
          }
          out.enabled = ptr->ENABLED ? true : false;
          out.override = ptr->OVERRIDE ? true : false;
          out.fault_wdc = ptr->FLTWDC ? true : false;
          out.fault_bus1 = ptr->FLTBUS1 ? true : false;
          out.fault_bus2 = ptr->FLTBUS2 ? true : false;
          out.fault_calibration = ptr->FLTCAL ? true : false;
          out.fault_power = ptr->FLTPWR ? true : false;
          out.timeout = ptr->TMOUT ? true : false;
          pub_steering_->publish(out);
          geometry_msgs::msg::TwistStamped twist;
          twist.header.stamp = out.header.stamp;
          twist.header.frame_id = frame_id_;
          twist.twist.linear.x = out.speed;
          twist.twist.angular.z = out.speed * tan(out.steering_wheel_angle / steering_ratio_) / acker_wheelbase_;
          pub_twist_->publish(twist);
          publishJointStates(msg->header.stamp, &out);
          if (ptr->FLTBUS1 || ptr->FLTBUS2 || ptr->FLTPWR) {
            RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5e3, "Steering fault. FLT1: %s FLT2: %s FLTPWR: %s",
                                 ptr->FLTBUS1 ? "true, " : "false,",
                                 ptr->FLTBUS2 ? "true, " : "false,",
                                 ptr->FLTPWR ? "true" : "false");
            if (ptr->FLTBUS2) {
              RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5e3,
                                   "Steering fault. Too many calibrations stored. Reset need to continue");
            }
          } else if (ptr->FLTCAL) {
            RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5e3,
                                 "Steering calibration fault. Press the two steering multiplier buttons at the same "
                                 "time to set the center offset when the wheel is straight. For a more exact "
                                 "calibration set the SteeringCal and SteeringCal offset parameters using DbwConfig.");
          }
        }
        break;

      case ID_GEAR_REPORT:
        if (msg->dlc >= sizeof(MsgGearReport)) {
          const MsgGearReport *ptr = reinterpret_cast<const MsgGearReport *>(msg->data.data());
          overrideGear(ptr->OVERRIDE);
          dbw_polaris_msgs::msg::GearReport out;
          out.header.stamp = msg->header.stamp;
          out.state.gear = ptr->STATE;
          out.cmd.gear = ptr->CMD;
          out.override = ptr->OVERRIDE ? true : false;
          out.fault_bus = ptr->FLTBUS ? true : false;
          out.reject.value = ptr->REJECT;
          if (out.reject.value == dbw_polaris_msgs::msg::GearReject::NONE) {
            gear_warned_ = false;
          } else if (!gear_warned_) {
            gear_warned_ = true;
            switch (out.reject.value) {
              case dbw_polaris_msgs::msg::GearReject::SHIFT_IN_PROGRESS:
                RCLCPP_WARN(get_logger(), "Gear shift rejected: Shift in progress");
                break;
              case dbw_polaris_msgs::msg::GearReject::OVERRIDE:
                RCLCPP_WARN(get_logger(), "Gear shift rejected: Override on brake, throttle, or steering");
                break;
              case dbw_polaris_msgs::msg::GearReject::NEUTRAL:
                RCLCPP_WARN(get_logger(), "Gear shift rejected: Manually shift to neutral before auto-shift");
                break;
              case dbw_polaris_msgs::msg::GearReject::VEHICLE:
                RCLCPP_WARN(get_logger(), "Gear shift rejected: Rejected by vehicle, try pressing the brakes");
                break;
              case dbw_polaris_msgs::msg::GearReject::UNSUPPORTED:
                RCLCPP_WARN(get_logger(), "Gear shift rejected: Unsupported gear command");
                break;
              case dbw_polaris_msgs::msg::GearReject::FAULT:
                RCLCPP_WARN(get_logger(), "Gear shift rejected: System in fault state");
                break;
            }
          }
          pub_gear_->publish(out);
        }
        break;

      case ID_LICENSE:
        if (msg->dlc >= sizeof(MsgLicense)) {
          const MsgLicense *ptr = reinterpret_cast<const MsgLicense *>(msg->data.data());
          const Module module = ptr->module ? (Module)ptr->module : M_STEER; // Legacy steering firmware reports zero for module
          const char *str_m = moduleToString(module);
          RCLCPP_DEBUG(get_logger(), "LICENSE(%x,%02X,%s)", ptr->module, ptr->mux, str_m);
          if (ptr->ready) {
            DS_INFO_ONCE_ID(get_logger(), module, "Licensing: %s ready", str_m);
            if (ptr->trial) {
              DS_WARN_ONCE_ID(
                  get_logger(), module,
                  "Licensing: %s one or more features licensed as a counted trial. Visit "
                  "https://www.dataspeedinc.com/products/maintenance-subscription/ to request a full license.",
                  str_m);
            }
            if (ptr->expired) {
              DS_WARN_ONCE_ID(get_logger(), module,
                              "Licensing: %s one or more feature licenses expired due to the firmware build date",
                              str_m);
            }
          } else if (module == M_STEER) {
            RCLCPP_INFO_THROTTLE(get_logger(), *get_clock(), 10e3, "Licensing: Waiting for VIN...");
          } else {
            RCLCPP_INFO_THROTTLE(get_logger(), *get_clock(), 10e3, "Licensing: Waiting for required info...");
          }
          if (ptr->mux == LIC_MUX_LDATE0) {
            if (ldate_.size() == 0) {
              ldate_.push_back(ptr->ldate0.ldate0);
              ldate_.push_back(ptr->ldate0.ldate1);
              ldate_.push_back(ptr->ldate0.ldate2);
              ldate_.push_back(ptr->ldate0.ldate3);
              ldate_.push_back(ptr->ldate0.ldate4);
              ldate_.push_back(ptr->ldate0.ldate5);
            }
          } else if (ptr->mux == LIC_MUX_LDATE1) {
            if (ldate_.size() == 6) {
              ldate_.push_back(ptr->ldate1.ldate6);
              ldate_.push_back(ptr->ldate1.ldate7);
              ldate_.push_back(ptr->ldate1.ldate8);
              ldate_.push_back(ptr->ldate1.ldate9);
              RCLCPP_INFO(get_logger(), "Licensing: %s license string date: %s", str_m, ldate_.c_str());
            }
          } else if (ptr->mux == LIC_MUX_MAC) {
            RCLCPP_INFO_ONCE(get_logger(), "Licensing: %s MAC: %02X:%02X:%02X:%02X:%02X:%02X", str_m,
                             ptr->mac.addr0, ptr->mac.addr1,
                             ptr->mac.addr2, ptr->mac.addr3,
                             ptr->mac.addr4, ptr->mac.addr5);
          } else if (ptr->mux == LIC_MUX_BDATE0) {
            std::string &bdate = bdate_[module];
            if (bdate.size() == 0) {
              bdate.push_back(ptr->bdate0.date0);
              bdate.push_back(ptr->bdate0.date1);
              bdate.push_back(ptr->bdate0.date2);
              bdate.push_back(ptr->bdate0.date3);
              bdate.push_back(ptr->bdate0.date4);
              bdate.push_back(ptr->bdate0.date5);
            }
          } else if (ptr->mux == LIC_MUX_BDATE1) {
            std::string &bdate = bdate_[module];
            if (bdate.size() == 6) {
              bdate.push_back(ptr->bdate1.date6);
              bdate.push_back(ptr->bdate1.date7);
              bdate.push_back(ptr->bdate1.date8);
              bdate.push_back(ptr->bdate1.date9);
              RCLCPP_INFO(get_logger(), "Licensing: %s firmware build date: %s", str_m, bdate.c_str());
            }
          } else if (ptr->mux == LIC_MUX_VIN0) {
            if (vin_.size() == 0) {
              vin_.push_back(ptr->vin0.vin00);
              vin_.push_back(ptr->vin0.vin01);
              vin_.push_back(ptr->vin0.vin02);
              vin_.push_back(ptr->vin0.vin03);
              vin_.push_back(ptr->vin0.vin04);
              vin_.push_back(ptr->vin0.vin05);
            }
          } else if (ptr->mux == LIC_MUX_VIN1) {
            if (vin_.size() == 6) {
              vin_.push_back(ptr->vin1.vin06);
              vin_.push_back(ptr->vin1.vin07);
              vin_.push_back(ptr->vin1.vin08);
              vin_.push_back(ptr->vin1.vin09);
              vin_.push_back(ptr->vin1.vin10);
              vin_.push_back(ptr->vin1.vin11);
            }
          } else if (ptr->mux == LIC_MUX_VIN2) {
            if (vin_.size() == 12) {
              vin_.push_back(ptr->vin2.vin12);
              vin_.push_back(ptr->vin2.vin13);
              vin_.push_back(ptr->vin2.vin14);
              vin_.push_back(ptr->vin2.vin15);
              vin_.push_back(ptr->vin2.vin16);
              std_msgs::msg::String msg;
              msg.data = vin_;
              pub_vin_->publish(msg);
              RCLCPP_INFO(get_logger(), "Licensing: VIN: %s", vin_.c_str());
            }
          } else if ((LIC_MUX_F0 <= ptr->mux) && (ptr->mux <= LIC_MUX_F7)) {
            constexpr std::array<const char *, 8> NAME = {"BASE", "CONTROL", "SENSORS", "", "", "", "", ""};
            constexpr std::array<bool, 8> WARN = {true, true, true, false, true, true, true, true};
            const size_t i = ptr->mux - LIC_MUX_F0;
            const int id = module * NAME.size() + i;
            const std::string name = strcmp(NAME[i], "") ? NAME[i] : std::string(1, '0' + i);
            if (ptr->license.enabled) {
              DS_INFO_ONCE_ID(get_logger(), id, "Licensing: %s feature '%s' enabled%s", str_m, name.c_str(), ptr->license.trial ? " as a counted trial" : "");
            } else if (ptr->ready && !WARN[i]) {
              DS_INFO_ONCE_ID(get_logger(), id, "Licensing: %s feature '%s' not licensed.", str_m, name.c_str());
            } else if (ptr->ready) {
              DS_WARN_ONCE_ID(get_logger(), id,
                              "Licensing: %s feature '%s' not licensed. Visit "
                              "https://www.dataspeedinc.com/products/maintenance-subscription/ to request a license.",
                              str_m, name.c_str());
            }
            if (ptr->ready && (module == M_STEER) && (ptr->license.trial || (!ptr->license.enabled && WARN[i]))) {
              RCLCPP_INFO_ONCE(get_logger(), "Licensing: Feature '%s' trials used: %u, remaining: %u", name.c_str(),
                               ptr->license.trials_used, ptr->license.trials_left);
            }
          }
        }
        break;

      case ID_VERSION:
        if (msg->dlc >= sizeof(MsgVersion)) {
          const MsgVersion *ptr = reinterpret_cast<const MsgVersion *>(msg->data.data());
          const PlatformVersion version((Platform)ptr->platform, (Module)ptr->module, ptr->major, ptr->minor, ptr->build);
          const ModuleVersion latest = FIRMWARE_LATEST.get(version);
          const char *str_p = platformToString(version.p);
          const char *str_m = moduleToString(version.m);
          if (firmware_.get(version) != version.v) {
            firmware_.put(version);
            if (latest.valid()) {
              RCLCPP_INFO(get_logger(), "Detected %s %s firmware version %u.%u.%u", str_p, str_m, ptr->major,
                          ptr->minor, ptr->build);
            } else {
              RCLCPP_WARN(
                  get_logger(),
                  "Detected %s %s firmware version %u.%u.%u, which is unsupported. Platform: 0x%02X, Module: %u", str_p,
                  str_m, ptr->major, ptr->minor, ptr->build, ptr->platform, ptr->module);
            }
            if (version < latest) {
              RCLCPP_WARN(get_logger(), "Firmware %s %s has old  version %u.%u.%u, updating to %u.%u.%u is suggested.",
                          str_p, str_m, version.v.major(), version.v.minor(), version.v.build(), latest.major(),
                          latest.minor(), latest.build());
            }
          }
        }
        break;

      case ID_BRAKE_CMD:
        RCLCPP_WARN_EXPRESSION(
            get_logger(),
            warn_cmds_ && !(reinterpret_cast<const MsgBrakeCmd *>(msg->data.data()))->RES1
                       && !(reinterpret_cast<const MsgBrakeCmd *>(msg->data.data()))->RES2,
            "DBW system: Another node on the CAN bus is commanding the vehicle!!! Subsystem: Brake. Id: 0x%03X",
            ID_BRAKE_CMD);
        break;
      case ID_THROTTLE_CMD:
        RCLCPP_WARN_EXPRESSION(
            get_logger(),
            warn_cmds_ && !(reinterpret_cast<const MsgThrottleCmd *>(msg->data.data()))->RES1
                       && !(reinterpret_cast<const MsgThrottleCmd *>(msg->data.data()))->RES2,
            "DBW system: Another node on the CAN bus is commanding the vehicle!!! Subsystem: Throttle. Id: 0x%03X",
            ID_THROTTLE_CMD);
        break;
      case ID_STEERING_CMD:
        RCLCPP_WARN_EXPRESSION(
            get_logger(),
            warn_cmds_ && !(reinterpret_cast<const MsgSteeringCmd *>(msg->data.data()))->RES1
                       && !(reinterpret_cast<const MsgSteeringCmd *>(msg->data.data()))->RES2,
            "DBW system: Another node on the CAN bus is commanding the vehicle!!! Subsystem: Steering. Id: 0x%03X",
            ID_STEERING_CMD);
        break;
      case ID_GEAR_CMD:
        RCLCPP_WARN_EXPRESSION(
            get_logger(),
            warn_cmds_ && !(reinterpret_cast<const MsgGearCmd *>(msg->data.data()))->RES1
                       && !(reinterpret_cast<const MsgGearCmd *>(msg->data.data()))->RES2,
            "DBW system: Another node on the CAN bus is commanding the vehicle!!! Subsystem: Shifting. Id: 0x%03X",
            ID_GEAR_CMD);
        break;
    }
  }
#if 0
  RCLCPP_INFO(get_logger(), "ena: %s, clr: %s, brake: %s, throttle: %s, steering: %s, gear: %s",
           enabled() ? "true " : "false",
           clear() ? "true " : "false",
           override_brake_ ? "true " : "false",
           override_throttle_ ? "true " : "false",
           override_steering_ ? "true " : "false",
           override_gear_ ? "true " : "false"
       );
#endif
}

void DbwNode::recvCanImu(const std::vector<can_msgs::msg::Frame::ConstSharedPtr> &msgs) {
  assert(msgs.size() == 2);
  assert(msgs[0]->id == ID_REPORT_ACCEL);
  assert(msgs[1]->id == ID_REPORT_GYRO);
  if ((msgs[0]->dlc >= sizeof(MsgReportAccel))
   && (msgs[1]->dlc >= sizeof(MsgReportGyro))) {
    const MsgReportAccel *ptr_accel = reinterpret_cast<const MsgReportAccel *>(msgs[0]->data.data());
    const MsgReportGyro *ptr_gyro = reinterpret_cast<const MsgReportGyro *>(msgs[1]->data.data());
    sensor_msgs::msg::Imu out;
    out.header.stamp = msgs[0]->header.stamp;
    out.header.frame_id = frame_id_;
    out.orientation_covariance[0] = -1; // Orientation not present
    if ((uint16_t)ptr_accel->accel_long == 0x8000) {
      out.linear_acceleration.x = NAN;
    } else {
      out.linear_acceleration.x = (double)ptr_accel->accel_long * 0.01;
    }
    if ((uint16_t)ptr_accel->accel_lat == 0x8000) {
      out.linear_acceleration.y = NAN;
    } else {
      out.linear_acceleration.y = (double)ptr_accel->accel_lat * -0.01;
    }
    if ((uint16_t)ptr_accel->accel_vert == 0x8000) {
      out.linear_acceleration.z = NAN;
    } else {
      out.linear_acceleration.z = (double)ptr_accel->accel_vert * -0.01;
    }
    if ((uint16_t)ptr_gyro->gyro_roll == 0x8000) {
      out.angular_velocity.x = NAN;
    } else {
      out.angular_velocity.x = (double)ptr_gyro->gyro_roll * 0.0002;
    }
    if ((uint16_t)ptr_gyro->gyro_pitch == 0x8000) {
      out.angular_velocity.y = NAN;
    } else {
      out.angular_velocity.y = (double)ptr_gyro->gyro_pitch * 0.0002;
    }
    if ((uint16_t)ptr_gyro->gyro_yaw == 0x8000) {
      out.angular_velocity.z = NAN;
    } else {
      out.angular_velocity.z = (double)ptr_gyro->gyro_yaw * 0.0002;
    }
    pub_imu_->publish(out);
  }
#if 0
  RCLCPP_INFO(get_logger(), "Time: %u.%u, %u.%u, delta: %fms",
           msgs[0]->header.stamp.sec, msgs[0]->header.stamp.nsec,
           msgs[1]->header.stamp.sec, msgs[1]->header.stamp.nsec,
           labs((msgs[1]->header.stamp - msgs[0]->header.stamp).toNSec()) / 1000000.0);
#endif
}

void DbwNode::recvBrakeCmd(const dbw_polaris_msgs::msg::BrakeCmd::ConstSharedPtr msg) {
  can_msgs::msg::Frame out;
  out.id = ID_BRAKE_CMD;
  out.is_extended = false;
  out.dlc = sizeof(MsgBrakeCmd);
  MsgBrakeCmd *ptr = reinterpret_cast<MsgBrakeCmd *>(out.data.data());
  memset(ptr, 0x00, sizeof(*ptr));
  switch (msg->pedal_cmd_type) {
    case dbw_polaris_msgs::msg::BrakeCmd::CMD_NONE:
      break;
    case dbw_polaris_msgs::msg::BrakeCmd::CMD_PERCENT:
      ptr->CMD_TYPE = dbw_polaris_msgs::msg::BrakeCmd::CMD_PERCENT;
      ptr->PCMD = std::clamp<float>(msg->pedal_cmd * UINT16_MAX, 0, UINT16_MAX);
      break;
    case dbw_polaris_msgs::msg::BrakeCmd::CMD_TORQUE:
      ptr->CMD_TYPE = dbw_polaris_msgs::msg::BrakeCmd::CMD_TORQUE;
      ptr->PCMD = std::clamp<float>(msg->pedal_cmd, 0, UINT16_MAX);
      break;
    case dbw_polaris_msgs::msg::BrakeCmd::CMD_TORQUE_RQ:
      ptr->CMD_TYPE = dbw_polaris_msgs::msg::BrakeCmd::CMD_TORQUE_RQ;
      ptr->PCMD = std::clamp<float>(msg->pedal_cmd, 0, UINT16_MAX);
      break;
    default:
      RCLCPP_WARN(get_logger(), "Unknown brake command type: %u", msg->pedal_cmd_type);
      break;
  }
  if (enabled() && msg->enable) {
    ptr->EN = 1;
  }
  if (clear() || msg->clear) {
    ptr->CLEAR = 1;
  }
  if (msg->ignore) {
    ptr->IGNORE = 1;
  }
  ptr->COUNT = msg->count;
  pub_can_->publish(out);
}

void DbwNode::recvThrottleCmd(const dbw_polaris_msgs::msg::ThrottleCmd::ConstSharedPtr msg) {
  can_msgs::msg::Frame out;
  out.id = ID_THROTTLE_CMD;
  out.is_extended = false;
  out.dlc = sizeof(MsgThrottleCmd);
  MsgThrottleCmd *ptr = reinterpret_cast<MsgThrottleCmd *>(out.data.data());
  memset(ptr, 0x00, sizeof(*ptr));
  bool fwd = !pedal_luts_; // Forward command type, or apply pedal LUTs locally
  float cmd = 0.0;
  switch (msg->pedal_cmd_type) {
    case dbw_polaris_msgs::msg::ThrottleCmd::CMD_NONE:
      break;
    case dbw_polaris_msgs::msg::ThrottleCmd::CMD_PEDAL:
      ptr->CMD_TYPE = dbw_polaris_msgs::msg::ThrottleCmd::CMD_PEDAL;
      cmd = msg->pedal_cmd;
      break;
    case dbw_polaris_msgs::msg::ThrottleCmd::CMD_PERCENT:
      if (fwd) {
        ptr->CMD_TYPE = dbw_polaris_msgs::msg::ThrottleCmd::CMD_PERCENT;
        cmd = msg->pedal_cmd;
      } else {
        ptr->CMD_TYPE = dbw_polaris_msgs::msg::ThrottleCmd::CMD_PEDAL;
        cmd = throttlePedalFromPercent(msg->pedal_cmd);
      }
      break;
    default:
      RCLCPP_WARN(get_logger(), "Unknown throttle command type: %u", msg->pedal_cmd_type);
      break;
  }
  ptr->PCMD = std::clamp<float>(cmd * UINT16_MAX, 0, UINT16_MAX);
  if (enabled() && msg->enable) {
    ptr->EN = 1;
  }
  if (clear() || msg->clear) {
    ptr->CLEAR = 1;
  }
  if (msg->ignore) {
    ptr->IGNORE = 1;
  }
  ptr->COUNT = msg->count;
  pub_can_->publish(out);
}

void DbwNode::recvSteeringCmd(const dbw_polaris_msgs::msg::SteeringCmd::ConstSharedPtr msg) {
  can_msgs::msg::Frame out;
  out.id = ID_STEERING_CMD;
  out.is_extended = false;
  out.dlc = sizeof(MsgSteeringCmd);
  MsgSteeringCmd *ptr = reinterpret_cast<MsgSteeringCmd *>(out.data.data());
  memset(ptr, 0x00, sizeof(*ptr));
  switch (msg->cmd_type) {
    case dbw_polaris_msgs::msg::SteeringCmd::CMD_ANGLE:
      ptr->SCMD = std::clamp<float>(msg->steering_wheel_angle_cmd * (float)(180 / M_PI * 10), -INT16_MAX, INT16_MAX);
      if (fabsf(msg->steering_wheel_angle_velocity) > 0) {
        ptr->SVEL = std::clamp<float>(roundf(fabsf(msg->steering_wheel_angle_velocity) * (float)(180 / M_PI / 4)), 1, 254);
      }
      ptr->CMD_TYPE = dbw_polaris_msgs::msg::SteeringCmd::CMD_ANGLE;
      break;
    case dbw_polaris_msgs::msg::SteeringCmd::CMD_TORQUE:
      ptr->SCMD = std::clamp<float>(msg->steering_wheel_torque_cmd * 128, -INT16_MAX, INT16_MAX);
      ptr->CMD_TYPE = dbw_polaris_msgs::msg::SteeringCmd::CMD_TORQUE;
      break;
    default:
      RCLCPP_WARN(get_logger(), "Unknown steering command type: %u", msg->cmd_type);
      break;
  }
  if (enabled() && msg->enable) {
    ptr->EN = 1;
  }
  if (clear() || msg->clear) {
    ptr->CLEAR = 1;
  }
  if (msg->ignore) {
    ptr->IGNORE = 1;
  }
  if (msg->calibrate) {
    ptr->CAL = 1;
  }
  if (msg->quiet) {
    ptr->QUIET = 1;
  }
  if (msg->alert) {
    ptr->ALERT = 1;
  }
  ptr->COUNT = msg->count;
  pub_can_->publish(out);
}

void DbwNode::recvGearCmd(const dbw_polaris_msgs::msg::GearCmd::ConstSharedPtr msg) {
  can_msgs::msg::Frame out;
  out.id = ID_GEAR_CMD;
  out.is_extended = false;
  out.dlc = sizeof(MsgGearCmd);
  MsgGearCmd *ptr = reinterpret_cast<MsgGearCmd *>(out.data.data());
  memset(ptr, 0x00, sizeof(*ptr));
  if (enabled()) {
    ptr->GCMD = msg->cmd.gear;
  }
  if (clear() || msg->clear) {
    ptr->CLEAR = 1;
  }
  pub_can_->publish(out);
}

void DbwNode::recvCalibrateSteering(const std_msgs::msg::Empty::ConstSharedPtr) {
  /* Send steering command to save current angle as zero.
   * The preferred method is to set the 'calibrate' field in a ROS steering
   * command so that recvSteeringCmd() saves the current angle as the
   * specified command.
   */
  can_msgs::msg::Frame out;
  out.id = ID_STEERING_CMD;
  out.is_extended = false;
  out.dlc = 4; // Sending the full eight bytes will fault the watchdog counter (if enabled)
  MsgSteeringCmd *ptr = reinterpret_cast<MsgSteeringCmd *>(out.data.data());
  ptr->CAL = 1;
  pub_can_->publish(out);
}

bool DbwNode::publishDbwEnabled(bool force)
{
  bool en = enabled();
  bool change = prev_enable_ != en;
  if (change || force) {
    std_msgs::msg::Bool msg;
    msg.data = en;
    pub_sys_enable_->publish(msg);
  }
  prev_enable_ = en;
  return change;
}

void DbwNode::timerCallback() {
  // Publish status periodically, in addition to latched and on change
  if (publishDbwEnabled(true)) {
    RCLCPP_WARN(get_logger(), "DBW system enable status changed unexpectedly");
  }

  // Clear override statuses if necessary
  if (clear()) {
    can_msgs::msg::Frame out;
    out.is_extended = false;

    if (override_brake_) {
      out.id = ID_BRAKE_CMD;
      out.dlc = 4; // Sending the full eight bytes will fault the watchdog counter (if enabled)
      memset(out.data.data(), 0x00, 8);
      (reinterpret_cast<MsgBrakeCmd *>(out.data.data()))->CLEAR = 1;
      pub_can_->publish(out);
    }

    if (override_throttle_) {
      out.id = ID_THROTTLE_CMD;
      out.dlc = 4; // Sending the full eight bytes will fault the watchdog counter (if enabled)
      memset(out.data.data(), 0x00, 8);
      (reinterpret_cast<MsgThrottleCmd *>(out.data.data()))->CLEAR = 1;
      pub_can_->publish(out);
    }

    if (override_steering_) {
      out.id = ID_STEERING_CMD;
      out.dlc = 4; // Sending the full eight bytes will fault the watchdog counter (if enabled)
      memset(out.data.data(), 0x00, 8);
      (reinterpret_cast<MsgSteeringCmd *>(out.data.data()))->CLEAR = 1;
      pub_can_->publish(out);
    }

    if (override_gear_) {
      out.id = ID_GEAR_CMD;
      out.dlc = sizeof(MsgGearCmd);
      memset(out.data.data(), 0x00, 8);
      (reinterpret_cast<MsgGearCmd *>(out.data.data()))->CLEAR = 1;
      pub_can_->publish(out);
    }
  }
}

void DbwNode::enableSystem() {
  if (!enable_) {
    if (fault()) {
      if (fault_steering_cal_) {
        RCLCPP_WARN(get_logger(), "DBW system not enabled. Steering calibration fault.");
      }
      if (fault_brakes_) {
        RCLCPP_WARN(get_logger(), "DBW system not enabled. Braking fault.");
      }
      if (fault_throttle_) {
        RCLCPP_WARN(get_logger(), "DBW system not enabled. Throttle fault.");
      }
      if (fault_steering_) {
        RCLCPP_WARN(get_logger(), "DBW system not enabled. Steering fault.");
      }
      if (fault_watchdog_) {
        RCLCPP_WARN(get_logger(), "DBW system not enabled. Watchdog fault.");
      }
    } else {
      enable_ = true;
      if (publishDbwEnabled()) {
        RCLCPP_INFO(get_logger(), "DBW system enabled.");
      } else {
        RCLCPP_INFO(get_logger(), "DBW system enable requested. Waiting for ready.");
      }
    }
  }
}

void DbwNode::disableSystem() {
  if (enable_) {
    enable_ = false;
    publishDbwEnabled();
    RCLCPP_WARN(get_logger(), "DBW system disabled.");
  }
}

void DbwNode::buttonCancel() {
  if (enable_) {
    enable_ = false;
    publishDbwEnabled();
    RCLCPP_WARN(get_logger(), "DBW system disabled. Cancel button pressed.");
  }
}

void DbwNode::overrideBrake(bool override, bool timeout) {
  bool en = enabled();
  if (en && timeout) {
    override = false;
  }
  if (en && override) {
    enable_ = false;
  }
  override_brake_ = override;
  if (publishDbwEnabled()) {
    if (en) {
      RCLCPP_WARN(get_logger(), "DBW system disabled. Driver override on brake/throttle pedal.");
    } else {
      RCLCPP_INFO(get_logger(), "DBW system enabled.");
    }
  }
}

void DbwNode::overrideThrottle(bool override, bool timeout) {
  bool en = enabled();
  if (en && timeout) {
    override = false;
  }
  if (en && override) {
    enable_ = false;
  }
  override_throttle_ = override;
  if (publishDbwEnabled()) {
    if (en) {
      RCLCPP_WARN(get_logger(), "DBW system disabled. Driver override on brake/throttle pedal.");
    } else {
      RCLCPP_INFO(get_logger(), "DBW system enabled.");
    }
  }
}

void DbwNode::overrideSteering(bool override, bool timeout) {
  bool en = enabled();
  if (en && timeout) {
    override = false;
  }
  if (en && override) {
    enable_ = false;
  }
  override_steering_ = override;
  if (publishDbwEnabled()) {
    if (en) {
      RCLCPP_WARN(get_logger(), "DBW system disabled. Driver override on steering wheel.");
    } else {
      RCLCPP_INFO(get_logger(), "DBW system enabled.");
    }
  }
}

void DbwNode::overrideGear(bool override) {
  bool en = enabled();
  if (en && override) {
    enable_ = false;
  }
  override_gear_ = override;
  if (publishDbwEnabled()) {
    if (en) {
      RCLCPP_WARN(get_logger(), "DBW system disabled. Driver override on shifter.");
    } else {
      RCLCPP_INFO(get_logger(), "DBW system enabled.");
    }
  }
}

void DbwNode::timeoutBrake(bool timeout, bool enabled) {
  if (!timeout_brakes_ && enabled_brakes_ && timeout && !enabled) {
    RCLCPP_WARN(get_logger(), "Brake subsystem disabled after 100ms command timeout");
  }
  timeout_brakes_ = timeout;
  enabled_brakes_ = enabled;
}

void DbwNode::timeoutThrottle(bool timeout, bool enabled) {
  if (!timeout_throttle_ && enabled_throttle_ && timeout && !enabled) {
    RCLCPP_WARN(get_logger(), "Throttle subsystem disabled after 100ms command timeout");
  }
  timeout_throttle_ = timeout;
  enabled_throttle_ = enabled;
}

void DbwNode::timeoutSteering(bool timeout, bool enabled) {
  if (!timeout_steering_ && enabled_steering_ && timeout && !enabled) {
    RCLCPP_WARN(get_logger(), "Steering subsystem disabled after 100ms command timeout");
  }
  timeout_steering_ = timeout;
  enabled_steering_ = enabled;
}

void DbwNode::faultBrakes(bool fault) {
  bool en = enabled();
  if (fault && en) {
    enable_ = false;
  }
  fault_brakes_ = fault;
  if (publishDbwEnabled()) {
    if (en) {
      RCLCPP_ERROR(get_logger(), "DBW system disabled. Braking fault.");
    } else {
      RCLCPP_INFO(get_logger(), "DBW system enabled.");
    }
  }
}

void DbwNode::faultThrottle(bool fault) {
  bool en = enabled();
  if (fault && en) {
    enable_ = false;
  }
  fault_throttle_ = fault;
  if (publishDbwEnabled()) {
    if (en) {
      RCLCPP_ERROR(get_logger(), "DBW system disabled. Throttle fault.");
    } else {
      RCLCPP_INFO(get_logger(), "DBW system enabled.");
    }
  }
}

void DbwNode::faultSteering(bool fault) {
  bool en = enabled();
  if (fault && en) {
    enable_ = false;
  }
  fault_steering_ = fault;
  if (publishDbwEnabled()) {
    if (en) {
      RCLCPP_ERROR(get_logger(), "DBW system disabled. Steering fault.");
    } else {
      RCLCPP_INFO(get_logger(), "DBW system enabled.");
    }
  }
}

void DbwNode::faultSteeringCal(bool fault) {
  bool en = enabled();
  if (fault && en) {
    enable_ = false;
  }
  fault_steering_cal_ = fault;
  if (publishDbwEnabled()) {
    if (en) {
      RCLCPP_ERROR(get_logger(), "DBW system disabled. Steering calibration fault.");
    } else {
      RCLCPP_INFO(get_logger(), "DBW system enabled.");
    }
  }
}

void DbwNode::faultWatchdog(bool fault, uint8_t src, bool braking) {
  bool en = enabled();
  if (fault && en) {
    enable_ = false;
  }
  fault_watchdog_ = fault;
  if (publishDbwEnabled()) {
    if (en) {
      RCLCPP_ERROR(get_logger(), "DBW system disabled. Watchdog fault.");
    } else {
      RCLCPP_INFO(get_logger(), "DBW system enabled.");
    }
  }
  if (braking && !fault_watchdog_using_brakes_) {
    RCLCPP_WARN(get_logger(), "Watchdog event: Alerting driver and applying brakes.");
  } else if (!braking && fault_watchdog_using_brakes_) {
    RCLCPP_INFO(get_logger(), "Watchdog event: Driver has successfully taken control.");
  }
  if (fault && src && !fault_watchdog_warned_) {
    switch (src) {
      case dbw_polaris_msgs::msg::WatchdogCounter::OTHER_BRAKE:
        RCLCPP_WARN(get_logger(), "Watchdog event: Fault determined by brake controller");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::OTHER_THROTTLE:
        RCLCPP_WARN(get_logger(), "Watchdog event: Fault determined by throttle controller");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::OTHER_STEERING:
        RCLCPP_WARN(get_logger(), "Watchdog event: Fault determined by steering controller");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::BRAKE_COUNTER:
        RCLCPP_WARN(get_logger(), "Watchdog event: Brake command counter failed to increment");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::BRAKE_DISABLED:
        RCLCPP_WARN(get_logger(), "Watchdog event: Brake transition to disabled while in gear or moving");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::BRAKE_COMMAND:
        RCLCPP_WARN(get_logger(), "Watchdog event: Brake command timeout after 100ms");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::BRAKE_REPORT:
        RCLCPP_WARN(get_logger(), "Watchdog event: Brake report timeout after 100ms");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::THROTTLE_COUNTER:
        RCLCPP_WARN(get_logger(), "Watchdog event: Throttle command counter failed to increment");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::THROTTLE_DISABLED:
        RCLCPP_WARN(get_logger(), "Watchdog event: Throttle transition to disabled while in gear or moving");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::THROTTLE_COMMAND:
        RCLCPP_WARN(get_logger(), "Watchdog event: Throttle command timeout after 100ms");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::THROTTLE_REPORT:
        RCLCPP_WARN(get_logger(), "Watchdog event: Throttle report timeout after 100ms");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::STEERING_COUNTER:
        RCLCPP_WARN(get_logger(), "Watchdog event: Steering command counter failed to increment");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::STEERING_DISABLED:
        RCLCPP_WARN(get_logger(), "Watchdog event: Steering transition to disabled while in gear or moving");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::STEERING_COMMAND:
        RCLCPP_WARN(get_logger(), "Watchdog event: Steering command timeout after 100ms");
        break;
      case dbw_polaris_msgs::msg::WatchdogCounter::STEERING_REPORT:
        RCLCPP_WARN(get_logger(), "Watchdog event: Steering report timeout after 100ms");
        break;
    }
    fault_watchdog_warned_ = true;
  } else if (!fault) {
    fault_watchdog_warned_ = false;
  }
  fault_watchdog_using_brakes_ = braking;
  if (fault && !fault_watchdog_using_brakes_ && fault_watchdog_warned_) {
    RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 2e3,
                         "Watchdog event: Press left OK button on the steering wheel or cycle power to clear event.");
  }
}

void DbwNode::faultWatchdog(bool fault, uint8_t src) {
  faultWatchdog(fault, src, fault_watchdog_using_brakes_); // No change to 'using brakes' status
}

void DbwNode::publishJointStates(const rclcpp::Time &stamp, const dbw_polaris_msgs::msg::SteeringReport *steering) {
  double dt = (stamp - joint_state_.header.stamp).nanoseconds() / 1e9;
  if (steering) {
    if (std::isfinite(steering->steering_wheel_angle)) {
      const double L = acker_wheelbase_;
      const double W = acker_track_;
      const double r = L / tan(steering->steering_wheel_angle / steering_ratio_);
      joint_state_.position[JOINT_SL] = atan(L / (r - W / 2));
      joint_state_.position[JOINT_SR] = atan(L / (r + W / 2));
    }
    if (std::isfinite(steering->speed)) {
      joint_state_.velocity[JOINT_FL] = steering->speed / wheel_radius_;
      joint_state_.velocity[JOINT_FR] = steering->speed / wheel_radius_;
      joint_state_.velocity[JOINT_RL] = steering->speed / wheel_radius_;
      joint_state_.velocity[JOINT_RR] = steering->speed / wheel_radius_;
    }
  }
  if (dt < 0.5) {
    for (size_t i = JOINT_FL; i <= JOINT_RR; i++) {
      joint_state_.position[i] = fmod(joint_state_.position[i] + dt * joint_state_.velocity[i], 2 * M_PI);
    }
  }
  joint_state_.header.stamp = stamp;
  pub_joint_states_->publish(joint_state_);
}

} // namespace dbw_polaris_can

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(dbw_polaris_can::DbwNode)
