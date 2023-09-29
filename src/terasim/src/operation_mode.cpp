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

#include "operation_mode.hpp"

namespace operation_mode{

  OperationMode::OperationMode(const rclcpp::NodeOptions & options)
  : Node("operation_mode", options)
  {
    cli_operation_mode = this->create_client<ChangeOperationMode>("/system/operation_mode/change_operation_mode");

    while(1){
      send_request();
    }
  }

  void OperationMode::send_request(){
    cout << "please type new operation mode and press enter" << endl;
    cout << "stop=1, autonomous=2, local=3, remote=4" << endl;

    auto request = std::make_shared<ChangeOperationMode::Request>();

    int mode_input;
    cin >> mode_input;

    if (mode_input!=1 && mode_input!=2 && mode_input!=3 && mode_input!=4){
      cout << "invalid mode input, please try again" << endl;
    } else{
      request->mode = (uint8_t)mode_input;

      while (!cli_operation_mode->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
          RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "routing service not available, waiting again...");
        }

      auto result = cli_operation_mode->async_send_request(request);

      // Wait for the result.
      if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result) ==
        rclcpp::FutureReturnCode::SUCCESS)
      {
        cout << "change operation mode route result: " << result.get()->status.success << endl;
      } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "failed to access operation mode service");
      }
    }
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(operation_mode::OperationMode)
