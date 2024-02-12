#include <mkz_bywire.hpp>

namespace mkz_bywire{
    MkzBywire::MkzBywire(const rclcpp::NodeOptions & options)
    : Node("mkz_bywire", options)
    {
        this->declare_parameter("max_speed", 8.333);
        this->declare_parameter("max_throttle", 0.45);
        this->declare_parameter("max_lat_acc", 2.0);

        this->get_parameter("max_speed", max_speed);
        this->get_parameter("max_throttle", max_throttle);
        this->get_parameter("max_lat_acc", max_lat_acc);

        //register pub
        pub_throttle     = this->create_publisher<ThrottleCmd>("/vehicle/ds/throttle_cmd", 10);
        pub_brake        = this->create_publisher<BrakeCmd>("/vehicle/ds/brake_cmd", 10);        
        pub_steering     = this->create_publisher<SteeringCmd>("/vehicle/ds/steering_cmd", 10);
        pub_gear         = this->create_publisher<GearCmd>("/vehicle/ds/gear_cmd", 10);
        pub_turn_signal  = this->create_publisher<TurnSignal>("/vehicle/turn_signal_cmd", 10);
        pub_veh_state    = this->create_publisher<VehicleState>("/mcity/vehicle_state", 10);
        
        //register sub
        sub_throttle_rept = this->create_subscription<ThrottleReport>(
            "/vehicle/ds/throttle_report", 10, std::bind(&MkzBywire::throttleReptCB, this, std::placeholders::_1));
        sub_brake_rept = this->create_subscription<BrakeReport>(
            "/vehicle/ds/brake_report", 10, std::bind(&MkzBywire::brakeReptCB, this, std::placeholders::_1));
        sub_steer_rept = this->create_subscription<SteeringReport>(
            "/vehicle/ds/steering_report", 10, std::bind(&MkzBywire::steerReptCB, this, std::placeholders::_1));
        sub_gear_rept = this->create_subscription<GearReport>(
            "/vehicle/ds/gear_report", 10, std::bind(&MkzBywire::gearReptCB, this, std::placeholders::_1));
        sub_wheel_speed = this->create_subscription<WheelSpeedReport>(
            "/vehicle/wheel_speed_report", 10, std::bind(&MkzBywire::wheelspeedReptCB, this, std::placeholders::_1));

        sub_sys_enable = this->create_subscription<Bool>(
            "/vehicle/dbw_enabled", 10, std::bind(&MkzBywire::sysEnableCB, this, std::placeholders::_1));
        sub_cmd = this->create_subscription<Control>(
            "/mcity/vehicle_control", 10, std::bind(&MkzBywire::cmdCB, this, std::placeholders::_1));

        timer_ = rclcpp::create_timer(
            this, get_clock(), 20ms, std::bind(&MkzBywire::on_timer, this));
        
        //throttle
        throttle_msg.enable = true;     // Enable
        throttle_msg.ignore = false;    // Ignore driver overrides
        throttle_msg.clear  = false;    // Clear driver overrides
        throttle_msg.pedal_cmd_type = ThrottleCmd::CMD_PEDAL;
        throttle_msg.pedal_cmd = 0.0f;

        //brake
        brake_msg.enable  = true;       // Enable
        brake_msg.ignore  = false;      // Ignore driver overrides
        brake_msg.clear   = false;      // Clear driver overrides
        brake_msg.pedal_cmd_type = BrakeCmd::CMD_PEDAL;
        brake_msg.pedal_cmd = 0.25f;

        //steering
        steering_msg.enable = true;
        steering_msg.ignore = false;    // Ignore driver overrides
        steering_msg.clear  = false;    // Ignore driver overrides
        steering_msg.quiet  = false;    // Disable the driver override audible warning
        steering_msg.steering_wheel_angle_cmd = 0.0f;
        steering_msg.steering_wheel_angle_velocity = 1.75 * M_PI;

        //gear
        gear_msg.cmd.gear = Gear::NONE;
        gear_msg.clear = false;         // Clear driver overrides

        //Turn signal
        turn_signal_msg.value = TurnSignal::NONE;
    }

