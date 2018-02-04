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
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int b[n];
		for(int j=0;j<n;j++)
		{
			cin>>b[j];
		}
		int cn=0;
		for(int j=0;j<n;j++)
		{
			if(j==0)
			{
				if(b[j]<=a[j])
				cn++;
			}
			else if(a[j]-a[j-1]>b[j])
			cn++;
		}
		cout<<cn<<endl;
	}
}
