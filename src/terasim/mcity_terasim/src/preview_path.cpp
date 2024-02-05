#include <preview_path.hpp>

namespace preview_path{
    PreviewPath::PreviewPath(const rclcpp::NodeOptions & options)
    : Node("preview_path", options){
        // declare parameters
        this->declare_parameter("max_vel", 8.333);
        this->declare_parameter("curvature_bound", 0.2);
        this->declare_parameter("delta_t", 0.04);
        this->declare_parameter("lookahead_time", 2.0);
        this->declare_parameter("heading_offset", 0.04);
        this->declare_parameter("lateral_offset", 0.3);
        this->declare_parameter("lookahead_points", 5);
        this->declare_parameter("trajectory_cutoff_size", 10);

        // get parameters
        this->get_parameter("max_vel", max_vel);
        this->get_parameter("curvature_bound", curvature_bound);
        this->get_parameter("delta_t", delta_t);
        this->get_parameter("lookahead_time", lookahead_time);
        this->get_parameter("heading_offset", heading_offset);
        this->get_parameter("lateral_offset", lateral_offset);
        this->get_parameter("lookahead_points", lookahead_points);
        this->get_parameter("trajectory_cutoff_size", trajectory_cutoff_size);
        
        //register pub
        pub_path = this->create_publisher<PlannedPath>("/terasim/preview_path", 10);

        //register sub
        sub_pose = this->create_subscription<PoseWithCovarianceStamped>(
            "/localization/pose_estimator/pose_with_covariance", 10, std::bind(&PreviewPath::pose_callback, this, std::placeholders::_1));
        sub_twist = this->create_subscription<TwistWithCovarianceStamped>(
            "/sensing/vehicle_velocity_converter/twist_with_covariance", 10, std::bind(&PreviewPath::twist_callback, this, std::placeholders::_1));
        sub_trajectory = this->create_subscription<Trajectory>(
            "/planning/scenario_planning/trajectory", 10, std::bind(&PreviewPath::trajectory_callback, this, std::placeholders::_1));
        sub_veh_state = this->create_subscription<VehicleState>(
            "/terasim/vehicle_state", 10, std::bind(&PreviewPath::vehStateCB, this, std::placeholders::_1));
        
        //register timer
        traj_timer_ = rclcpp::create_timer(
            this, get_clock(), 50ms, std::bind(&PreviewPath::on_traj_timer, this));
        veh_timer_ = rclcpp::create_timer(
            this, get_clock(), 20ms, std::bind(&PreviewPath::on_veh_timer, this));
            
        init_path();
    }

    void PreviewPath::init_path(){
        path_msg.timestamp = this->get_clock()->now().seconds();
        path_msg.estop = 0;
        path_msg.go = true;
        path_msg.signal = 0;
        path_msg.slope = 0.0;
        path_msg.vmax = max_vel;
    }

    void PreviewPath::on_traj_timer(){
        if (!is_trajectory_received){
            return;
        }
        if (x_vec.empty() || y_vec.empty()){
            RCLCPP_WARN_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Empty trajectory received, not processed");
            return;
        }
        if (x_vec.size() < trajectory_cutoff_size || x_vec.size() < trajectory_cutoff_size){
            RCLCPP_WARN_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Received trajectory too short, not processed");
            return;
        }

        compute_curvature();
        downsampling();

        is_trajectory_received = false;
    }

    void PreviewPath::on_veh_timer(){
        if (x_vec_preview.empty() || y_vec_preview.empty()){
            RCLCPP_WARN_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "No processed trajectory available, aborting...");
            return;
        }

        // each point spans 0.1 meters. Cutoff size 10 = 1 meter.
        if (x_vec_preview.size() < trajectory_cutoff_size || y_vec_preview.size() < trajectory_cutoff_size){
            RCLCPP_WARN_THROTTLE(rclcpp::get_logger("rclcpp"), *get_clock(), 1000, "Processed trajectory too short, aborting...");
            return;
        }

        int closest_point_idx = get_closest_index(x_vec_preview, y_vec_preview);
        if (closest_point_idx == -1){
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Cannot match vehicle position to processed trajectory point index");
            return;
        }

        // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "The curvature at the closest processed trajectory point is: %f", path_msg.cr);
        // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Steering wheel angle cmd: %f", steering_wheel_angle_cmd);

        uint8_t remaining_length = x_vec_preview.size() - closest_point_idx;

        // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "The remaining length of the processed trajectory is: %d", remaining_length);
        if (remaining_length < trajectory_cutoff_size){
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Remaining trajectory too short, aborting...");
            return;
        }

        // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "The speed at the closest processed trajectory point is: %f", path_msg.vd);

        path_msg.cr = cur_vec_preview[closest_point_idx];
        path_msg.cr_vector = cur_vec_preview;
        path_msg.vd = speed_vec_preview[closest_point_idx];
        path_msg.vd_vector = speed_vec_preview;
        path_msg.ephi = (float)compute_heading_error(closest_point_idx);
        path_msg.ey = (float)compute_lateral_error(closest_point_idx);
        path_msg.len = remaining_length;
        path_msg.timestamp = this->get_clock()->now().seconds();
        pub_path->publish(path_msg);
    }

    int PreviewPath::get_closest_index(std::vector<double> x_vec, std::vector<double> y_vec){
        // Extract pose from PoseWithCovarianceStamped message
        double pose_x = pose_msg.pose.pose.position.x;
        double pose_y = pose_msg.pose.pose.position.y;

        int closest_point_idx = -1;
        double seg_distance;
        double min_distance = std::numeric_limits<double>::max();

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

    double PreviewPath::compute_heading(double qx, double qy, double qz, double qw){
        // yaw (z-axis rotation)
        double siny_cosp = 2 * (qw * qz + qx * qy);
        double cosy_cosp = 1 - 2 * (qy * qy + qz * qz);
        double yaw = std::atan2(siny_cosp, cosy_cosp);

        return yaw;
    }

    double PreviewPath::compute_heading_error(int closest_point_idx){
        double qx = pose_msg.pose.pose.orientation.x;
        double qy = pose_msg.pose.pose.orientation.y;
        double qz = pose_msg.pose.pose.orientation.z;
        double qw = pose_msg.pose.pose.orientation.w;

        // Calculate vehicle heading
        double veh_heading = compute_heading(qx, qy, qz, qw) + heading_offset/180.0*M_PI;

        // read the heading of the closest point
        double traj_heading = heading_vec_preview[closest_point_idx];

        if (size_t(closest_point_idx + lookahead_points) < heading_vec_preview.size()){
            traj_heading = heading_vec_preview[closest_point_idx + lookahead_points];
        }

        // Calculate the angle between the vehicle heading and the trajectory heading
        double heading_error = traj_heading - veh_heading + heading_offset;

        //bound heading error between -pi and pi
        if (heading_error > M_PI) {
            heading_error -= 2 * M_PI;
        } else if (heading_error < -M_PI) {
            heading_error += 2 * M_PI;
        }

        // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Desired trajectory orientation: %f radians", traj_heading);
        // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Current vehicle heading: %f radians", veh_heading);

        if (path_msg.ephi < 0.5){
            // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Orientation error: %f radians", path_msg.ephi);
        } else{
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Orientation error too large: %f radians", path_msg.ephi);
        }

        return heading_error;
    }

    double PreviewPath::compute_lateral_error(int closest_point_idx){
        // Extract pose from PoseWithCovarianceStamped message
        double pose_x = pose_msg.pose.pose.position.x;
        double pose_y = pose_msg.pose.pose.position.y;

        double x_pre = x_vec_preview[closest_point_idx - 1];
        double y_pre = y_vec_preview[closest_point_idx - 1];
        double x_next = x_vec_preview[closest_point_idx + 1];
        double y_next = y_vec_preview[closest_point_idx + 1];

        // Compute the distance from the pose to the line
        double lateral_error = abs((y_next - y_pre) * pose_x - (x_next - x_pre) * pose_y + x_next*y_pre - y_next*x_pre) / sqrt(pow(y_next - y_pre, 2) + pow(x_next - x_pre, 2));
        // Calculate cross product 
        double cross_product = (x_next - x_pre) * (pose_y - y_pre) - (y_next - y_pre) * (pose_x - x_pre);
        // Determine if the pose is left or left of the line
        if (cross_product > 0) {
            // Negate lateral_error if pose is to the left of the line
            lateral_error = -lateral_error;
        }
        if (fabs(lateral_error) < 1.0){
            // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Lateral error: %f meters", lateral_error);
        } else{
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Lateral error too large: %f", lateral_error);
        }

        lateral_error += lateral_offset;

        return lateral_error;
    }

    double PreviewPath::findRadius(double x1, double y1, double x2, double y2, double x3, double y3) {
        auto distance = [](double x1, double y1, double x2, double y2) {
            return std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
        };

        double AB = distance(x1, y1, x2, y2);
        double BC = distance(x2, y2, x3, y3);
        double AC = distance(x1, y1, x3, y3);

        double radius = (AB * BC * AC) / std::sqrt((AB + BC + AC) * (-AB + BC + AC) * (AB - BC + AC) * (AB + BC - AC));

        // Determine winding using cross product
        double crossProduct = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
        if (crossProduct > 0) {
            return radius; // counterclockwise
        } else {
            return -radius; // clockwise
        }
    }

    void PreviewPath::compute_curvature(){
        cur_vec.clear();

        size_t gap = 5;
        if (x_vec.size() < gap){
            for (size_t i = 0; i < x_vec.size(); i++){
                cur_vec.push_back(0.0);
            }
            return;
        }

        for(size_t i = gap; i < x_vec.size() - gap; i++) {
            double radius = findRadius(x_vec[i-gap], y_vec[i-gap], x_vec[i], y_vec[i], x_vec[i+gap], y_vec[i+gap]);
            double curvature = 1/radius;

            if (curvature > curvature_bound) {
                RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Curvature too large (bounded to max): %f", curvature);
                curvature = curvature_bound;
            } else if (curvature < -curvature_bound) {
                RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Curvature too small (bounded to min): %f", curvature);
                curvature = -curvature_bound;
            }

            cur_vec.push_back(curvature);
        }

        // Record the first and last values
        int first_val = cur_vec[0];
        int last_val = cur_vec[cur_vec.size()-1];

        // Insert the first value k times at the beginning
        cur_vec.insert(cur_vec.begin(), gap, first_val);

        // Insert the last value k times at the end
        for (size_t i = 0; i < gap; i++) {
            cur_vec.push_back(last_val);
        }
    }

    void PreviewPath::downsampling(){
        std::vector<double> downsampled_x_vec;
        std::vector<double> downsampled_y_vec;
        std::vector<double> downsampled_speed_vec;
        std::vector<double> downsampled_cur_vec;
        std::vector<double> downsampled_heading_vec;

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
                downsampled_heading_vec.push_back(heading_vec[i]);

                // Reset accumulated time
                accumulated_time = 0.0;
            }

            // Break if we have enough points for preview
            if (i >= lookahead_time / delta_t){
                break;
            }
        }

        // assign the value of downsampled vectors to original vectors
        x_vec_preview = downsampled_x_vec;
        y_vec_preview = downsampled_y_vec;
        speed_vec_preview = downsampled_speed_vec;
        cur_vec_preview = downsampled_cur_vec;
        heading_vec_preview = downsampled_heading_vec;
    }

    void PreviewPath::trajectory_cutoff(){
        int closest_point_idx = get_closest_index(x_vec, y_vec);

        x_vec.erase(x_vec.begin(), x_vec.begin() + closest_point_idx-1);
        y_vec.erase(y_vec.begin(), y_vec.begin() + closest_point_idx-1);
        speed_vec.erase(speed_vec.begin(), speed_vec.begin() + closest_point_idx-1);
        heading_vec.erase(heading_vec.begin(), heading_vec.begin() + closest_point_idx-1);
    }

    void PreviewPath::trajectory_callback(const Trajectory::SharedPtr msg){
        // Clear previous points
        x_vec.clear();
        y_vec.clear();
        speed_vec.clear();
        heading_vec.clear();

        // Set the maximum amount of points as 200 (200 * 0.1meter = 20m max preview distance)
        size_t maxNumPoints = 200;
        size_t numPointsToStore = std::min(maxNumPoints, msg->points.size());

        for(size_t i = 0; i < numPointsToStore; i++)
        {
            auto point = msg->points[i];

            double qx = point.pose.orientation.x;
            double qy = point.pose.orientation.y;
            double qz = point.pose.orientation.z;
            double qw = point.pose.orientation.w;
            double heading = compute_heading(qx, qy, qz, qw);

            x_vec.push_back(point.pose.position.x);
            y_vec.push_back(point.pose.position.y);
            speed_vec.push_back(point.longitudinal_velocity_mps);
            heading_vec.push_back(heading);
        }

        // cut off trajectory behind the vehicle
        trajectory_cutoff();
        is_trajectory_received = true;
    }

    void PreviewPath::pose_callback(const PoseWithCovarianceStamped::SharedPtr msg){
        pose_msg = *msg;
    }

    void PreviewPath::twist_callback(const TwistWithCovarianceStamped::SharedPtr msg){
        twist_msg = *msg;
    }

    void PreviewPath::vehStateCB(const VehicleState::SharedPtr msg){
        steering_wheel_angle_cmd = msg->steer_state;
    }
}

RCLCPP_COMPONENTS_REGISTER_NODE(preview_path::PreviewPath)