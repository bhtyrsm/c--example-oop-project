#include<iostream>
using namespace std;
#include"CarModel.h"
#include<string>

Carmodel::Carmodel()
{
}
void Carmodel::setdoor(bool a,bool b,bool c,bool d)
{
	solonkap�=a;
	sagonkap�=b;
	sagarkakap�=c;
	solarkakap�=d;
}
void Carmodel::setwind(bool a,bool b,bool c,bool d)
{
	solonpencere=a;
	sagonpencere=b;
	solarkapencere=c;
	sagarkapencere=d;
}
void Carmodel::setwheel(float a,float b,float c,float d)
{
	onsoltekerbas�nc=a;
	onsagtekerbas�nc=b;
	arkasagtekerbas�nc=c;
	arkasoltekerbas�nc=d;

}
void Carmodel::setspeed(int a)
{
	if(a>0)
	speed=a;
	else
		speed=0;
}
void Carmodel::setodom(long int a)
{
	odometer=a;
}
void Carmodel::settemp(float a,float b,float c)
{
	enginetemp=a;
	innertemp=b;
	outertemp=c;
}
void Carmodel::setcrash(bool a)
{
	crashsensor=a;
}
void Carmodel::setfuel(float a)
{
	if(a>0.0&&a<50.0)
	fuellevel=a;
	else
	cout<<"gecersiz de�er girdiniz"<<endl;
}
void Carmodel::setfar(bool a)
{
	farstate=a;
}
void Carmodel::setlamb(bool a,bool b,bool c)
{
	setfar(a);
	turnsignals=b;
	stopsignals=c;
}
void Carmodel::seta�rc(float a)
{
	aircondition=a;
}
void Carmodel::ODOMR()
{
	setodom(0);
}

void Carmodel::speedup()
{
	speed++;
}
void Carmodel::brake()
{
	setspeed(0);
	stopsignals=1;
}
bool Carmodel::getsolonkap�()
{
	return solonkap�;
}
bool Carmodel::getsagonkap�()
{
	return sagonkap�;
}
bool Carmodel::getsolarkakap�()
{
	return solarkakap�;
}
bool Carmodel::getsagarkakap�()
{
	return sagarkakap�;
}

bool Carmodel::getsolarkapencere()
{
	return solarkapencere;
}
bool Carmodel::getsolonpencere()
{
	return solonpencere;
}
bool Carmodel::getsagarpencere()
{
	return sagarkapencere;
}
bool Carmodel::getsagonpencere()
{
	return sagonpencere;
}

float Carmodel::getonsagtekerbas�nc()
{
	return onsagtekerbas�nc;
}
float Carmodel::getonsoltekerbas�nc()
{
	return onsoltekerbas�nc;
}
float Carmodel::getsolarkatekerbas�nc()
{
	return arkasoltekerbas�nc;
}
float Carmodel::getsagarkatekerbas�nc()
{
	return arkasagtekerbas�nc;
}

int Carmodel::getspeed()
{
	return speed;
}
long int Carmodel::getodometer()
{
	return odometer;
}

float Carmodel::getenginetemp()
{
	return enginetemp;
}
float Carmodel::getinnertemp()
{
	return innertemp;
}
float Carmodel::getoutertemp()
{
	return outertemp;
}

bool Carmodel::getturnsignals()
{
	return turnsignals;
}
bool Carmodel::getcrahsensor()
{
	return crashsensor;
}
bool Carmodel::getfarstate()
{
	return farstate;
}
bool Carmodel::getstopsignal()
{
	return stopsignals;
}


float Carmodel::getfuellevel()
{
	return fuellevel;
}
float Carmodel::getaircondition()
{
	return aircondition;
}


