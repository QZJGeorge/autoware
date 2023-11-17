#include <path_follow.hpp>

void PathFollowing::init(
    Plan_Rlt_S * const planning2control_msg,
    VehState_S * const vehicle_state,
    Control_Value_S * const control_output,
    std::string gain_folder,
    float max_allowed_ey_,
    float max_allowed_eh_)
{
    _p2c = planning2control_msg;
    _vs = vehicle_state;
    _ctrl = control_output;

    _p2c->cr_vector.clear();
    for (int i = 0; i < 100; ++i)
        _p2c->cr_vector.push_back(0.0f);

    max_allowed_ey = max_allowed_ey_;
    max_allowed_eh = max_allowed_eh_;

    loadGains(gain_folder);
}

int PathFollowing::run()
{
    if (_p2c == NULL || _vs == NULL || _ctrl == NULL ){
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Path follower not initizlized, return");
        return -1;
    }

    count += 1;

    //step 0: check in path
    if ( fabs(_p2c->ey) < max_allowed_ey && 
         fabs(_p2c->ephi) < max_allowed_eh) //rad
        PVC.inPathFlag  = true;
    else
        PVC.inPathFlag  = false;


    if (PVC.inPathFlag != true)
    {
        _p2c->estop = MAX(_p2c->estop, estop_HIGH);
        
        if (count%25==0)
        printf("The vehicle departs from the path, ey=%f/%f ephi=%f/%f, set to estop_HIGH\n",
            _p2c->ey, max_allowed_ey, _p2c->ephi, max_allowed_eh);
    }

    //step 1: preview
    PVC.wheelAngle = preview();
    PVC.steeringAngle = MAX( MIN_STEERING_ANGLE, 
                        MIN( MAX_STEERING_ANGLE, PVC.wheelAngle * STEERING_RATIO));

    // step 3: OUTPUT
    if (_vs->speed_x > 0.001f)
        _ctrl->steering = PVC.steeringAngle;

    // step 4: set the delayed steering cmd
    if (count%2==0) //time step 0.04 second
    {
        PVC.delayedCmd[0] = PVC.delayedCmd[1]; //delayed 5th steps 
        PVC.delayedCmd[1] = PVC.delayedCmd[2];
        PVC.delayedCmd[2] = PVC.delayedCmd[3];
        PVC.delayedCmd[3] = PVC.delayedCmd[4];

        if (_vs->speed_x < 1 || _vs->by_wire_enabled != true)
            PVC.delayedCmd[4] = 0;
        else
            PVC.delayedCmd[4] = _ctrl->steering / STEERING_RATIO; //delayed 1st step
    }

    return 0;
}

