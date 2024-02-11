#include <preview_control.hpp>

namespace preview_control{
    PreviewControl::PreviewControl(const rclcpp::NodeOptions & options)
    : Node("preview_control", options){
        this->declare_parameter("gain_folder", "/home/mtl12345/autoware/src/terasim/preview_control/data/gain/withdelay/");
        this->declare_parameter("max_ey", 0.0);
        this->declare_parameter("max_ephi", 0.0);
        this->declare_parameter("max_curvature", 0.0);
        this->declare_parameter("speed_ctrl_kp", 0.0);
        this->declare_parameter("speed_ctrl_ki", 0.0);
        this->declare_parameter("heading_offset", 0.0);
        this->declare_parameter("heading_lookahead_points", 0);
        this->declare_parameter("lateral_offset", 0.0);
        this->declare_parameter("preview_time", 0.0);
        this->declare_parameter("desired_time_resolution", 0.0);
        this->declare_parameter("autonomous_start_protection_time", 0.0);
        this->declare_parameter("trajectory_abort_size", 0);

        this->get_parameter("gain_folder", gainfolder);
        this->get_parameter("max_ey", max_ey);
        this->get_parameter("max_ephi", max_ephi);
        this->get_parameter("max_curvature", max_curvature);
        this->get_parameter("speed_ctrl_kp", speed_ctrl_kp);
        this->get_parameter("speed_ctrl_ki", speed_ctrl_ki);
        this->get_parameter("heading_offset", heading_offset);
        this->get_parameter("heading_lookahead_points", heading_lookahead_points);
        this->get_parameter("lateral_offset", lateral_offset);
        this->get_parameter("preview_time", preview_time);
        this->get_parameter("desired_time_resolution", desired_time_resolution);
        this->get_parameter("autonomous_start_protection_time", autonomous_start_protection_time);
        this->get_parameter("trajectory_abort_size", trajectory_abort_size);

        //register pub
        pub_cmd2bywire = this->create_publisher<Control>("/terasim/vehicle_control", 10);

        //register sub
        sub_pose = this->create_subscription<PoseWithCovarianceStamped>(
            "/localization/pose_estimator/pose_with_covariance", 10, std::bind(&PreviewControl::pose_callback, this, std::placeholders::_1));
        sub_path = this->create_subscription<PlannedPath>(
            "/terasim/preview_path", 10, std::bind(&PreviewControl::pathCB, this, std::placeholders::_1));
        sub_veh_state = this->create_subscription<VehicleState>(
            "/terasim/vehicle_state", 10, std::bind(&PreviewControl::vehStateCB, this, std::placeholders::_1));

        //register timer
        timer_ = rclcpp::create_timer(
            this, get_clock(), 20ms, std::bind(&PreviewControl::on_timer, this));

        init();
    }

    void PreviewControl::init(){
        _p2c = &p2c;
        _vs = &vs;
        _ctrl = &ctrl;

        pathProcess.init(_p2c, _vs, max_ey, max_curvature, max_ephi, heading_offset, heading_lookahead_points, lateral_offset);
        pathFollow.init(_p2c, _vs, _ctrl, gainfolder, max_ey, max_ephi);
        speedCtrl.ini(_p2c, _vs, _ctrl, speed_ctrl_kp, speed_ctrl_ki, FREQ);
    }

    void PreviewControl::publishCmd(){
        cmd_msg.timestamp = this->get_clock()->now().seconds();
        cmd_msg.brake_cmd       = _ctrl->brake;
        cmd_msg.throttle_cmd    = _ctrl->throttle;
        cmd_msg.steering_cmd    = _ctrl->steering;
        cmd_msg.gear_cmd        = _ctrl->gear;
        cmd_msg.turn_signal_cmd = _ctrl->turn_signal;

        pub_cmd2bywire->publish(cmd_msg);
    };

    void PreviewControl::on_timer(){
        // step 1: check whether to stop
        if(p2c.go == 0){
            speedCtrl.set_stop();
            RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Decision go = 0, set stop");
            return;
        }

        if (this->get_clock()->now().seconds() - p2c.timestamp > 1.0){
            speedCtrl.set_stop();
            RCLCPP_INFO_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "NOT able to recv decision result, set stop");
            return; 
        }

        if (static_cast<int>(_p2c->x_vector.size()) < trajectory_abort_size) {
            speedCtrl.set_stop();
            RCLCPP_WARN_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Received trajectory too short, set stop");
            return;
        }

        // step 2: compute preview control required input
        pathProcess.run();

