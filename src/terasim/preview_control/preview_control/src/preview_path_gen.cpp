#include <preview_path_gen.hpp>

namespace preview_path_gen{
    PreviewPathGen::PreviewPathGen(const rclcpp::NodeOptions & options)
    : Node("preview_path_gen", options){
        // declare parameters
        this->declare_parameter("max_acc", 1.5);
        this->declare_parameter("max_vel", 8.0);
        this->declare_parameter("min_speed", 1.0);
        this->declare_parameter("max_curvature", 0.1);
        this->declare_parameter("curve_slow_factor", 1.5);
        this->declare_parameter("delta_t", 0.04);
        this->declare_parameter("lookahead_time", 2.0);

        // get parameters
        this->get_parameter("max_acc", max_acc);
        this->get_parameter("max_vel", max_vel);
        this->get_parameter("min_speed", min_speed);
        this->get_parameter("curve_slow_factor", curve_slow_factor);
        this->get_parameter("max_curvature", max_curvature);
        this->get_parameter("delta_t", delta_t);
        this->get_parameter("lookahead_time", lookahead_time);
        
        //register pub
        pub_path = this->create_publisher<PlannedPath>("/terasim/preview_path", 10);

        //register sub
        sub_trajectory = this->create_subscription<Trajectory>(
            "/planning/scenario_planning/lane_driving/trajectory", 10, std::bind(&PreviewPathGen::trajectory_callback, this, std::placeholders::_1));
        sub_twist = this->create_subscription<TwistWithCovarianceStamped>(
            "/sensing/vehicle_velocity_converter/twist_with_covariance", 10, std::bind(&PreviewPathGen::twist_callback, this, std::placeholders::_1));
        sub_pose = this->create_subscription<PoseWithCovarianceStamped>(
            "/localization/pose_estimator/pose_with_covariance", 10, std::bind(&PreviewPathGen::pose_callback, this, std::placeholders::_1));
        
        //register timer
        traj_timer_ = rclcpp::create_timer(
            this, get_clock(), 500ms, std::bind(&PreviewPathGen::on_traj_timer, this));
        veh_timer_ = rclcpp::create_timer(
            this, get_clock(), 20ms, std::bind(&PreviewPathGen::on_veh_timer, this));

        init_path();
    }

    void PreviewPathGen::init_path(){
        path_msg.timestamp = this->get_clock()->now().seconds();
        path_msg.estop = 0;
        path_msg.go = true;
        path_msg.signal = 0;
        path_msg.acc_dd = 0.0;
        path_msg.slope = 0.0;
        path_msg.vmax = max_vel;
    }

    void PreviewPathGen::on_traj_timer(){
        if (!is_trajectory_received){
            return;
        }
        if (x_vec.empty() || y_vec.empty()){
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Empty trajectory received, not processed");
            return;
        }
        if (x_vec.size() < 3 || x_vec.size() < 3){
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Received trajectory too short, not processed");
            return;
        }

        compute_curvature();
        compute_speed();
        compute_time();
        path_cutoff();
        upsampling();
        downsampling();

        is_trajectory_received = false;
    }

    void PreviewPathGen::on_veh_timer(){
        if (!is_pose_received || !is_twist_received){
            return;
        } else{
            is_pose_received = false;
            is_twist_received = false;
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Processing new vehicle information...");
        }
        
        if (x_vec_processed.empty() || y_vec_processed.empty()){
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "No processed trajectory available, aborting...");
            return;
        }

        if (x_vec_processed.size() < 3 || y_vec_processed.size() < 3){
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Processed trajectory too short, aborting...");
            return;
        }

