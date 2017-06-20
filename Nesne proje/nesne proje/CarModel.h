
#ifndef CAR_MODEL
#define CAR_MODEL

#include<iostream>
#include<string>
using namespace std;
#include<string>
class Carmodel
{
public:
	Carmodel();
	void setdoor(bool,bool,bool,bool);
	void setwind(bool,bool,bool,bool);
    void setwheel(float,float,float,float);
	void setspeed(int);
	void setodom(long int);
	void settemp(float,float,float);
	void setcrash(bool);
	void setfuel(float);
	void setfar(bool);
	void setlamb(bool,bool,bool);
	void seta�rc(float);

     void ODOMR();
	 void brake();
	 void speedup();

	 bool getsolonkap�();
	 bool getsagonkap�();
	 bool getsolarkakap�();
	 bool getsagarkakap�();
	 
	 bool getsolonpencere();
	 bool getsagonpencere();
	 bool getsolarkapencere();
	 bool getsagarpencere();
	bool getturnsignals();
	 float getonsagtekerbas�nc();
	 float getonsoltekerbas�nc();
	 float getsolarkatekerbas�nc();
	 float getsagarkatekerbas�nc();
	 
	 int getspeed();
	 long int getodometer();
	 
	 float getenginetemp();
	 float getinnertemp();
	 float getoutertemp();

	 bool getcrahsensor();
	 bool getfarstate();
	 bool getstopsignal();

	 float getfuellevel();
	
	 
	
	 float getaircondition();


private:
   bool solonkap�,sagonkap�,solarkakap�,sagarkakap�;
   bool solonpencere,sagonpencere,solarkapencere,sagarkapencere;
   float onsagtekerbas�nc,onsoltekerbas�nc,arkasoltekerbas�nc,arkasagtekerbas�nc;
   int speed;
   long int odometer;
   float enginetemp,innertemp,outertemp;
   bool crashsensor,farstate,stopsignals;
   float fuellevel;
  int turnsignals;
  float aircondition;
 


};
#endif