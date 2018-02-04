#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		float q,p,amt=0.0,disc=0.0;
		cin>>q>>p;
		if(float(q)>1000)
		{
			disc=float(0.1)*q*p;
		}
		amt=float(q*p)-disc;
		cout<<float(amt)<<endl;
	}
}
