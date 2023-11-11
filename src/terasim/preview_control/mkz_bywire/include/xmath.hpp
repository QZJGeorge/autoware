#ifndef XMATH_HPP
#define XMATH_HPP

#include <math.h>
#include <stdio.h>
#include <cstddef>

#define PI      (3.14159265)
#define PI_L    (3141592L)

#define TWOPI   (2.0 * PI)
#define HALFPI  (M_PI / 2.0)

#define DEG_TO_RAD(x)       ((double)((x)*PI)/180.0)
#define RAD_TO_DEG(x)       ((double)((x)*180.0)/PI)

#define RAD_TO_MICRO(x)     ((long)((x)*1000000))
#define MICRO_TO_RAD(x)     ((double)(x)/1000000.0)

#define DEG_TO_MICRO(x)     (RAD_TO_MICRO((DEG_TO_RAD((x)))))
#define MICRO_TO_DEG(x)     (RAD_TO_DEG((MICRO_TO_RAD((x)))))

#define DEG_T_RAD           (PI/180.0)
#define RAD_T_DEG           (180.0/PI)

#define SQR(x)              ((x) * (x))
#define CUBE(x)             ((x) * (x)* (x))
#define ABS(x)              (((x)>0)?(x):-1*(x))

#define MAX(x,y)            ((x) > (y) ? (x) : (y))
#define MIN(x,y)            ((x) > (y) ? (y) : (x))
#define SIGN(x)             (((x) > 0) - ((x) < 0)) 

#define POW_0(x)            (1.0)
#define POW_1(x)            (x)
#define POW_2(x)            ( (x)*(x) )
#define POW_3(x)            ( (x)*(x)*(x) )
#define POW_4(x)            ( (x)*(x)*(x)*(x) )
#define POW_5(x)            ( (x)*(x)*(x)*(x)*(x) )
#define POW_6(x)            ( (x)*(x)*(x)*(x)*(x)*(x) )


/** Unit conversion constants: */
#define INCHES_PER_FOOT        (12.0f)
#define CM_PER_INCH            (2.54f)
#define CM_PER_METER           (100.0)
#define METERS_PER_FOOT        (INCHES_PER_FOOT * CM_PER_INCH / CM_PER_METER)   //0.3048
#define MMETERS_PER_KM         (1000000.0f)
#define MMETERS_PER_MILE       (1609344.0f)
#define METERS_PER_MILE        ( MMETERS_PER_MILE / 1000.0f)
#define SECONDS_PER_MINUTE     (60.0f)
#define MINUTES_PER_HOUR       (60.0f)
#define SECONDS_PER_HOUR       (SECONDS_PER_MINUTE * MINUTES_PER_HOUR)
#define RADIANS_PER_DEGREE     (PI/180.0)
#define DEGREES_PER_RADIAN     (180.0/PI)

struct Point 
{ 
    double x = 0; 
    double y = 0;
    double t = 0; //time
    double heading = 0;
}; 


struct Point_3d
{
    float x = 0;
    float y = 0;
    float z = 0;
};
 
struct LINE_S
{
    float x1 = 0;
    float y1 = 0;
    float z1 = 0;
    float x2 = 0;
    float y2 = 0;
    float z2 = 0;
};

struct LINE_S2
{
    Point p1,p2;
};


struct Circle
{
    float x=0,y=0,r=0;
};

struct Rectangle
{
    Point p1, p2, p3, p4;
    float v, heading;


    float cx, cy, x_min, x_max, y_min, y_max, area;
    void set()
    {
        x_min = MIN(p1.x, MIN(p2.x, MIN(p3.x, p4.x)));
        x_max = MAX(p1.x, MAX(p2.x, MAX(p3.x, p4.x)));
        y_min = MIN(p1.y, MIN(p2.y, MIN(p3.y, p4.y)));
        y_max = MAX(p1.y, MAX(p2.y, MAX(p3.y, p4.y)));

        cx = 0.5*(x_min + x_max);
        cy = 0.5*(y_min + y_max);
 
        float area13_2= ABS(( (p1.x-p2.x)*(p3.y-p2.y)-(p3.x-p2.x)*(p1.y-p2.y) )/2.0 );
        float area13_4= ABS(( (p1.x-p4.x)*(p3.y-p4.y)-(p3.x-p4.x)*(p1.y-p4.y) )/2.0 );
       
        area = area13_2+area13_4;
     
    }
};