        int closest_point_idx = get_closest_index();
        if (closest_point_idx == -1){
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Cannot match vehicle position to processed trajectory point index");
            return;
        } else{
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "The closest processed trajectory point index is: %d", closest_point_idx);
        }

        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "The curvature at the closest processed trajectory point is: %f", path_msg.cr);

        compute_lateral_and_heading_error(closest_point_idx);
        compute_desired_speed_and_acceleration();

        path_msg.cr = cur_vec_processed[closest_point_idx];
        path_msg.len = x_vec_processed.size() - closest_point_idx;
        path_msg.cr_vector = cur_vec_processed;
        path_msg.vd_vector = speed_vec_processed;
        path_msg.timestamp = this->get_clock()->now().seconds();

        pub_path->publish(path_msg);
    }

    int PreviewPathGen::get_closest_index(){
        // Extract pose from PoseWithCovarianceStamped message
        double pose_x = pose_msg.pose.pose.position.x;
        double pose_y = pose_msg.pose.pose.position.y;

        int closest_point_idx = -1;
        double seg_distance;
        double min_distance = std::numeric_limits<double>::max();

        for (size_t idx = 1; idx < x_vec_processed.size()-1; idx++) {
            // Calculate Euclidean distance
            seg_distance = std::sqrt(std::pow(x_vec_processed[idx] - pose_x, 2) + std::pow(y_vec_processed[idx] - pose_y, 2));

            // Check if this distance is smaller than current minimum 
            if (seg_distance < min_distance) {
                min_distance = seg_distance;
                closest_point_idx = idx;
            }
        }

        return closest_point_idx;
    }

    double PreviewPathGen::compute_heading(){
        double qx = pose_msg.pose.pose.orientation.x;
        double qy = pose_msg.pose.pose.orientation.y;
        double qz = pose_msg.pose.pose.orientation.z;
        double qw = pose_msg.pose.pose.orientation.w;

        // yaw (z-axis rotation)
        double siny_cosp = 2 * (qw * qz + qx * qy);
        double cosy_cosp = 1 - 2 * (qy * qy + qz * qz);
        double yaw = std::atan2(siny_cosp, cosy_cosp);

        return yaw;
    }

    void PreviewPathGen::compute_lateral_and_heading_error(int closest_point_idx){
        // Extract pose from PoseWithCovarianceStamped message
        double pose_x = pose_msg.pose.pose.position.x;
        double pose_y = pose_msg.pose.pose.position.y;

        double x_pre = x_vec_processed[closest_point_idx - 1];
        double y_pre = y_vec_processed[closest_point_idx - 1];
        double x_next = x_vec_processed[closest_point_idx + 1];
        double y_next = y_vec_processed[closest_point_idx + 1];

        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Previous point (x, y): (%f, %f)", x_pre, y_pre);
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Next point (x, y): (%f, %f)", x_next, y_next);
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Current vehicle position (x, y): (%f, %f)", pose_x, pose_y);

        // Calculate the angle (in radians)
        double traj_ori = atan2(y_next - y_pre, x_next - x_pre);
        // Calculate vehicle heading
        double veh_heading = compute_heading();
        // Calculate the orientation error
        path_msg.ephi = traj_ori - veh_heading;

        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Desired trajectory orientation: %f radians", traj_ori);
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Current vehicle heading: %f radians", veh_heading);

        if (path_msg.ephi < 1.0){
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Orientation error: %f radians", path_msg.ephi);
        } else{
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Orientation error too large: %f radians", path_msg.ephi);
        }

        // Compute the distance from the pose to the line
        double lateral_error = abs((y_next - y_pre) * pose_x - (x_next - x_pre) * pose_y + x_next*y_pre - y_next*x_pre) / sqrt(pow(y_next - y_pre, 2) + pow(x_next - x_pre, 2));
        // Calculate cross product 
        double cross_product = (x_next - x_pre) * (pose_y - y_pre) - (y_next - y_pre) * (pose_x - x_pre);
        // Determine if the pose is left or right of the line
        if (cross_product < 0) {
            // Negate lateral_error if pose is to the left of the line
            lateral_error = -lateral_error;
        }
        if (fabs(lateral_error) < 1.0){
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Lateral error: %f", lateral_error);
        } else{
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Lateral error too large: %f", lateral_error);
        }

        path_msg.ey = lateral_error;
    }

    void PreviewPathGen::compute_desired_speed_and_acceleration(){
        double current_speed = twist_msg.twist.twist.linear.x;
        double desired_speed = speed_vec_processed[speed_vec_processed.size()-1];
        double desired_acceleration = (desired_speed - current_speed) / lookahead_time;

        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Current speed: %f m/s", current_speed);
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Desired speed: %f m/s", desired_speed);

        if (desired_acceleration > max_acc) {
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Desired acceleration too large: %f bound to %f m/s^2", desired_acceleration, max_acc);
            desired_acceleration = max_acc;
        } else if (desired_acceleration < -max_acc) {
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Desired acceleration too small: %f bound to %f m/s^2", desired_acceleration, max_acc);
            desired_acceleration = -max_acc;
        } else{
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Desired acceleration: %f m/s^2", desired_acceleration);
        }

        path_msg.vd = desired_speed;
        path_msg.acc_d = desired_acceleration;
    }

    void PreviewPathGen::compute_curvature(){
        cur_vec.clear();

        for(size_t i = 1; i < x_vec.size() - 1; i++) {
            double dx = x_vec[i+1] - x_vec[i-1];
            double dy = y_vec[i+1] - y_vec[i-1];

            double ddx = x_vec[i+1] - 2*x_vec[i] + x_vec[i-1];
            double ddy = y_vec[i+1] - 2*y_vec[i] + y_vec[i-1];

            double curvature = 0;

            double denominator = std::pow(dx * dx + dy * dy, 1.5);
            if (denominator > 0.000001){
                curvature = std::abs(dx * ddy - dy * ddx) / denominator;
            }

            if (curvature > max_curvature) {
                curvature = max_curvature;
                RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Curvature too large: %f bound to %f", curvature, max_curvature);
            } else if (curvature < -max_curvature) {
                curvature = -max_curvature;
                RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Curvature too small: %f bound to %f", curvature, -max_curvature);
            }

            cur_vec.push_back(curvature);
        }

        // Add the first and last element of the curvature vector to the beginning and end
        cur_vec.insert(cur_vec.begin(), cur_vec[0]);
        cur_vec.push_back(cur_vec[cur_vec.size()-2]);
    }

    void PreviewPathGen::compute_speed(){
        for (size_t i = 0; i < speed_vec.size(); i++) {
            // Compute the new speed value based on curvature
            double newSpeed = speed_vec[i] * (1 - curve_slow_factor * std::abs(cur_vec[i]) / max_curvature);

            if (newSpeed < min_speed && speed_vec[i] > min_speed){
                newSpeed = min_speed;
                RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Computed speed too small: %f bound to 1.0", newSpeed);
            }
            speed_vec[i] = newSpeed;
        }
    }

    void PreviewPathGen::compute_time(){
        time_vec.clear();

        for (size_t i = 0; i < x_vec.size() - 1; i++) {
            // Calculate the distance to the next point
            double dx = x_vec[i+1] - x_vec[i];
            double dy = y_vec[i+1] - y_vec[i];
            double dist = std::sqrt(dx*dx + dy*dy);

            // Compute the time to the next point
            double time = dist / speed_vec[i];

            // Add to the time vector
            time_vec.push_back(time);
        }

        // reach end point
        time_vec.push_back(0.0);
    }

    void PreviewPathGen::path_cutoff(){
        double time_sum = 0.0;
        size_t cutoff_index = time_vec.size(); // set to max by default

        for (size_t i = 0; i < time_vec.size(); i++) {
            time_sum += time_vec[i];
            
            if (time_sum > lookahead_time) {
                cutoff_index = i;
                break;
            }
        }

        // Cut off path info beyond our lookahead time
        if (cutoff_index < time_vec.size()) {
            x_vec.resize(cutoff_index);
            y_vec.resize(cutoff_index);
            speed_vec.resize(cutoff_index);
            time_vec.resize(cutoff_index);
        }
    }

    std::vector<double> PreviewPathGen::interpolateVec(const std::vector<double>& original_vec) {
        std::vector<double> new_vec;
        int num_insertions = 20;
    
        for (size_t i = 0; i < original_vec.size() - 1; i++) {
            for (int j = 0; j <= num_insertions; j++) {
                // linear interpolation formula
                double value = original_vec[i] + j * (original_vec[i+1] - original_vec[i]) / num_insertions;
                new_vec.push_back(value);
            }
        }
        // add the last element of original_vec
        new_vec.push_back(original_vec.back());
    
        return new_vec;
    }

    void PreviewPathGen::upsampling(){
        x_vec = interpolateVec(x_vec);
        y_vec = interpolateVec(y_vec);
        speed_vec = interpolateVec(speed_vec);
        cur_vec = interpolateVec(cur_vec);
    }

    void PreviewPathGen::downsampling(){
        std::vector<double> downsampled_x_vec;
        std::vector<double> downsampled_y_vec;
        std::vector<double> downsampled_speed_vec;
        std::vector<double> downsampled_cur_vec;

        double accumulated_time = 0.0;

        for (size_t i = 0; i < x_vec.size() - 1; i++) {
            // Calculate the distance to the next point
            double dx = x_vec[i+1] - x_vec[i];
            double dy = y_vec[i+1] - y_vec[i];
            double dist = std::sqrt(dx * dx + dy * dy);

            // Compute the time to the next point
            accumulated_time += dist / speed_vec[i];
            
            if (accumulated_time >= delta_t) {
                // This point should be included in the downsampled vectors
                downsampled_x_vec.push_back(x_vec[i]);
                downsampled_y_vec.push_back(y_vec[i]);
                downsampled_speed_vec.push_back(speed_vec[i]);
                downsampled_cur_vec.push_back(cur_vec[i]);

                // Reset accumulated time
                accumulated_time = 0.0;
            }
        }

        // assign the value of downsampled vectors to original vectors
        x_vec_processed = downsampled_x_vec;
        y_vec_processed = downsampled_y_vec;
        speed_vec_processed = downsampled_speed_vec;
        cur_vec_processed = downsampled_cur_vec;
    }

    void PreviewPathGen::trajectory_callback(const Trajectory::SharedPtr msg){
        // Clear previous points
        x_vec.clear();
        y_vec.clear();
        speed_vec.clear();

        // Set the maximum amount of points as 50
        size_t maxNumPoints = 50;
        size_t numPointsToStore = std::min(maxNumPoints, msg->points.size());

        for(size_t i = 0; i < numPointsToStore; i++)
        {
            // Extract position from pose and put it in the vectors
            x_vec.push_back(msg->points[i].pose.position.x);
            y_vec.push_back(msg->points[i].pose.position.y);
            speed_vec.push_back(msg->points[i].longitudinal_velocity_mps);
        }

        is_trajectory_received = true;
    }

    void PreviewPathGen::pose_callback(const PoseWithCovarianceStamped::SharedPtr msg){
        pose_msg = *msg;
        is_pose_received = true;
    }

    void PreviewPathGen::twist_callback(const TwistWithCovarianceStamped::SharedPtr msg){
        twist_msg = *msg;
        is_twist_received = true;
    }
}

RCLCPP_COMPONENTS_REGISTER_NODE(preview_path_gen::PreviewPathGen)