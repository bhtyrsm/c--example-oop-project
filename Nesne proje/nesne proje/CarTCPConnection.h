
#ifndef CAR_TCP_CONNECTION
#define CAR_TCP_CONNECTION
#include "CarConnection.h"
#include"CarSimsocketClient.h"
#include"CarSimPacketParser.h"
#include<iostream>
#include<string>

class CarTCPConnection:public CarConnection
{
public:
	CarTCPConnection();
	bool connect();
	void disCoonect();
	bool sendPacked(string );
	string receivePacked();



	
private:
	CarSimSocket *simsocet;
	
};

#endif
