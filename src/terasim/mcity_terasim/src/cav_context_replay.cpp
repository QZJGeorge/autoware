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

#include "cav_context_replay.hpp"

namespace cav_context_replay
{
  CavContextReplay::CavContextReplay(const rclcpp::NodeOptions &options)
      : Node("cav_context_replay", options)
  {
    init_redis_client();
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
            set_key("av_context", line);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // wait for 0.1 seconds
    }

    inFile.close();

    // print file read complete
    std::cout << "File read complete" << std::endl;
  }


  void CavContextReplay::init_redis_client(){
    // Connecting to the Redis server on localhost
    context = redisConnect("127.0.0.1", 6379);

    // handle error
    if (context == NULL || context->err) {
      if (context){
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Connect redis error: %d", context->err);
      } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Can't allocate redis context");
      }
    } else {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Connected to redis server at 127.0.0.1:6379");
    }
  }

  void CavContextReplay::set_key(string key, string value){
    // SET key
    redisReply *reply = (redisReply *)redisCommand(context, "SET %s %s", key.c_str(), value.c_str());
    if (reply->type == REDIS_REPLY_ERROR){
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Redis set key error: %s", key.c_str());
    }
    if (reply->type == REDIS_REPLY_STATUS){
      
    }
  }

  string CavContextReplay::get_key(string key){
    // GET key
    redisReply *reply = (redisReply *)redisCommand(context, "GET %s", key.c_str());
    string result = "";
    if (reply->type == REDIS_REPLY_STRING)
      result = reply->str;
    return result;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(cav_context_replay::CavContextReplay)
