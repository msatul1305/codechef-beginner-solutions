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
		int a1,a2,a3,a4,a5,a6,o1,o2,o3,o4,o5,o6;
		a1=n%100;
		o1=n/100;
		a2=a1%50;
		o2=a1/50;
		a3=a2%10;
		o3=a2/10;
		a4=a3%5;
		o4=a3/5;
		a5=a4%2;
		o5=a4/2;
		a6=a5%1;
		o6=a5/1;
		cout<<o1+o2+o3+o4+o5+o6<<endl;
	}
}
