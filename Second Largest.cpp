#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a[3];
		for(int j=0;j<3;j++)
		{
			cin>>a[j];
		}
		sort(a,a+3);
		cout<<a[1]<<endl;
		
	}
}
