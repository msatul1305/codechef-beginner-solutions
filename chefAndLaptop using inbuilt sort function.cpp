#include<iostream>	
#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,i,j,temp;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
		int a[n];
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		sort(a,a+n);
//		for(i=0;i<n;i++)
//		{
//			cout<<a[i];
//		}
		
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			{
			while(a[i]==a[i+1])
			i++;
			}
			else
			{
				cout<<a[i]<<"\n";
				break;
			}
			
			
		}
		
	}
}
