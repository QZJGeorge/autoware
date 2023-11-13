
float64 timestamp              # time
int16 	estop                  # default: 0
bool 	go                     # default: true

int16 	signal                 # turning signals, default 0

float64 vd                     # desired speed
float64 acc_d                  # desired acceleration (may need to compute)
float64 acc_dd                 # desired jerk, default: 0
float64 slope                  # road slope, default: 0
float64 vmax                   # maximum velocity
float64 ey                     # lateral error (may need to compute)
float64 ephi                   # orientation error (may need to compute)
float64 len                    # remaining length of the path
float64 cr                     # curvature of path at current point (note sign)
float64[] cr_vector            # up to 50 points in the next 2 seconds (0.04s)
float64[] vd_vector            # up to 50 points in the next 2 seconds (0.04s)
float64[] slope_vector         # up to 50 points in the next 2 seconds (0.04s)

#for pure pursuit control
float64[] x_vector
float64[] y_vector
float64 x
float64 y