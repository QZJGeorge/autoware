


/*
 * Preview control for path following
 * by Shaobing Xu at MTC
 * email: shaobxu@gmail.com
 * pathFollowing.cpp
 *
 */


#include "pathFollowing.hpp"


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
    //PVC.dERate  = _vs->speed_y + _vs->speed_x * PVC.hE;
    PVC.dERate  = _vs->speed_x * PVC.hE; // vy is ignored
    PVC.hERate  = _vs->yawRate - _vs->speed_x * _p2c->cr;
    PVC.steerAglReal = _vs->steering_wheel_angle / STEERING_RATIO;

    
    //step 2: Feedback Design
    PVC.dEGain              = kfb[vN+0][2]*(1-beta) + kfb[vN+1][2]*beta;
    PVC.dERateGain          = kfb[vN+0][3]*(1-beta) + kfb[vN+1][3]*beta;
    PVC.hEGain              = kfb[vN+0][4]*(1-beta) + kfb[vN+1][4]*beta;
    PVC.hERateGain          = kfb[vN+0][5]*(1-beta) + kfb[vN+1][5]*beta; // vN-th low, 6th Column
    PVC.steerAglRealGain    = kfb[vN+0][6]*(1-beta) + kfb[vN+1][6]*beta;

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
    int   crSize = _p2c->crVector.size();

    PVC.feedForward = 0;
    for (int i = 0; i < MIN(50, crSize); ++i) // previewStepLen 2s
    {
        cr_i = _p2c->crVector.at(i);
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
        std::cout << "Open Feedback gain file failed" << std::endl;
        return -1;
    }
    else
        std::cout << "Open Feedback gain file successfully" << std::endl;


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

