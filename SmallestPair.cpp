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
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		sort(a,a+n);
		cout<<a[0]+a[1]<<endl;
	}
}
