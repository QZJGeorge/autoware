std_msgs/Header header

# Brake pedal
# Options defined below
float32 pedal_cmd
uint8 pedal_cmd_type

# Enable
bool enable

# Clear driver overrides
bool clear

# Ignore driver overrides
bool ignore

# Watchdog counter (optional)
uint8 count

uint8 CMD_NONE=0
uint8 CMD_PEDAL=1     # Unitless
uint8 CMD_PERCENT=2   # Percent of maximum torque
uint8 CMD_TORQUE=3    # Nm, open-loop
uint8 CMD_TORQUE_RQ=4 # Nm, closed-loop
uint8 CMD_DECEL=6     # m/s^2