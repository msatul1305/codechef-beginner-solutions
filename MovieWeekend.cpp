#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;cin>>n;
		int l[n],r[n];
		for(int j=0;j<n;j++)
		cin>>l[j];
		for(int j=0;j<n;j++)
		cin>>r[j];
		int sum[n];
		for(int j=0;j<n;j++)
		{
			sum[j]=l[j]*r[j];
			//cout<<sum[j]<<" ";
		}
		int larg=sum[0],index=0;
		for(int j=1;j<n;j++)
		{
			if(sum[j]>larg){
			larg=sum[j];
			index=j;	
			}	
		}
		int maxrj=index;
		for(int j=0;j<n;j++)
		{
			if(sum[j]==larg)
			{
				if(r[j]>maxrj)
				{
					maxrj=r[j];
					index=j;
				}
			}
		}
		
		for(int j=0;j<n;j++)
		{
			if(sum[j]==larg)
			{
				index=j;
				break;
			}
		}
		cout<<index+1<<endl;
		
	}
}
