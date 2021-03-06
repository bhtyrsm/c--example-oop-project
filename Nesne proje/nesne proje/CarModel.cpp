#include<iostream>
using namespace std;
#include"CarModel.h"
#include<string>

Carmodel::Carmodel()
{
}
void Carmodel::setdoor(bool a,bool b,bool c,bool d)
{
	solonkapı=a;
	sagonkapı=b;
	sagarkakapı=c;
	solarkakapı=d;
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
	onsoltekerbasınc=a;
	onsagtekerbasınc=b;
	arkasagtekerbasınc=c;
	arkasoltekerbasınc=d;

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
	cout<<"gecersiz değer girdiniz"<<endl;
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
void Carmodel::setaırc(float a)
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
bool Carmodel::getsolonkapı()
{
	return solonkapı;
}
bool Carmodel::getsagonkapı()
{
	return sagonkapı;
}
bool Carmodel::getsolarkakapı()
{
	return solarkakapı;
}
bool Carmodel::getsagarkakapı()
{
	return sagarkakapı;
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

float Carmodel::getonsagtekerbasınc()
{
	return onsagtekerbasınc;
}
float Carmodel::getonsoltekerbasınc()
{
	return onsoltekerbasınc;
}
float Carmodel::getsolarkatekerbasınc()
{
	return arkasoltekerbasınc;
}
float Carmodel::getsagarkatekerbasınc()
{
	return arkasagtekerbasınc;
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