float PathFollowing::preview()
{
    //step 0: set value
    int    vN = (int)(_vs->speed_x -4);
    float  beta = _vs->speed_x - (int)(_vs->speed_x);

    if (_vs->speed_x <= 4.0)
    {vN = 0; beta = 0;}

    if (_vs->speed_x >= 30)
    {vN = 25; beta = 1;}

    //step 1: Errors 
    PVC.dE      = - _p2c->ey;   // vehicle - road
    PVC.hE      = - _p2c->ephi; // + : need to turn left; - : need to turn right
    PVC.dERate  = _vs->speed_x * PVC.hE; // vy is ignored
    PVC.hERate  = _vs->yawRate - _vs->speed_x * _p2c->cr;
    PVC.steerAglReal = _vs->steering_wheel_angle / STEERING_RATIO;

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "dE=%f, hE=%f, dERate=%f, hERate=%f, steerAglReal=%f",
        PVC.dE, PVC.hE, PVC.dERate, PVC.hERate, PVC.steerAglReal);

    //step 2: Feedback Design
    PVC.dEGain              = kfb[vN+0][2]*(1-beta) + kfb[vN+1][2]*beta;
    PVC.dERateGain          = kfb[vN+0][3]*(1-beta) + kfb[vN+1][3]*beta;
    PVC.hEGain              = kfb[vN+0][4]*(1-beta) + kfb[vN+1][4]*beta;
    PVC.hERateGain          = kfb[vN+0][5]*(1-beta) + kfb[vN+1][5]*beta; // vN-th low, 6th Column
    PVC.steerAglRealGain    = kfb[vN+0][6]*(1-beta) + kfb[vN+1][6]*beta;

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "dEGain=%f, dERateGain=%f, hEGain=%f, hERateGain=%f, steerAglRealGain=%f",
        PVC.dEGain, PVC.dERateGain, PVC.hEGain, PVC.hERateGain, PVC.steerAglRealGain);

    for (int i = 0; i < 5; ++i)
        PVC.delayedCmdGain[i]  = kfb[vN+0][7+i]*(1-beta) + kfb[vN+1][7+i]*beta;

    //step 3: Consider delay and lag
    if (!consider_delay_lag)
    {
        PVC.steerAglRealGain = 0.0f;
        for (int i = 0; i < 5; ++i)
            PVC.delayedCmdGain[i]  = 0.0f;
    }
 
    PVC.dEFB            = - PVC.dEGain      * PVC.dE;
    PVC.dERateFB        = - PVC.dERateGain  * PVC.dERate;
    PVC.hEFB            = - PVC.hEGain      * PVC.hE;
    PVC.hERateFB        = - PVC.hERateGain  * PVC.hERate;
    PVC.steerAglRealFB  = - PVC.steerAglRealGain * PVC.steerAglReal;

    PVC.delayedCmdFB = 0;
    for (int i = 0; i < 5; ++i)
        PVC.delayedCmdFB -= PVC.delayedCmd[i] * PVC.delayedCmdGain[i]; // keep negative

    //step 4: Feedforward control design
    float cr_i = 0;
    int   crSize = _p2c->cr_vector.size();

    PVC.feedForward = 0;
    for (int i = 0; i < MIN(50, crSize); ++i) // previewStepLen 2s
    {
        cr_i = _p2c->cr_vector.at(i);
        PVC.feedForward += ( kff[vN+0][i+2]*(1-beta) + kff[vN+1][i+2]*beta ) * cr_i;
    }
    PVC.feedForward = - PVC.feedForward;

    //step 5: control design
    PVC.steer_preview  = 
        atan( PVC.feedForward
            + PVC.dEFB
            + PVC.dERateFB
            + PVC.hEFB
            + PVC.hERateFB
            + PVC.steerAglRealFB
            + PVC.delayedCmdFB);

    return PVC.steer_preview;
}

int PathFollowing::loadGains(std::string gain_folder)
{
    //step 1: local vars
    FILE *fp = NULL;

    std::string fileNameFeedBack    = gain_folder + "Feedback_dynamic.txt";
    std::string fileNameFeedForward = gain_folder + "Feedforward_dynamic.txt";

    memset(&kfb,0,sizeof(kfb));
    memset(&kff,0,sizeof(kff));

    // step 2: load kfb
    if( (fp = fopen( fileNameFeedBack.c_str(), "r+")) == NULL)
    {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Open Feedback gain file failed");
        return -1;
    }
    else
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Open Feedback gain file successfully");

    int Num_FB = 6;
    if (consider_delay_lag)
        Num_FB = 12;

    for ( int i = 0; i < GAIN_LINE_NUM; ++i)
    {
        for ( int j = 0; j < Num_FB; ++j)
        {
            if(fscanf(fp, "%f ", &kfb[i][j]))
            if (i%2==0 && i<4)
            {
                printf("%f  ", kfb[i][j]);
                if (j == Num_FB - 1)    printf("\n");
            }            
        }
    }
    printf("\n==>> Load Feedback gains successfully\n");
    fclose(fp);

    // step 2: load kff
    if( (fp = fopen( fileNameFeedForward.c_str(), "r+")) == NULL)
    {
        std::cout << "Open Feedforward gain file failed" << std::endl;
        return -1;
    }
    else
        std::cout << "Open Feedforward gain file successfully" << std::endl;

    for (int i = 0; i < GAIN_LINE_NUM; ++i)
    {
        for (int j = 0; j < 152; ++j)
        {
            if(fscanf(fp, "%f ", &kff[i][j]))
            if (i%5 == 0 && i<10) printf("%f  ", kff[i][j]);
        }
        if (i%5 == 0 ) printf("\n\n");
    }
    printf("\n==>> Load Feedforward successfully\n");
    fclose(fp);

    fp =NULL;

    return 0;
}

