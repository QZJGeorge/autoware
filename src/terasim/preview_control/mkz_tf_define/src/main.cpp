

#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <mcity_msg/VehicleState.h>

//#include <delphi_esr_msgs/EsrVehicle1.h>
//#include <delphi_esr_msgs/EsrVehicle2.h>
//#include <delphi_esr_msgs/EsrVehicle3.h>
//#include <delphi_esr_msgs/EsrVehicle4.h>
//#include <delphi_esr_msgs/EsrVehicle5.h>

#include <geometry_msgs/TwistStamped.h>



//recv
mcity_msg::VehicleState vehStateMsg;
 
void vehStateCB(const mcity_msg::VehicleState::ConstPtr& msg)
{
    vehStateMsg = * msg;
}


//pub
//delphi_esr_msgs::EsrVehicle1 msg1;
//delphi_esr_msgs::EsrVehicle2 msg2;
//delphi_esr_msgs::EsrVehicle3 msg3;
//delphi_esr_msgs::EsrVehicle4 msg4;
//delphi_esr_msgs::EsrVehicle5 msg5;
//geometry_msgs::TwistStamped msg_twist;


/*
void setEsrIn()
{
    //vehi1 
    msg1.vehicle_speed          = vehStateMsg.speed_x;
    msg1.speed_direction        = true;
    msg1.yaw_rate               = vehStateMsg.yaw_rate;
    msg1.yaw_rate_valid         = true;
    msg1.radius_curvature       = 0;
    msg1.steering_angle_valid   = true;

    if (vehStateMsg.steer_state >= 0)
        msg1.steering_angle_sign = true;
    else
        msg1.steering_angle_sign = false;

    msg1.steering_angle = std::abs(msg1.steering_angle_sign); 
    msg1.steering_angle_rate  = 0;
    msg1.steering_angle_rate_sign = true;


    //vehi 2
    msg2.scan_index_ack             = 0;
    msg2.use_angle_misalignment     = false;
    msg2.clear_faults               = false;
    msg2.high_yaw_angle             = 0;
    msg2.mr_only_transmit           = false;
    msg2.lr_only_transmit           = false;
    msg2.angle_misalignment         = 0.0f;
    msg2.lateral_mounting_offset    = 0.0f;
    msg2.radar_cmd_radiate          = false;
    msg2.blockage_disable           = false;
    msg2.maximum_tracks             = 64;
    msg2.turn_signal_status         = 0;
    msg2.vehicle_speed_valid        = true;
    msg2.mmr_upside_down            = false;
    msg2.grouping_mode              = 0;
    msg2.wiper_status               = false;
    msg2.raw_data_enabled           = true;


    //vehi 3
    msg3.long_accel_valid           = true;
    msg3.lat_accel_valid            = true;
    msg3.lat_accel                  = vehStateMsg.acc_x;
    msg3.long_accel                 = vehStateMsg.acc_y;
    msg3.radar_fov_lr               = 0;
    msg3.radar_fov_mr               = 255;
    msg3.auto_align_disable         = true;
    msg3.radar_height               = 1;
    msg3.serv_align_type            = false;
    msg3.serv_align_enable          = false;
    msg3.align_avg_ctr_total        = 0;
    msg3.auto_align_converged       = true;
    msg3.wheel_slip                 = 0;
    msg3.serv_align_updates_need    = 0;
    msg3.angle_mounting_offset      = 0;

    //vehi 4
    msg4.fac_align_cmd_1            = false;
    msg4.fac_align_cmd_2            = false;
    msg4.fac_align_max_nt           = 255;
    msg4.fac_align_samp_req         = 0;
    msg4.fac_tgt_mtg_offset         = 0;
    msg4.fac_tgt_mtg_space_hor      = 0;
    msg4.fac_tgt_mtg_space_ver      = 0;
    msg4.fac_tgt_range_1            = 200;
    msg4.fac_tgt_range_r2m          = 1;
    msg4.fac_tgt_range_m2t          = 1;


    //vehi 5
    msg5.oversteer_understeer       = 0;
    msg5.yaw_rate_bias_shift        = false;
    msg5.beamwidth_vert             = 0;
    msg5.funnel_offset_left         = 0;
    msg5.funnel_offset_right        = 0;
    msg5.cw_blockage_threshold      = 0;
    msg5.distance_rear_axle         = 4;
    msg5.wheel_base                 = 3;
    msg5.steering_gear_ratio        = 16;

    //vehi 5
    msg_twist.twist.linear.x = vehStateMsg.RTK_gps_twist_linear_vx;
    msg_twist.twist.linear.y = vehStateMsg.RTK_gps_twist_linear_vy;
    msg_twist.twist.linear.z = vehStateMsg.RTK_gps_twist_linear_vz;

    msg_twist.twist.angular.x = vehStateMsg.RTK_gps_twist_angular_vx;
    msg_twist.twist.angular.x = vehStateMsg.RTK_gps_twist_angular_vy;
    msg_twist.twist.angular.x = vehStateMsg.RTK_gps_twist_angular_vz;
}
*/





