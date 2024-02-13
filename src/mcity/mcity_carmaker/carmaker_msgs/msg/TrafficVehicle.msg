std_msgs/Header header

int32 id                # Global traffic vehicle ID

# check Traffic.h 
int32 state             # 0: TrafficObj_State_Deactivated       --- motion deactivated, object hidden
                        # 1: TrafficObj_State_Active            --- motion active, object visible
                        # 2: TrafficObj_State_Static            --- fixed visible object (e.g: building)
                        # 3: TrafficObj_State_UserDefinedMotion --- free motion by user

geometry_msgs/Pose pose # Global pose of traffic vehicles