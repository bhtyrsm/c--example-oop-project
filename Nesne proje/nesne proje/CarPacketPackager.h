
#ifndef CAR_PACKET_PACKAGER
#define CAR_PACKET_PACKAGER

#include<iostream>
using namespace std;
#include<string>
#include"CarModel.h"

class CarPacketPackeger

{
public:
	CarPacketPackeger();
	
	string getdoorpacket();
	string getwindowpacket();
	string getwheelpacket();
	string getspeed();
	string getodompacket();
	string gettemppacket();
	string getcrashpacket();
	string getfuelpacket();
	string getlambpacket();
	string getaýrcpacket();

	string getWindowpacket(bool,bool,bool,bool);
	string getSpeed(int);
	string getOdomrpacket(long int);
	string getFarpacket(bool);

private:
	Carmodel *crmdl;
};
#endif