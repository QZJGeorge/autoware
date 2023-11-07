


/**  \file
 
     C++ interface for Route Network Definition File

     This defines the RNDF structure as specified by the March 14,
     2007 DARPA specification.
 */

#ifndef __RNDF_h__
#define __RNDF_h__

#include <vector>
#include <string>
#include <iterator>
#include <map>
#include <coordinates.h>
#include <types.h>
#include <iostream> 
#include <algorithm>

#include <UTM.h>
#include <XMath.h>
#include "bezier.h"

#include "SX.h"

// Map accurancy
#define MAX_ACCURANCY       (0.1)


//extern RNDF *rndf;

template <class T>
void print_vector (std::vector<T> vec);
 


class Picture_Pos
{
public:
    double  x1, y1, x2, y2, x3, y3, x4, y4;

    Picture_Pos()
    {
         x1 = y1 = x2 = y2 = 0;
         x3 = y3 = x4 = y4 = 0;
    };
};


class RNDF_Pos
{
public:
    double xmin, xmax, ymin, ymax , cx, cy, xlen, ylen;
    RNDF_Pos()
    {
        xmin = ymin = 1e15;
        xmax = ymax = -1e15;
        cx = cy = 0.0f;
        xlen = ylen = 200.0f;
    };
};


//<waypoint>
class LL_Waypoint 
{
public:
    int waypoint_id; //integer > 0
    LatLong ll;
    float heading; // 0-pi
    float speed;
    float mileage;
    //double latitude;  //6 decimal digits
    //double longitude; //6 decimal digits

    //METHODS
    LL_Waypoint(){};
    LL_Waypoint(std::string line, int x, int y, int line_number,
        bool& valid, bool verbose);
    float dist2wp(LL_Waypoint * wp_in);
    float dist2XY(float x, float y);


    bool isvalid(){return(waypoint_id > 0);};
    void clear(){ waypoint_id = -1; ll.latitude = ll.longitude = -1.0; heading = 0.0; speed = 0.0;};
    void print(){print_without_newline(); printf("\n");};

    void print_without_newline()
    {
        printf("Waypoint %d, Latitude: %.8f, Longitude: %.8f Heading: %f Speed: %f mileage=%f", 
            waypoint_id, ll.latitude, ll.longitude, heading, speed, mileage);
    };
};


typedef LL_Waypoint Perimeter_Point;


//<checkpoint>
class Checkpoint
{
public:
    int checkpoint_id; //integer > 0
    int waypoint_id;   //integer > 0

    //METHODS
    Checkpoint(){};
    //Returns a parsed checkpoint from 'line' with waypoint id 'x.y.z' 
    Checkpoint (std::string line, int x, int y, int line_number,
        bool& valid, bool verbose);
    bool isvalid(){return (waypoint_id > 0 && checkpoint_id > 0 );};
    void clear(){ waypoint_id = checkpoint_id = -1;}; 
    void print()
    {
        printf("Checkpoint Number %d is at Waypoint %d\n", 
            checkpoint_id, waypoint_id);
    };
};



class Unique_id
{
public:
    int waypoint_id;
    int lane_id;
    int segment_id;

    //METHODS
    Unique_id()
    { segment_id = lane_id = waypoint_id = 0;}

    void set(int seg, int lane, int wp)
    { segment_id = seg, lane_id = lane, waypoint_id = wp;}

    void setByID(Unique_id * id)
    { 
        waypoint_id = id->waypoint_id;
        lane_id = id->lane_id;
        segment_id = id->segment_id;
    }

    bool isvalid(){return (waypoint_id > 0 && lane_id >= 0 && segment_id > 0);};
    void clear();
    void print(){printf("%d.%d.%d\n", segment_id, lane_id, waypoint_id);};

    bool operator==(Unique_id &id)
    {
        if(this->waypoint_id == id.waypoint_id &&
          this->lane_id == id.lane_id &&
          this->segment_id == id.segment_id)
        {return true;}
        return false;
    }
};








//<traffic light>
class Traffic_Light
{
public:
    Unique_id stop_point;
    int ID;
    int Chn;

    Traffic_Light(std::string line,int line_number, bool& valid, bool verbose);
    bool isvalid(){return (stop_point.isvalid() && Chn > 0 && Chn < 9 && ID > 2568 && ID < 2580);};
    void clear(){stop_point.waypoint_id = stop_point.lane_id = stop_point.segment_id = -1;};
    void print();
};




/*
  typedef Exit Exit_To_Perimeter;
  typedef Exit Exit_From_Perimeter;
*/
/*
  class Exit_To_Perimeter{
  int exit_waypoint;
  int entry_perimeterpoint;
  };

  class Exit_From_Perimeter{
  int exit_perimeterpoint;
  int entry_waypoint;
  };
*/


