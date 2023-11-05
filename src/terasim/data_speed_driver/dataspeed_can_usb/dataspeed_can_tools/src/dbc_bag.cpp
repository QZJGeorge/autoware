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

#include <rosbag2_cpp/reader.hpp>
#include <can_msgs/msg/frame.hpp>
#include <dataspeed_can_msgs/msg/frame.hpp>
#include <map>

#include "CanExtractor.h"

void printHelp() {
  printf("Usage: dbc_bag <bag_file> <topic> <dbc_file> [dbc_files]... [-O output_file]\n");
  printf("  [--unknown / -u] [--expand / -e]\n");
}

int main(int argc, char** argv)
{
  // Arguments
  std::string bag_file_in;
  std::string bag_file_out;
  std::string topic;
  std::vector<std::string> dbc_files;
  bool _expand = false;
  bool _unknown = false;

  // Parse command line arguments
  unsigned int count = 0;
  for (int i = 1; i < argc; i++) {
    std::string str = argv[i];
    if (str == "--help" || str == "-h") {
      printHelp();
      return 0;
    } else if (str == "--unknown" || str == "-u") {
      _unknown = true;
    } else if (str == "--expand" || str == "-e") {
      _expand = true;
    } else if (str == "-O") {
      i++;
      if (i < argc) {
        bag_file_out = argv[i];
      }
    } else {
      if (count == 0) {
        bag_file_in = str;
      } else if (count == 1) {
        topic = str;
      } else {
        dbc_files.push_back(str);
      }
      count++;
    }
  }
  if (count < 3) {
    printHelp();
    return 1;
  }
  if (bag_file_out.empty()) {
    bag_file_out = bag_file_in + ".dbc.bag";
  }

  printf("Opening input bag file: '%s'\n", bag_file_in.c_str());
  rosbag2_cpp::Reader raw_bag;
  raw_bag.open(bag_file_in);

  printf("Processing can_msgs/Frame on topic: '%s'\n", topic.c_str());
  raw_bag.reset_filter();
  raw_bag.set_filter({{topic}});

  rclcpp::Time stamp_end = rclcpp::Time(0);
  rclcpp::Time stamp_begin = rclcpp::Time::max();

  // Get the beginning and end timestamps
  while (raw_bag.has_next()) {
    auto read_msg = raw_bag.read_next();
    auto ts = rclcpp::Time(read_msg->time_stamp);
    if (ts < stamp_begin) {
      stamp_begin = ts;
    }
    else if (ts > stamp_end) {
      stamp_end = ts;
    }
  }

  if (stamp_end <= stamp_begin) {
    printf("Warning: no messages\n");
    return 0;
  }

  printf("Opening dbc files: \n");
  for (size_t i = 0; i < dbc_files.size(); i++) {
    printf("  - %s\n", dbc_files[i].c_str());
  }
  dataspeed_can_tools::CanExtractor extractor(dbc_files, true, _expand, _unknown);

  printf("Opening output bag file: '%s'\n", bag_file_out.c_str());
  extractor.openBag(bag_file_out);

  // Re-open raw_bag after determining beginning and end timestamps
  raw_bag.close();
  raw_bag.open(bag_file_in);
  raw_bag.reset_filter();
  raw_bag.set_filter({{topic}});

  // Create topic->type map. //
  auto topic_type_map = std::map<std::string, std::string>();
  for (auto const &t : raw_bag.get_all_topics_and_types()) {
    topic_type_map[t.name] = t.type;
  }

  int last_percent = 0;

  while (raw_bag.has_next()) {
    auto m = raw_bag.read_next();
    rclcpp::Time stamp = rclcpp::Time::max();
    if (topic_type_map[m->topic_name] == "can_msgs/msg/Frame") {
      // Deserialize m into the message type
      auto msg = std::make_shared<can_msgs::msg::Frame>();
      rclcpp::SerializedMessage serialized_message(*m->serialized_data);
      rclcpp::Serialization<can_msgs::msg::Frame> serialization;
      serialization.deserialize_message(&serialized_message, msg.get());

      dataspeed_can_tools::RosCanMsgStruct can_msg;
      can_msg.id = msg->id | (msg->is_extended ? 0x80000000 : 0x00000000);
      extractor.getMessage(can_msg);
      extractor.pubMessage(msg, rclcpp::Time(m->time_stamp));
      stamp = rclcpp::Time(msg->header.stamp, RCL_SYSTEM_TIME);
    } else if (topic_type_map[m->topic_name] == "dataspeed_can_msgs/msg/Frame") {
      // Deserialize m into the message type
      auto msg = std::make_shared<dataspeed_can_msgs::msg::Frame>();
      rclcpp::SerializedMessage serialized_message(*m->serialized_data);
      rclcpp::Serialization<dataspeed_can_msgs::msg::Frame> serialization;
      serialization.deserialize_message(&serialized_message, msg.get());

      dataspeed_can_tools::RosCanMsgStruct can_msg;
      can_msg.id = msg->id | (msg->extended ? 0x80000000 : 0x00000000);
      extractor.getMessage(can_msg);
      extractor.pubMessage(msg, rclcpp::Time(m->time_stamp));
      stamp = rclcpp::Time(msg->header.stamp, RCL_SYSTEM_TIME);
    } else {
      static bool warned = false;
      if (!warned) {
        warned = true;
        printf("Unknown message type %s\n", topic_type_map[m->topic_name].c_str());
      }
    }
    if (stamp != rclcpp::Time::max()) {
      int percent = 100 * (stamp - stamp_begin).seconds() / (stamp_end - stamp_begin).seconds();
      if (percent >= last_percent) {
        printf("Processing: %d%% complete\n", last_percent);
        last_percent += 10;
      }
    }
  }

  // The extractor's bag writer will be closed on destructor

  printf("Successfully wrote parsed CAN data to bag\n");

  return 0;
}
