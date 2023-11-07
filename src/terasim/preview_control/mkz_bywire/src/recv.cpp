

#include "rosNode.h"
#include "dataModel.h"
#include <math.h>


 
void Quaternion2Euler(double qx, double qy, double qz, double qw, 
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



void ROSNode::cmdCB(const mcity_msg::Control::ConstPtr& msg)
{
    control_count       = 0;

    cmd_in.timestamp    = msg->timestamp;
    cmd_in.throttle     = msg->throttle_cmd;
    cmd_in.brake        = msg->brake_cmd;
    cmd_in.steering     = msg->steering_cmd;
    cmd_in.gear         = msg->gear_cmd;
    cmd_in.turn_signal  = msg->turn_signal_cmd;
};




void ROSNode::gpsPosTypeCB(const std_msgs::String::ConstPtr& msg)
{
    postype = msg->data;
    //printf("%s\n", postype);
}


void ROSNode::gpsNavStateCB(const std_msgs::String::ConstPtr& msg)
{
    vs_msg.RTK_state_string = msg->data +"--"+ postype;
    //printf("%s\n", msg->data);
}




void ROSNode::gpsFixCB(const sensor_msgs::NavSatFix::ConstPtr& msg)
{

    vs_msg.RTK_seq_num        = msg->header.seq;
    vs_msg.RTK_timestamp_sec  = msg->header.stamp.sec;
    vs_msg.RTK_timestamp_nsec = msg->header.stamp.nsec;
    vs_msg.RTK_gps_status     = msg->status.status;
    vs_msg.RTK_gps_service    = msg->status.service;

    vs_msg.RTK_gps_longitude  = msg->longitude;
    vs_msg.RTK_gps_latitude   = msg->latitude;
    vs_msg.RTK_gps_altitude   = msg->altitude;

    sensor_msg.RTK_keep_count       = 0;
    sensor_msg.RTK_timestamp_sec    = msg->header.stamp.sec;
    sensor_msg.RTK_timestamp_nsec   = msg->header.stamp.nsec;
    sensor_msg.RTK_seq_num          = msg->header.seq;
    sensor_msg.RTK_gps_status       = msg->status.status;
    sensor_msg.RTK_gps_service      = msg->status.service;

    /*printf("num%ld sec%ld nsec%ld state%d serv%d long%f lat%f alt%f\n", 
        vs_msg.RTK_seq_num,
        vs_msg.RTK_timestamp_sec,
        vs_msg.RTK_timestamp_nsec,
        vs_msg.RTK_gps_status,
        vs_msg.RTK_gps_service,
        vs_msg.RTK_gps_longitude,
        vs_msg.RTK_gps_latitude,
        vs_msg.RTK_gps_altitude);*/

}


void ROSNode::gpsVelCB(const geometry_msgs::TwistWithCovarianceStamped::ConstPtr& msg)
{
    vs_msg.RTK_linear_ENU_vx = msg->twist.twist.linear.x;
    vs_msg.RTK_linear_ENU_vy = msg->twist.twist.linear.y;
    vs_msg.RTK_linear_ENU_vz = msg->twist.twist.linear.z;
}


void ROSNode::gpsOdomCB(const nav_msgs::Odometry::ConstPtr& msg)
{
    vs_msg.RTK_gps_UTM_x = msg->pose.pose.position.x;
    vs_msg.RTK_gps_UTM_y = msg->pose.pose.position.y;
    vs_msg.RTK_gps_UTM_z = msg->pose.pose.position.z; 

    vs_msg.RTK_imu_quaternion_x = msg->pose.pose.orientation.x;
    vs_msg.RTK_imu_quaternion_y = msg->pose.pose.orientation.y;
    vs_msg.RTK_imu_quaternion_z = msg->pose.pose.orientation.z;
    vs_msg.RTK_imu_quaternion_w = msg->pose.pose.orientation.w;

    //cal heading
    Quaternion2Euler(
        msg->pose.pose.orientation.x,
        msg->pose.pose.orientation.y,
        msg->pose.pose.orientation.z,
        msg->pose.pose.orientation.w,
        & vs_msg.RTK_attitude, 
        & vs_msg.RTK_heading,
        & vs_msg.RTK_bank);


    vs_msg.RTK_gps_twist_linear_vx   = msg->twist.twist.linear.x; // RTK_GPS velocity in local frame
    vs_msg.RTK_gps_twist_linear_vy   = msg->twist.twist.linear.y;
    vs_msg.RTK_gps_twist_linear_vz   = msg->twist.twist.linear.z;

    vs_msg.RTK_gps_twist_angular_vx  = msg->twist.twist.angular.x;
    vs_msg.RTK_gps_twist_angular_vy  = msg->twist.twist.angular.y;
    vs_msg.RTK_gps_twist_angular_vz  = msg->twist.twist.angular.z;

    /*printf("UTM x%f y%f z%f heading%f attitude%f bank%f\n",
        vs_msg.RTK_gps_UTM_x,
        vs_msg.RTK_gps_UTM_y,
        vs_msg.RTK_gps_UTM_z,
        vs_msg.RTK_heading /M_PI*180,
        vs_msg.RTK_attitude/M_PI*180,
        vs_msg.RTK_bank    /M_PI*180);*/

    /*printf("Twist linearspeed x%f y%f z%f angularspeed vx%f vy%f vz%f\n",
        vs_msg.RTK_gps_twist_linear_vx,
        vs_msg.RTK_gps_twist_linear_vy,
        vs_msg.RTK_gps_twist_linear_vz,
        vs_msg.RTK_gps_twist_angular_vx,
        vs_msg.RTK_gps_twist_angular_vy,
        vs_msg.RTK_gps_twist_angular_vz);*/

}




void ROSNode::imuCB(const sensor_msgs::Imu::ConstPtr& msg)
{
    vs_msg.RTK_imu_linear_acc_x      = msg->linear_acceleration.x;
    vs_msg.RTK_imu_linear_acc_y      = msg->linear_acceleration.y;
    vs_msg.RTK_imu_linear_acc_z      = msg->linear_acceleration.z;

    /*printf("acc x%f y%f z%f\n",
        vs_msg.RTK_imu_linear_acc_x,
        vs_msg.RTK_imu_linear_acc_y,
        vs_msg.RTK_imu_linear_acc_z);*/
}

void ROSNode::sysEnableCB(const std_msgs::Bool::ConstPtr& msg)
{
    vs_msg.by_wire_enabled = msg->data;
}

void ROSNode::throttleReptCB(const dbw_mkz_msgs_mtlvp::ThrottleReport::ConstPtr& msg)
{
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
 
};



void ROSNode::brakeReptCB(const dbw_mkz_msgs_mtlvp::BrakeReport::ConstPtr& msg)
{
    vs_msg.brake_cmd         = msg->pedal_cmd;
    vs_msg.brake_input       = msg->pedal_input;
    vs_msg.brake_state       = msg->pedal_output;

    vs_msg.brake_torq_cmd    = msg->torque_cmd;
    vs_msg.brake_torq_input  = msg->torque_input;
    vs_msg.brake_torq_state  = msg->torque_output;

    //vs_msg.brake_boo_output  = msg->boo_output;
    vs_msg.brake_enabled     = msg->enabled;
    vs_msg.brake_override    = msg->override;    // Driver override
    vs_msg.brake_driver      = msg->driver;      // Driver activity
    vs_msg.brake_timeout     = msg->timeout;     // Command timeout

    sensor_msg.brake_enabled       = msg->enabled;
    sensor_msg.brake_override      = msg->override;    // Driver override
    sensor_msg.brake_driver        = msg->driver;      // Driver activity
    sensor_msg.brake_timeout       = msg->timeout;     // Command timeout
};



void ROSNode::steerReptCB(const dbw_mkz_msgs_mtlvp::SteeringReport::ConstPtr& msg)
{
    //vs_msg.steer_cmd         = msg->steering_wheel_cmd;
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



void ROSNode::gearReptCB(const dbw_mkz_msgs_mtlvp::GearReport::ConstPtr& msg)
{
    vs_msg.gear_pos =  msg->state.gear;
};



void ROSNode::wheelspeedReptCB(const dbw_mkz_msgs_mtlvp::WheelSpeedReport::ConstPtr& msg)
{
    vs_msg.wheel_v_front_left    = msg->front_left;
    vs_msg.wheel_v_front_right   = msg->front_right;
    vs_msg.wheel_v_rear_left     = msg->rear_left;
    vs_msg.wheel_v_rear_right    = msg->rear_right;
};


void ROSNode::safeGuardCB(const mcity_msg::SafeGuardResults::ConstPtr& msg)
{
    safe_guard_msg = * msg;
}