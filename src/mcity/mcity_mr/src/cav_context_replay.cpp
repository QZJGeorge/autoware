// Copyright 2019 Autoware Foundation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <cav_context_replay.hpp>

namespace cav_context_replay
{
  CavContextReplay::CavContextReplay(const rclcpp::NodeOptions &options)
      : Node("cav_context_replay", options)
  {
    if (!redis_client.connect(true)) {
        RCLCPP_ERROR(this->get_logger(), "Failed to connect to Redis server.");
    } else {
        RCLCPP_INFO(this->get_logger(), "Connected to Redis server.");
    }

    read_file();
  }

  void CavContextReplay::read_file(){
    std::string filePath = "/home/zhijie/479.txt"; // replace with your file path
    std::ifstream inFile(filePath);

    if (!inFile) {
        std::cout << "Unable to open file at path: " << filePath << std::endl;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        if(line.length() > 16) {  // check if line length is more than 12
            line = line.substr(15, line.size() - 17); // remove first 11 and last 1 characters
            // std::cout << line << std::endl << endl << endl << endl;  // print the modified line
            redis_client.set("av_context", line);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // wait for 0.1 seconds
    }

    inFile.close();

    // print file read complete
    std::cout << "File read complete" << std::endl;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(cav_context_replay::CavContextReplay)
