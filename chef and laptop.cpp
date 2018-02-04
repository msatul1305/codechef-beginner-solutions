#include<iostream>
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
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1])
				{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				}
			}
		}
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
