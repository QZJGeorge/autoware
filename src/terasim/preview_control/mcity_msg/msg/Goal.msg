
float64 	timestamp

#five parts
int16 	etop
bool 	go
int16 	signal


#part 1 -- vehicle state
float64 x
float64 y
float64 heading
float64 speed_x
float64 acc_x
float64 yaw_rate
float64 ego_lane_width
int16 ego_lane_type


#part 2 -- targets
float64 tf
float64 yf
float64 xf
float64 xf_d
float64 xf_dd

float64 tf_min
float64 yf_min
float64 xf_min

float64 tf_max
float64 yf_max
float64 xf_max

float64 vd_yield
float64 ad_yield


#part 2 -- obstacles
Obstacle[] obstacle_vec


#part 3 -- lane center and drivable area
int32 npn
RefPath[] refpath_vec