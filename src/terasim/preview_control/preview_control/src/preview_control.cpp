#include <preview_control.hpp>

namespace preview_control{
    PreviewControl::PreviewControl(const rclcpp::NodeOptions & options)
    : Node("preview_control", options)
    {
        this->declare_parameter("gain_folder", "/home/zhijie/autoware/src/terasim/preview_control/data/gain/withoutdelay/");
        this->declare_parameter("max_ey", 1.5);
        this->declare_parameter("max_ephi", 45.0);
        this->declare_parameter("speed_ctrl_kp", 1.3);
        this->declare_parameter("speed_ctrl_ki", 0.5);

        this->get_parameter("gain_folder", gainfolder);
        this->get_parameter("max_ey", max_ey);
        this->get_parameter("max_ephi", max_ephi);
        this->get_parameter("speed_ctrl_kp", speed_ctrl_kp);
        this->get_parameter("speed_ctrl_ki", speed_ctrl_ki);

        _p2c = &p2c;
        _vs = &vs;
        _ctrl = &ctrl;

        pathFollow.init(_p2c, _vs, _ctrl, gainfolder, max_ey, max_ephi);
        speedCtrl.ini(_p2c, _vs, _ctrl, speed_ctrl_kp, speed_ctrl_ki, FREQ);

        //register pub
        pub_cmd2bywire = this->create_publisher<Control>("/terasim/vehicle_control", 10);
        //register sub
        sub_path = this->create_subscription<PlannedPath>(
            "/terasim/preview_path", 10, std::bind(&PreviewControl::pathCB, this, std::placeholders::_1));
        sub_veh_state = this->create_subscription<VehicleState>(
            "/terasim/vehicle_state", 10, std::bind(&PreviewControl::vehStateCB, this, std::placeholders::_1));

        timer_ = rclcpp::create_timer(
            this, get_clock(), 20ms, std::bind(&PreviewControl::on_timer, this));
    }

    void PreviewControl::publishCmd()
    {            
        if(count > 9999999){
            count = 0;
        }

        cmd_msg.timestamp = this->get_clock()->now().seconds();
        cmd_msg.count           = count;
        cmd_msg.brake_cmd       = _ctrl->brake;
        cmd_msg.throttle_cmd    = _ctrl->throttle;
        cmd_msg.steering_cmd    = _ctrl->steering;
        cmd_msg.gear_cmd        = _ctrl->gear;
        cmd_msg.turn_signal_cmd = _ctrl->turn_signal;

        pub_cmd2bywire->publish(cmd_msg);
    };

    void PreviewControl::on_timer()
    {   
        //step 1: ini
        auto t0 = clock();
        count+=1;
        
        //step 2: check in path or not, and path tracking
        pathFollow.run();

        // step 3: speed control
        speedCtrl.run();

        // step 4: check stop/go
        if(p2c.go == 0)
        {
            speedCtrl.set_stop();
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Decision go = 0, set stop");
        }

        // step 5: check recv state
        if (this->get_clock()->now().seconds() - p2c.timestamp > 0.5)
        {
            speedCtrl.set_stop();
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "NOT able to recv decision result, set stop");    
        }

        // step 6: publish commands
        publishCmd();

        //step 7: computing time
        auto t1 = clock();    
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Main loop %ld used %g CPU seconds", count, (t1 - t0) / (double)CLOCKS_PER_SEC);
    }

    void PreviewControl::vehStateCB(const VehicleState::SharedPtr msg)
    {
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

    void PreviewControl::pathCB(const PlannedPath::SharedPtr msg)
    {
        if (_p2c == NULL) return;
        
        _p2c->timestamp =msg->timestamp;
        _p2c->estop =msg->estop;
        _p2c->go =msg->go;
        _p2c->signal =msg->signal;

        _p2c->vd =msg->vd;
        _p2c->acc_d =msg->acc_d;
        _p2c->acc_dd =msg->acc_dd;
        _p2c->slope =msg->slope;
        _p2c->vmax =msg->vmax;

        _p2c->ey =msg->ey;
        _p2c->ephi =msg->ephi;
        _p2c->len =msg->len;
        _p2c->cr =msg->cr;

        _p2c->x =msg->x;
        _p2c->y =msg->y;

        _p2c->cr_vector.clear();
        for (auto i = 0; i < int(msg->cr_vector.size()); ++i)
            _p2c->cr_vector.push_back(msg->cr_vector.at(i));

        _p2c->vd_vector.clear();
        for (auto i = 0; i < int(msg->vd_vector.size()); ++i)
            _p2c->vd_vector.push_back(msg->vd_vector.at(i));

        _p2c->slope_vector.clear();
        for (auto i = 0; i < int(msg->slope_vector.size()); ++i)
            _p2c->slope_vector.push_back(msg->slope_vector.at(i));

        _p2c->x_vector.clear();
        for (auto i = 0; i < int(msg->x_vector.size()); ++i)
            _p2c->x_vector.push_back(msg->x_vector.at(i));

        _p2c->y_vector.clear();
        for (auto i = 0; i < int(msg->y_vector.size()); ++i)
            _p2c->y_vector.push_back(msg->y_vector.at(i)); 
    }
}

RCLCPP_COMPONENTS_REGISTER_NODE(preview_control::PreviewControl)