    void MkzBywire::on_timer(){
        if (is_cmd_received){
            check();
            publishCmd();
            is_cmd_received = false;
        }

        publishVehState();
    }

    void MkzBywire::publishCmd(){
        if (vs_msg.by_wire_enabled != true){
            RCLCPP_WARN_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Drive command received but drive by wire is not enabled");
            return;
        }

        //pub gear ---------------
        gear_msg.cmd.gear = cmd_in.gear;
        if (gear_msg.cmd.gear != vs_msg.gear_pos && vs_msg.speed_x == 0.0f){
            cmd_in.brake    = 0.25f;
            cmd_in.throttle = 0.00f;

            if (vs_msg.brake_state > 0.20f){
                pub_gear->publish(gear_msg);
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Shift gear");
            }
        }

        //pub throttle ---------------
        throttle_msg.pedal_cmd = cmd_in.throttle;
        pub_throttle->publish(throttle_msg);

        //pub brake ---------------
        brake_msg.pedal_cmd = cmd_in.brake;
        pub_brake->publish(brake_msg);

        //pub steering ---------------
        steering_msg.steering_wheel_angle_cmd = cmd_in.steering;
        pub_steering->publish(steering_msg);
    
        //pub turn signal ---------------
        turn_signal_msg.value = cmd_in.turn_signal;
        if (turn_signal_msg.value != TurnSignal::NONE)
            pub_turn_signal->publish(turn_signal_msg);
    }

    void MkzBywire::publishVehState(){    
        vs_msg.yaw_rate = vs_msg.rtk_gps_twist_angular_vz;
        vs_msg.timestamp = this->get_clock()->now().seconds();
        pub_veh_state->publish(vs_msg);
    }

    void MkzBywire::check()
    { 
        // RULE 1: Throttle is limited to [0, max_throttle]
        if (cmd_in.throttle > max_throttle + 0.01){
            cmd_in.throttle = max_throttle;
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 1: Throttle %f > max %f, set to max\n", 
                cmd_in.throttle, max_throttle);
        }

        if (cmd_in.throttle < 0){   
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 1: Throttle %f < 0 , set to 0\n", cmd_in.throttle);
            cmd_in.throttle = 0;
        }

