#include <mkz_bywire.hpp>

namespace mkz_bywire{
    MkzBywire::MkzBywire(const rclcpp::NodeOptions & options)
    : Node("mkz_bywire", options)
    {
        this->declare_parameter("max_speed", 30.0);
        this->declare_parameter("max_throttle", 0.45);
        this->declare_parameter("max_lat_acc", 3.5);
        this->declare_parameter("GPS_angle_calib", 0.75);
        this->declare_parameter("correct_cg_x", 1.0);
        this->declare_parameter("correct_cg_y", 0.0);
        this->declare_parameter("output_xmsgs", true);
        this->declare_parameter("enable_safeguard", true);

        this->get_parameter("max_speed", adminSet.max_speed);
        this->get_parameter("max_throttle", adminSet.max_throttle);
        this->get_parameter("max_lat_acc", adminSet.max_lat_acc);
        this->get_parameter("GPS_angle_calib", adminSet.gps_angle_calib);
        this->get_parameter("correct_cg_x", adminSet.correct_cg_x);
        this->get_parameter("correct_cg_y", adminSet.correct_cg_y);
        this->get_parameter("output_xmsgs", adminSet.output_xmsgs);
        this->get_parameter("enable_safeguard", adminSet.enable_safeguard);

        //register pub
        pub_throttle     = this->create_publisher<ThrottleCmd>("/vehicle/throttle_cmd", 10);
        pub_brake        = this->create_publisher<BrakeCmd>("/vehicle/brake_cmd", 10);        
        pub_steering     = this->create_publisher<SteeringCmd>("/vehicle/steering_cmd", 10);
        pub_gear         = this->create_publisher<GearCmd>("/vehicle/gear_cmd", 10);
        pub_turn_signal  = this->create_publisher<TurnSignal>("/vehicle/turn_signal_cmd", 10);
        pub_veh_state    = this->create_publisher<VehicleState>("/mkz_bywire_intf/vehState", 10);
        pub_sensor_check = this->create_publisher<SensorCheck>("/mkz_bywire_intf/SensorCheck", 10);
        
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
        "gps/fix", 10, std::bind(&MkzBywire::gpsFixCB, this, std::placeholders::_1));
        sub_gps_odom = this->create_subscription<Odometry>(
        "gps/odom", 10, std::bind(&MkzBywire::gpsOdomCB, this, std::placeholders::_1));
        sub_gps_pos_type = this->create_subscription<String>(
        "gps/pos_type", 10, std::bind(&MkzBywire::gpsPosTypeCB, this, std::placeholders::_1));
        sub_gps_nav_state = this->create_subscription<String>(
        "gps/nav_status", 10, std::bind(&MkzBywire::gpsNavStateCB, this, std::placeholders::_1));

        sub_imu = this->create_subscription<Imu>(
        "imu/data", 10, std::bind(&MkzBywire::imuCB, this, std::placeholders::_1));
        sub_sys_enable = this->create_subscription<Bool>(
        "/vehicle/dbw_enabled", 10, std::bind(&MkzBywire::sysEnableCB, this, std::placeholders::_1));
        sub_cmd = this->create_subscription<Control>(
        "/mkz_bywire_intf/control", 10, std::bind(&MkzBywire::cmdCB, this, std::placeholders::_1));
        sub_safe_guard = this->create_subscription<SafeGuardResults>(
        "/SafeGuardCmd", 10, std::bind(&MkzBywire::safeGuardCB, this, std::placeholders::_1));

        timer_ = rclcpp::create_timer(
            this, get_clock(), 20ms, std::bind(&MkzBywire::on_timer, this));
        
        //ini some msgs
        //throttle
        throttle_msg.count  = 0;        // Watchdog counter (optional)
        throttle_msg.enable = true;     // Enable
        throttle_msg.ignore = false;    // Ignore driver overrides
        throttle_msg.clear  = false;    // Clear driver overrides
        throttle_msg.pedal_cmd_type = ThrottleCmd::CMD_PEDAL;
        throttle_msg.pedal_cmd = 0.0f;

        //brake
        brake_msg.count   = 0;          // Watchdog counter (optional)
        brake_msg.enable  = true;       // Enable
        brake_msg.ignore  = false;      // Ignore driver overrides
        brake_msg.clear   = false;      // Clear driver overrides
        brake_msg.pedal_cmd_type = BrakeCmd::CMD_PEDAL;
        brake_msg.pedal_cmd = 0.235f;

