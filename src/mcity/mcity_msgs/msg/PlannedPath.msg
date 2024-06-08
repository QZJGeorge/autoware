float64 timestamp              # system time
float64 time_resolution        # timestamp between trajectory points
                               # Please use 0.1 seconds for best control performance

int16 	go                     # default: 1
int16 	estop                  # default: 0

float64[] x_vector             # UTM coordinate, 150 points maximum
float64[] y_vector             # UTM coordinate, 150 points maximum
float64[] vd_vector            # meters/sec, 150 points maximum
float64[] ori_vector           # North East frame in radians, 150 points maximum
