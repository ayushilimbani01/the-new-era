#include<iostream>

using namespace std;

class house
{
	public:
		int flateno,rooms,mem;
		char add[100];
		
};
 int main()
 {
 	house e1;
 	cout<<"enter flate no.:-";
 	cin>>e1.flateno;
 	cout<<"enter rooms.:-";
 	cin>>e1.rooms;
 	cout<<"enter address.:-";
 	cin>>e1.add;
 	cout<<"how many members.:-";
 	cin>>e1.mem;
 	
 	
 	cout<<"flate no.:-"<<e1.flateno<<endl;
 	cout<<"address.:-"<<e1.add<<endl;
 	cout<<"room.:-"<<e1.rooms<<endl;
 	cout<<"member.:-"<<e1.mem<<endl;
 	
 	return 0;
 }
