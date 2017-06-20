
#ifndef CAR_CONTROL
#define CAR_CONTROL



#include"CarPacketPackager.h"
#include"CarModel.h"
#include"CarTCPConnection.h"
#include"CarSimPacketParser.h"


class CarControl
{
public:
	CarControl();
	void updatestatus();
	bool openfar();
	bool controlSetSpeed(int);
	void closewindow(int);
	void openwindow(int);
	void stop();




private:
	Carmodel* car2;
	CarPacketPackeger* carpp;
	CarPacketParser* carparser;
	CarConnection* connect;
};
#endif