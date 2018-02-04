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
			b[j]=a[j];
		}
		sort(b,b+n);
		//cout<<"b=";
		//for(int j=0;j<n;j++)
		//cout<<b[j];
		int small=b[0];
		int hcf=1;
		for(int j=1;j<=small;j++)
		{
			int c=0;
			for(int k=0;k<n;k++)
			{
				if(b[k]%j==0)c++;
			}
			//cout<<"count["<<j<<"]="<<c;
			if(c==n)
			{
				hcf=j;
			}	
		}
		//cout<<"hcf="<<hcf<<endl;
 		for(int j=0;j<n;j++)
 		{
 			a[j]=a[j]/hcf;
		 }
		 for(int j=0;j<n;j++)
		 {
		 	cout<<a[j]<<" ";
		 }
		 cout<<endl;
	}
}