        //steering
        steering_msg.count  = 0;        // Watchdog counter (optional)
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
        ++count;

        check();
        sensorCheck();
        publishCmd();

        if (adminSet.output_xmsgs)
            publishVehState();

        if (count%FREQ == 0)
            publishSensorcheck();
    }

    void MkzBywire::publishCmd(){
        if (vs_msg.by_wire_enabled != true)
            return;

        if (count++ > 9999999) //MkzBywire update count
            count = 0;

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
            if (gear_msg.cmd.gear    != vs_msg.gear_pos &&
                vs_msg.speed_x == 0.0f)
            {
                cmd_in.brake    = 0.28f;
                cmd_in.throttle = 0.0f;

                if (vs_msg.brake_state > 0.275f)
                {
                    pub_gear->publish(gear_msg);
                    RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Shift gear from %s to %s",
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

        //acc
        vs_msg.acc_x = vs_msg.rtk_imu_linear_acc_x;
        vs_msg.acc_y = vs_msg.rtk_imu_linear_acc_y;
        vs_msg.acc_z = vs_msg.rtk_imu_linear_acc_z;

        //heading
        if (vs_msg.rtk_attitude < 0.2)
            vs_msg.heading  = XM::Normalise_2PI(vs_msg.rtk_heading);
        else
            vs_msg.heading  = XM::Normalise_2PI(M_PI-vs_msg.rtk_heading);

        vs_msg.heading = XM::Normalise_2PI(vs_msg.heading + 
                        adminSet.gps_angle_calib * M_PI/180.0f);
    
        //yaw rate1
        vs_msg.yaw_rate = vs_msg.rtk_gps_twist_angular_vz;

        //speed
        vs_msg.speed_y  = vs_msg.rtk_gps_twist_linear_vy; // not accurate
        vs_msg.speed_z  = vs_msg.rtk_gps_twist_linear_vz;

        //calibrate latitude and longitude
        double veh_x, veh_y, veh_x2, veh_y2, lat = 0, lon = 0, h=vs_msg.heading;
        UTM::LLtoUTM( vs_msg.rtk_gps_latitude,
                    vs_msg.rtk_gps_longitude, veh_y, veh_x);

        veh_x2 = veh_x + adminSet.correct_cg_x * cos(h) -adminSet.correct_cg_y * sin(h);
        veh_y2 = veh_y + adminSet.correct_cg_x * sin(h) +adminSet.correct_cg_y * cos(h);

        UTM::UTMtoLL(veh_y2, veh_x2, lat, lon);

        vs_msg.x = veh_x2;
        vs_msg.y = veh_y2;
        vs_msg.z = vs_msg.rtk_gps_altitude;
        vs_msg.rtk_gps_latitude = lat;
        vs_msg.rtk_gps_longitude = lon;
        
        //publish
        vs_msg.timestamp = this->get_clock()->now().seconds();
        pub_veh_state->publish(vs_msg);
    }

    void MkzBywire::publishSensorcheck(){
        sensor_msg.timestamp = this->get_clock()->now().seconds();
        pub_sensor_check->publish(sensor_msg);
    }

    void MkzBywire::check()
    { 
        // RULE 1: Throttle is limited to [0, adminSet.max_throttle]
        // ie, [0, 0.45] opening
        // temporary rule
        if (cmd_in.throttle > adminSet.max_throttle + 0.01)
        {
            cmd_in.throttle = 0;
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 1: Throttle %f > max %f, set to 0\n", 
                cmd_in.throttle, adminSet.max_throttle);
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

        // RULE 4: the vehicle is not in/near Mcity/MTC, stop, MTC office (0,0)
        // rtk is required, thus the vehicle position and speed can be recorded
        // temporary rule
        
        /*if ( vs_msg.x < -200 || vs_msg.x > 1000 || 
            vs_msg.y < -200 || vs_msg.y > 1000)
        {
            
            ROS_WARN_THROTTLE(1, "  => Violate rule 4: Not in/near Mcity, or rtk is not activated,veh pos x=%f y=%f, set brake to 0.25\n", 
                vs_msg.x, vs_msg.y);

            cmd_in.throttle = 0.0;
            cmd_in.brake    = 0.25;
        }*/
            
        // RULE 5: if longitudinal vehicle speed > 15 m/s, set throttle to 0
        // Speed limit of Mcity highway is 45 mile
        // temporary rule
        if (vs_msg.speed_x > adminSet.max_speed + 0.2)
        {
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 5: Vehicle speed %f > %fm/s, set throttle to 0\n", 
                vs_msg.speed_x, adminSet.max_speed);

            cmd_in.throttle = 0.0;
        }

        // RULE 6: if speed > 0 m/s, gear shifting is not allowed
        if (vs_msg.speed_x > 0 &&
            cmd_in.gear != vs_msg.gear_pos  &&
            cmd_in.gear != GEAR_NONE)
        {
            
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 6: Try to shift gear when speed %f > 0 m/s\n", vs_msg.speed_x);
            cmd_in.gear = GEAR_NONE;
        }

        // RULE 7: if lateral acceleration > 3.5 m/s2, set throttle to 0
        if ( fabs(vs_msg.acc_y) > adminSet.max_lat_acc)
        {
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 7: a_y %f > %fm/s2, set throttle to 0\n", 
                vs_msg.acc_y, adminSet.max_lat_acc);
            cmd_in.throttle = 0.0;
        }

        // RULE 8: check the info from the safeguard
        if (adminSet.enable_safeguard == true && 
            safe_guard_msg.enable_brake == true && 
            safe_guard_msg.brake_value > 0)
        {
            cmd_in.throttle = 0.0;

            if (safe_guard_msg.brake_value > cmd_in.brake)
            {
                cmd_in.brake = safe_guard_msg.brake_value;
                RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "  => Violate rule 8: safe-guard kicks in, set brake to %f\n", 
                    safe_guard_msg.brake_value);
            }
        }

        // Final RULE : disable throttle if brake is applied
        if (cmd_in.brake > 0.0f)
            cmd_in.throttle = 0.0f;

        return;
    }

    void MkzBywire::sensorCheck(){
        control_count ++;
        if (control_count > FREQ)
        {
            cmd_in.brake = MAX(0.23, cmd_in.brake);
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "=>Loss commands from control module, set brake to 0.23");
        }

        sensor_msg.rtk_keep_count++;
        sensor_msg.mobileye_keep_count++;
        sensor_msg.ibeo_points_keep_count++;
        sensor_msg.ibeo_objects_keep_count++;
        sensor_msg.velodyne_points_keep_count++;

        if (sensor_msg.rtk_keep_count > FREQ)
        {
            cmd_in.throttle = 0.0;
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "  =>Loss GPS, set throttle to 0");
        }
    }

    void MkzBywire::Quaternion2Euler(double qx, double qy, double qz, double qw, 
        double * heading, double * attitude,  double * bank) 
    {
        double test = qx*qy + qz*qw;

        if (test > 0.499999999) // singularity at north pole
        { 
            * heading = 2 * atan2(qx,qw);
            * attitude = M_PI/2;
            * bank = 0;
            return;
        }
        
        if (test < -0.499999999) // singularity at south pole
        { 
            * heading = -2 * atan2(qx,qw);
            * attitude = - M_PI/2;
            * bank = 0;
            return;
        }

        * heading = atan2(2*qy*qw-2*qx*qz , 1 - 2*qy*qy - 2*qz*qz);
        * attitude = asin(2*test);
        * bank = atan2(2*qx*qw-2*qy*qz , 1 - 2*qx*qx - 2*qz*qz);
    } 

    void MkzBywire::cmdCB(const Control::SharedPtr msg){
        control_count       = 0;

        cmd_in.timestamp    = msg->timestamp;
        cmd_in.throttle     = msg->throttle_cmd;
        cmd_in.brake        = msg->brake_cmd;
        cmd_in.steering     = msg->steering_cmd;
        cmd_in.gear         = msg->gear_cmd;
        cmd_in.turn_signal  = msg->turn_signal_cmd;
    };

    void MkzBywire::gpsPosTypeCB(const String::SharedPtr msg){
        postype = msg->data;
    }

    void MkzBywire::gpsNavStateCB(const String::SharedPtr msg){
        vs_msg.rtk_state_string = msg->data +"--"+ postype;
    }

    void MkzBywire::gpsFixCB(const NavSatFix::SharedPtr msg){
        vs_msg.rtk_timestamp_sec  = msg->header.stamp.sec;
        vs_msg.rtk_timestamp_nsec = msg->header.stamp.nanosec;
        vs_msg.rtk_gps_status     = msg->status.status;
        vs_msg.rtk_gps_service    = msg->status.service;

        vs_msg.rtk_gps_longitude  = msg->longitude;
        vs_msg.rtk_gps_latitude   = msg->latitude;
        vs_msg.rtk_gps_altitude   = msg->altitude;

        sensor_msg.rtk_keep_count       = 0;
        sensor_msg.rtk_timestamp_sec    = msg->header.stamp.sec;
        sensor_msg.rtk_timestamp_nsec   = msg->header.stamp.nanosec;
        sensor_msg.rtk_gps_status       = msg->status.status;
        sensor_msg.rtk_gps_service      = msg->status.service;
    }

    void MkzBywire::gpsOdomCB(const Odometry::SharedPtr msg){
        vs_msg.rtk_gps_utm_x = msg->pose.pose.position.x;
        vs_msg.rtk_gps_utm_y = msg->pose.pose.position.y;
        vs_msg.rtk_gps_utm_z = msg->pose.pose.position.z; 

        vs_msg.rtk_imu_quaternion_x = msg->pose.pose.orientation.x;
        vs_msg.rtk_imu_quaternion_y = msg->pose.pose.orientation.y;
        vs_msg.rtk_imu_quaternion_z = msg->pose.pose.orientation.z;
        vs_msg.rtk_imu_quaternion_w = msg->pose.pose.orientation.w;

        //cal heading
        Quaternion2Euler(
            msg->pose.pose.orientation.x,
            msg->pose.pose.orientation.y,
            msg->pose.pose.orientation.z,
            msg->pose.pose.orientation.w,
            & vs_msg.rtk_attitude, 
            & vs_msg.rtk_heading,
            & vs_msg.rtk_bank);

        vs_msg.rtk_gps_twist_linear_vx   = msg->twist.twist.linear.x; // rtk_GPS velocity in local frame
        vs_msg.rtk_gps_twist_linear_vy   = msg->twist.twist.linear.y;
        vs_msg.rtk_gps_twist_linear_vz   = msg->twist.twist.linear.z;

        vs_msg.rtk_gps_twist_angular_vx  = msg->twist.twist.angular.x;
        vs_msg.rtk_gps_twist_angular_vy  = msg->twist.twist.angular.y;
        vs_msg.rtk_gps_twist_angular_vz  = msg->twist.twist.angular.z;
    }

    void MkzBywire::imuCB(const Imu::SharedPtr msg){
        vs_msg.rtk_imu_linear_acc_x      = msg->linear_acceleration.x;
        vs_msg.rtk_imu_linear_acc_y      = msg->linear_acceleration.y;
        vs_msg.rtk_imu_linear_acc_z      = msg->linear_acceleration.z;
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

        sensor_msg.throttle_enabled    = msg->enabled;     // Enabled
        sensor_msg.throttle_override   = msg->override;    // Driver override
        sensor_msg.throttle_driver     = msg->driver;      // Driver activity
        sensor_msg.throttle_timeout    = msg->timeout;     // Command timeout
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

        sensor_msg.brake_enabled       = msg->enabled;
        sensor_msg.brake_override      = msg->override;    // Driver override
        sensor_msg.brake_driver        = msg->driver;      // Driver activity
        sensor_msg.brake_timeout       = msg->timeout;     // Command timeout
    };

    void MkzBywire::steerReptCB(const SteeringReport::SharedPtr msg){
        vs_msg.steer_state       = msg->steering_wheel_angle;
        vs_msg.steer_torque      = msg->steering_wheel_torque;
        vs_msg.steer_enabled     = msg->enabled;
        vs_msg.steer_override    = msg->override;
        vs_msg.steer_timeout     = msg->timeout;

        vs_msg.speed_x           = msg->speed; //vehicle speed from the steering report system

        sensor_msg.steer_enabled       = msg->enabled;
        sensor_msg.steer_override      = msg->override;
        sensor_msg.steer_timeout       = msg->timeout;
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

    void MkzBywire::safeGuardCB(const SafeGuardResults::SharedPtr msg){
        safe_guard_msg = * msg;
    }
}

RCLCPP_COMPONENTS_REGISTER_NODE(mkz_bywire::MkzBywire)