struct Vertex
{
    float x, y, z, w;
    Vertex(float _x, float _y, float _z, float _w = 1.0f) :
        x(_x), y(_y), z(_z), w(_w) {}
};

struct Normal
{
    float i, j, k;
    Normal(float _i, float _j, float _k) : i(_i), j(_j), k(_k) {}
};

struct Texture
{
    float x, y, z;
    Texture(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
};

struct Face
{ 
    int numIndicies;
    std::vector<int> vertexIndicies;
    std::vector<int> normalIndicies;
    std::vector<int> textureIndicies;

    std::vector<float> vValues;
    std::vector<float> vnValues;
    std::vector<float> vtValues;

    Face() : numIndicies(0) {}
};

namespace XM
{
    const float Epsilon_float_value = 1e-5;   //< minimal float value
    const float Epsilon_distance = 0.01;      //< one centimeter
    const float Epsilon_speed = 0.01;         //< in meters/second
    const float Epsilon_yaw = 3.1416/180;     //< in radians


    //distance  =========================================
    inline double DistFromXY(double x, double y, double x2,double y2)
    {
        return sqrt(SQR(x2-x)+SQR(y2-y));
    }

    inline void DistanceFromLine(float cx, float cy,
                   float ax, float ay ,
                   float bx, float by,
                   float & distanceSegment,
                   float & distanceLine)
    {
        // find the distance from the point (cx,cy) to the line
        // determined by the points (ax,ay) and (bx,by)
        //
        // distanceSegment = distance from the point to the line segment
        // distanceLine = distance from the point to the line
        //          (assuming infinite extent in both directions)
        //
        // copied from http://www.codeguru.com/forum/printthread.php?t=194400

        float r_numerator = (cx-ax)*(bx-ax) + (cy-ay)*(by-ay);
        float r_denomenator = (bx-ax)*(bx-ax) + (by-ay)*(by-ay);
        float r = r_numerator / r_denomenator;

        float s =  ((ay-cy)*(bx-ax)-(ax-cx)*(by-ay) ) / r_denomenator;

        distanceLine = fabs(s)*sqrtf(r_denomenator);

        if ( (r >= 0) && (r <= 1) )
        {
          distanceSegment = distanceLine;
        }
        else
        {
            float dist1 = (cx-ax)*(cx-ax) + (cy-ay)*(cy-ay);
            float dist2 = (cx-bx)*(cx-bx) + (cy-by)*(cy-by);

            if (dist1 < dist2)
                distanceSegment = sqrtf(dist1);
            else
                distanceSegment = sqrtf(dist2);
        }
    }

    inline void DistanceFromLine_2(float cx, float cy,
                   float ax, float ay ,
                   float bx, float by,
                   float & distanceLine)
    {
        // find the distance from the point (cx,cy) to the line
        // determined by the points (ax,ay) and (bx,by)
        //
        // distanceSegment = distance from the point to the line segment
        // distanceLine = distance from the point to the line
        //          (assuming infinite extent in both directions)

        float r_denomenator = (bx-ax)*(bx-ax) + (by-ay)*(by-ay);
        float s =  ((ay-cy)*(bx-ax)-(ax-cx)*(by-ay) ) / r_denomenator;
        distanceLine = fabs(s)*sqrtf(r_denomenator); 
    }


    inline float distanc2LineWithSign(float x1,float y1,float x2,float y2,float x,float y)
    {
        float A = y2-y1;
        float B = x1-x2;
        float C = (x2-x1)*y1-(y2-y1)*x1;
        float distance = fabs(A*x+B*y+C)/sqrt(A*A+B*B);
        float L = (y-y1)*(x2-x1) - (y2-y1)*(x-x1);
        if( L < 0 ) distance = - distance;
        return distance;
    }

    inline float DistanceToTime(float distance, float speed)
    {
        float abs_speed = fabs(speed);
        if (abs_speed < Epsilon_speed)
            return (1e10);
        else
            return (distance / abs_speed);
    }

