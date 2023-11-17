
float64 timestamp 			#ros time
int32 	count
float64 brake_cmd 			#brake pedal opening
float64 throttle_cmd 		#throttle pedal openning
float64 steering_cmd 		#(-2.5pi to 2.5pi)
int16 	gear_cmd 
int16 	turn_signal_cmd

 
#define of gears
#NONE   	=0
#PARK       =1
#REVERSE    =2
#NEUTRAL    =3
#DRIVE      =4
#LOW        =5

#define turn signal
#NONE    =0
#LEFT    =1
#RIGHT   =2