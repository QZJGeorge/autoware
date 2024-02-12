float64 timestamp              # time
float64 time_resolution        # timestamp between trajectory points

int16 	go                     # default: 1
int16 	estop                  # default: 0

float64[] x_vector             # up to 50 points in the next 2 seconds (0.04s)
float64[] y_vector             # up to 50 points in the next 2 seconds (0.04s)
float64[] vd_vector            # up to 50 points in the next 2 seconds (0.04s)
float64[] ori_vector           # up to 50 points in the next 2 seconds (0.04s)
float64[] slope_vector         # up to 50 points in the next 2 seconds (0.04s)