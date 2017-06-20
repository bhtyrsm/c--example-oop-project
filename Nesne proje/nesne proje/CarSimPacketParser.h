
#ifndef CAR_SIM_PACKET_PARSER
#define CAR_SIM_PACKET_PARSER

#include<iostream>
using namespace std;
#include<string>
#include"CarPacketParser.h"

class CarSimPacketParser:public CarPacketParser
{
public:
	bool parse(string);
};
#endif