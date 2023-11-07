

#ifndef BEZIER_H
#define BEZIER_H

// bezier.h

#include <cmath>
#include <stdio.h>
#include <stdlib.h> 
#include "XMath.h"



class BezierPoint
{
public:
    float time = 0;
    float x,y,heading,cr,speed_limit,mileage;
    int segID, laneID, wpID;
    int turn_signal = 0;
    bool newPoint_flag = false;
    int key_WP_id = 0;
    float lane_width_left = 0;
    float lane_width_right = 0;

    float bound_left=0, bound_right=0;
    float temp1 = 0, temp2=0;

    float speed_limit_backup = 0;
    float x_backup = 0, y_backup = 0;
    float lane_width_left_backup = 0, lane_width_right_backup = 0;



    BezierPoint()
    {
        x = y = heading = cr = 
        speed_limit = mileage = 0;
        segID=laneID=wpID = -1;
        newPoint_flag = false;
        key_WP_id = 0;
    };

    BezierPoint(float xi,float yi,float hi,float cri)
    {
        x=xi,y=yi,heading=hi,cr=cri;
    };

    void setPoint(float xi,float yi,float hi,float cri)
    {
        x=xi,y=yi,heading=hi,cr=cri;
    };

    void clear()
    {
        x=y=heading=cr=speed_limit=mileage=0;
        segID=laneID=wpID=0;
        turn_signal = 0;
        newPoint_flag = false;
        key_WP_id = 0;
    }

    void print()
    {
        printf("segID%d laneID%d wpID%d  x=%f y=%f heading=%f "
            "curvature=%f speed_limit=%f lane_width_left=%f lane_width_right=%f "
            "key_WP_id = %d\n",
            segID, laneID, wpID, x, y, heading*180/PI, cr, speed_limit, 
            lane_width_left, lane_width_right, key_WP_id);
    };
};



namespace BZ
{
    // connect two points by a third order polynomial
    static inline void GetPolynomial3Ps(BezierPoint * P0, BezierPoint * P2, int num,std::vector<BezierPoint> * BezierPList)
    {
        if (BezierPList == NULL || P0==NULL || P2==NULL)
            return;
        
        BezierPoint P2n,Ptemp;
        BezierPList->clear();

        // convert
        P2n.x = P2->x - P0->x;
        P2n.y = P2->y - P0->y;
        P2n.heading = XM::Normalise_PI(P2->heading - P0->heading);
        
        float theta_o = atan(P2n.y/P2n.x);
        float r = sqrt(P2n.x*P2n.x + P2n.y*P2n.y);
        P2n.x = r * cos(theta_o - P0->heading);
        P2n.y = r * sin(theta_o - P0->heading);

        if ( ABS(r) < 1.6 || (ABS(P2n.heading) > (85.0f * PI /180.0f))  ) 
        {
            //printf("return from GetPolynomial3Ps, P2n.x=%f< 0.5 || P2n.heading=%f > 87.0f\n", 
            //    ABS(P2n.x), ABS(P2n.heading)/ PI *180.0f );

            BezierPList->push_back(* P0);
            BezierPList->push_back(* P2);

            return;
        }
            
        // cal the polynomial
        float t,y_d;
        for (int i = 0; i <= num; ++i)
        {
            t = (float)(i)/(float)(num);
            Ptemp.x = t * P2n.x;
            Ptemp.y = ( -2*CUBE(t) + 3*SQR(t) ) * P2n.y +
                      ( CUBE(t) - SQR(t) ) * tan(P2n.heading) * P2n.x;

            r = sqrt(Ptemp.x*Ptemp.x + Ptemp.y*Ptemp.y);
            theta_o = atan(Ptemp.y/Ptemp.x);
            if (i==0)
                theta_o = 0.0f;

            Ptemp.x = r * cos(theta_o + P0->heading);
            Ptemp.y = r * sin(theta_o + P0->heading);
            Ptemp.x += P0->x;
            Ptemp.y += P0->y;

            y_d = ( -6*SQR(t) + 6*t ) * P2n.y +
                  ( 3*SQR(t) - 2*t ) * tan(P2n.heading) * P2n.x;
            y_d = y_d/P2n.x;
            if (i==0) y_d = 0.0f;
            Ptemp.heading  = XM::Normalise_2PI ( atan(y_d) + P0->heading);

            BezierPList->push_back(Ptemp);
        }

        //milage
        float disGap = 0;
        BezierPList->at(0).mileage = 0;
        for (int i = 1; i < BezierPList->size(); ++i)
        {
            disGap = XM::DistFromXY(BezierPList->at(i).x, BezierPList->at(i).y,
                BezierPList->at(i-1).x, BezierPList->at(i-1).y);
            BezierPList->at(i).mileage = BezierPList->at(i-1).mileage + disGap;
        }
        
        return;
    }


