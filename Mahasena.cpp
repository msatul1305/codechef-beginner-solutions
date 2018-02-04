#include<iostream>
using namespace std;
main()
{
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int ev=0,od=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]%2==0)
			{
				ev++;
			}
			else od++;
		}
		if(ev>od)
		cout<<"READY FOR BATTLE"<<endl;
		else cout<<"NOT READY"<<endl;
}
