#include<iostream>
using namespace std;
#include"CarSimPacketParser.h"
#include<string>
#include<sstream>


bool CarSimPacketParser::parse(string message)
{

	CarPacketParser::setmodel(new Carmodel());
	stringstream ss;
	string b;
	ss << message;
	ss >> b;
	

	if (b == "#SPEED:")
	{
		int c;
		ss >> c;
		car->setspeed(c);
	}
	
	if (b == "#DOOR:"){
		bool c, d, e, f;
		ss >> c;
		ss >> d;
		ss >> e;
		ss >> f;
		car->setdoor(c, d, e, f);

	}

	if (b == "#WIND:")
	{
		bool c, d, e, f;
		ss >> c;
		ss >> d;
		ss >> e;
		ss >> f;
		car->setwind(c, d, e, f);

	}

	if(b == "#WHEEL:")
	{
		float c, d, e, f;
		ss >> c;
		ss >> d;
		ss >> e;
		ss >> f;
		car->setwheel(c, d, e, f);

	}

	if (b == "#ODOM:")
	{
		long int c;
		ss >> c;
		car->setodom(c);
	}

	if (b == "#TEMP:")
	{
		float c, d, e;
		ss >> c;
		ss >> d;
		ss >> e;
		car->settemp(c, d, e);
	}

	if (b == "#CRASH:")
	{
		bool c;
		ss >> c;
		car->setcrash(c);
	}

	if (b == "#FUEL:")
	{
		float c;
		ss >> c;
		car->setfuel(c);
	}
	
	if (b == "#LAMB:")
	{
		bool c, d, e;
		ss >> c;
		ss >> d;
		ss >> e;
		
		car->setlamb(c, d, e);
	}

	if (b == "AIRC:")
	{
		float c;
		ss >> c;
		car->setaýrc(c);
	}

	return true;
}


	
	







































































































	 