    static inline void GetCP1(BezierPoint * P0, BezierPoint * P2, BezierPoint * CP1, BezierPoint * CP2)
    {
        if (CP1 == NULL || P0==NULL || P2== NULL)
            return;

        float k0 = tan(P0->heading);
        float k2 = tan(P2->heading);

        float x = (P2->y - P0->y + k0*P0->x - k2*P2->x) / (k0-k2);
        float y = (k2*P0->y-k0*P2->y - k0*k2*P0->x + k0*k2*P2->x) / (k2-k0);
        float distance = XM::DistFromXY(P0->x, P0->y, P2->x, P2->y);

        if (fabs(k0-k2)<0.08 && fabs(P0->heading-P2->heading) > 0.8*M_PI)
        {
            x = (P0->x + P2->x)/2;
            y = (P0->y + P2->y)/2;
            x += 1.5*distance*cos(P0->heading);
            y += 1.5*distance*sin(P0->heading);
        } 

        float k = 0.62;
        CP1->x = x * k+ P0->x *(1-k);
        CP1->y = y * k+ P0->y *(1-k);
        CP2->x = x * k+ P2->x *(1-k);
        CP2->y = y * k+ P2->y *(1-k);    

        float angle1 = XM::AngleFromXY(P0->x, P0->y, P0->heading, x, y);
        float angle2 = XM::AngleFromXY(P2->x, P2->y, P2->heading, x, y);

        if ( cos (angle1 ) < 0.0f ||
             cos (angle2 ) > 0.0f )
        {
            CP1->x = P0->x + 0.25 * distance * cos(P0->heading);
            CP1->y = P0->y + 0.25 * distance * sin(P0->heading);

            CP2->x = P2->x + 0.25 * distance * cos(P0->heading + M_PI);
            CP2->y = P2->y + 0.25 * distance * sin(P0->heading + M_PI);
        }

        return;
    }

