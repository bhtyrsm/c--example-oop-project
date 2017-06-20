#include"CarControl.h"
#include"CarPacketPackager.h"
#include"CarSimPacketParser.h"
#include"CarTCPConnection.h"
#include<iostream>
using namespace std;

void connection();
void cardisplay();
void carcontrol();


CarTCPConnection tcpconnect;
CarControl carcntrl;
CarPacketPackeger paket;

int main()
{
	

	int secim;
	

	do
	{
		cout<<" \n   MAIN MENU  "<<endl;
		cout<<"  1.car connection "<<endl;
		cout<<"  2.car display "<<endl;
		cout<<"  3.car control "<<endl;
		cout<<"  4.Quit "<<endl;
		cout<<endl;
		cout<<"choose one : ";

		cin>>secim;

		if(secim==1)
			connection();
		else if(secim==2)
			cardisplay();
		else if(secim==3)
			carcontrol();
		else if(secim==4)
			continue;            // incorrect chosing uyarýsýný 4 girildiðinde almamak icin boyle  yaptým..
		else
			cout<<" incorrect chosing "<<endl<<endl;

	}while(secim!=4);

	
	
system("pause");
}
void connection()
{
	int secim2;
	do
	{
		
		  cout<<"   \n CONNECTION MENU "<<endl;
		  cout<<"    1.connect "<<endl;
		  cout<<"    2.disconnected "<<endl;
		  cout<<"    3.back "<<endl;

		  cout<<"chose one  :";
		cin>>secim2;
		
		if(secim2==1)
			tcpconnect.connect();
		else if(secim2==2)
			tcpconnect.disCoonect();
		else if(secim2==3)
			continue; 
		else
			cout<<"\n ýncorrect choosing"<<endl;

		
	}while(secim2!=3);
}


	


void carcontrol()
{
	int nspeed;
	int secim3;
	do
	{
		cout<<"\n   Car Control Menu "<<endl;
		cout<<"  1. Set Speed "<<endl;
		cout<<"  2.reset odometer "<<endl;
		cout<<"  3.open/close window "<<endl;
		cout<<"  4.open/close far "<<endl;
		cout<<"  5.Back "<<endl;

cout<<"choose one :"<<endl;
cin>>secim3;
if(secim3==1)
{
	cout<<"enter the new speed"<<endl;
	cin>>nspeed;
	tcpconnect.sendPacked(paket.getSpeed(nspeed));
	cout<<"speed will be  "<<nspeed<<endl;


}
else if(secim3==2)
{
	cout<<"odometer will be reset"<<endl;
	tcpconnect.sendPacked(paket.getOdomrpacket(0));
}
else if(secim3==3)
{
bool a,b,c,d;
cout<<"enter the windows states which you want"<<endl;
cin>>a>>b>>c>>d;
tcpconnect.sendPacked(paket.getWindowpacket(a,b,c,d));
}
else if(secim3==4)
{
	bool a;
	cout<<"enter the far states"<<endl;
	cin>>a;
	tcpconnect.sendPacked(paket.getFarpacket(a));

}
else if(secim3==5)
	continue;

else
	cout<<" incorrect choosing"<<endl;

carcntrl.updatestatus();

	}while(secim3!=5);
}
void cardisplay()
{
	cout << "Display";
}