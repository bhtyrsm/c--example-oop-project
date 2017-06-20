#include "CarTCPConnection.h"
#include"CarSimsocketClient.h"
#include"CarSimsocket.h"
#include"CarControl.h"
#include<string>
#include<iostream>
using namespace std;


CarTCPConnection::CarTCPConnection()
{
}
bool CarTCPConnection::connect()
{
	simsocet=new CarSimSocketClient("127.0.0.1", 777);
	if(simsocet!=NULL)
	{
	cout<<"car is connected"<<endl;
	return true;
	}
	else
	{
		cout<<"car can not connected"<<endl;
	     return false;
	}
}
void CarTCPConnection::disCoonect()
{
	simsocet->Close();
	cout<<"car is disconnected"<<endl;
	
}
bool CarTCPConnection::sendPacked(string a )
	{
		
		
		simsocet->SendLine(a);
		return true;
	}
string CarTCPConnection::receivePacked()
	{
		string message;

		 message=simsocet->ReceiveLine();
		 
		 return message;
}
