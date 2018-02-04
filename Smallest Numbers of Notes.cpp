#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int o1,o2,o3,o4,o5,p1,p2,p3,p4,p5;
		if(n%100==0)
		{
			 o1=n/100;
			 p1=n%100;
			cout<<o1<<endl;
		}
		else if(p1%50==0)
		{
			 o2=p1/50;
			cout<<o1+o2<<endl;
			 p2=p1%50;
		}
		else if(p2%10==0)
		{
			 o3=p2/10;
			cout<<o1+o2+o2<<endl;
			 p3=p2%10;
		}
		else if(p3%5==0)
		{
			 o4=p3/5;
			cout<<o1+o2+o3+o4<<endl;
			 p4=p3%5;
		}
		else if(p4%2==0)
		{
			 o5=p4/2;
			cout<<o1+o2+o3+o4+o5<<endl;
			 p5=p4%2;
		}
		else {
			cout<<o1+o2+o3+o4+o5+p5<<endl;
		}
	}
}
