#include<iostream>
using namespace std;
#include<math.h>
main()
{
	int test,n,sum,r,p,mod=1000000007;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cin>>n;
		int a[n+1];
		for(int j=0;j<=n;j++)
		{
			cin>>a[j];
		}
		p=n;
		sum=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				r=a[i]*a[j];
				sum=(sum%mod)+(r*pow(2,p));
				p--;
				sum%=mod;
			}
			p=n-1;
			sum%=mod;
		}
		sum=sum%mod;
		cout<<sum<<endl;
	}
} 
