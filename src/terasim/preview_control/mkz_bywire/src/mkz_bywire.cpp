#include <mkz_bywire.hpp>

namespace mkz_bywire{
    MkzBywire::MkzBywire(const rclcpp::NodeOptions & options)
    : Node("mkz_bywire", options)
    {
        this->declare_parameter("max_speed", 8.0);
        this->declare_parameter("max_throttle", 0.2);
        this->declare_parameter("max_lat_acc", 3.0);
        this->declare_parameter("GPS_angle_calib", 0.75);
        this->declare_parameter("correct_cg_x", 1.0);
        this->declare_parameter("correct_cg_y", 0.0);
        this->declare_parameter("output_xmsgs", true);

        this->get_parameter("max_speed", max_speed);
        this->get_parameter("max_throttle", max_throttle);
        this->get_parameter("max_lat_acc", max_lat_acc);
        this->get_parameter("GPS_angle_calib", gps_angle_calib);
        this->get_parameter("correct_cg_x", correct_cg_x);
        this->get_parameter("correct_cg_y", correct_cg_y);
        this->get_parameter("output_xmsgs", output_xmsgs);

        //register pub
        pub_throttle     = this->create_publisher<ThrottleCmd>("/vehicle/ds/throttle_cmd", 10);
        pub_brake        = this->create_publisher<BrakeCmd>("/vehicle/ds/brake_cmd", 10);        
        pub_steering     = this->create_publisher<SteeringCmd>("/vehicle/ds/steering_cmd", 10);
        pub_gear         = this->create_publisher<GearCmd>("/vehicle/ds/gear_cmd", 10);
        pub_turn_signal  = this->create_publisher<TurnSignal>("/vehicle/turn_signal_cmd", 10);
        pub_veh_state    = this->create_publisher<VehicleState>("/terasim/vehicle_state", 10);
        
        //register sub
        sub_throttle_rept = this->create_subscription<ThrottleReport>(
            "/vehicle/throttle_report", 10, std::bind(&MkzBywire::throttleReptCB, this, std::placeholders::_1));
        sub_brake_rept = this->create_subscription<BrakeReport>(
            "/vehicle/brake_report", 10, std::bind(&MkzBywire::brakeReptCB, this, std::placeholders::_1));
        sub_steer_rept = this->create_subscription<SteeringReport>(
            "/vehicle/steering_report", 10, std::bind(&MkzBywire::steerReptCB, this, std::placeholders::_1));
        sub_gear_rept = this->create_subscription<GearReport>(
            "/vehicle/gear_report", 10, std::bind(&MkzBywire::gearReptCB, this, std::placeholders::_1));
        sub_wheel_speed = this->create_subscription<WheelSpeedReport>(
            "/vehicle/wheel_speed_report", 10, std::bind(&MkzBywire::wheelspeedReptCB, this, std::placeholders::_1));

        sub_gps_fix = this->create_subscription<NavSatFix>(
            "/ins/nav_sat_fix", 10, std::bind(&MkzBywire::gpsFixCB, this, std::placeholders::_1));
        sub_gps_odom = this->create_subscription<Odometry>(
            "/ins/odometry", 10, std::bind(&MkzBywire::gpsOdomCB, this, std::placeholders::_1));
        sub_imu = this->create_subscription<Imu>(
            "/ins/imu", 10, std::bind(&MkzBywire::imuCB, this, std::placeholders::_1));
        sub_sys_enable = this->create_subscription<Bool>(
            "/vehicle/dbw_enabled", 10, std::bind(&MkzBywire::sysEnableCB, this, std::placeholders::_1));
        sub_cmd = this->create_subscription<Control>(
            "/terasim/vehicle_control", 10, std::bind(&MkzBywire::cmdCB, this, std::placeholders::_1));

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
        brake_msg.pedal_cmd = 0.235f;

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
        check();
        publishCmd();

        if(output_xmsgs){
            publishVehState();
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Published vehicle state");
        }
    }

