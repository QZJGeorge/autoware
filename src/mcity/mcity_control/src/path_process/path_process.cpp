#include <path_process.hpp>

void pathProcessing::init(
    Plan_Rlt_S * const planning2control_msg,
    VehState_S * const vehicle_state, 
    double max_allowed_ey_,
    double max_allowed_ephi_,
    double max_allowed_curvature_,
    double heading_offset_,
    int heading_lookahead_points_,
    double lateral_offset_,
    string slope_folder){

    _p2c = planning2control_msg;
    _vs = vehicle_state;

    max_allowed_ey = max_allowed_ey_;
    max_allowed_ephi = max_allowed_ephi_;
    max_allowed_curvature = max_allowed_curvature_;
    heading_offset = heading_offset_;
    heading_lookahead_points = heading_lookahead_points_;
    lateral_offset = lateral_offset_;

    load_slope(slope_folder);
}

void pathProcessing::load_slope(string slope_folder){
    std::ifstream file(slope_folder);
    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            std::istringstream iss(line);
            char dummy1, dummy2, dummy3; // To ignore the characters '(', ')' and ','
            int x, y;
            double slope;
            if (!(iss >> dummy1 >> x >> dummy2 >> y >> dummy3 >> dummy3 >> slope)) {
                std::cerr << "Error parsing line: " << line << std::endl;
                continue; // Skip malformed lines
            }
            // Store the data
            slope_data[std::make_pair(x, y)] = slope;
        }
        RCLCPP_INFO(rclcpp::get_logger("path_process"), "Suceessfully loaded slope data.");
        file.close();
    } else {
        RCLCPP_ERROR(rclcpp::get_logger("path_process"), "Unable to open slope data file");
    }
}

void pathProcessing::process_path(double desired_time_resolution, double preview_time){
    // upsampling(desired_time_resolution);
    downsampling(preview_time, desired_time_resolution);
}

void pathProcessing::run(){
    int size = int(_p2c->x_vector.size());
    int closest_index = get_closest_index();

    _p2c->vd = get_desired_velocity(closest_index);
    _p2c->ephi = get_orientation_error(closest_index);
    _p2c->ey = get_lateral_error(closest_index);
    _p2c->slope = get_slope(closest_index);

    RCLCPP_INFO(rclcpp::get_logger("path_process"), "remaining length %d", size);
    RCLCPP_INFO(rclcpp::get_logger("path_process"), "index %d", closest_index);
    RCLCPP_INFO(rclcpp::get_logger("path_process"), "vd %f", _p2c->vd);
    RCLCPP_INFO(rclcpp::get_logger("path_process"), "vc %f", _vs->speed_x);
    RCLCPP_INFO(rclcpp::get_logger("path_process"), "ephi %f", _p2c->ephi);
    RCLCPP_INFO(rclcpp::get_logger("path_process"), "ey %f", _p2c->ey);
    // RCLCPP_INFO(rclcpp::get_logger("path_process"), "slope %f ", _p2c->slope);
}

int pathProcessing::get_closest_index(){
    int closest_index = -1;

    double distance;
    double min_distance = std::numeric_limits<double>::max();

    for (size_t idx = 1; idx < _p2c->x_vector.size()-1; idx++) {
        // Calculate Euclidean distance
        distance = std::sqrt(
            std::pow(_p2c->x_vector[idx] - _vs->pos_x, 2)
            + std::pow(_p2c->y_vector[idx] - _vs->pos_y, 2)
        );

        // Check if this distance is smaller than current minimum 
        if (distance < min_distance) {
            min_distance = distance;
            closest_index = idx;
        }
    }

    return closest_index;
}

void pathProcessing::upsampling(double desired_time_resolution){
    // mupltiply by 2 to make sure the upsampled vectors have accurate info
    double upsample_factor = _p2c->time_resolution / desired_time_resolution * 2;
    // for now use a simple value
    upsample_factor = 50.0;

    std::vector<float> upsampled_x_vec;
    std::vector<float> upsampled_y_vec;
    std::vector<float> upsampled_vd_vec;
    std::vector<float> upsampled_ori_vec;

    for (size_t i = 0; i < _p2c->x_vector.size() - 1; ++i) {
        double delta_x = (_p2c->x_vector[i + 1] - _p2c->x_vector[i]) / upsample_factor;
        double delta_y = (_p2c->y_vector[i + 1] - _p2c->y_vector[i]) / upsample_factor;
        double delta_vd = (_p2c->vd_vector[i + 1] - _p2c->vd_vector[i]) / upsample_factor;
        double delta_ori = (_p2c->ori_vector[i + 1] - _p2c->ori_vector[i]) / upsample_factor;

        for (int j = 0; j < int(upsample_factor); ++j) {
            double interpolated_x_value = _p2c->x_vector[i] + delta_x * j;
            double interpolated_y_value = _p2c->y_vector[i] + delta_y * j;
            double interpolated_vd_value = _p2c->vd_vector[i] + delta_vd * j;
            double interpolated_ori_value = _p2c->ori_vector[i] + delta_ori * j;

            upsampled_x_vec.push_back(interpolated_x_value);
            upsampled_y_vec.push_back(interpolated_y_value);
            upsampled_vd_vec.push_back(interpolated_vd_value);
            upsampled_ori_vec.push_back(interpolated_ori_value);
        }
    }

    _p2c->x_vector = upsampled_x_vec;
    _p2c->y_vector = upsampled_y_vec;
    _p2c->vd_vector = upsampled_vd_vec;
    _p2c->ori_vector = upsampled_ori_vec;
}

