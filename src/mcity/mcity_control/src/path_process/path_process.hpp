#ifndef PATH_PROCESSING_HPP
#define PATH_PROCESSING_HPP

#include <iostream>
#include <algorithm>
#include <math.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <sx.hpp>
#include <xmath.hpp>
#include <rclcpp/rclcpp.hpp>

using namespace std;

class pathProcessing
{

public:
    pathProcessing(){};
    ~pathProcessing(){};

    void init(
        Plan_Rlt_S * const planning2control_msg,
        VehState_S * const vehicle_state,
        double max_allowed_ey_, 
        double max_allowed_ephi_,
        double max_allowed_curvature_,
        double heading_offset_,
        int heading_lookahead_points_,
        double lateral_offset_
    );

    void run();
    void process_path(double desired_time_resolution, double preview_time);

private:
    void compute_curvature();
    void upsampling(double desired_time_resolution);
    void downsampling(double preview_time, double desired_time_resolution);

    int get_closest_index();

    double get_desired_velocity(int closest_index);
    double get_orientation_error(int closest_index);
    double get_lateral_error(int closest_index);

    Plan_Rlt_S * _p2c  = NULL;
    VehState_S * _vs   = NULL;

    double max_allowed_ey;
    double max_allowed_ephi;
    double max_allowed_curvature;
    double heading_offset;
    int heading_lookahead_points;
    int values;
    double lateral_offset;
};

#endif // PATHFOLLOWING_HPP