//<stop>
class Stop
{
public:
    int waypoint_id;
    bool isvalid(){return (waypoint_id > 0);};
    void clear(){waypoint_id = -1;};
    void print(){printf("Stop at Waypoint %d\n", waypoint_id);}; 
    //Returns a parsed stop from 'line' with waypoint id 'x.y.z' 
    Stop (std::string line, int x, int y, int line_number, bool& valid, bool verbose);
};



//<Crosswalk>
class Crosswalk
{
public:
    Rectangle area;
    Crosswalk(std::string line, int segId, bool& valid, bool verbose);
    void print();

    bool selected = false;
    float dist_veh2cross = 0;
    long NPN_onPath = 0;
};

//<exit>
class Exit
{
public:
    Unique_id start_point;
    Unique_id end_point;
    int turn_signal;
    std::vector<BezierPoint> BezierPList;

    bool selected = false;

    Exit(std::string line, int x, int y, int line_number, bool& valid, 
       bool verbose);
    bool isvalid(){return (start_point.isvalid() && end_point.isvalid());};
    void clear(){start_point.waypoint_id = end_point.waypoint_id
      = end_point.lane_id = end_point.segment_id = -1;};
    void print();

    bool left_turn_yield_flag = false;
    bool right_turn_yield_flag = false;
};

//<lane>
class Lane
{
public:
    int lane_id; //integer > 0
    int number_of_waypoints; //integer > 0
    int type = 0;
    std::vector<LL_Waypoint> waypoints; //List of waypoints
    //<optional lane header>
    float lane_width; //integer >= 0 (OPTIONAL)
    float width_left;
    float width_right;
    float lane_len;
    Lane_marking left_boundary;
    Lane_marking right_boundary;
    float speed_limit;

    std::vector<Checkpoint> checkpoints;
    std::vector<Stop> stops;
    std::vector<Exit> exits;
    std::vector<Traffic_Light> trafficlights;

    //METHODS
    bool isvalid(){return (lane_id > 0 && number_of_waypoints > 0 
             && lane_width >= 0
             && number_of_waypoints == (int)waypoints.size());};

    

    void clear();
    void print();

    int searchPoint(float x, float y);
    int searchNearestPoint(float x, float y);

    float mileageBtw2WPs(int wp_in, int wp_out);
    float mileageFromXY2WP(float x, float y, int wpID);
    void getPosByMileage(float mileage, float & tx, float & ty, float & theading);

    
    bool checkPointOnLane(float x, float y);
    void point2lane_distance(float x, float y, float & minDist, float & dist_sign, int & wpNum);
    void getPosByDist(float x, float y, float dist, float & tx, float &ty, float & theading);

    void iniFlag()
    {
        left_turn_yield_flag = false;
        left_turn_yield_exit_num = 0;
        right_turn_yield_flag = false;
        right_turn_yield_exit_num = 0;
        merge_yield_flag = false;
        merge_yield_exit_num = 0;
    }

    //flag-left turn yield
    bool left_turn_yield_flag = false;
    int  left_turn_yield_exit_num = 0;

    //flag_right turn yield
    bool right_turn_yield_flag = false;
    int  right_turn_yield_exit_num = 0;

    //flag_merge yield
    bool merge_yield_flag = false;
    int  merge_yield_exit_num = 0;

    //draw
    bool en_draw_left = true;
    bool en_draw_right = true;
};




//<segment>
class Segment
{
public:
    int segment_id; // integer > 0
    int number_of_lanes; // integer > 0
    //<optional segment header>
    std::string segment_name; // such as "Wisconsin_Ave"
    std::vector<Lane> lanes; // List of Lanes

    //crosswalk
    std::vector<Crosswalk> crosswalks; // List of Lanes
    

    //METHODS
    bool isvalid(){return (segment_id > 0 && number_of_lanes > 0
             && number_of_lanes == (int)lanes.size());};
    void clear();
    void print();
};




//<perimeter>
class Perimeter
{
public:
    int perimeter_id; //integer = 0 :(ALWAYS '0', because
    //there is only one perimeter per zone
    int number_of_perimeterpoints; //integer > 0
    //<optional perimeter header>
    std::vector<Exit> exits_from_perimeter;
    std::vector<Perimeter_Point> perimeterpoints;

    //METHODS
    bool isvalid(){return (perimeter_id == 0 && number_of_perimeterpoints > 0
             && number_of_perimeterpoints == (int)perimeterpoints.size());};
    void clear();
    void print();
};




