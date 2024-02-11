#include <preview_path.hpp>

namespace preview_path{
    PreviewPath::PreviewPath(const rclcpp::NodeOptions & options)
    : Node("preview_path", options){
        //register pub
        pub_path = this->create_publisher<PlannedPath>("/terasim/preview_path", 10);
    
        //register sub
        sub_trajectory = this->create_subscription<Trajectory>(
            "/planning/scenario_planning/trajectory", 10, std::bind(&PreviewPath::trajectory_callback, this, std::placeholders::_1));

        //register timer
        traj_timer_ = rclcpp::create_timer(
            this, get_clock(), 50ms, std::bind(&PreviewPath::on_traj_timer, this));
            
        init_path();
    }

    void PreviewPath::init_path(){
        path_msg.time_resolution = 0.1;
        path_msg.estop = 0;
        path_msg.go = 1;
    }

    void PreviewPath::on_traj_timer(){
        if (path_msg.x_vector.empty()){
            RCLCPP_WARN_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 2000, "Empty trajectory received, not processed");
            return;
        }

        path_msg.timestamp = this->get_clock()->now().seconds();
        pub_path->publish(path_msg);
    }

    void PreviewPath::trajectory_callback(const Trajectory::SharedPtr msg){
        std::vector<double> x_vector;
        std::vector<double> y_vector;
        std::vector<double> vd_vector;
        std::vector<double> ori_vector;

        // 500 * 0.1 meter = 50m max distance
        size_t maxNumPoints = 500;
        size_t numPointsToStore = std::min(maxNumPoints, msg->points.size());

        for(size_t i = 0; i < numPointsToStore; i++){
            auto point = msg->points[i];

            double qx = point.pose.orientation.x;
            double qy = point.pose.orientation.y;
            double qz = point.pose.orientation.z;
            double qw = point.pose.orientation.w;

            double siny_cosp = 2 * (qw * qz + qx * qy);
            double cosy_cosp = 1 - 2 * (qy * qy + qz * qz);
            double yaw = std::atan2(siny_cosp, cosy_cosp);

            x_vector.push_back(point.pose.position.x);
            y_vector.push_back(point.pose.position.y);
            vd_vector.push_back(point.longitudinal_velocity_mps);
            ori_vector.push_back(yaw);
        }

        path_msg.x_vector = x_vector;
        path_msg.y_vector = y_vector;
        path_msg.vd_vector = vd_vector;
        path_msg.ori_vector = ori_vector;
    }
}

RCLCPP_COMPONENTS_REGISTER_NODE(preview_path::PreviewPath)