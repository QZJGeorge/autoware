#include <path_process.hpp>

void pathProcessing::init(
    Plan_Rlt_S * const planning2control_msg,
    VehState_S * const vehicle_state, 
    double max_allowed_ey_,
    double max_allowed_ephi_,
    double max_allowed_curvature_,
    double heading_offset_,
    int heading_lookahead_points_,
    int vel_lookahead_points_,
    double lateral_offset_){

    _p2c = planning2control_msg;
    _vs = vehicle_state;

    max_allowed_ey = max_allowed_ey_;
    max_allowed_ephi = max_allowed_ephi_;
    max_allowed_curvature = max_allowed_curvature_;
    heading_offset = heading_offset_;
    heading_lookahead_points = heading_lookahead_points_;
    vel_lookahead_points = vel_lookahead_points_;
    lateral_offset = lateral_offset_;
}

void pathProcessing::process_path(double desired_time_resolution, double preview_time){
    compute_curvature();
    upsampling(desired_time_resolution);
    downsampling(preview_time, desired_time_resolution);
}

void pathProcessing::run(){
    int closest_index = get_closest_index();

    _p2c->vd = get_desired_velocity(closest_index);
    _p2c->ephi = get_orientation_error(closest_index);
    _p2c->ey = get_lateral_error(closest_index);

    int size = int(_p2c->x_vector.size());
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "remaining preview path %d", size);

    // int size = _p2c->x_vector.size();
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "first x %f", _p2c->x_vector[0]);
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "first y %f", _p2c->y_vector[0]);
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "last x %f", _p2c->x_vector[size-1]);
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "last y %f", _p2c->y_vector[size-1]);

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "index %d", closest_index);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "vd %f", _p2c->vd);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "cr %f", _p2c->cr);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ephi %f", _p2c->ephi);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ey %f", _p2c->ey);
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

void pathProcessing::compute_curvature(){
    _p2c->cr_vector.clear();

    size_t gap = 5;
    if (_p2c->x_vector.size() < gap){
        for (size_t i = 0; i < _p2c->x_vector.size(); i++){
            _p2c->cr_vector.push_back(0.0);
        }
        return;
    }

    for(size_t i = gap; i < _p2c->x_vector.size() - gap; i++) {
        double radius = XM::get_radius(
            _p2c->x_vector[i-gap], 
            _p2c->y_vector[i-gap], 
            _p2c->x_vector[i], 
            _p2c->y_vector[i], 
            _p2c->x_vector[i+gap], 
            _p2c->y_vector[i+gap]
        );

        double curvature = 1/radius;

        if (curvature > -0.04 && curvature < 0.04) {
            curvature = 0.0;
        } 

        if (curvature > max_allowed_curvature) {
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Curvature too large (bounded to max): %f", curvature);
            curvature = max_allowed_curvature;
        } else if (curvature < -max_allowed_curvature) {
            RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Curvature too small (bounded to min): %f", curvature);
            curvature = -max_allowed_curvature;
        }

        // _p2c->cr_vector.push_back(curvature);
        // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Curvature %f", curvature);
        _p2c->cr_vector.push_back(0.0);
    }

    // // Record the first and last values
    int first_val = _p2c->cr_vector[0];
    int last_val = _p2c->cr_vector[_p2c->cr_vector.size()-1];

    // Insert the first value k times at the beginning
    _p2c->cr_vector.insert(_p2c->cr_vector.begin(), gap, first_val);

    // Insert the last value k times at the end
    for (size_t i = 0; i < gap; i++) {
        _p2c->cr_vector.push_back(last_val);
    }
}

