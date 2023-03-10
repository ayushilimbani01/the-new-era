#include<iostream>
#include<string.h>

using namespace std;

class time
{
	public :
		int hour;
		int min;
		int sec;
		
};

int main()
{
	time t1;
	cout<<"enter a second";
	cin>>t1.sec;
	t1.hour=t1.sec/3600;
	t1.min=(t1.sec-(3600*t1.hour))/60;
	t1.sec=(t1.sec-(3600*t1.hour))-(t1.min*60);
	
	cout<<"hour:-"<<t1.hour<<"minutes:-"<<t1.min<<"second:-"<<t1.sec;
	
	return 0;
}