    void MkzBywire::publishCmd(){
        if (vs_msg.by_wire_enabled != true)
            return;

        //set brake boo
        if (cmd_in.brake > 0.01f)
            cmd_in.throttle = 0.0f;

        //pub gear ---------------
        gear_msg.cmd.gear = cmd_in.gear;
    
        if (gear_msg.cmd.gear == Gear::PARK    ||
            gear_msg.cmd.gear == Gear::REVERSE ||
            gear_msg.cmd.gear == Gear::NEUTRAL || 
            gear_msg.cmd.gear == Gear::DRIVE   ||
            gear_msg.cmd.gear == Gear::LOW )
        {
            if (gear_msg.cmd.gear != vs_msg.gear_pos && vs_msg.speed_x == 0.0f){
                cmd_in.brake    = 0.28f;
                cmd_in.throttle = 0.0f;

                if (vs_msg.brake_state > 0.275f){
                    pub_gear->publish(gear_msg);
                    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Shift gear from %s to %s",
                        StateName::Gear_name(vs_msg.gear_pos).data(),
                        StateName::Gear_name(gear_msg.cmd.gear).data());
                }
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

        //output
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),
            "Publised cmd: T%f B%f S%f Gear-%s TS-%s",
            throttle_msg.pedal_cmd,
            brake_msg.pedal_cmd,
            steering_msg.steering_wheel_angle_cmd,
            StateName::Gear_name(gear_msg.cmd.gear).data(),
            StateName::Turn_signal_name(turn_signal_msg.value).data() );
    }

    void MkzBywire::publishVehState(){
        if (ABS(vs_msg.rtk_gps_latitude) < 35 || ABS(vs_msg.rtk_gps_latitude) > 50  ||
            ABS(vs_msg.rtk_gps_longitude) < 78 || ABS(vs_msg.rtk_gps_longitude) > 88 )
            return;
    
        //yaw rate
        vs_msg.yaw_rate = vs_msg.rtk_gps_twist_angular_vz;

        //speed
        vs_msg.speed_y  = vs_msg.rtk_gps_twist_linear_vy; // not accurate
        
        //publish
        vs_msg.timestamp = this->get_clock()->now().seconds();
        pub_veh_state->publish(vs_msg);
    }

    void MkzBywire::check()
    { 
        // RULE 1: Throttle is limited to [0, max_throttle]
        // ie, [0, 0.45] opening
        // temporary rule
        if (cmd_in.throttle > max_throttle + 0.01)
        {
            cmd_in.throttle = 0;
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 1: Throttle %f > max %f, set to 0\n", 
                cmd_in.throttle, max_throttle);
        }

        if (cmd_in.throttle < 0)
        {   
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 1: Throttle %f < 0 , set to 0\n", 
                cmd_in.throttle);
            cmd_in.throttle = 0;
        }

        // RULE 2: Brake is limited to [0, MAX_BRAKE]
        // ie, [0,0.8], 0.32 opening (already) = max torque, see the shared files
        if (cmd_in.brake > MAX_BRAKE + 0.01)
        {        
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 2: Brake %f > max %f, set to max %f\n", 
                cmd_in.brake, MAX_BRAKE, MAX_BRAKE);

            cmd_in.brake = MAX_BRAKE;
            cmd_in.throttle = 0;
        }

        if (cmd_in.brake < 0 )
        {
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 2: Brake %f < 0, set to 0.22\n", cmd_in.brake);

            cmd_in.brake = 0.22;
            cmd_in.throttle = 0;
        }

        // RULE 3: Steering Angle is limited to [MIN_STEERING_ANGLE, MAX_STEERING_ANGLE]
        // ie, +/- 2.5*M_PI
        if (cmd_in.steering > MAX_STEERING_ANGLE)
        {
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
            
        // RULE 4: if longitudinal vehicle speed > 15 m/s, set throttle to 0
        // Speed limit of Mcity highway is 45 mile
        // temporary rule
        if (vs_msg.speed_x > max_speed + 0.2)
        {
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
    };

    void MkzBywire::gpsFixCB(const NavSatFix::SharedPtr msg){
        vs_msg.rtk_timestamp_sec  = msg->header.stamp.sec;
        vs_msg.rtk_timestamp_nsec = msg->header.stamp.nanosec;
        vs_msg.rtk_gps_status     = msg->status.status;
        vs_msg.rtk_gps_service    = msg->status.service;

        vs_msg.rtk_gps_longitude  = msg->longitude;
        vs_msg.rtk_gps_latitude   = msg->latitude;
        vs_msg.rtk_gps_altitude   = msg->altitude;
    }

    void MkzBywire::gpsOdomCB(const Odometry::SharedPtr msg){
        vs_msg.rtk_gps_twist_linear_vx   = msg->twist.twist.linear.z;
        vs_msg.rtk_gps_twist_linear_vy   = -msg->twist.twist.linear.y;
        vs_msg.rtk_gps_twist_linear_vz   = msg->twist.twist.linear.x;

        vs_msg.rtk_gps_twist_angular_vx  = msg->twist.twist.angular.z;
        vs_msg.rtk_gps_twist_angular_vy  = -msg->twist.twist.angular.y;
        vs_msg.rtk_gps_twist_angular_vz  = msg->twist.twist.angular.x;
    }

    void MkzBywire::imuCB(const Imu::SharedPtr msg){
        vs_msg.rtk_imu_linear_acc_x      = msg->linear_acceleration.z;
        vs_msg.rtk_imu_linear_acc_y      = -msg->linear_acceleration.y;
        vs_msg.rtk_imu_linear_acc_z      = msg->linear_acceleration.x;
    }

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