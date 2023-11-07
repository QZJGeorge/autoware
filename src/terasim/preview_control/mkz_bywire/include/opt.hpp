

#ifndef OPT_HPP
#define OPT_HPP

#include "SX.h"
#include "XMath.h"
#include <iostream>
#include <vector>
#include <cmath>

#include "spline.h"
using namespace std;

#define TIME_GAP_PATH       (0.25)
#define TIME_GAP_CONTROL    (0.04)

#define MAX_ACCURANCY   (0.1)
 

struct Point_Xd
{
    float t = 0;
    float dist = 0;
    float x = 0;
    float y = 0;
    float heading = 0;
    float cr = 0;

    float x_d  =0;
    float x_dd =0;
    float y_d  =0;
    float y_dd =0;

    float left_width = 0;
    float right_width = 0;

    float temp = 0;

    float beta = 0;
    float gama = 0;

    float slipangle = 0;

    Rectangle rect;
};


struct Trajectory_S
{
    float final_tf = 0;
    float final_xf = 0;
    float final_yf = 0;

    float cx[6], cy[6];
    
    //goal input
    float ini_y0=0, ini_y0_d=0, ini_y0_dd=0;
    float ini_x0_d=0, ini_x0_dd=0;
    
    float ref_tf = 0;
    float ref_yf=0;
    float ref_xf=0, ref_xf_d=0, ref_xf_dd=0;

    float minDObj = 100, minDbound = 3.0;
    float minTTC = 100;

    float max_vx= 0, min_vx= 0, max_acc_x= 0, min_acc_x= 0, max_acc_y= 0;
    float max_cr = 0;
    float Jcost = 0;

    bool feasible = true;
    int rank = 0;

    std::vector<Point_Xd> path;
};

 
struct IniState_S
{
    float y0 = 0;        
    float y0_d = 0;
    float y0_dd = 0;
    float x0_d = 0;  
    float x0_dd = 0;
    
};


// define class
class Opt
{

public:
    Opt(){};
    ~Opt(){};

    int ini(PlanningEnv_S * goalMsg, 
            Plan_Rlt_S * planning2control);

    void run();
    void convertTrajToControlMsg(std::vector<Point_Xd> * const vec);
   
    vector<Trajectory_S> trajVec;

    Trajectory_S best_traj;
    IniState_S ini_state;

    std::vector<Point_Xd> refPathVec;
    std::vector<Point_Xd> pastPathVec;
    int N_past = 0;

    int num_valid_Traj = 0;
    int opt_target_pos = -1;
    double time_cost_all = 0;
    bool flag_planning = false;

    //statistic of path
    float highest_cost, lowest_cost;

private:
    //input
    PlanningEnv_S * _env = NULL;
    std::vector<Obstacle_S> * _obstVec =NULL;
    Plan_Rlt_S * _toControl = NULL;

    //output
    void getTrajVec();
    void getOneTraj(Trajectory_S * const traj);
    void cal_M1M2(float t);

    void calMax_J(Trajectory_S * const traj, float t_gap);
    void calMax_J_add(Trajectory_S * const traj);
    void statistic_traj();

    void genRoughPath(Trajectory_S * const traj, float t_gap);
    void genControlPath(Trajectory_S * const traj, float t_gap);
    void check_constrain(Trajectory_S * const traj);
    

    void findBestTraj();
    
    void setIniValue();
    void getIniValue_byVehState();
    int getIniValue_byPrevTraj();

    void splineRefPaht();
    void convertRefPaht();

    //collision check
    void updateXYbound(Point_Xd * const pt, float & xmin, float & xmax, float & ymin, float & ymax);
    void check_collision(Trajectory_S * const traj);


    //check drivable area
    void check_drivable_area(Trajectory_S * const traj);


    //control
    float speedRoadLimit(std::vector<Point_Xd> * const vec, int NPN);

    //assist
    void print_goal();
    void calCurvature(std::vector<Point_Xd> * const vec, float dist_gap);
    void calCurvature_simple(std::vector<Point_Xd> * const vec, int gap);

    int resetNPN(std::vector<Point_Xd> * const vec);
 
    void findNPN_traj(std::vector<Point_Xd> * const vec, float xin, float yin,
            Point & foot, int & pos, 
            float & t_tg, float & d1, float & d2);

    void findNPN_refPath(vector<MiniPoint_S> * const vec, float xin, float yin,
             Point & foot, int & pos, 
             float & heading_tg, float & yd_tg,float & ydd_tg,
             float & d1, float & d2);

    float cal_v(float c[6], float t);
    float cal_vd(float c[6], float t);
    float cal_vdd(float c[6], float t);
    float cal_vddd(float c[6], float t);
 
    float M1[3][3];
    float a1, a2, a3, b1, b2, b3, c1, c2, c3; //M2
    float term_vec[3];
    float C012[3];
    float C345[3];
    float BB[3]; //AX=B
    float M2I[3][3];

    float t0,t1,t2,t3,t4,t5;

    //other
    long go_count = 0;
    long ctrl_count = 0;
    Point_Xd ptini, ptini_prev;

    //set ini state
    float x_ctrlpath, y_ctrlpath;

    //for collision check
    LINE_S2 line;
    double Gsin, Gcos;
    float po_x, po_y, po_h; //1: x direction, 2: y direction
 
};

#endif