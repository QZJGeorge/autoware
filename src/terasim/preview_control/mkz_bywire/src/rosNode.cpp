

#include "rosNode.h"
#include "XMath.h"
#include "UTM.h"



void ROSNode::ini()
{
    if (_nh==NULL)
        return;

    //register pub
    pub_throttle     = _nh->advertise<dbw_mkz_msgs_mtlvp::ThrottleCmd>("/vehicle/throttle_cmd", 2);
    pub_brake        = _nh->advertise<dbw_mkz_msgs_mtlvp::BrakeCmd>("/vehicle/brake_cmd", 2);        
    pub_steering     = _nh->advertise<dbw_mkz_msgs_mtlvp::SteeringCmd>("/vehicle/steering_cmd", 2);
    pub_gear         = _nh->advertise<dbw_mkz_msgs_mtlvp::GearCmd>("/vehicle/gear_cmd", 2);
    pub_turn_signal  = _nh->advertise<dbw_mkz_msgs_mtlvp::TurnSignalCmd>("/vehicle/turn_signal_cmd", 2);

    pub_veh_state    = _nh->advertise<mcity_msg::VehicleState>("/mkz_bywire_intf/vehState", 2);
    pub_sensor_check = _nh->advertise<mcity_msg::SensorCheck>("/mkz_bywire_intf/SensorCheck", 2);
    

    //register sub    
    sub_throttle_rept   = _nh->subscribe("/vehicle/throttle_report", 2, & ROSNode::throttleReptCB, this);
    sub_brake_rept      = _nh->subscribe("/vehicle/brake_report", 2, & ROSNode::brakeReptCB, this);
    sub_steer_rept      = _nh->subscribe("/vehicle/steering_report", 2, & ROSNode::steerReptCB, this);
    sub_gear_rept       = _nh->subscribe("/vehicle/gear_report", 2, & ROSNode::gearReptCB, this);
    sub_wheel_speed     = _nh->subscribe("/vehicle/wheel_speed_report", 2, & ROSNode::wheelspeedReptCB, this);

    sub_gps_fix         = _nh->subscribe("gps/fix", 2, & ROSNode::gpsFixCB, this);
    sub_gps_odom        = _nh->subscribe("gps/odom", 2, & ROSNode::gpsOdomCB, this);
    sub_imu             = _nh->subscribe("imu/data", 2, & ROSNode::imuCB, this);
    sub_gps_pos_type    = _nh->subscribe("gps/pos_type", 2, & ROSNode::gpsPosTypeCB, this);
    sub_gps_nav_state   = _nh->subscribe("gps/nav_status", 2, & ROSNode::gpsNavStateCB, this);

    pub_sys_enable      = _nh->subscribe("/vehicle/dbw_enabled", 2, & ROSNode::sysEnableCB, this);

    sub_cmd             = _nh->subscribe("/mkz_bywire_intf/control", 2, & ROSNode::cmdCB, this);
    sub_safe_guard      = _nh->subscribe("/SafeGuardCmd", 5, & ROSNode::safeGuardCB, this);


    //ini some msgs
    //throttle
    throttle_msg.count  = 0;        // Watchdog counter (optional)
    throttle_msg.enable = true;     // Enable
    throttle_msg.ignore = false;    // Ignore driver overrides
    throttle_msg.clear  = false;    // Clear driver overrides
    throttle_msg.pedal_cmd_type = dbw_mkz_msgs_mtlvp::ThrottleCmd::CMD_PEDAL;
    throttle_msg.pedal_cmd = 0.0f;

    //brake
    brake_msg.count   = 0;          // Watchdog counter (optional)
    brake_msg.enable  = true;       // Enable
    brake_msg.ignore  = false;      // Ignore driver overrides
    brake_msg.clear   = false;      // Clear driver overrides
    brake_msg.pedal_cmd_type = dbw_mkz_msgs_mtlvp::BrakeCmd::CMD_PEDAL;
    brake_msg.pedal_cmd = 0.235f;

    //steering
    steering_msg.count  = 0;        // Watchdog counter (optional)
    steering_msg.enable = true;
    steering_msg.ignore = false;    // Ignore driver overrides
    steering_msg.clear  = false;    // Ignore driver overrides
    steering_msg.quiet  = false;    // Disable the driver override audible warning
    steering_msg.steering_wheel_angle_cmd = 0.0f;
    steering_msg.steering_wheel_angle_velocity = 1.75 * M_PI;

    //gear
    gear_msg.cmd.gear = dbw_mkz_msgs_mtlvp::Gear::NONE;
    gear_msg.clear = false;         // Clear driver overrides

    //Turn signal
    turn_signal_msg.cmd.value = dbw_mkz_msgs_mtlvp::TurnSignal::NONE;
}


