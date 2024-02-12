std_msgs/Header header
bool pedals_enabled
bool steering_enabled
bool coasting
bool speed_preempted
bool steering_preempted
bool override_latched
bool timeout

uint8 YAW_RATE_MODE=0
uint8 CURVATURE_MODE=1
uint8 steering_mode

uint8 SPEED_MODE=0
uint8 ACCEL_MODE=1
uint8 pedals_mode

float32 speed_ref
float32 speed_meas
float32 accel_ref
float32 accel_meas
float32 max_steering_angle
float32 max_steering_vel