    /** return true if point is in the line segment between lp1 and lp2 */
    inline bool point_in_line_segment(float x, float y, float x1, float y1,float x2, float y2)
    {
      return ( fabs( DistFromXY(x,y,x1,y1) + DistFromXY(x,y,x2,y2) - DistFromXY(x1,y1,x2,y2) )
          < Epsilon_distance);
    }

    //distance between two lines
    inline double dot(Point_3d c1, Point_3d c2)
    {
        return (c1.x * c2.x + c1.y * c2.y + c1.z * c2.z);
    }
     
    inline double norm(Point_3d c1)
    {
        return sqrt(dot(c1, c1));
    }

    inline double getShortestDistance(LINE_S line1, LINE_S line2)
    {
        double EPS = 0.00000001;
     
        Point_3d delta21;
        delta21.x = line1.x2 - line1.x1;
        delta21.y = line1.y2 - line1.y1;
        delta21.z = line1.z2 - line1.z1;
     
        Point_3d delta41;
        delta41.x = line2.x2 - line2.x1;
        delta41.y = line2.y2 - line2.y1;
        delta41.z = line2.z2 - line2.z1;
     
        Point_3d delta13;
        delta13.x = line1.x1 - line2.x1;
        delta13.y = line1.y1 - line2.y1;
        delta13.z = line1.z1 - line2.z1;
     
        double a = dot(delta21, delta21);
        double b = dot(delta21, delta41);
        double c = dot(delta41, delta41);
        double d = dot(delta21, delta13);
        double e = dot(delta41, delta13);
        double D = a * c - b * b;
     
        double sc, sN, sD = D;
        double tc, tN, tD = D;
     
        if (D < EPS)
        {
            sN = 0.0;
            sD = 1.0;
            tN = e;
            tD = c;
        }
        else
        {
            sN = (b * e - c * d);
            tN = (a * e - b * d);
            if (sN < 0.0)
            {
                sN = 0.0;
                tN = e;
                tD = c;
            }
            else if (sN > sD)
            {
                sN = sD;
                tN = e + b;
                tD = c;
            }
        }
     
        if (tN < 0.0)
        {
            tN = 0.0;
     
            if (-d < 0.0)
                sN = 0.0;
            else if (-d > a)
                sN = sD;
            else
            {
                sN = -d;
                sD = a;
            }
        }
        else if (tN > tD)
        {
            tN = tD;
            if ((-d + b) < 0.0)
                sN = 0;
            else if ((-d + b) > a)
                sN = sD;
            else
            {
                sN = (-d + b);
                sD = a;
            }
        }
     
        if (ABS(sN) < EPS) sc = 0.0;
        else sc = sN / sD;
        if (ABS(tN) < EPS) tc = 0.0;
        else tc = tN / tD;
     
        Point_3d dP;
        dP.x = delta13.x + (sc * delta21.x) - (tc * delta41.x);
        dP.y = delta13.y + (sc * delta21.y) - (tc * delta41.y);
        dP.z = delta13.z + (sc * delta21.z) - (tc * delta41.z);
     
        return sqrt(dot(dP, dP));
    }
 
    //angle =========================================
    inline double Normalise_PI(double angle)
    {
        while (angle>PI)
            angle -= 2.0*PI;

        while (angle<=-PI)
            angle += 2.0*PI;

        return angle;
    }

    inline double Normalise_2PI(double angle)
    {
        while (angle >= 2.0*PI)
            angle -= 2.0*PI;

        while (angle < 0.0f)
            angle += 2.0*PI;

        return angle;
    }

    inline double meanAngle (double *angles, int size)
    {
        double y_part = 0, x_part = 0;
        int i; 
        for (i = 0; i < size; i++)
        {
            x_part += cos (angles[i]);
            y_part += sin (angles[i]);
        }
     
        return atan2 (y_part / size, x_part / size);
    }

    inline double meanAngle_weighted(double angle1, double angle2, double w1, double w2)
    {
        double y_part = 0, x_part = 0;
        x_part = cos(angle1)*w1 + cos(angle2)*w2;
        y_part = sin(angle1)*w1 + sin(angle2)*w2;
 
     
        return atan2(y_part, x_part);
    }

    inline double AngleFrom_dX_dY(double dx,double dy)
    {
        return Normalise_PI( atan2(dy,dx) );
    }


    inline double AngleFromXY(double x,double y, double ori, double x2, double y2)
    {
        return Normalise_PI(atan2(y2-y,x2-x) - ori);
    }
 