        // RULE 2: Brake is limited to [0, MAX_BRAKE]
        // ie, [0,0.8], 0.32 opening (already) = max torque, see the shared files
        if (cmd_in.brake > MAX_BRAKE + 0.01){        
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 2: Brake %f > max %f, set to max %f\n", 
                cmd_in.brake, MAX_BRAKE, MAX_BRAKE);
            cmd_in.brake = MAX_BRAKE;
            cmd_in.throttle = 0;
        }

        if (cmd_in.brake < 0){
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 2: Brake %f < 0, set to 0.25\n", cmd_in.brake);
            cmd_in.brake = 0.25;
            cmd_in.throttle = 0;
        }

        // RULE 3: Steering Angle is limited to [MIN_STEERING_ANGLE, MAX_STEERING_ANGLE]
        // ie, +/- 2.5*M_PI
        if (cmd_in.steering > MAX_STEERING_ANGLE){
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 3: Steering angle %f > max %f, set to max %f\n", 
                cmd_in.steering, MAX_STEERING_ANGLE, MAX_STEERING_ANGLE);
            cmd_in.steering = MAX_STEERING_ANGLE;
        }

        if (cmd_in.steering < MIN_STEERING_ANGLE)
        {
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 3: Steering angle %f < min %f, set to min %f\n", 
                cmd_in.steering, MIN_STEERING_ANGLE, MIN_STEERING_ANGLE);

            cmd_in.steering = MIN_STEERING_ANGLE;
        }
            
        // RULE 4: if longitudinal vehicle speed > max speed, set throttle to 0
        if (vs_msg.speed_x > max_speed + 0.2){
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 5: Vehicle speed %f > %fm/s, set throttle to 0\n", 
                vs_msg.speed_x, max_speed);
            cmd_in.throttle = 0.0;
        }

        // RULE 5: if speed > 0 m/s, gear shifting is not allowed
        if (vs_msg.speed_x > 0 &&
            cmd_in.gear != vs_msg.gear_pos  &&
            cmd_in.gear != GEAR_NONE)
        {
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 6: Try to shift gear when speed %f > 0 m/s\n", vs_msg.speed_x);
            cmd_in.gear = GEAR_NONE;
        }

        // RULE 6: if lateral acceleration > 3.5 m/s2, set throttle to 0
        if ( fabs(vs_msg.acc_y) > max_lat_acc)
        {
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 7: a_y %f > %fm/s2, set throttle to 0\n", 
                vs_msg.acc_y, max_lat_acc);
            cmd_in.throttle = 0.0;
        }

        // Final RULE : disable throttle if brake is applied
        if (cmd_in.brake > 0.0f)
            cmd_in.throttle = 0.0f;

        return;
    }

    void MkzBywire::cmdCB(const Control::SharedPtr msg){
        cmd_in.timestamp    = msg->timestamp;
        cmd_in.throttle     = msg->throttle_cmd;
        cmd_in.brake        = msg->brake_cmd;
        cmd_in.steering     = msg->steering_cmd;
        cmd_in.gear         = msg->gear_cmd;
        cmd_in.turn_signal  = msg->turn_signal_cmd;

        is_cmd_received = true;
    };

    void MkzBywire::sysEnableCB(const Bool::SharedPtr msg){
        vs_msg.by_wire_enabled = msg->data;
    }

    void MkzBywire::throttleReptCB(const ThrottleReport::SharedPtr msg){
        vs_msg.throttle_cmd      = msg->pedal_cmd;
        vs_msg.throttle_input    = msg->pedal_input;
        vs_msg.throttle_state    = msg->pedal_output;

        vs_msg.throttle_enabled  = msg->enabled;     // Enabled
        vs_msg.throttle_override = msg->override;    // Driver override
        vs_msg.throttle_driver   = msg->driver;      // Driver activity
        vs_msg.throttle_timeout  = msg->timeout;     // Command timeout
    }

    void MkzBywire::brakeReptCB(const BrakeReport::SharedPtr msg){
        vs_msg.brake_cmd         = msg->pedal_cmd;
        vs_msg.brake_input       = msg->pedal_input;
        vs_msg.brake_state       = msg->pedal_output;

        vs_msg.brake_torq_cmd    = msg->torque_cmd;
        vs_msg.brake_torq_input  = msg->torque_input;
        vs_msg.brake_torq_state  = msg->torque_output;

        vs_msg.brake_enabled     = msg->enabled;
        vs_msg.brake_override    = msg->override;    // Driver override
        vs_msg.brake_driver      = msg->driver;      // Driver activity
        vs_msg.brake_timeout     = msg->timeout;     // Command timeout
    };

    void MkzBywire::steerReptCB(const SteeringReport::SharedPtr msg){
        vs_msg.steer_state       = msg->steering_wheel_angle;
        vs_msg.steer_torque      = msg->steering_wheel_torque;
        vs_msg.steer_enabled     = msg->enabled;
        vs_msg.steer_override    = msg->override;
        vs_msg.steer_timeout     = msg->timeout;

        vs_msg.speed_x           = msg->speed; //vehicle speed from the steering report system
    };

    void MkzBywire::gearReptCB(const GearReport::SharedPtr msg){
        vs_msg.gear_pos =  msg->state.gear;
    };

    void MkzBywire::wheelspeedReptCB(const WheelSpeedReport::SharedPtr msg){
        vs_msg.wheel_v_front_left    = msg->front_left;
        vs_msg.wheel_v_front_right   = msg->front_right;
        vs_msg.wheel_v_rear_left     = msg->rear_left;
        vs_msg.wheel_v_rear_right    = msg->rear_right;
    };
}

RCLCPP_COMPONENTS_REGISTER_NODE(mkz_bywire::MkzBywire)