//Parking Spots
class Spot
{
public:
    int spot_id;   //integer > 0
    //<optional spot header>
    int spot_width; //integer > 0
    Checkpoint checkpoint;
    std::vector<LL_Waypoint> waypoints;

    //METHODS
    bool isvalid(){return (spot_id > 0 && spot_width >= 0);};
    void clear();
    void print();
};






//<zone>
class Zone
{
public:
    int zone_id; //integer > 0
    int number_of_parking_spots; //integer >= 0
    //<optional zone header>
    std::string zone_name; //Designate the zone, such as "North_Parking_Lot"
    //<perimeter>
    Perimeter perimeter;
    std::vector<Spot> spots;
    RNDF_Pos center;

    //METHODS
    bool isvalid(){return(zone_id > 0 && number_of_parking_spots >= 0
            && number_of_parking_spots == (int)spots.size());};
    void clear();
    void print();
};





//<speed_limit>
class Speed_Limit
{
public:
    int id; //either a segment or a zone id
    int min_speed; // integer >= 0 in mph
    int max_speed; // integer >= 0 in mph

    bool isvalid(){return(id > 0 && min_speed >= 0 && max_speed >= 0);};
    void clear(){id = min_speed = max_speed = -1;};
    void print(); 

    Speed_Limit(std::string line, int line_number, bool& valid, bool verbose);
    Speed_Limit(){clear();};

    //~Speed_Limit();
    bool operator==(const Speed_Limit &that)
    {
    return (this->id == that.id
        && this->min_speed == that.min_speed
        && this->max_speed == that.max_speed);
    }

};


struct Map_Rlt_S
{
    std::vector<Lane *> tg_lane_vec;
    std::vector<int> wp_ID_vec;

    std::vector<Exit *> tg_exit_vec;
    std::vector<int> bz_ID_vec;
};


class RNDF
{
public:
    //ELEMENTS
    std::string filename; //filename
    int number_of_segments; //number of segments (integer > 0)
    int number_of_zones; //number of zones (integer >= 0)

    //<optional file header>
    std::string format_version;
    std::string creation_date;

    std::vector<Segment> segments;
    std::vector<Zone> zones;

    //METHODS
    RNDF(std::string rndfname, bool verbose=false);
    ~RNDF() {};

    //void populate_graph(Graph& graph);
    void print();

    Picture_Pos picture_pos;
    RNDF_Pos rndfpos;
    bool is_valid;

    LL_Waypoint * getWPbyID(Unique_id * ID);
    Unique_id getWPbyXY(float x, float y);
    Unique_id getWPbyXYH(float x, float y, float heading,
                        float max_ey, float max_eh);

    Map_Rlt_S mappingbyXYH(float x, float y, float heading,float sx, float sy);

    Lane * getLanebyID(Unique_id * ID);
    Lane * getLanebySegLaneId(int Seg_ID, int Lane_ID);
    std::vector<Exit> * getExitsByID(Unique_id * ID);
    Exit * getExitbyID(Unique_id * ID_in,Unique_id * ID_out);

    std::vector<Lane * > get_left_turn_yield_lanes(int Seg_ID, int Lane_ID);
    std::vector<Lane * > get_right_turn_yield_lanes(int Seg_ID, int Lane_ID, int WP_ID, int Seg_ID_Current);
    std::vector<Lane * > get_merge_yield_lanes(int Seg_ID, int Lane_ID, int WP_ID);
    std::vector<Crosswalk * > get_crosswalk_list(int Seg_ID);

    Lane * get_neighbor_lane(Unique_id * id, int LorR, float x, float y, float heading);
    int tell_LorR(float x, float y, float heading, Lane * l_in);

    bool check_in_given_Path( std::vector<LL_Waypoint> * waypoints, 
                              float x, float y, float heading, float maxErr);

    bool sameLane(Unique_id * ID1, Unique_id * ID2);
    float distance2WP(Unique_id * wpID1, Unique_id * wpID2);
    float mileage2WP(Unique_id * wpID1, Unique_id * wpID2);


private:
    bool isvalid()
    {return(number_of_segments > 0 && number_of_zones >= 0
            && number_of_segments == (int) segments.size()
            && number_of_zones == (int) zones.size());};


    struct id_comparator 
    {
        bool operator()(const ElementID e1, const ElementID e2) const 
        {
            if (e1.seg != e2.seg)
                return e1.seg < e2.seg;
            else if (e1.lane != e2.lane)
                return e1.lane < e2.lane;
            else return e1.pt < e2.pt;
        }
    };

