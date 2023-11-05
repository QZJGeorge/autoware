/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2015-2020, Dataspeed Inc.
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

#include <dataspeed_can_usb/CanDriver.hpp>
#include <dataspeed_can_usb/CanUsb.hpp>

namespace dataspeed_can_usb {

static constexpr int kDefaultBitrate = 0; // Disabled
static constexpr char kDefaultMode[] = "normal";

enum ChannelMode : uint8_t {
  Normal = 0,
  ListenOnly = 1,
};

static uint8_t getModeFromString(const std::string &str) {
  if (str == "normal") {
    return ChannelMode::Normal;
  } else if (str == "listen-only") {
    return ChannelMode::ListenOnly;
  }
  return ChannelMode::Normal; // Default to "normal"
}

CanDriver::CanDriver(const rclcpp::NodeOptions &options) : rclcpp::Node("can_node", options) {
#ifdef DEBUG
  rcutils_logging_set_logger_level(get_logger().get_name(), RCUTILS_LOG_SEVERITY_DEBUG);
#endif

  name_ = "Dataspeed USB CAN Tool";
  firmware_ = kFirmwareVersion;

  using std::placeholders::_1;
  using std::placeholders::_2;
  using std::placeholders::_3;
  using std::placeholders::_4;
  using std::placeholders::_5;

  dev_ = new CanUsb(nullptr);
  dev_->setRecvCallback(std::bind(&CanDriver::recvDevice, this, _1, _2, _3, _4, _5));

  // Get Parameters
  std::string mode;
  Channel channel;
  sync_time_ = declare_parameter<bool>("sync_time", false);
  error_topic_ = declare_parameter<bool>("error_topic", true);
  channel.bitrate = declare_parameter<int>("bitrate", kDefaultBitrate);
  mode = declare_parameter<std::string>("mode", kDefaultMode);
  mac_addr_ = declare_parameter<std::string>("mac_addr", std::string());

  RCLCPP_DEBUG(get_logger(), "sync_time = %d", sync_time_ ? 1 : 0);
  RCLCPP_DEBUG(get_logger(), "error_topic = %d", error_topic_ ? 1 : 0);
  RCLCPP_DEBUG(get_logger(), "bitrate = %d", channel.bitrate);
  RCLCPP_DEBUG(get_logger(), "mode = '%s'", mode.c_str());
  RCLCPP_DEBUG(get_logger(), "mac_addr = '%s'", mac_addr_.c_str());
  channel.mode = getModeFromString(mode);

  channels_.resize(CanUsb::MAX_CHANNELS, channel);
  for (unsigned int ch = 0; ch < CanUsb::MAX_CHANNELS; ch++) {
    std::string strch = std::to_string(ch + 1);
    channels_[ch].bitrate = declare_parameter<int>("bitrate_" + strch, 0);
    channels_[ch].mode = getModeFromString(declare_parameter<std::string>("mode_" + strch, mode));
    RCLCPP_DEBUG(get_logger(), "channel %d bitrate %d", ch, channels_[ch].bitrate);
    RCLCPP_DEBUG(get_logger(), "channel %d mode %d", ch, channels_[ch].mode);
    for (unsigned int index = 0; index < CanUsb::MAX_FILTERS; index++) {
      Filter filter;
      std::string mask_name = "channel_" + strch + "_mask_" + std::to_string(index);
      std::string match_name = "channel_" + strch + "_match_" + std::to_string(index);
      int64_t mask = declare_parameter<int64_t>(mask_name, -1);
      int64_t match = declare_parameter<int64_t>(match_name, -1);
      if (mask != -1 && match != -1) {
        filter.mask = static_cast<uint32_t>(mask);
        filter.match = static_cast<uint32_t>(match);
        channels_[ch].filters.push_back(filter);
        RCLCPP_DEBUG(get_logger(), "channel %d filter %d mask 0x%08x match 0x%08x", ch, index, filter.mask, filter.match);
      } else {
        #if 0 // Started causing runtime crash in Humble
        undeclare_parameter(mask_name);
        undeclare_parameter(match_name);
        #endif
      }
    }
  }

  using namespace std::chrono_literals;

  serviceDevice();

  // Setup Timers
  timer_service_ = create_wall_timer(100ms, std::bind(&CanDriver::timerServiceCallback, this));
  timer_flush_ = create_wall_timer(1ms, std::bind(&CanDriver::timerFlushCallback, this));
}

CanDriver::~CanDriver() {
  if (dev_) {
    if (dev_->isOpen()) {
      dev_->reset();
    }
    delete dev_;
    dev_ = NULL;
  }
}

void CanDriver::recvRos(const can_msgs::msg::Frame::ConstSharedPtr msg, unsigned int channel) {
  dev_->sendMessage(channel, msg->id, msg->is_extended, msg->dlc, msg->data.data());
}

void CanDriver::recvDevice(unsigned int channel, uint32_t id, bool extended, uint8_t dlc, const uint8_t data[8]) {
  std::lock_guard<std::mutex> lock(mutex_);
  if (channel < pubs_.size()) {
    can_msgs::msg::Frame msg;
    msg.header.stamp = now();
    msg.id = id;
    msg.is_rtr = false;
    msg.is_extended = extended;
    msg.is_error = (dlc == 0x0F);
    msg.dlc = dlc;
    memcpy(msg.data.data(), data, 8);
    if (msg.is_error && channel < pubs_err_.size()) {
      pubs_err_[channel]->publish(msg);
    } else {
      pubs_[channel]->publish(msg);
    }
  }
}

bool CanDriver::sampleTimeOffset(rclcpp::Duration &offset, rclcpp::Duration &delay) {
  unsigned int dev_time;
  auto t0 = now();
  if (dev_->getTimeStamp(dev_time)) {
    auto t2 = now();
    auto t1 = rclcpp::Time(dev_time * 1000);
    delay = t2 - t0; // Time it took to get the timestamp
    offset = (t0 + (delay * 0.5)) - t1;
    return true;
  }
  return false;
}

void CanDriver::serviceDevice() {
  if (!dev_->isOpen()) {
    // Open device
    std::lock_guard<std::mutex> lock(mutex_);
    pubs_err_.clear();
    pubs_.clear();
    subs_.clear();
    pub_version_.reset();
    if (dev_->open(mac_addr_)) {
      if (dev_->reset()) {
        const ModuleVersion version(dev_->versionMajor(), dev_->versionMinor(), dev_->versionBuild());
        RCLCPP_INFO(get_logger(), "%s: version %s", name_.c_str(), dev_->version().c_str());
        std_msgs::msg::String version_msg;
        // Use transient local durability to provide similar functionality to ROS1 Latched Topics
        pub_version_ = create_publisher<std_msgs::msg::String>("version", rclcpp::QoS(1).transient_local());
        version_msg.data = dev_->version().c_str();
        pub_version_->publish(version_msg);
        RCLCPP_INFO(get_logger(), "%s: MAC address %s", name_.c_str(), dev_->macAddr().toString().c_str());
        if (firmware_.valid() && version < firmware_) {
          RCLCPP_WARN(
              get_logger(),
              "Detected old %s firmware version %u.%u.%u, updating to %u.%u.%u is suggested. Execute `%s` to update.",
              name_.c_str(), version.major(), version.minor(), version.build(), firmware_.major(), firmware_.minor(),
              firmware_.build(), "ros2 run dataspeed_can_usb fw_update.bash");
        }
        bool synced = false;
        if (sync_time_) {
          RCLCPP_INFO(get_logger(), "%s: Synchronizing time...", name_.c_str());
          rclcpp::Duration offset(std::chrono::nanoseconds(0)), delay(std::chrono::nanoseconds(0));
          for (unsigned int i = 0; i < 10; i++) {
            sampleTimeOffset(offset, delay);
            RCLCPP_INFO(get_logger(), "%s: Offset: %f seconds, Delay: %f seconds", name_.c_str(), offset.seconds(), delay.seconds());
          }
          synced = true;
        }
        if (!sync_time_ || synced) {
          bool success = true;
          for (unsigned int i = 0; i < dev_->numChannels(); i++) {
            for (unsigned int j = 0; j < channels_[i].filters.size(); j++) {
              const uint32_t mask = channels_[i].filters[j].mask;
              const uint32_t match = channels_[i].filters[j].match;
              if (dev_->addFilter(i, mask, match)) {
                RCLCPP_INFO(get_logger(), "%s: Ch%u, Mask: 0x%08X, Match: 0x%08X", name_.c_str(), i + 1, mask, match);
              } else {
                RCLCPP_WARN(get_logger(), "%s: Ch%u, Mask: 0x%08X, Match: 0x%08X failed", name_.c_str(), i + 1, mask, match);
              }
            }
          }
          for (unsigned int i = 0; i < dev_->numChannels(); i++) {
            const int bitrate = i < channels_.size() ? channels_[i].bitrate : 0;
            const uint8_t mode = i < channels_.size() ? channels_[i].mode : 0;
            if (dev_->setBitrate(i, bitrate, mode)) {
              RCLCPP_INFO(get_logger(), "%s: Ch%u %ukbps", name_.c_str(), i + 1, bitrate / 1000);
            } else {
              RCLCPP_WARN(get_logger(), "%s: Ch%u %ukbps failed", name_.c_str(), i + 1, bitrate / 1000);
              success = false;
            }
          }
          if (success) {
            // Setup Publishers and Subscribers
            for (unsigned int i = 0; i < dev_->numChannels(); i++) {
              if (i < channels_.size() && channels_[i].bitrate) {
                auto node = create_sub_node("can_bus_" + std::to_string(i + 1));
                if (channels_[i].mode == ChannelMode::Normal) {
                  subs_.push_back(node->create_subscription<can_msgs::msg::Frame>(
                      "can_tx", 100, [this, i](const can_msgs::msg::Frame::ConstSharedPtr msg) {
                        this->recvRos(msg, i);
                        return;
                      }));
                }
                pubs_.push_back(node->create_publisher<can_msgs::msg::Frame>("can_rx", 100));
                if (error_topic_) {
                  pubs_err_.push_back(node->create_publisher<can_msgs::msg::Frame>("can_err", 100));
                }
              } else {
                pubs_.push_back(nullptr);
                pubs_err_.push_back(nullptr);
              }
            }
          } else {
            dev_->reset();
            dev_->closeDevice();
            RCLCPP_WARN(get_logger(), "%s: Failed to set bitrate", name_.c_str());
          }
          RCLCPP_DEBUG_ONCE(get_logger(), "Num Channels: %d", dev_->numChannels());
        } else {
          dev_->closeDevice();
          RCLCPP_WARN(get_logger(), "%s: Failed to sync time", name_.c_str());
        }
      } else {
        dev_->closeDevice();
        RCLCPP_WARN(get_logger(), "%s: Failed to reset", name_.c_str());
      }
    } else {
      if (mac_addr_.empty()) {
        RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 10e3, "%s: Not found", name_.c_str());
      } else {
        RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 10e3, "%s: MAC address '%s' not found", name_.c_str() , mac_addr_.c_str());
      }
    }
  } else {
    std::vector<uint32_t> rx_drops, tx_drops;
    std::vector<uint8_t> rx_errors, tx_errors;
    if (dev_->getStats(rx_drops, tx_drops, rx_errors, tx_errors, true)) {
      unsigned int size = std::min(rx_drops.size(), tx_drops.size());
      uint32_t total = 0;
      for (unsigned int i = 0; i < size; i++) {
        total += rx_drops[i];
        total += tx_drops[i];
      }
      if (total != total_drops_) {
        total_drops_ = total;
        std::string ss;
        for (unsigned int i = 0; i < size; i++) {
          ss += "Rx" + std::to_string(i + 1) + ": " + std::to_string(rx_drops[i]) + ", ";
          ss += "Tx" + std::to_string(i + 1) + ": " + std::to_string(tx_drops[i]) + ", ";
        }
        RCLCPP_WARN(get_logger(), "Dropped CAN messages: %s", ss.c_str());
      }
    }
  }
}

void CanDriver::timerServiceCallback() {
  serviceDevice();
}

void CanDriver::timerFlushCallback() {
  dev_->flushMessages();
}

} // namespace dataspeed_can_usb

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(dataspeed_can_usb::CanDriver)