//tf
tf::Quaternion q;
tf::Transform tf_earth_2_mkz;
tf::Transform tf_mkz_2_viz;
tf::Transform tf_mkz_2_ibeo;
tf::Transform tf_mkz_2_velodyne;
tf::Transform tf_mkz_2_mobileye;
tf::Transform tf_mkz_2_esr;
tf::Transform tf_mkz_2_srr_front_l;
tf::Transform tf_mkz_2_srr_front_r;
tf::Transform tf_mkz_2_srr_rear_l;
tf::Transform tf_mkz_2_srr_rear_r;

void setTf()
{
    //earth-->mkz
    q.setRPY(0, 0, vehStateMsg.heading);
    tf_earth_2_mkz.setRotation(q);
    tf_earth_2_mkz.setOrigin( tf::Vector3(vehStateMsg.x, vehStateMsg.y, 0.0f) );

    //mkz-->viz
    q.setRPY(0, 0, 0);
    tf_mkz_2_viz.setRotation(q);
    tf_mkz_2_viz.setOrigin( tf::Vector3(2.15f, 0.0f, 1.25f) );

    //mkz-->ibeo
    //q.setRPY(0, 0, 0);
    //tf_mkz_2_ibeo.setRotation(q);
    //tf_mkz_2_ibeo.setOrigin( tf::Vector3(0.0f, 0.0f, 0.0f) );

    //mkz-->velodyne
    q.setRPY(0, 0, 0);
    tf_mkz_2_velodyne.setRotation(q);
    tf_mkz_2_velodyne.setOrigin( tf::Vector3(1.7f, 0.0f, 1.8f) );

    //mkz-->mobileye
    q.setRPY(0, 0, 0);
    tf_mkz_2_mobileye.setRotation(q);
    tf_mkz_2_mobileye.setOrigin( tf::Vector3(2.15f, 0.0f, 1.25f) );

    /*
    //mkz-->esr
    q.setRPY(0, 0, 0);
    tf_mkz_2_esr.setRotation(q);
    tf_mkz_2_esr.setOrigin( tf::Vector3(3.9f, 0.0f, 0.56f) );


    //mkz-->srr_front_l
    q.setRPY(0, 0, 1.05f);
    tf_mkz_2_srr_front_l.setRotation(q);
    tf_mkz_2_srr_front_l.setOrigin( tf::Vector3(3.29f, 1.0f, 0.56f) );

    //mkz-->srr_front_r
    q.setRPY(3.1415926, 0, 5.2f);
    tf_mkz_2_srr_front_r.setRotation(q);
    tf_mkz_2_srr_front_r.setOrigin( tf::Vector3(3.29f, -1.0f, 0.56f) );

    //mkz-->srr_rear_l
    q.setRPY(3.1415926f, 0, 2.25f);
    tf_mkz_2_srr_rear_l.setRotation(q);
    tf_mkz_2_srr_rear_l.setOrigin( tf::Vector3(-0.85f, 0.96f, 0.57f) );

    //mkz-->srr_rear_r
    q.setRPY(0, 0, 4.0f);
    tf_mkz_2_srr_rear_r.setRotation(q);
    tf_mkz_2_srr_rear_r.setOrigin( tf::Vector3(-0.85f, -0.96f, 0.57f) );
    */
}