    inline double Headingby3Points(double x1,double y1, double x2,double y2, double x3,double y3)
    {
        float dis1 = DistFromXY(x1, y1, x2, y2);
        float dis2 = DistFromXY(x3, y3, x2, y2);

        float t = dis1 / (dis1 + dis2);

        float dx = 2*(1-t)*(x2-x1) + 2*t*(x3-x2);
        float dy = 2*(1-t)*(y2-y1) + 2*t*(y3-y2);

        if ( dy > 0.0000001)
            return Normalise_PI(  acos( dx / sqrtf(dx*dx + dy*dy) ) );
        else if ( dy < -0.0001)
            return Normalise_PI( -acos( dx / sqrtf(dx*dx + dy*dy) ) );
        else if(dx)
            return 0.0f;
        else
            return PI;
    }

    inline double getVectorsAngle(float va_x, float va_y, float vb_x, float vb_y)
    {
        double angle = 0.0f;
        
        double productValue = (va_x * vb_x) + (va_y * vb_y);
        double va_val = sqrt(va_x * va_x + va_y * va_y);
        double vb_val = sqrt(vb_x * vb_x + vb_y * vb_y);
        double cosValue = productValue / (va_val * vb_val);

        if(cosValue < -1 && cosValue > -2)
            cosValue = -1;
        else if(cosValue > 1 && cosValue < 2)
            cosValue = 1;

        angle = acos(cosValue);
        
        return Normalise_PI(angle);
    }

    inline double DistFromXYProjectToHeading(double x, double y, double heading, double x2,double y2)
    {
        float angle = AngleFromXY(x, y, heading, x2, y2);
        float dist = DistFromXY(x, y, x2,y2);
        return dist * cos(angle);
    }

    inline double DistFromXY_Sign(double x, double y, double heading, double x2,double y2)
    {
        float angle = AngleFromXY(x, y, heading, x2, y2);
        float dist = DistFromXY(x, y, x2,y2);
        return dist * sin(angle);
    }

    //epsilon =========================================
    inline bool AlmostEqualRelativeOrAbsolute(float A, float B,
                    float maxRelativeError, 
                    float maxAbsoluteError)
    {
        if (fabs(A - B) < maxAbsoluteError)
            return true;

        float relativeError;

        if (fabs(B) > fabs(A))
            relativeError = fabs((A - B) / B);
        else
            relativeError = fabs((A - B) / A);

        if (relativeError <= maxRelativeError)
            return true;

        return false;
    }

    inline bool equal(float a, float b)
    {
        return AlmostEqualRelativeOrAbsolute(a,b,1e-5,1e-5);
    }

    inline bool lte(float a, float b)
    {
        return ((a<b) || (equal(a,b)));
    }

    inline bool gte(float a, float b)
    {
        return ((a>b) || (equal(a,b)));
    }

    // unit convertion
    /** convert between millimeters per second and miles per hour */
    static inline double mmps2mph(double mm)
    {
        return mm * SECONDS_PER_HOUR / MMETERS_PER_MILE;
    }

    static inline double kmph2mmps(double kmph)
    {
        return kmph * MMETERS_PER_KM / SECONDS_PER_HOUR;
    }

    static inline double mph2mmps(double mph)
    {
        return mph * MMETERS_PER_MILE / SECONDS_PER_HOUR;
    }

    /** convert between meters per second and miles per hour */
    static inline double mph2mps(double mph)
    {
        return mph * METERS_PER_MILE / SECONDS_PER_HOUR;
    }

    /** convert from meters per second to miles per hour  */
    static inline double mps2mph(double mps)
    {
        return mps * SECONDS_PER_HOUR / METERS_PER_MILE;
    }

