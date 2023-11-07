
#ifndef BSM_END_DEC
#define BSM_END_DEC

#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h> 
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>

//for xml parsing
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/foreach.hpp>
#include <boost/algorithm/string.hpp>
#include <set>
#include <exception>

#include "libasn2735_2016.h"





struct S_BSM_string
{ 
	std::string messageId;
	std::string msgCnt;
	std::string id;
	std::string secMark;
	std::string latitude;
	std::string longitude;
	std::string elevation;
	std::string positionalaccuracy_semiMajor;
	std::string positionalaccuracy_semiMinor;
	std::string positionalaccuracy_orientation;
	std::string transmission;
	std::string speed;
	std::string heading;
	std::string steering_angle;
	std::string accelSet_long;
	std::string accelSet_lat;
	std::string accelSet_vert;
	std::string accelSet_yaw;
	std::string wheelBrakes;
	std::string brake_traction;
	std::string brake_abst;
	std::string brake_scs;
	std::string brake_brakeBoost;
	std::string brake_auxBrakes;
	std::string size_width;
	std::string size_length;
};

struct S_BSM
{ 
	//First, some helper constants, these are not included in the message.  
	uint8_t BSM_MSG = 20;    //for setting the messageId

	//Part I, coredata.  This is a static size.
	uint8_t messageId=0;                      	// A BSM msg id is 20
	uint8_t msgCnt=0;                        	// a number from 0 - 127
	uint32_t id=0;                             	// a 32 bit ID number
	double secMark=0;                         	// Seconds past the minute
	double latitude=0;                        	// degrees
	double longitude=0;                       	// degrees
	double elevation=0;                       	// meters above sea level
	double positionalaccuracy_semiMajor=0;    	// meters
	double positionalaccuracy_semiMinor=0;    	// meters
	double positionalaccuracy_orientation=0;  	// degrees
	std::string transmission;                	// status, constants at top of file
	double speed=0;                           	// meters per second
	double heading=0;                         	// degrees
	double steering_angle=0;                  	// degrees 
	double accelSet_long=0;                   	// meters per second ^ 2 
	double accelSet_lat=0;                    	// meters per second ^ 2 
	double accelSet_vert=0;                   	// meters per second ^ 2 
	double accelSet_yaw=0;                    	// degrees per second
	uint8_t wheelBrakes=0;                    	// status, constants at top of file
	std::string brake_traction;                	// status, constants at top of file
	std::string brake_abst;                   	// status, constants at top of file
	std::string brake_scs;                    	// status, constants at top of file
	std::string brake_brakeBoost;            	// status, constants at top of file
	std::string brake_auxBrakes;              	// status, constants at top of file
	double size_width=0;                      	// meters
	double size_length=0;                     	// meters
	  
	// Part II, 
	// Not implemented

	// Regional Data
	// Not implemented
};


//bsm decode
void bsm_decode(std::vector<char> & bytes, S_BSM & bsm_d, bool en_print);

//bsm encode
void bsm_encode(S_BSM bsm_d, std::string &str_payload, bool en_print);

void print_bsm(S_BSM_string & bsm_str, S_BSM & bsm_d);

#endif
