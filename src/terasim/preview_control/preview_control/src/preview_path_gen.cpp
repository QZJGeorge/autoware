#include <preview_path_gen.hpp>

namespace preview_path_gen{
    PreviewPathGen::PreviewPathGen(const rclcpp::NodeOptions & options)
    : Node("preview_path_gen", options){
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
            this, get_clock(), 100ms, std::bind(&PreviewPathGen::on_traj_timer, this));
        veh_timer_ = rclcpp::create_timer(
            this, get_clock(), 20ms, std::bind(&PreviewPathGen::on_veh_timer, this));

        //initialize path_msg
        path_msg.timestamp = this->get_clock()->now().seconds();
        path_msg.estop = 0;
        path_msg.go = true;
        path_msg.signal = 0;
        path_msg.acc_dd = 0.0;
        path_msg.slope = 0.0;
        path_msg.vmax = 8.0;
    }

    void PreviewPathGen::on_traj_timer(){
        cout << "on_traj_timer" << endl;
        if (!is_trajectory_received){
            return;
        } else{
            is_trajectory_received = false;
        }

        compute_curvature();
        compute_speed();
        compute_time();
        path_cutoff();
        upsampling();
        downsampling();
    }

    void PreviewPathGen::on_veh_timer(){
        cout << "on_veh_timer" << endl;
        if (!is_pose_received || !is_twist_received){
            return;
        } else{
            is_pose_received = false;
            is_twist_received = false;
        }
        
        int closest_point_idx = get_closest_index();
        if (closest_point_idx == -1){
            cout << "No closest point found" << endl;
            return;
        } else{
            cout << "The closest point index: " << closest_point_idx << endl;
        }

        path_msg.cr = cur_vec[closest_point_idx];
        path_msg.len = x_vec.size() - closest_point_idx;

        compute_lateral_and_heading_error(closest_point_idx);
        compute_desired_speed_and_acceleration(closest_point_idx);

        pub_path->publish(path_msg);
    }

    float PreviewPathGen::compute_heading(){
        float qx = pose_msg.pose.pose.orientation.x;
        float qy = pose_msg.pose.pose.orientation.y;
        float qz = pose_msg.pose.pose.orientation.z;
        float qw = pose_msg.pose.pose.orientation.w;

        // yaw (z-axis rotation)
        float siny_cosp = 2 * (qw * qz + qx * qy);
        float cosy_cosp = 1 - 2 * (qy * qy + qz * qz);
        float yaw = std::atan2(siny_cosp, cosy_cosp);

        std::cout << "The orientation of the vehicle: " << yaw << " radians" << std::endl;
        return yaw;
    }

    int PreviewPathGen::get_closest_index(){
        // Extract pose from PoseWithCovarianceStamped message
        float pose_x = pose_msg.pose.pose.position.x;
        float pose_y = pose_msg.pose.pose.position.y;

        int closest_point_idx = -1;
        float seg_distance;
        float min_distance = std::numeric_limits<float>::max();

        for (size_t idx = 1; idx < x_vec.size()-1; idx++) {
            // Calculate Euclidean distance
            seg_distance = std::sqrt(std::pow(x_vec[idx] - pose_x, 2) + std::pow(y_vec[idx] - pose_y, 2));

            // Check if this distance is smaller than current minimum 
            if (seg_distance < min_distance) {
                min_distance = seg_distance;
                closest_point_idx = idx;
            }
        }

        return closest_point_idx;
    }

    void PreviewPathGen::compute_lateral_and_heading_error(int closest_point_idx){
        // Extract pose from PoseWithCovarianceStamped message
        float pose_x = pose_msg.pose.pose.position.x;
        float pose_y = pose_msg.pose.pose.position.y;

        float x_pre = x_vec[closest_point_idx - 1];
        float y_pre = y_vec[closest_point_idx - 1];
        float x_post = x_vec[closest_point_idx + 1];
        float y_post = y_vec[closest_point_idx + 1];

        std::cout << "Previous point (x, y): (" << x_pre << ", " << y_pre << ")" << std::endl;
        std::cout << "Post point (x, y): (" << x_post << ", " << y_post << ")" << std::endl;

        // Calculate the angle (in radians)
        float gamma_rad = atan2(y_post - y_pre, x_post - x_pre);
        // Calculate vehicle heading
        float veh_heading = compute_heading();
        // Calculate the oreintation error
        path_msg.ephi = gamma_rad - veh_heading;

        std::cout << "trajectory point orientation " << gamma_rad << " radians" << std::endl;
        std::cout << "vehicle heading " << veh_heading << " radians" << std::endl;
        std::cout << "trajectory point orientation error: " << path_msg.ephi << " radians" << std::endl;

        // Compute the distance from the pose to the line
        float lateral_error = abs((y_post - y_pre) * pose_x - (x_post - x_pre) * pose_y + x_post*y_pre - y_post*x_pre) / sqrt(pow(y_post - y_pre, 2) + pow(x_post - x_pre, 2));
        // Calculate cross product 
        float cross_product = (x_post - x_pre) * (pose_y - y_pre) - (y_post - y_pre) * (pose_x - x_pre);
        // Determine if the pose is left or right of the line
        if (cross_product < 0) {
            // Negate lateral_error if pose is to the left of the line
            lateral_error = -lateral_error;
        }

        path_msg.ey = lateral_error;
        std::cout << "trajectory point lateral error: " << lateral_error << std::endl;
    }

    void PreviewPathGen::compute_desired_speed_and_acceleration(int closest_point_idx){
        float current_speed = twist_msg.twist.twist.linear.x;
        float desired_speed = speed_vec[closest_point_idx + 1];
        float desired_acceleration = (desired_speed - current_speed) / 0.04;

        if (desired_acceleration > 1.5) {
            desired_acceleration = 1.5;
        } else if (desired_acceleration < -1.5) {
            desired_acceleration = -1.5;
        }

        path_msg.vd = desired_speed;
        path_msg.acc_d = desired_acceleration;
    }

    void PreviewPathGen::compute_curvature(){
        for(size_t i = 1; i < x_vec.size() - 1; i++) {
            float dx = x_vec[i+1] - x_vec[i-1];
            float dy = y_vec[i+1] - y_vec[i-1];

            float ddx = (x_vec[i+1] - 2*x_vec[i] + x_vec[i-1]) / (dx*dx);
            float ddy = (y_vec[i+1] - 2*y_vec[i] + y_vec[i-1]) / (dx*dx);

            float curvature = 0;
            
            if (dx * dx + dy * dy > 0.000001)
            {
                curvature = std::abs(dx * ddy - dy * ddx) / std::pow(dx * dx + dy * dy, 1.5);
            }
            cur_vec.push_back(curvature);
        }

        if (!cur_vec.empty()){
            // let the first item be the same as the second item
            cur_vec.insert(cur_vec.begin(), cur_vec[0]);
        }
        if (cur_vec.size() >= 2){             
            // let the last item be the same as the second last item
            cur_vec.push_back(cur_vec[cur_vec.size()-2]);
        }
    }

    void PreviewPathGen::compute_speed(){
        for (size_t i = 0; i < speed_vec.size(); i++) {
            // Compute the new speed value based on curvature
            float newSpeed = speed_vec[i] * (1 - std::abs(cur_vec[i]) / 0.2);

            // If new speed is less than 2, assign it to 1.5
            speed_vec[i] = std::max(newSpeed, 1.5f);
        }
    }

    void PreviewPathGen::compute_time(){
        for (size_t i = 0; i < x_vec.size() - 1; i++) {
            // Calculate the distance to the next point
            float dx = x_vec[i+1] - x_vec[i];
            float dy = y_vec[i+1] - y_vec[i];
            float dist = std::sqrt(dx*dx + dy*dy);

            // Compute the time to the next point
            float time = dist / speed_vec[i];

            // Add to the time vector
            time_vec.push_back(time);
        }
    }

    void PreviewPathGen::path_cutoff(){
        float time_sum = 0.0;
        size_t cutoff_index = time_vec.size(); // set to max by default

        for (size_t i = 0; i < time_vec.size(); i++) {
            time_sum += time_vec[i];
            
            if (time_sum > 2.0) {
                cutoff_index = i;
                break;
            }
        }

        // Cut off the vectors
        if (cutoff_index < time_vec.size()) {
            time_vec.resize(cutoff_index);
            x_vec.resize(cutoff_index);
            y_vec.resize(cutoff_index);
            speed_vec.resize(cutoff_index);
        }
    }

    std::vector<float> PreviewPathGen::interpolateVec(const std::vector<float>& original_vec) {
        std::vector<float> new_vec;
        int num_insertions = 20;
    
        for (size_t i = 0; i < original_vec.size() - 1; i++) {
            for (int j = 0; j <= num_insertions; j++) {
                // linear interpolation formula
                float value = original_vec[i] + j * (original_vec[i+1] - original_vec[i]) / num_insertions;
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
        std::vector<float> downsampled_x_vec;
        std::vector<float> downsampled_y_vec;
        std::vector<float> downsampled_speed_vec;
        std::vector<float> downsampled_cur_vec;

        float accumulated_time = 0.0;

        for (size_t i = 0; i < x_vec.size() - 1; i++) {
            // Calculate the distance to the next point
            float dx = x_vec[i+1] - x_vec[i];
            float dy = y_vec[i+1] - y_vec[i];
            float dist = std::sqrt(dx * dx + dy * dy);

            // Compute the time to the next point
            accumulated_time += dist / speed_vec[i];
            
            if (accumulated_time >= 0.04) {
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
        x_vec = downsampled_x_vec;
        y_vec = downsampled_y_vec;
        speed_vec = downsampled_speed_vec;
        cur_vec = downsampled_cur_vec;
    }

    void PreviewPathGen::trajectory_callback(const Trajectory::SharedPtr msg){
        // Clear previous points
        x_vec.clear();
        y_vec.clear();

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