    /** caculate curvature **/
    static inline double radiusFun(float x1,float y1,float x2,float y2,float x3,float y3)
    {
        float dArea = ((x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1))/2.0;
 
        if (ABS(dArea) < 0.08) return 1e8;


        float m1x = (x2 + x1)/2;  
        float m1y = (y2 + y1)/2;
      
        float m2x = ( x3 + x1)/2;  
        float m2y = ( y3 + y1)/2;  
      
        float k1 = -(x2 - x1)/(y2 - y1);
        if ((y2 - y1) == 0) k1 = 1e10;

        float k2 = -(x3 - x1)/(y3 - y1);
        if ((y3 - y1) == 0) k2 = 1e10;
      
        
        float center_x = (m2y - m1y - k2*m2x + k1*m1x)/(k1 - k2);
        float center_y = m1y + k1*(m2y - m1y - k2*m2x + k2*m1x)/(k1-k2);
        double radius = sqrtf ( ((center_x - x1)*(center_x - x1) + (center_y - y1)*(center_y - y1)) );
 
        if( radius > 50000.0f)
            radius = 50000.0f;
        
        //determine positive or negative
        float L = (y3-y1)*(x2-x1) - (y2-y1)*(x3-x1);
        if (L < 0)
            radius = -radius;

        return radius;
    }

    // frame convert
    class LOCAL_2D_S
    {
    public:
        float x = 0.0;
        float y = 0.0;
        float heading = 0.0;

        LOCAL_2D_S(){};
        LOCAL_2D_S(float x_in, float y_in,float heading_in) 
        {set(x_in, y_in, heading_in); }

        void set(float x_in, float y_in,float heading_in)
        {x = x_in, y = y_in, heading = heading_in;}

        LOCAL_2D_S operator-(LOCAL_2D_S fm) 
        {
            LOCAL_2D_S out;
            out.x = this->x - fm.x;
            out.y = this->y - fm.y;
            out.heading = this->heading - fm.heading;
            return out;
        }

        void print() { printf("x=%f y=%f heading=%f\n", x,y,heading); }
    };


    static inline LOCAL_2D_S local_2d_frame_convert(
        LOCAL_2D_S * const inP,      // in frame (0,0,0)
        LOCAL_2D_S * const relFM) //
    {
        LOCAL_2D_S outP;

        if (inP==NULL || relFM==NULL)
            return outP;

        float theta = relFM->heading;
        outP.x = (inP->x - relFM->x)*cos(theta) + (inP->y - relFM->y)*sin(theta);
        outP.y = (inP->y - relFM->y)*cos(theta) - (inP->x - relFM->x)*sin(theta);
        outP.heading = Normalise_PI(inP->heading - theta);
        return outP;
    }

    static inline void fm2fm(
        LOCAL_2D_S  * const oldfm, 
        LOCAL_2D_S  * const newfm, 
        LOCAL_2D_S  * const outfm)
    {
        if (oldfm == NULL || newfm==NULL || outfm==NULL)
            return;

        LOCAL_2D_S fm = (* newfm) - (*oldfm);

        float theta = AngleFrom_dX_dY(fm.x, fm.y);
        

        float r = sqrt(fm.x*fm.x + fm.y*fm.y);
        float delta_theta = theta - oldfm->heading;

        outfm->x = r *cos(delta_theta);
        outfm->y = r *sin(delta_theta);
        outfm->heading = Normalise_PI(newfm->heading - oldfm->heading);
    }

    /* ===================================================
    get foot of Perpendicular
    //====================================================*/
    //find the foot of Perpendicular
    static inline Point GetFootOfPerpendicular(
            const Point &pt,
            const Point &begin, 
            const Point &end)
    {
        Point retVal;
     
        double dx = begin.x - end.x;
        double dy = begin.y - end.y;
        if(ABS(dx) < 0.00000001 && ABS(dy) < 0.00000001 )
        {
            retVal = begin;
            return retVal;
        }
     
        double u = (pt.x - begin.x)*(begin.x - end.x) +
            (pt.y - begin.y)*(begin.y - end.y);
        u = u/((dx*dx)+(dy*dy));
     
        retVal.x = begin.x + u*dx;
        retVal.y = begin.y + u*dy;
     
        return retVal;
    }

    static inline void GetFootOfPerpendicularAndDistance(float x, float y, float x1, float y1, float x2, float y2,
        Point & foot, float & d1, float & d2)
    {
        Point p, p1, p2;
        p.x  = x;
        p.y  = y;
        p1.x = x1;
        p1.y = y1;
        p2.x = x2;
        p2.y = y2;

        foot = XM::GetFootOfPerpendicular(p, p1, p2);

        d1 = XM::DistFromXY(foot.x, foot.y, p1.x, p1.y);
        d2 = XM::DistFromXY(foot.x, foot.y, p2.x, p2.y);
    }