int main(int argc, char** argv)
{

    ros::init(argc, argv, "mkz_tf_publisher");
    ros::NodeHandle n;

    ros::Rate r(30);

    ros::Subscriber sub_veh_state;
    ros::Publisher  pub_veh1;
    ros::Publisher  pub_veh2;
    ros::Publisher  pub_veh3;
    ros::Publisher  pub_veh4;
    ros::Publisher  pub_veh5;
    ros::Publisher  pub_veh_motion;
 
    //register sub 
    sub_veh_state = n.subscribe("/mkz_bywire_intf/vehState", 2, vehStateCB);

    //register pub
    //pub_veh1        = n.advertise<delphi_esr_msgs::EsrVehicle1>("parsed_rx/vehicle1_msgs", 2);
    //pub_veh2        = n.advertise<delphi_esr_msgs::EsrVehicle2>("parsed_rx/vehicle2_msgs", 2);
    //pub_veh3        = n.advertise<delphi_esr_msgs::EsrVehicle3>("parsed_rx/vehicle3_msgs", 2);
    //pub_veh4        = n.advertise<delphi_esr_msgs::EsrVehicle4>("parsed_rx/vehicle4_msgs", 2);
    //pub_veh5        = n.advertise<delphi_esr_msgs::EsrVehicle5>("parsed_rx/vehicle5_msgs", 2);
    //pub_veh_motion  = n.advertise<geometry_msgs::TwistStamped>("as_rx/vehicle_motion", 2);
 

    //set tf
    tf::TransformBroadcaster pubtf;
    setTf();
    long count = 0;

    while(n.ok())
    {
        count++;
        ros::spinOnce();

        //pub tf
        pubtf.sendTransform( tf::StampedTransform(tf_earth_2_mkz, ros::Time::now(), "earth_fm", "mkz_fm") );
        pubtf.sendTransform( tf::StampedTransform(tf_mkz_2_viz, ros::Time::now(), "mkz_fm", "me_viz") );
        //pubtf.sendTransform( tf::StampedTransform(tf_mkz_2_ibeo, ros::Time::now(), "mkz_fm", "ibeo_fm") );
        pubtf.sendTransform( tf::StampedTransform(tf_mkz_2_velodyne, ros::Time::now(), "mkz_fm", "velodyne_fm") );
        pubtf.sendTransform( tf::StampedTransform(tf_mkz_2_mobileye, ros::Time::now(), "mkz_fm", "mobileye_fm") );
        //pubtf.sendTransform( tf::StampedTransform(tf_mkz_2_esr, ros::Time::now(), "mkz_fm", "esr_fm") );
        //pubtf.sendTransform( tf::StampedTransform(tf_mkz_2_srr_front_l, ros::Time::now(), "mkz_fm", "srr_front_l_fm") );
        //pubtf.sendTransform( tf::StampedTransform(tf_mkz_2_srr_front_r, ros::Time::now(), "mkz_fm", "srr_front_r_fm") );
        //pubtf.sendTransform( tf::StampedTransform(tf_mkz_2_srr_rear_l, ros::Time::now(), "mkz_fm", "srr_rear_l_fm") );
        //pubtf.sendTransform( tf::StampedTransform(tf_mkz_2_srr_rear_r, ros::Time::now(), "mkz_fm", "srr_rear_r_fm") );

        //pub esr input msgs
        //setEsrIn();
        //pub_veh1.publish(msg1);
        //pub_veh2.publish(msg2);
        //pub_veh3.publish(msg3);
        //pub_veh4.publish(msg4);
        //pub_veh5.publish(msg5);
        //pub_veh_motion.publish(msg_twist);

        //info      
        ROS_INFO_THROTTLE(10,"tf_pub %ld",count);
        r.sleep();
  }

}