void pathProcessing::upsampling(double desired_time_resolution){
    // mupltiply by 2 to make sure the upsampled vectors have accurate info
    double upsample_factor = _p2c->time_resolution / desired_time_resolution * 2;
    // for now use a simple value
    upsample_factor = 50.0;

    std::vector<float> upsampled_x_vec;
    std::vector<float> upsampled_y_vec;
    std::vector<float> upsampled_vd_vec;
    std::vector<float> upsampled_cr_vec;
    std::vector<float> upsampled_ori_vec;

    for (size_t i = 0; i < _p2c->x_vector.size() - 1; ++i) {
        double delta_x = (_p2c->x_vector[i + 1] - _p2c->x_vector[i]) / upsample_factor;
        double delta_y = (_p2c->y_vector[i + 1] - _p2c->y_vector[i]) / upsample_factor;
        double delta_vd = (_p2c->vd_vector[i + 1] - _p2c->vd_vector[i]) / upsample_factor;
        double delta_cr = (_p2c->cr_vector[i + 1] - _p2c->cr_vector[i]) / upsample_factor;
        double delta_ori = (_p2c->ori_vector[i + 1] - _p2c->ori_vector[i]) / upsample_factor;

        for (int j = 0; j < int(upsample_factor); ++j) {
            double interpolated_x_value = _p2c->x_vector[i] + delta_x * j;
            double interpolated_y_value = _p2c->y_vector[i] + delta_y * j;
            double interpolated_vd_value = _p2c->vd_vector[i] + delta_vd * j;
            double interpolated_cr_value = _p2c->cr_vector[i] + delta_cr * j;
            double interpolated_ori_value = _p2c->ori_vector[i] + delta_ori * j;

            upsampled_x_vec.push_back(interpolated_x_value);
            upsampled_y_vec.push_back(interpolated_y_value);
            upsampled_vd_vec.push_back(interpolated_vd_value);
            upsampled_cr_vec.push_back(interpolated_cr_value);
            upsampled_ori_vec.push_back(interpolated_ori_value);
        }
    }

    _p2c->x_vector = upsampled_x_vec;
    _p2c->y_vector = upsampled_y_vec;
    _p2c->vd_vector = upsampled_vd_vec;
    _p2c->cr_vector = upsampled_cr_vec;
    _p2c->ori_vector = upsampled_ori_vec;
}

void pathProcessing::downsampling(double preview_time, double desired_time_resolution){
    std::vector<float> downsampled_x_vec;
    std::vector<float> downsampled_y_vec;
    std::vector<float> downsampled_vd_vec;
    std::vector<float> downsampled_cr_vec;
    std::vector<float> downsampled_ori_vec;

    double accumulated_time = 0.0;

    for (size_t i = 0; i < _p2c->x_vector.size() - 1; i++) {
        // Calculate the distance to the next point
        double dx = _p2c->x_vector[i+1] - _p2c->x_vector[i];
        double dy = _p2c->y_vector[i+1] - _p2c->y_vector[i];
        double dist = std::sqrt(dx * dx + dy * dy);

        float vd = max(1.5, (double)_p2c->vd_vector[i]);

        // Compute the time to the next point
        // accumulated_time += dist / _p2c->vd_vector[i];

        accumulated_time += dist / vd;
        
        if (accumulated_time >= desired_time_resolution) {
            // This point should be included in the downsampled vectors
            downsampled_x_vec.push_back(_p2c->x_vector[i]);
            downsampled_y_vec.push_back(_p2c->y_vector[i]);
            downsampled_vd_vec.push_back(_p2c->vd_vector[i]);
            downsampled_cr_vec.push_back(_p2c->cr_vector[i]);
            downsampled_ori_vec.push_back(_p2c->ori_vector[i]);

            // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "pusback index %d", (int)i);
            // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "x %f", _p2c->x_vector[i]);
            // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "y %f", _p2c->y_vector[i]);
            // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "vd %f", _p2c->vd_vector[i]);

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
    _p2c->cr_vector = downsampled_cr_vec;
    _p2c->ori_vector = downsampled_ori_vec;
}

double pathProcessing::get_desired_velocity(int closest_index){
    // read the heading of the closest point
    double desired_velocity = _p2c->vd_vector[closest_index];

    if (size_t(closest_index + vel_lookahead_points) < _p2c->ori_vector.size()){
        desired_velocity = _p2c->ori_vector[closest_index + vel_lookahead_points];
    }

    return desired_velocity;
}

double pathProcessing::get_orientation_error(int closest_index){
    // Calculate vehicle heading
    double roll, pitch, yaw;
    XM::quaternion_to_euler(_vs->qx, _vs->qy, _vs->qz, _vs->qw, roll, pitch, yaw);

    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "roll_ori: %f", roll_ori);
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "pitch_ori: %f", pitch_ori);
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "yaw_ori: %f", yaw_ori);

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

    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Desired trajectory orientation: %f radians", traj_heading);
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Current vehicle heading: %f radians", veh_heading);
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Orientation error: %f radians", path_msg.ephi);

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