    static inline void GetFootOfPerpendicular2(
        float x, float y, 
        float x1, float y1, 
        float x2, float y2,
        float &xtg, float &ytg)
    {
        Point p, p1, p2, foot;
        p.x  = x;
        p.y  = y;
        p1.x = x1;
        p1.y = y1;
        p2.x = x2;
        p2.y = y2;

        foot = XM::GetFootOfPerpendicular(p, p1, p2);

        xtg = foot.x;
        ytg = foot.y;
    }


    /* ===================================================
    Distance from a point to a rectangle
    //====================================================*/

    // Given three colinear points p, q, r, the function checks if 
    // point q lies on line segment 'pr' 
    static inline bool onSegment(Point p, Point q, Point r) 
    { 
        if (q.x <= MAX(p.x, r.x) && q.x >= MIN(p.x, r.x) && 
            q.y <= MAX(p.y, r.y) && q.y >= MIN(p.y, r.y)) 
           return true; 
      
        return false; 
    } 
      
    // To find orientation of ordered triplet (p, q, r). 
    // The function returns following values 
    // 0 --> p, q and r are colinear 
    // 1 --> Clockwise 
    // 2 --> Counterclockwise 
    static inline int orientation(Point p, Point q, Point r) 
    { 
        // See https://www.geeksforgeeks.org/orientation-3-ordered-points/ 
        // for details of below formula. 
        float val = (q.y - p.y) * (r.x - q.x) - 
                  (q.x - p.x) * (r.y - q.y); 
      
        if (ABS(val) < 0.001) return 0;  // colinear
      
        return (val > 0)? 1: 2; // clock or counterclock wise 
    } 
      
    // The main function that returns true if line segment 'p1q1' 
    // and 'p2q2' intersect. 
    static inline bool doIntersect(Point p1, Point q1, Point p2, Point q2) 
    { 
        // Find the four orientations needed for general and 
        // special cases 
        int o1 = orientation(p1, q1, p2); 
        int o2 = orientation(p1, q1, q2); 
        int o3 = orientation(p2, q2, p1); 
        int o4 = orientation(p2, q2, q1);
      
        // General case 
        if (o1 != o2 && o3 != o4) 
            return true; 
      
        // Special Cases 
        // p1, q1 and p2 are colinear and p2 lies on segment p1q1 
        if (o1 == 0 && onSegment(p1, p2, q1)) return true; 
      
        // p1, q1 and q2 are colinear and q2 lies on segment p1q1 
        if (o2 == 0 && onSegment(p1, q2, q1)) return true; 
      
        // p2, q2 and p1 are colinear and p1 lies on segment p2q2 
        if (o3 == 0 && onSegment(p2, p1, q2)) return true; 
      
         // p2, q2 and q1 are colinear and q1 lies on segment p2q2 
        if (o4 == 0 && onSegment(p2, q1, q2)) return true; 
      
        return false; // Doesn't fall in any of the above cases 
    }

    /* ===================================================
    angles between 3 points
    point inside a rectangle
    //====================================================*/
    static inline float angle_3_point(Point P3, Point P1, Point P2) // angle p3-p1-p2 
    {
        float angle = atan2(P3.y - P1.y, P3.x - P1.x) - atan2(P2.y - P1.y, P2.x - P1.x);
        return ABS(Normalise_PI(angle));
    }

    static inline float areaTriangle(Point p1, Point p2, Point p3)
    {
        float dArea = ((p2.x - p1.x)*(p3.y - p1.y) - (p3.x - p1.x)*(p2.y - p1.y))/2.0;
        return (dArea > 0.0) ? dArea : -dArea;

    }

    static inline bool point_in_rectangle(Point * const p, Rectangle * const rec)
    {
        float area1 = ABS(( (rec->p1.x - p->x)*(rec->p2.y - p->y) - (rec->p2.x - p->x)*(rec->p1.y - p->y) )/2.0 );
        float area2 = ABS(( (rec->p2.x - p->x)*(rec->p3.y - p->y) - (rec->p3.x - p->x)*(rec->p2.y - p->y) )/2.0 );
        float area3 = ABS(( (rec->p3.x - p->x)*(rec->p4.y - p->y) - (rec->p4.x - p->x)*(rec->p3.y - p->y) )/2.0 );
        float area4 = ABS(( (rec->p4.x - p->x)*(rec->p1.y - p->y) - (rec->p1.x - p->x)*(rec->p4.y - p->y) )/2.0 );
     
        //printf("area sum =%f %f\n",  area1+area2+area3+area4, rec->area);
        //printf("area %f %f %f %f\n", area1, area2,area3,area4);

        if ( ABS(area1+area2+area3+area4 - rec->area) < rec->area*0.01) return true;
        else return false;
    }