void ROSNode::publishCmd()
{
    if (_nh==NULL)
        return;

    if (vs_msg.by_wire_enabled != true)
        return;

    if (count++ > 9999999) //rosnode update count
        count = 0;

    //set brake boo
    if (cmd_in.brake > 0.01f)
        cmd_in.throttle = 0.0f;

    //pub gear ---------------
    gear_msg.cmd.gear = cmd_in.gear;
 

    if (gear_msg.cmd.gear == dbw_mkz_msgs_mtlvp::Gear::PARK    ||
        gear_msg.cmd.gear == dbw_mkz_msgs_mtlvp::Gear::REVERSE ||
        gear_msg.cmd.gear == dbw_mkz_msgs_mtlvp::Gear::NEUTRAL || 
        gear_msg.cmd.gear == dbw_mkz_msgs_mtlvp::Gear::DRIVE   ||
        gear_msg.cmd.gear == dbw_mkz_msgs_mtlvp::Gear::LOW )
    {

        if (gear_msg.cmd.gear    != vs_msg.gear_pos &&
            vs_msg.speed_x == 0.0f)
        {
            cmd_in.brake    = 0.28f;
            cmd_in.throttle = 0.0f;

            if (vs_msg.brake_state > 0.275f)
            {
                pub_gear.publish(gear_msg);
                ROS_WARN_THROTTLE(1, "Shift gear from %s to %s",
                    StateName::Gear_name(vs_msg.gear_pos).data(),
                    StateName::Gear_name(gear_msg.cmd.gear).data());
            }
        }
    }

    //pub throttle ---------------
    throttle_msg.pedal_cmd = cmd_in.throttle;
    pub_throttle.publish(throttle_msg);


    //pub brake ---------------
    brake_msg.pedal_cmd = cmd_in.brake;
    pub_brake.publish(brake_msg);


    //pub steering ---------------
    steering_msg.steering_wheel_angle_cmd = cmd_in.steering;
    pub_steering.publish(steering_msg);
 

    //pub turn signal ---------------
    turn_signal_msg.cmd.value = cmd_in.turn_signal;
    if (turn_signal_msg.cmd.value != dbw_mkz_msgs_mtlvp::TurnSignal::NONE)
        pub_turn_signal.publish(turn_signal_msg);


    //output
    ROS_INFO_THROTTLE(10, "Publised cmd: T%f B%f S%f Gear-%s TS-%s",
        throttle_msg.pedal_cmd,
        brake_msg.pedal_cmd,
        steering_msg.steering_wheel_angle_cmd,
        StateName::Gear_name(gear_msg.cmd.gear).data(),
        StateName::Turn_signal_name(turn_signal_msg.cmd.value).data() );
};