    bool alreadyExists(Lane &parentLane, LL_Waypoint &waypoint);
    bool alreadyExists(Segment &parentSegment, Lane &lane);
    bool alreadyExists(Segment &parentSegment, Crosswalk &crosswalk);
    bool alreadyExists(Segment &segment);
    bool alreadyExists(Zone &zone, Spot &spot);
    bool alreadyExists(Zone &zone);
    bool alreadyExists(Lane &parentLane, Checkpoint &checkpoint);
    bool alreadyExists(Lane &parentLane, Stop &stop);
    bool alreadyExists(Lane &parentLane, Exit &exit);
    bool alreadyExists(Lane &parentLane, Traffic_Light &t_light);


    typedef std::map<ElementID, WayPointNode, id_comparator> id_to_waypoint_map;

    id_to_waypoint_map id_map;

    std::vector<WayPointEdge> edges;

    //void prep_graph();

    int line_number;
    Lane_marking parse_boundary(std::string line, bool& valid);

    // convert
    void convertGPS2UTM();
    void convertLocal();
    void calHeading();
    void genExitPath();
    void iniDrawLaneMarker();

};




class MDF
{
public: 
    std::string filename; //MDF name
    std::string RNDF_name; //RNDF name

    //<optional file header>
    std::string format_version;
    std::string creation_date;

    //checkpoints
    int number_of_checkpoints; //integer > 0
    std::vector<int> checkpoint_ids;

    //speed limits
    int number_of_speedlimits; //integer > 0
    std::vector<Speed_Limit> speed_limits;

    void print();
    //bool add_speed_limits(Graph& graph);
    MDF(std::string mdfname, bool verbose=false);
    ~MDF(){};

    bool is_valid;

private:

    int line_number;
    Speed_Limit parse_speedlimits(std::string line);
    
    bool isvalid()
    {
        return (number_of_checkpoints > 0 && number_of_speedlimits > 0
             && number_of_checkpoints == (int) checkpoint_ids.size()
             && number_of_speedlimits == (int) speed_limits.size());
    };
};


//Global Functions
std::string parse_string(std::string line, std::string token,
             int line_number, bool& valid, bool verbose);

float parse_float(std::string line, std::string token,
          int line_number, bool& valid, bool verbose);

int parse_integer(std::string line, std::string token,
             int line_number, bool& valid, bool verbose);

int parse_integer(std::string line, int line_number, bool& valid, bool verbose);

void checkpoint_error(int seg, int lane, int way);
void stop_error(int seg, int lane, int way);
void exit_error(Exit& exit);
void print_error_message(int line_number, std::string token);


class NODE
{
public:
    Unique_id exitID;
    Unique_id nextInID;

    Unique_id preExitID; //parent
    Unique_id inID;

    float F=0.0, G=0.0, H=0.0; // H = G+F

    void set_exitID   (Unique_id * ID) {exitID.setByID(ID);};
    void set_preExitID(Unique_id * ID) {preExitID.setByID(ID);};
    void set_inID     (Unique_id * ID) {inID.setByID(ID);};
    void set_nextInID (Unique_id * ID) {nextInID.setByID(ID);};
};


class PATHFINDER
{
public:
    PATHFINDER(RNDF * rndf_in)
    {
        rndf = rndf_in;
    };

    bool pathPlaning(Unique_id startWPID_in, Unique_id endWPID_in);
    bool loadCustomPath(std::string filename);
    void setO(float x_o, float y_o, float heading_o, Unique_id * startWPID);
    void setD(float x, float y, Unique_id * endWPID);
    void pathSmooth();
    
    Unique_id startWPID;
    Unique_id endWPID;
    std::vector<Unique_id> pathIDList;
    std::vector<BezierPoint> smoothedPathList;

private:
    RNDF *rndf = NULL;
    PATHFINDER * _pathFinder = NULL;
    std::vector<NODE> openExitList;
    std::vector<NODE> closeExitList;
    clock_t t0,t1;
    bool  inCloselist(Unique_id * wpID);
    int   inOpenlish(NODE * node);
    void  insertToOpenlish(NODE * node);
    bool  genPath();
    NODE * findNextNode(NODE * node);
    void printOpenLish();
    void printCloseLish();
};

class Goal_S
{   

public:
    Goal_S() {ini();};

    //control data
    bool go_flag = false;
    int turn_signal = TURN_SIGNAL_NONE;

    //core data
    float const tf = 6.0;
    float tf_max = 20;
    int Estop;
    float vd_yield, ad_yield, vd;
    float xf, xf_min, xf_max;
    float yf, yf_min, yf_max;

    void ini();
    void merge(Goal_S * const p, std::string name, bool print);
    void print();
};



void speed_design(float dist_in, float dcc, float vf,
    float dist_thd1, float dist_thd2, int Estop1, int Estop2,
    float veh_vx, Goal_S & glocal);
#endif
