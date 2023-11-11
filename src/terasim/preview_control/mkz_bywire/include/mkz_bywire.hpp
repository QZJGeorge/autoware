#ifndef MKZ_BYWIRE_HPP
#define MKZ_BYWIRE_HPP

#include <iostream>
#include <math.h>
#include <sx.hpp>
#include <utm.hpp>
#include <xmath.hpp>
#include <data_model.hpp>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_components/register_node_macro.hpp>

#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/bool.hpp>
#include <sensor_msgs/msg/nav_sat_fix.hpp>
#include <geometry_msgs/msg/twist_with_covariance_stamped.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <sensor_msgs/msg/imu.hpp> 
#include <sensor_msgs/msg/nav_sat_fix.hpp>

#include <mcity_msgs/msg/vehicle_state.hpp>
#include <mcity_msgs/msg/control.hpp>
#include <mcity_msgs/msg/sensor_check.hpp>
#include <mcity_msgs/msg/safe_guard_results.hpp>

#include <dataspeed_dbw_msgs/msg/throttle_cmd.hpp>
#include <dataspeed_dbw_msgs/msg/brake_cmd.hpp>
#include <dataspeed_dbw_msgs/msg/steering_cmd.hpp>
#include <dataspeed_dbw_msgs/msg/gear.hpp>
#include <dataspeed_dbw_msgs/msg/gear_cmd.hpp>
#include <dataspeed_dbw_msgs/msg/turn_signal.hpp>
#include <dataspeed_dbw_msgs/msg/throttle_report.hpp>
#include <dataspeed_dbw_msgs/msg/brake_report.hpp>
#include <dataspeed_dbw_msgs/msg/gear_report.hpp>
#include <dataspeed_dbw_msgs/msg/steering_report.hpp>
#include <dbw_fca_msgs/msg/wheel_speed_report.hpp>

namespace mkz_bywire
{

using namespace std;

using sensor_msgs::msg::Imu;
using sensor_msgs::msg::NavSatFix;
using std_msgs::msg::Bool;
using std_msgs::msg::String;
using nav_msgs::msg::Odometry;

using mcity_msgs::msg::VehicleState;
using mcity_msgs::msg::SensorCheck;
using mcity_msgs::msg::SafeGuardResults;
using mcity_msgs::msg::Control;

using dbw_fca_msgs::msg::WheelSpeedReport;
using dataspeed_dbw_msgs::msg::ThrottleCmd;
using dataspeed_dbw_msgs::msg::BrakeCmd;
using dataspeed_dbw_msgs::msg::SteeringCmd;
using dataspeed_dbw_msgs::msg::Gear;
using dataspeed_dbw_msgs::msg::GearCmd;
using dataspeed_dbw_msgs::msg::TurnSignal;
using dataspeed_dbw_msgs::msg::ThrottleReport;
using dataspeed_dbw_msgs::msg::BrakeReport;
using dataspeed_dbw_msgs::msg::GearReport;
using dataspeed_dbw_msgs::msg::SteeringReport;


class MkzBywire : public rclcpp::Node
{

public:
    explicit MkzBywire(const rclcpp::NodeOptions & options);
    ~MkzBywire() = default;

private:
    rclcpp::Publisher<ThrottleCmd>::SharedPtr pub_throttle;
    rclcpp::Publisher<BrakeCmd>::SharedPtr pub_brake;
    rclcpp::Publisher<SteeringCmd>::SharedPtr pub_steering;
    rclcpp::Publisher<GearCmd>::SharedPtr pub_gear;
    rclcpp::Publisher<TurnSignal>::SharedPtr pub_turn_signal;
    rclcpp::Publisher<VehicleState>::SharedPtr pub_veh_state;
    rclcpp::Publisher<SensorCheck>::SharedPtr pub_sensor_check;

    rclcpp::Subscription<Imu>::SharedPtr sub_imu;
    rclcpp::Subscription<Bool>::SharedPtr sub_sys_enable;
    rclcpp::Subscription<NavSatFix>::SharedPtr sub_gps_fix;
    rclcpp::Subscription<Odometry>::SharedPtr sub_gps_odom;
    rclcpp::Subscription<String>::SharedPtr sub_gps_pos_type;
    rclcpp::Subscription<String>::SharedPtr sub_gps_nav_state;

    rclcpp::Subscription<Control>::SharedPtr sub_cmd;
    rclcpp::Subscription<SafeGuardResults>::SharedPtr sub_safe_guard;

    rclcpp::Subscription<ThrottleReport>::SharedPtr sub_throttle_rept;
    rclcpp::Subscription<BrakeReport>::SharedPtr sub_brake_rept;
    rclcpp::Subscription<SteeringReport>::SharedPtr sub_steer_rept;
    rclcpp::Subscription<GearReport>::SharedPtr sub_gear_rept;
    rclcpp::Subscription<WheelSpeedReport>::SharedPtr sub_wheel_speed;

    rclcpp::TimerBase::SharedPtr timer_;

    ThrottleCmd throttle_msg;
    BrakeCmd brake_msg;
    SteeringCmd steering_msg;
    GearCmd gear_msg;
    TurnSignal turn_signal_msg;

    VehicleState vs_msg;
    SensorCheck sensor_msg;
    SafeGuardResults safe_guard_msg;

    void ini();
    void on_timer();
    void publishCmd();
    void publishVehState();
    void check();
    void sensorCheck();

    void publishSensorcheck();

    void sysEnableCB(const Bool::SharedPtr msg);
    void cmdCB(const Control::SharedPtr msg);
    void throttleReptCB(const ThrottleReport::SharedPtr msg);
    void brakeReptCB(const BrakeReport::SharedPtr msg);
    void steerReptCB(const SteeringReport::SharedPtr msg);
    void gearReptCB(const GearReport::SharedPtr msg);
    void wheelspeedReptCB(const WheelSpeedReport::SharedPtr msg);
    void gpsFixCB(const NavSatFix::SharedPtr msg);
    void gpsOdomCB(const Odometry::SharedPtr msg);
    void gpsPosTypeCB(const String::SharedPtr msg);
    void gpsNavStateCB(const String::SharedPtr msg);
    void imuCB(const Imu::SharedPtr msg);
    void safeGuardCB(const SafeGuardResults::SharedPtr msg);

    void Quaternion2Euler(double qx, double qy, double qz, double qw, 
        double * heading, double * attitude,  double * bank);
 
    Set_S adminSet;
    long count = 0;
    long control_count = 0;
    Control_Value_S cmd_in;
    string postype;
};

}
#endif
