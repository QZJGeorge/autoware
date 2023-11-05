std_msgs/Header header

# Steering Wheel
float32 steering_wheel_angle_cmd        # rad, range -10.5 to 10.5
float32 steering_wheel_angle_velocity   # rad/s, range 0 to 17.5, 0 = default
float32 steering_wheel_torque_cmd       # Nm, range -60.0 to 60.0
uint8 cmd_type

# Enable
bool enable

# Clear driver overrides
bool clear

# Ignore driver overrides
bool ignore

# Sets current steering wheel angle to value in steering_wheel_angle_cmd
bool calibrate

# Disable or activate the driver override audible warning
bool quiet
bool alert

# Watchdog counter (optional)
uint8 count

# Command types
uint8 CMD_ANGLE=0
uint8 CMD_TORQUE=1
