
/*
 * used to check the input commands to protect the vehicle from unsafe operations
 * email: xushao@umich.edu, Shaobing Xu
 * 10/08/2018 @Mcity
 */


#include "rosNode.h"

void ROSNode::check()
{ 

    // RULE 1: Throttle is limited to [0, adminSet.max_throttle]
    // ie, [0, 0.45] opening
    // temporary rule
    if (cmd_in.throttle > adminSet.max_throttle + 0.01)
    {
        cmd_in.throttle = 0;

        ROS_WARN_THROTTLE(1, "  => Violate rule 1: Throttle %f > max %f, set to 0\n", 
            cmd_in.throttle, adminSet.max_throttle);
    }

    if (cmd_in.throttle < 0)
    {
        
        ROS_WARN_THROTTLE(1, "  => Violate rule 1: Throttle %f < 0 , set to 0\n", cmd_in.throttle);
        cmd_in.throttle = 0;
    }


    // RULE 2: Brake is limited to [0, MAX_BRAKE]
    // ie, [0,0.8], 0.32 opening (already) = max torque, see the shared files
    if (cmd_in.brake > MAX_BRAKE + 0.01)
    {        
        ROS_WARN_THROTTLE(1, "  => Violate rule 2: Brake %f > max %f, set to max %f\n", 
            cmd_in.brake, MAX_BRAKE, MAX_BRAKE);

        cmd_in.brake = MAX_BRAKE;
        cmd_in.throttle = 0;
    }

    if (cmd_in.brake < 0 )
    {
        
        ROS_WARN_THROTTLE(1, "  => Violate rule 2: Brake %f < 0, set to 0.22\n", cmd_in.brake);
        cmd_in.brake = 0.22;
        cmd_in.throttle = 0;
    }


    // RULE 3: Steering Angle is limited to [MIN_STEERING_ANGLE, MAX_STEERING_ANGLE]
    // ie, +/- 2.5*M_PI
    if (cmd_in.steering > MAX_STEERING_ANGLE)
    {
        
        ROS_WARN_THROTTLE(1, "  => Violate rule 3: Steering angle %f > max %f, set to max %f\n", 
            cmd_in.steering, MAX_STEERING_ANGLE, MAX_STEERING_ANGLE);

        cmd_in.steering = MAX_STEERING_ANGLE;
    }

    if (cmd_in.steering < MIN_STEERING_ANGLE)
    {
        
        ROS_WARN_THROTTLE(1, "  => Violate rule 3: Steering angle %f < min %f, set to min %f\n", 
            cmd_in.steering, MIN_STEERING_ANGLE, MIN_STEERING_ANGLE);

        cmd_in.steering = MIN_STEERING_ANGLE;
    }

    // RULE 4: the vehicle is not in/near Mcity/MTC, stop, MTC office (0,0)
    // RTK is required, thus the vehicle position and speed can be recorded
    // temporary rule
    
    /*if ( vs_msg.x < -200 || vs_msg.x > 1000 || 
         vs_msg.y < -200 || vs_msg.y > 1000)
    {
        
        ROS_WARN_THROTTLE(1, "  => Violate rule 4: Not in/near Mcity, or RTK is not activated,veh pos x=%f y=%f, set brake to 0.25\n", 
            vs_msg.x, vs_msg.y);

        cmd_in.throttle = 0.0;
        cmd_in.brake    = 0.25;
    }*/
        

    // RULE 5: if longitudinal vehicle speed > 15 m/s, set throttle to 0
    // Speed limit of Mcity highway is 45 mile
    // temporary rule
    if (vs_msg.speed_x > adminSet.max_speed + 0.2)
    {
        ROS_WARN_THROTTLE(1, "  => Violate rule 5: Vehicle speed %f > %fm/s, set throttle to 0\n", 
            vs_msg.speed_x, adminSet.max_speed);
        cmd_in.throttle = 0.0;
    }


    // RULE 6: if speed > 0 m/s, gear shifting is not allowed
    if (vs_msg.speed_x > 0 &&
        cmd_in.gear != vs_msg.gear_pos  &&
        cmd_in.gear != GEAR_NONE)
    {
        
        ROS_WARN_THROTTLE(1, "  => Violate rule 6: Try to shift gear when speed %f > 0 m/s\n", vs_msg.speed_x);
        cmd_in.gear = GEAR_NONE;
    }


    // RULE 7: if lateral acceleration > 3.5 m/s2, set throttle to 0
    if ( fabs(vs_msg.acc_y) > adminSet.max_lat_acc)
    {
        ROS_WARN_THROTTLE(1, "  => Violate rule 7: a_y %f > %fm/s2, set throttle to 0\n", 
            vs_msg.acc_y, adminSet.max_lat_acc);
        cmd_in.throttle = 0.0;
    }

    // RULE 8: check the info from the safeguard
    if (adminSet.enable_safeguard == true && 
        safe_guard_msg.enable_brake == true && 
        safe_guard_msg.brake_value > 0)
    {
        cmd_in.throttle = 0.0;

        if (safe_guard_msg.brake_value > cmd_in.brake)
        {
            cmd_in.brake = safe_guard_msg.brake_value;
            ROS_WARN_THROTTLE(1, "  => Violate rule 8: safe-guard kicks in, set brake to %f\n", 
                safe_guard_msg.brake_value);
        }
    }
    

    // Final RULE : disable throttle if brake is applied
    if (cmd_in.brake > 0.0f)
        cmd_in.throttle = 0.0f;

    return;
}



 