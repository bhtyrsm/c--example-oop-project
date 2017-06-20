#include<iostream>
using namespace std;
#include"CarPacketPackager.h"
#include<string>
#include<sstream>
stringstream ss;

CarPacketPackeger::CarPacketPackeger()
{
}
string CarPacketPackeger::getdoorpacket()
{
	return "#DOOR:";
}
string CarPacketPackeger::getwindowpacket()
{
	return "#WÝND:";
}
string CarPacketPackeger::getwheelpacket()
{
	return "#WHEEL:";
}
string CarPacketPackeger::getspeed()
{
	return "#SPEED:";
}
string CarPacketPackeger::getodompacket()
{
	return "#ODOM:";
}
string CarPacketPackeger::gettemppacket()
{
	return "#TEMP:";
}
string CarPacketPackeger::getcrashpacket()
{
	return "#CRASH:";
}
string CarPacketPackeger::getfuelpacket()
{
	return "#FUEL:";
}
string CarPacketPackeger::getlambpacket()
{
	return "#LAMB:";
}
string CarPacketPackeger::getaýrcpacket()
{
	return "#AIRC:";
}


string CarPacketPackeger::getWindowpacket(bool a,bool b,bool c,bool d)
{

	
	string message;
	


	ss.clear();
	ss<<"#WÝND "<<a<<" "<<b<<" "<<c<<" "<<d<<" :";

	message=ss.str();
	return message;

}
string CarPacketPackeger::getSpeed(int speed)
{
	
	string message;
	
	ss.clear();
	ss<<"#SPEED "<<speed<<" :";

	message=ss.str();

	return message;
}
string CarPacketPackeger::getOdomrpacket(long int meter)
{
	
	string message;

	ss.clear();
	ss<<"#ODOMR "<<meter<<" :";

	message=ss.str();
	
	return message;
}
string CarPacketPackeger::getFarpacket(bool a)
{
	
	string message;
	ss.clear();

	ss<<"#FAR "<<a<<" :";
	message=ss.str();

return message;
}