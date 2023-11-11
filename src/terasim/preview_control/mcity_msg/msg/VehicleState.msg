float64 timestamp

#rtk state
string 	rtk_state_string

int64   rtk_seq_num
int64   rtk_timestamp_sec
int64   rtk_timestamp_nsec

int16   rtk_gps_status	
int16   rtk_gps_service	

#rtk position
float64 rtk_gps_longitude
float64 rtk_gps_latitude
float64 rtk_gps_altitude

float64 rtk_gps_utm_x
float64 rtk_gps_utm_y
float64 rtk_gps_utm_z

float64 rtk_imu_quaternion_x
float64 rtk_imu_quaternion_y
float64 rtk_imu_quaternion_z
float64 rtk_imu_quaternion_w

float64 rtk_heading
float64 rtk_attitude
float64 rtk_bank

#rtk ENU speed
float64 rtk_linear_enu_vx
float64 rtk_linear_enu_vy
float64 rtk_linear_enu_vz


#rtk local speed and acc
float64 rtk_gps_twist_linear_vx
float64 rtk_gps_twist_linear_vy
float64 rtk_gps_twist_linear_vz

float64 rtk_imu_linear_acc_x
float64 rtk_imu_linear_acc_y
float64 rtk_imu_linear_acc_z

#rtk local angular speed
float64 rtk_gps_twist_angular_vx
float64 rtk_gps_twist_angular_vy
float64 rtk_gps_twist_angular_vz
 
#key vehicle state
float64 x
float64 y
float64 z

float64 speed_x
float64 speed_y
float64 speed_z

float64 acc_x
float64 acc_y
float64 acc_z

float64 heading
float64 yaw_rate

#by-wire
bool 	by_wire_enabled

float64 throttle_cmd
float64 throttle_input
float64 throttle_state
bool    throttle_enabled
bool    throttle_override
bool    throttle_driver
bool    throttle_timeout
 

float64 brake_cmd
float64 brake_input
float64 brake_state
float64 brake_torq_cmd
float64 brake_torq_input
float64 brake_torq_state
bool    brake_boo_output
bool    brake_enabled
bool    brake_override
bool    brake_driver
bool    brake_timeout


float64 steer_cmd
float64 steer_state
float64 steer_torque
bool    steer_enabled
bool    steer_override
bool    steer_timeout

int16   gear_pos

float64 wheel_v_front_left
float64 wheel_v_front_right
float64 wheel_v_rear_left
float64 wheel_v_rear_right