        // step 3: check in path or not, and path tracking
        pathFollow.run();

        // step 4: speed control
        speedCtrl.run();

        // step 5: custom rules to overwrite preview control for smooth start and stop
        custom_rules();

        // step 6: publish commands
        publishCmd();
    }

    void PreviewControl::custom_rules(){
        auto it = std::find(_p2c->vd_vector.begin(), _p2c->vd_vector.end(), 0.0f);

        int stop_index;
        if (it != _p2c->vd_vector.end()){
            stop_index = std::distance (_p2c->vd_vector.begin(), it);
        }else{
            stop_index = -1;
        }

        // if there is a stop ahead in 2 seconds
        if (stop_index <= 50){
            if (_vs->speed_x <= 0.5){
                _ctrl->throttle = 0.0;
                _ctrl->brake = 0.23;
            } else{
                _ctrl->brake = _ctrl->brake;
            }
        }

        // there is no stop in 2 seconds
        else{
            // if vehicle is in low speed, refresh protection time countdown.
            if ((_vs->speed_x <= 0.25)){
                autonomous_smooth_time_start = this->get_clock()->now().seconds();
            }

            double time_elapsed = this->get_clock()->now().seconds() - autonomous_smooth_time_start;

            if (time_elapsed <= autonomous_start_protection_time){
                // there is no stop in 5 seconds, slowly increase throttle
                if (stop_index == -1){
                    _ctrl->brake = 0.0;
                    _ctrl->throttle = min(0.05 + 0.05 * time_elapsed, double( _ctrl->throttle));
                    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "protection time elapsed %f", time_elapsed);
                    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "throttle command %f", _ctrl->throttle);
                }
                // there is a stop in 5 seconds, slowly move forward for 3 seconds
                else{
                    _ctrl->brake = 0.0;
                    _ctrl->throttle = min(0.05, double( _ctrl->throttle));
                    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "protection time elapsed %f", time_elapsed);
                    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "throttle command %f", _ctrl->throttle);
                }
            }
        }
    }

    void PreviewControl::pose_callback(const PoseWithCovarianceStamped::SharedPtr msg){
        _vs->pos_x = msg->pose.pose.position.x;
        _vs->pos_y = msg->pose.pose.position.y;
        _vs->pos_z = msg->pose.pose.position.z;

        _vs->qx = msg->pose.pose.orientation.x;
        _vs->qy = msg->pose.pose.orientation.y;
        _vs->qz = msg->pose.pose.orientation.z;
        _vs->qw = msg->pose.pose.orientation.w;
    }

    void PreviewControl::vehStateCB(const VehicleState::SharedPtr msg){
        if (_vs == NULL) return;

        _vs->timestamp               = msg->timestamp;
        _vs->yawRate                 = msg->yaw_rate;
        _vs->speed_x                 = msg->speed_x;
        _vs->by_wire_enabled         = msg->by_wire_enabled;
        _vs->steering_wheel_angle    = msg->steer_state;
        _vs->wheelAngle              = msg->steer_state/STEERING_RATIO; //not steering wheel, front wheel    
        _vs->brake_pedal_output      = msg->brake_state;
        _vs->throttle_pedal_output   = msg->throttle_state;
        _vs->gear_position           = msg->gear_pos;
    }

    void PreviewControl::pathCB(const PlannedPath::SharedPtr msg){
        if (_p2c == NULL) return;
        
        _p2c->timestamp = msg->timestamp;
        _p2c->time_resolution = msg->time_resolution;
        _p2c->estop = msg->estop;
        _p2c->go = msg->go;

        _p2c->x_vector.clear();
        for (auto i = 0; i < int(msg->x_vector.size()); ++i)
            _p2c->x_vector.push_back(msg->x_vector.at(i));

        _p2c->y_vector.clear();
        for (auto i = 0; i < int(msg->y_vector.size()); ++i)
            _p2c->y_vector.push_back(msg->y_vector.at(i));

        _p2c->vd_vector.clear();
        for (auto i = 0; i < int(msg->vd_vector.size()); ++i)
            _p2c->vd_vector.push_back(msg->vd_vector.at(i));

        _p2c->slope_vector.clear();
        for (auto i = 0; i < int(msg->slope_vector.size()); ++i)
            _p2c->slope_vector.push_back(msg->slope_vector.at(i));

        pathProcess.process_path(desired_time_resolution, preview_time);
    }
}

RCLCPP_COMPONENTS_REGISTER_NODE(preview_control::PreviewControl)