    static inline void GetBezierPs(BezierPoint * P0, BezierPoint * P2, int num,std::vector<BezierPoint> * BezierPList)
    {
        if (BezierPList == NULL || P0==NULL || P2==NULL)
            return;

        BezierPoint P11, P12, P;
        BezierPList->clear();
        float r = 0;

        // convert P2n
        BezierPoint P2n;
        P2n.x = P2->x - P0->x;
        P2n.y = P2->y - P0->y;

        P2n.heading = XM::Normalise_PI(P2->heading - P0->heading);
        float theta_o = atan(P2n.y/P2n.x);
        r = sqrt(P2n.x*P2n.x + P2n.y*P2n.y);
        P2n.x = r * cos(theta_o - P0->heading);
        P2n.y = r * sin(theta_o - P0->heading);

 
        if (fabs(P2n.y/r)< 0.1 )
        {
            GetPolynomial3Ps(P0, P2, num, BezierPList);
            return;
        }


        // using bezier
        GetCP1(P0, P2, &P11, &P12);
        float x_d, y_d, x_dd, y_dd;

        float t = 0;
        for (int i = 0; i <= num; ++i)
        {
            t = float(i)/float(num);

            P.x = CUBE(1.0-t)* P0->x + 3.0*t*SQR(1.0-t)*P11.x + 3.0*SQR(t)*(1.0-t)*P12.x + CUBE(t)*P2->x;
            P.y = CUBE(1.0-t)* P0->y + 3.0*t*SQR(1.0-t)*P11.y + 3.0*SQR(t)*(1.0-t)*P12.y + CUBE(t)*P2->y;

            x_d = -3.0*SQR(1.0-t)* P0->x + 3.0*(1-4*t+3*t*t)*P11.x + 3.0*(2*t-3*t*t)*P12.x + 3*t*t*P2->x;
            y_d = -3.0*SQR(1.0-t)* P0->y + 3.0*(1-4*t+3*t*t)*P11.y + 3.0*(2*t-3*t*t)*P12.y + 3*t*t*P2->y;

            x_dd = 6.0*(1.0-t)* P0->x + 3.0*(-4+6*t)*P11.x + 3.0*(2-6*t)*P12.x + 6*t*P2->x;
            y_dd = 6.0*(1.0-t)* P0->y + 3.0*(-4+6*t)*P11.y + 3.0*(2-6*t)*P12.y + 6*t*P2->y;

            P.cr = (x_d*y_dd - y_d*x_dd)/pow(x_d*x_d + y_d*y_d, 1.5);

            r = sqrt(x_d*x_d + y_d*y_d);
            if (y_d >= 0)
                P.heading = XM::Normalise_2PI(acos(x_d/r));
            else
                P.heading = XM::Normalise_2PI(-acos(x_d/r));

            BezierPList->push_back(P);
        }

        //milage
        float disGap = 0;
        BezierPList->at(0).mileage = 0;
        for (int i = 1; i < BezierPList->size(); ++i)
        {
            disGap = XM::DistFromXY(BezierPList->at(i).x, BezierPList->at(i).y,
                BezierPList->at(i-1).x, BezierPList->at(i-1).y);
            BezierPList->at(i).mileage = BezierPList->at(i-1).mileage + disGap;
        }
        
        return;
    }

} 

#endif // BEZIER_H




    // num means all points including the two end points
    /*static inline void GetBezierPs(BezierPoint * P0, BezierPoint * P2, int num,std::vector<BezierPoint> * BezierPList)
    {
        if (BezierPList == NULL || P0==NULL || P2==NULL)
            return;

        BezierPoint P11, P12, P;
        GetCP1(P0, P2, &P11, &P12);
        BezierPList->clear();

        float t = 0;
        for (int i = 0; i <= num; ++i)
        {
            t = float(i)/float(num);
            P.x = CUBE(1.0-t)* P0->x + 3.0*t*SQR(1.0-t)*P11.x + 3.0*SQR(t)*(1.0-t)*P12.x + CUBE(t)*P2->x;
            P.y = CUBE(1.0-t)* P0->y + 3.0*t*SQR(1.0-t)*P11.y + 3.0*SQR(t)*(1.0-t)*P12.y + CUBE(t)*P2->y;
            BezierPList->push_back(P);
        }

      return;
    }*/


    /*static inline void GetBezierPs_Cplx(BezierPoint * P0, BezierPoint * P2, int num,std::vector<BezierPoint> * BezierPList)
    {
        if (BezierPList == NULL || P0==NULL || P2==NULL)
            return;

        BezierPoint P11, P12, P;
        GetCP1(P0, P2, &P11, &P12);
        BezierPList->clear();

        float x_d, y_d, x_dd, y_dd, r;

        float t = 0;
        for (int i = 0; i <= num; ++i)
        {
            t = float(i)/float(num);

            P.x = CUBE(1.0-t)* P0->x + 3.0*t*SQR(1.0-t)*P11.x + 3.0*SQR(t)*(1.0-t)*P12.x + CUBE(t)*P2->x;
            P.y = CUBE(1.0-t)* P0->y + 3.0*t*SQR(1.0-t)*P11.y + 3.0*SQR(t)*(1.0-t)*P12.y + CUBE(t)*P2->y;

            x_d = -3.0*SQR(1.0-t)* P0->x + 3.0*(1-4*t+3*t*t)*P11.x + 3.0*(2*t-3*t*t)*P12.x + 3*t*t*P2->x;
            y_d = -3.0*SQR(1.0-t)* P0->y + 3.0*(1-4*t+3*t*t)*P11.y + 3.0*(2*t-3*t*t)*P12.y + 3*t*t*P2->y;
            x_dd = 6.0*(1.0-t)* P0->x + 3.0*(-4+6*t)*P11.x + 3.0*(2-6*t)*P12.x + 6*t*P2->x;
            y_dd = 6.0*(1.0-t)* P0->y + 3.0*(-4+6*t)*P11.y + 3.0*(2-6*t)*P12.y + 6*t*P2->y;

            P.cr = (x_d*y_dd - y_d*x_dd)/pow(x_d*x_d + y_d*y_d, 1.5);

            r = sqrt(x_d*x_d + y_d*y_d);
            
            if (y_d >= 0)
                P.heading = XM::Normalise_2PI(acos(x_d/r));
            else
                P.heading = XM::Normalise_2PI(-acos(x_d/r));

            BezierPList->push_back(P);
        }
        
        return;
    }*/




