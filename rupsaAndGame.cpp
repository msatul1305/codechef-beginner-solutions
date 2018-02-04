#include<iostream>
#include<math.h>
#include<string.h>
#define M 1000000007
using namespace std;
long long int test,n,sum,r,p,prod,k,ii,val,fval;
long long int a[100001],dp[100001];
main()
{
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cin>>n;
		for(int j=0;j<=n;j++)
		{
			cin>>a[j];
		}
	 	if(n==1)
		 {
            sum = (2*(a[0]%M)*(a[1]%M))%M;
        	cout<<sum<<"\n";
        	continue;
       }
		p=1;
		sum=val=fval=0;
		dp[0]=1;
		dp[1]=1;
		for(int ii = 2 ;ii<=n;ii++)
        dp[ii] = (dp[ii-1]*2)%M;
		/*for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				r=(a[i]%M*a[j]%M)%M;
				prod=1;
				for(k=1;k<=p;k++)
				{
					prod<<=1;
					prod%=M;
				}
				sum=sum+(r*prod)%M;
				sum%=M;
				p--;
			}
			p=n-1;
		}*/
		 for(int i = n-1;i>=0;i--)
		 {
            p = (p*2)%M;
            val = (val%M+((p%M*a[i+1]%M)%M))%M;
            fval = (a[i]%M*dp[i]%M*val%M)%M;
            sum = (sum%M+fval%M)%M;
	     }
		sum=sum%M;
		cout<<sum<<endl;
	}
}
 
