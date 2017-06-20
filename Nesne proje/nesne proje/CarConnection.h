
#ifndef CAR_CONNECTION
#define CAR_CONNECTION

#include <string>
using namespace std;
#include<iostream>

class CarConnection
{
public:
	
	virtual bool connect()=0;
	virtual void disCoonect()=0;
	virtual bool sendPacked(string )=0;
	virtual string receivePacked()=0;

};
#endif