/*
// connect two points by a third order polynomial
static inline void GetPolynomial3Ps(BezierPoint * P0, BezierPoint * P2, int num,std::vector<BezierPoint> * BezierPList)
{
    if (BezierPList == NULL || P0==NULL || P2==NULL)
        return;
    
    BezierPoint P2n,Ptemp;
    BezierPList->clear();

    // convert
    P2n.x = P2->x - P0->x;
    P2n.y = P2->y - P0->y;
    P2n.heading = XM::Normalise_PI(P2->heading - P0->heading);
    
    
    
    float theta_o = atan(P2n.y/P2n.x);
    float r = sqrt(P2n.x*P2n.x + P2n.y*P2n.y);
    P2n.x = r * cos(theta_o - P0->heading);
    P2n.y = r * sin(theta_o - P0->heading);

    if ( ABS(P2n.x) < 0.6 || (ABS(P2n.heading) > (85.0f * PI /180.0f))  ) 
    {
        printf("return from GetPolynomial3Ps, P2n.x=%f< 0.6 || P2n.heading=%f > 85.0f\n", 
            ABS(P2n.x), ABS(P2n.heading)/ PI *180.0f );
        return;
    }
        
    // cal the polynomial
    float t,y_d,y_dd;


    for (int i = 0; i <= num; ++i)
    {            
        
        t = (float)(i)/(float)(num);
        Ptemp.x = t * P2n.x;
        Ptemp.y = ( -2*CUBE(t) + 3*SQR(t) ) * P2n.y +
                  ( CUBE(t) - SQR(t) ) * tan(P2n.heading) * P2n.x;

        r = sqrt(Ptemp.x*Ptemp.x + Ptemp.y*Ptemp.y);
        theta_o = atan(Ptemp.y/Ptemp.x);
        if (i==0)
            theta_o = 0.0f;

        Ptemp.x = r * cos(theta_o + P0->heading);
        Ptemp.y = r * sin(theta_o + P0->heading);
        Ptemp.x += P0->x;
        Ptemp.y += P0->y;

        y_d = ( -6*SQR(t) + 6*t ) * P2n.y +
              ( 3*SQR(t) - 2*t ) * tan(P2n.heading) * P2n.x;
        y_d = y_d/P2n.x;
        if (i==0) y_d = 0.0f;
        Ptemp.heading  = XM::Normalise_2PI ( atan(y_d) + P0->heading);


        y_dd = ( -12*t + 6 ) * P2n.y +
               ( 6 * t - 2 ) * tan(P2n.heading) * P2n.x;
        y_dd = y_dd / P2n.x/P2n.x;
        if (i==0) y_dd = 0.0f;

        Ptemp.cr = y_dd/pow(1+y_d*y_d, 1.5);

        BezierPList->push_back(Ptemp);
        //Ptemp.print();
      }
   
    return;
}

*/