
#include"CarControl.h"

CarControl::CarControl()
{
	carparser=new CarSimPacketParser();
	connect=new CarTCPConnection();
	car2=new Carmodel();
	carpp=new CarPacketPackeger();
}
void CarControl::updatestatus()
{
	
	connect->sendPacked(carpp->getaýrcpacket());
	carparser->parse(connect->receivePacked());

	connect->sendPacked(carpp->getcrashpacket());
	carparser->parse(connect->receivePacked());

	connect->sendPacked(carpp->getdoorpacket());
	carparser->parse(connect->receivePacked());

	connect->sendPacked(carpp->getfuelpacket());
	carparser->parse(connect->receivePacked());

	connect->sendPacked(carpp->getlambpacket());
	carparser->parse(connect->receivePacked());

	connect->sendPacked(carpp->getodompacket());
	carparser->parse(connect->receivePacked());

	connect->sendPacked(carpp->getwheelpacket());
	carparser->parse(connect->receivePacked());

	connect->sendPacked(carpp->getwindowpacket());
	carparser->parse(connect->receivePacked());


	connect->sendPacked(carpp->getspeed());
	carparser->parse(connect->receivePacked());

	connect->sendPacked(carpp->gettemppacket());
	carparser->parse(connect->receivePacked());



}
bool CarControl::controlSetSpeed(int a )
{

	connect->sendPacked(carpp->getSpeed(a));
	return true;

}
	bool CarControl::openfar()
	{
		connect->sendPacked(carpp->getFarpacket(1));
return true;
	
	}

	void CarControl::closewindow(int x=0)
	{

		connect->sendPacked(carpp->getWindowpacket(x,x,x,x));
		
		
	}
	
	void CarControl::openwindow(int x=1)
	{

		connect->sendPacked(carpp->getWindowpacket(x,x,x,x));
		
	}
	void  CarControl::stop()
	{
	
		connect->sendPacked(carpp->getSpeed(0));
	
	}