void ROSNode::publishVehState()
{
    if (ABS(vs_msg.RTK_gps_latitude) < 35 || ABS(vs_msg.RTK_gps_latitude) > 50  ||
        ABS(vs_msg.RTK_gps_longitude) < 78 || ABS(vs_msg.RTK_gps_longitude) > 88 )
        return;

    //acc
    vs_msg.acc_x = vs_msg.RTK_imu_linear_acc_x;
    vs_msg.acc_y = vs_msg.RTK_imu_linear_acc_y;
    vs_msg.acc_z = vs_msg.RTK_imu_linear_acc_z;

    //heading
    if (vs_msg.RTK_attitude < 0.2)
        vs_msg.heading  = XM::Normalise_2PI(vs_msg.RTK_heading);
    else
        vs_msg.heading  = XM::Normalise_2PI(M_PI-vs_msg.RTK_heading);

    vs_msg.heading = XM::Normalise_2PI(vs_msg.heading + 
                    adminSet.gps_angle_calib * M_PI/180.0f);
 
    //yaw rate1
    vs_msg.yaw_rate = vs_msg.RTK_gps_twist_angular_vz;

 
    //speed
    vs_msg.speed_y  = vs_msg.RTK_gps_twist_linear_vy; // not accurate
    vs_msg.speed_z  = vs_msg.RTK_gps_twist_linear_vz;


    //calibrate latitude and longitude
    double veh_x, veh_y, veh_x2, veh_y2, lat = 0, lon = 0, h=vs_msg.heading;
    UTM::LLtoUTM( vs_msg.RTK_gps_latitude,
                  vs_msg.RTK_gps_longitude, veh_y, veh_x);

    veh_x2 = veh_x + adminSet.correct_cg_x * cos(h) -adminSet.correct_cg_y * sin(h);
    veh_y2 = veh_y + adminSet.correct_cg_x * sin(h) +adminSet.correct_cg_y * cos(h);

    UTM::UTMtoLL(veh_y2, veh_x2, lat, lon);

    vs_msg.x = veh_x2;
    vs_msg.y = veh_y2;
    vs_msg.z = vs_msg.RTK_gps_altitude;
    vs_msg.RTK_gps_latitude = lat;
    vs_msg.RTK_gps_longitude = lon;
    

    //publish
    vs_msg.timestamp = ros::Time::now().toSec();
    pub_veh_state.publish(vs_msg);


    //print output
    //printf("33 %lf %lf\n", vs_msg.RTK_gps_latitude, vs_msg.RTK_gps_longitude );
    //printf("33 x%f y%f x%f y%f d%f\n", veh_x, veh_y, veh_x2, veh_y2, 
    //        SQR(veh_x-veh_x2) + SQR(veh_y-veh_y2));

    /*printf("veh heading%f yaw_rate%f speedx%f speedy%f speedz%f\n", 
        vs_msg.heading/M_PI*180,
        vs_msg.yaw_rate,
        vs_msg.speed_x,
        vs_msg.speed_y,
        vs_msg.speed_z);*/


    /*printf("veh long%f lat%f x%f y%f z%f\n", 
        vs_msg.RTK_gps_longitude,
        vs_msg.RTK_gps_latitude,
        vs_msg.x,
        vs_msg.y,
        vs_msg.z);*/


}


void ROSNode::publishSensorcheck()
{
    sensor_msg.timestamp = ros::Time::now().toSec();
    pub_sensor_check.publish(sensor_msg);
}



void ROSNode::sensorCheck()
{
    control_count ++;
    if (control_count > FREQ)
    {
        cmd_in.brake = MAX(0.23, cmd_in.brake);
        ROS_WARN_THROTTLE(1, "  =>Loss commands from control module, set brake to 0.23");
    }

    sensor_msg.RTK_keep_count++;
    sensor_msg.Mobileye_keep_count++;
    sensor_msg.Ibeo_points_keep_count++;
    sensor_msg.Ibeo_objects_keep_count++;
    sensor_msg.Velodyne_points_keep_count++;

    if (sensor_msg.RTK_keep_count > FREQ)
    {
        cmd_in.throttle = 0.0;
        ROS_WARN_THROTTLE(3, "  =>Loss GPS, set throttle to 0");
    }

}