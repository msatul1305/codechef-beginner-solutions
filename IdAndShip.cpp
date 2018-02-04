#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		char ch;
		cin>>ch;
		if(ch=='B'||ch=='b')
		cout<<"BattleShip"<<endl;
		else if(ch=='C'||ch=='c')cout<<"Cruiser"<<endl;
		else if(ch=='D'||ch=='d')cout<<"Destroyer"<<endl;
		else if(ch=='F'||ch=='f')cout<<"Frigate"<<endl;
	}
}
