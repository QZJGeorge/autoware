/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2015-2021, Dataspeed Inc.
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

// ROS messages
#include <can_msgs/msg/frame.hpp>
#include <std_msgs/msg/string.hpp> // Deprecated (ros >= foxy)

// Mutex
#include <mutex>

// Module Version class
#include <dataspeed_can_usb/ModuleVersion.hpp>

namespace lusb {
class UsbDevice;
}

namespace dataspeed_can_usb {

static constexpr ModuleVersion kFirmwareVersion(10, 4, 0);

class CanUsb;
class CanDriver : public rclcpp::Node {
public:
  CanDriver(const rclcpp::NodeOptions &options);
  ~CanDriver();

private:
  void timerServiceCallback();
  void timerFlushCallback();
  void recvRos(const can_msgs::msg::Frame::ConstSharedPtr msg, unsigned int channel);
  void recvDevice(unsigned int channel, uint32_t id, bool extended, uint8_t dlc, const uint8_t data[8]);
  void serviceDevice();
  bool sampleTimeOffset(rclcpp::Duration &offset, rclcpp::Duration &delay);

  // Parameters
  bool sync_time_;
  bool error_topic_;
  std::string mac_addr_;
  struct Filter {
    uint32_t mask;
    uint32_t match;
  };
  struct Channel {
    int bitrate = 0;
    uint8_t mode = 0;
    std::vector<Filter> filters;
  };
  std::vector<Channel> channels_;

  // Timers
  rclcpp::TimerBase::SharedPtr timer_service_;
  rclcpp::TimerBase::SharedPtr timer_flush_;

  // USB Device
  CanUsb *dev_;

  // Subscribed topics
  std::vector<rclcpp::Subscription<can_msgs::msg::Frame>::SharedPtr> subs_;

  // Published topics
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_version_;
  std::vector<rclcpp::Publisher<can_msgs::msg::Frame>::SharedPtr> pubs_;
  std::vector<rclcpp::Publisher<can_msgs::msg::Frame>::SharedPtr> pubs_err_;

  // Mutex for vector of publishers
  std::mutex mutex_;

  // Name prefix for print statements
  std::string name_;

  // Number of total drops for status warnings
  uint32_t total_drops_ = 0;

  // Latest firmware version
  ModuleVersion firmware_ = kFirmwareVersion;
};

} // namespace dataspeed_can_usb
