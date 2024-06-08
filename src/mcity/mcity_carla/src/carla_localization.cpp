#include <carla_localization.hpp>

namespace carla_localization{
  CarlaLocalization::CarlaLocalization(const rclcpp::NodeOptions & options)
  : Node("carla_localization", options)
  {
    pub_imu = this->create_publisher<Imu>("/sensing/imu/imu_data", 10);
    pub_pose = this->create_publisher<PoseWithCovarianceStamped>("/localization/pose_estimator/pose_with_covariance", 10);
    pub_twist = this->create_publisher<TwistWithCovarianceStamped>("/sensing/vehicle_velocity_converter/twist_with_covariance", 10);

    sub_odom = this->create_subscription<Odometry>(
      "/carla/ego_vehicle/odometry", 10, std::bind(&CarlaLocalization::odom_callback, this, std::placeholders::_1));

    timer_ = rclcpp::create_timer(
        this, get_clock(), 20ms, std::bind(&CarlaLocalization::pub_localization, this));
  }

  void CarlaLocalization::pub_localization(){
    header.stamp = this->get_clock()->now();
    header.frame_id = "map";

    pose_with_cov_msg.pose.pose.position.x = odom_msg.pose.pose.position.x + 77499.6;
    pose_with_cov_msg.pose.pose.position.y = odom_msg.pose.pose.position.y + 86677.4;
    pose_with_cov_msg.pose.pose.position.z = (float)0.0;

    double qx = odom_msg.pose.pose.orientation.x;
    double qy = odom_msg.pose.pose.orientation.y;
    double qz = odom_msg.pose.pose.orientation.z;
    double qw = odom_msg.pose.pose.orientation.w;

    double qx_new, qy_new, qz_new, qw_new;
    quaternion_process(qx, qy, qz, qw, &qx_new, &qy_new, &qz_new, &qw_new);

    imu_msg.orientation.x = qx_new;
    imu_msg.orientation.y = qy_new;
    imu_msg.orientation.z = qz_new;
    imu_msg.orientation.w = qw_new;

    pose_with_cov_msg.pose.pose.orientation.x = qx_new;
    pose_with_cov_msg.pose.pose.orientation.y = qy_new;
    pose_with_cov_msg.pose.pose.orientation.z = qz_new;
    pose_with_cov_msg.pose.pose.orientation.w = qw_new;

    twist_with_cov_msg.twist.twist.linear.x = odom_msg.twist.twist.linear.x;
    twist_with_cov_msg.twist.twist.linear.y = odom_msg.twist.twist.linear.y;
    twist_with_cov_msg.twist.twist.linear.z = odom_msg.twist.twist.linear.z;

    pose_with_cov_msg.pose.covariance = Identity_Min_6;
    twist_with_cov_msg.twist.covariance = Identity_Min_6;

    pose_with_cov_msg.header = header;
    twist_with_cov_msg.header = header;
    imu_msg.header = header;
  
    pub_imu->publish(imu_msg);
    pub_pose->publish(pose_with_cov_msg);
    pub_twist->publish(twist_with_cov_msg);
  }

  constexpr double CarlaLocalization::deg2rad(double degrees) {
      return degrees * M_PI / 180.0;
  }

  constexpr double CarlaLocalization::rad2deg(double radians) {
      return radians * 180.0 / M_PI;
  }

  void CarlaLocalization::quaternion_process(double qx, double qy, double qz, double qw, 
                          double* qx_new, double* qy_new, double* qz_new, double* qw_new) {
      // Construct the original quaternion
      Eigen::Quaterniond q(qw, qx, qy, qz);
      
      // Convert the quaternion to roll, pitch, and yaw
      Eigen::Vector3d euler = q.toRotationMatrix().eulerAngles(0, 1, 2);
      double roll = euler[0];
      double pitch = euler[1];
      double yaw = euler[2];

      // Negate yaw and subtract 4 degrees (converted to radians)
      yaw = yaw - deg2rad(4.0);

      // Create a new quaternion from the modified roll, pitch, and yaw
      Eigen::Quaterniond q_new = Eigen::AngleAxisd(roll, Eigen::Vector3d::UnitX()) *
                                Eigen::AngleAxisd(pitch, Eigen::Vector3d::UnitY()) *
                                Eigen::AngleAxisd(yaw, Eigen::Vector3d::UnitZ());

      // Assign the new quaternion values to the pointers
      *qx_new = q_new.x();
      *qy_new = q_new.y();
      *qz_new = q_new.z();
      *qw_new = q_new.w();
  }

  void CarlaLocalization::odom_callback(Odometry::SharedPtr msg){
    odom_msg = *msg;
  }
}

RCLCPP_COMPONENTS_REGISTER_NODE(carla_localization::CarlaLocalization)
