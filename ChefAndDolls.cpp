#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			}
			sort(a,a+n);
			for(int j=0;j<n;j=j+2)
			{
				if(a[j]!=a[j+1])
				{
					cout<<a[j]<<endl;
					break;
				}
			}
	
	}
}
