#ifndef CAR_PACKET_PARSER
#define CAR_PACKET_PARSER

#include<iostream>
using namespace std;
#include<string>
#include"CarModel.h"

class CarPacketParser
{
public:
	virtual bool parse(string)=0;
	void setmodel(Carmodel*);
	
protected:
	Carmodel *car;
};
#endif