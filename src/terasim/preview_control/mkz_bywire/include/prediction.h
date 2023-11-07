


/**
    prediction.h
 */

#ifndef PREDICTION_H
#define PREDICTION_H

#include <vector>
#include <string>
#include <iterator>
#include <coordinates.h>
#include <types.h>

#include <XMath.h> 
#include "RNDF.h"


class PREDICTION
{
public:
    PREDICTION(RNDF *rndf_in)
    {rndf = rndf_in;};

    void ini(VehState_S * vs_in, std::vector< Object_S > * bsmVec_in);

    void run(float pred_horizon);



private:
    void mapping(Object_S * obj);
    void gen_path_on_lane(Lane * tg_lane, int wpID, Object_S * obj);
    void push_lane_to_path(Lane * tg_lane, int startID, int endID, std::vector<Obj_Point_Xd_S> * path);
    void gen_path_on_exit(Exit * tg_exit, int bzID, Object_S * obj);

    void refinePath(Object_S * obj);
    void interpPath(Object_S * obj, std::vector<Obj_Point_Xd_S> * pPath);
    void approach(Object_S * obj, std::vector<Obj_Point_Xd_S> * path);

    void check(Object_S * obj);

    RNDF *rndf = NULL;
    VehState_S * vs = NULL;
    std::vector< Object_S > * bsmVec = NULL;
    float p_horizon = 6.0;
};



bool merge_yield_test_unstable(
    float obj_dist, float obj_speed,
    float ego_dist, float ego_speed);

#endif