void pathProcessing::downsampling(double preview_time, double desired_time_resolution){
    std::vector<float> downsampled_x_vec;
    std::vector<float> downsampled_y_vec;
    std::vector<float> downsampled_vd_vec;
    std::vector<float> downsampled_ori_vec;

    double accumulated_time = 0.0;

    for (size_t i = 0; i < _p2c->x_vector.size() - 1; i++) {
        // Calculate the distance to the next point
        double dx = _p2c->x_vector[i+1] - _p2c->x_vector[i];
        double dy = _p2c->y_vector[i+1] - _p2c->y_vector[i];
        double dist = std::sqrt(dx * dx + dy * dy);

        float vd = max(1.5, (double)_p2c->vd_vector[i]);
        accumulated_time += dist / vd;
        
        if (accumulated_time >= desired_time_resolution) {
            // This point should be included in the downsampled vectors
            downsampled_x_vec.push_back(_p2c->x_vector[i]);
            downsampled_y_vec.push_back(_p2c->y_vector[i]);
            downsampled_vd_vec.push_back(_p2c->vd_vector[i]);
            downsampled_ori_vec.push_back(_p2c->ori_vector[i]);

            // Reset accumulated time
            accumulated_time = 0.0;
        }

        // Break if we have enough points for preview
        if ((int)downsampled_x_vec.size() >= preview_time / desired_time_resolution){
            break;
        }
    }

    // assign the value of downsampled vectors to l vectors
    _p2c->x_vector = downsampled_x_vec;
    _p2c->y_vector = downsampled_y_vec;
    _p2c->vd_vector = downsampled_vd_vec;
    _p2c->ori_vector = downsampled_ori_vec;
}

double pathProcessing::get_desired_velocity(int closest_index){
    // adaptively update desired velocity based on the curernt velocity
    double current_velocity = _vs->speed_x;
    double desired_velocity = _p2c->vd_vector[closest_index];

    // the vehicle is slowing down and will stop very soon
    if (current_velocity <= 0.05 && _p2c->vd_vector.back() <= 0.5){
        return 0.0;
    }

    if (current_velocity >= desired_velocity && desired_velocity <= 2.0){
        // find a velocity from future velocities that is close to the current velocity
        double min_difference = std::numeric_limits<double>::max();

        for (size_t i = closest_index; i < _p2c->vd_vector.size(); i++){
            double difference = abs(current_velocity + 0.1 - _p2c->vd_vector[i]);
            if (difference < min_difference){
                min_difference = difference;
                desired_velocity = _p2c->vd_vector[i];
            }
        }
    }

    return desired_velocity;
}

double pathProcessing::get_orientation_error(int closest_index){
    // Calculate vehicle heading
    double roll, pitch, yaw;
    XM::quaternion_to_euler(_vs->qx, _vs->qy, _vs->qz, _vs->qw, roll, pitch, yaw);

    // read the heading of the closest point
    double traj_heading = _p2c->ori_vector[closest_index];

    if (size_t(closest_index + heading_lookahead_points) < _p2c->ori_vector.size()){
        traj_heading = _p2c->ori_vector[closest_index + heading_lookahead_points];
    }

    // Calculate the angle between the vehicle heading and the trajectory heading
    double orientation_error = traj_heading - (yaw + heading_offset);

    //bound heading error between -pi and pi
    if (orientation_error > M_PI) {
        orientation_error -= 2 * M_PI;
    } else if (orientation_error < -M_PI) {
        orientation_error += 2 * M_PI;
    }

    if (orientation_error > max_allowed_ephi){
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Orientation error too large: %f radians", orientation_error);
    }

    return orientation_error;
}

double pathProcessing::get_lateral_error(int closest_index){
    double x_pre = _p2c->x_vector[closest_index - 1];
    double y_pre = _p2c->y_vector[closest_index - 1];
    double x_next = _p2c->x_vector[closest_index + 1];
    double y_next = _p2c->y_vector[closest_index + 1];

    // Compute the distance from the pose to the line
    double lateral_error = abs((y_next - y_pre) * _vs->pos_x - (x_next - x_pre) * _vs->pos_y + x_next * y_pre - y_next * x_pre) / 
        sqrt(pow(y_next - y_pre, 2) + pow(x_next - x_pre, 2));

    // Calculate cross product 
    double cross_product = (x_next - x_pre) * (_vs->pos_y - y_pre) - (y_next - y_pre) * (_vs->pos_x - x_pre);
    // Determine if the pose is left or left of the line
    if (cross_product > 0) {
        // Negate lateral_error if pose is to the left of the line
        lateral_error = -lateral_error;
    }
    lateral_error += lateral_offset;
    
    if (fabs(lateral_error) > max_allowed_ey){
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Lateral error too large: %f", lateral_error);
    }

    return lateral_error;
}

double pathProcessing::get_slope(int closest_index){
    // double x = _p2c->x_vector[closest_index];
    // double y = _p2c->y_vector[closest_index];

    // std::pair<int, int> closest_point;
    // double min_distance = std::numeric_limits<double>::max();
    // double closest_slope = 0.0;

    // for (const auto& item : slope_data) {
    //     // Calculate the distance between (x, y) and the current point in the map
    //     double distance = std::sqrt(std::pow(item.first.first - x, 2) + std::pow(item.first.second - y, 2));

    //     // Check if this point is the closest one so far
    //     if (distance < min_distance) {
    //         min_distance = distance;
    //         closest_point = item.first;
    //         closest_slope = item.second;
    //     }
    // }

    // // Check if the closest point is within 5 meters
    // if (min_distance <= 3.0) {
    //     return closest_slope;
    // } else {
    //     RCLCPP_WARN(rclcpp::get_logger("path_process"), "No close enough slope data found for the given coordinates.");
    //     return 0.0;
    // }
    return 0.0;
}