    /* ===================================================
    Check whether a line intersects a rectangle
    //====================================================*/
    static inline bool collision_line_rectangle(LINE_S2 * const line, Rectangle * const rec)
    {
        //step 1: check x/y
     
        if (MAX(line->p1.x, line->p2.x) < rec->x_min )
            return false;

        if (MIN(line->p1.x, line->p2.x) > rec->x_max )
            return false;

        if (MAX(line->p1.y, line->p2.y) < rec->y_min )
            return false;

        if (MIN(line->p1.y, line->p2.y) > rec->y_max )
            return false;

        //step 2: check intersect
        if (XM::doIntersect(line->p1, line->p2, rec->p1, rec->p2) || 
            XM::doIntersect(line->p1, line->p2, rec->p2, rec->p3) || 
            XM::doIntersect(line->p1, line->p2, rec->p3, rec->p4) || 
            XM::doIntersect(line->p1, line->p2, rec->p4, rec->p1) )
            return true;

        //step 3: check inside
        if (XM::point_in_rectangle(&line->p2, rec)) return true;
        if (XM::point_in_rectangle(&line->p1, rec)) return true;

        return false;
    }

    static inline float mindist_Rectangle_Segment(LINE_S2 * const l, Rectangle * const rec)
    {
        float d1, d2, d3, d4, null;
        XM::DistanceFromLine(rec->p1.x, rec->p1.y, l->p1.x, l->p1.y, l->p2.x, l->p2.y, d1, null);
        XM::DistanceFromLine(rec->p2.x, rec->p2.y, l->p1.x, l->p1.y, l->p2.x, l->p2.y, d2, null);
        XM::DistanceFromLine(rec->p3.x, rec->p3.y, l->p1.x, l->p1.y, l->p2.x, l->p2.y, d3, null);
        XM::DistanceFromLine(rec->p4.x, rec->p4.y, l->p1.x, l->p1.y, l->p2.x, l->p2.y, d4, null);

        return MIN(d1, MIN(d2, MIN(d3, d4)));
    }

    static inline float mindist_Rectangle_line(LINE_S2 * const l, Rectangle * const rec)
    {
        float d1, d2, d3, d4;
        XM::DistanceFromLine_2(rec->p1.x, rec->p1.y, l->p1.x, l->p1.y, l->p2.x, l->p2.y, d1);
        XM::DistanceFromLine_2(rec->p2.x, rec->p2.y, l->p1.x, l->p1.y, l->p2.x, l->p2.y, d2);
        XM::DistanceFromLine_2(rec->p3.x, rec->p3.y, l->p1.x, l->p1.y, l->p2.x, l->p2.y, d3);
        XM::DistanceFromLine_2(rec->p4.x, rec->p4.y, l->p1.x, l->p1.y, l->p2.x, l->p2.y, d4);

        return MIN(d1, MIN(d2, MIN(d3, d4)));
    }

    static inline float mindist_Rectangle_Point(Point * const pt, Rectangle * const rec)
    {
        float d1, d2, d3, d4, null;
        XM::DistanceFromLine(pt->x, pt->y, rec->p1.x, rec->p1.y, rec->p2.x, rec->p2.y, d1, null);
        XM::DistanceFromLine(pt->x, pt->y, rec->p2.x, rec->p2.y, rec->p3.x, rec->p3.y, d2, null);
        XM::DistanceFromLine(pt->x, pt->y, rec->p3.x, rec->p3.y, rec->p4.x, rec->p4.y, d3, null);
        XM::DistanceFromLine(pt->x, pt->y, rec->p4.x, rec->p4.y, rec->p1.x, rec->p1.y, d4, null);

        return MIN(d1, MIN(d2, MIN(d3, d4)));
    }
}

#endif