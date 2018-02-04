#include<iostream>
using namespace std;
main()
{
	int i,j,a[100],n,temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	/*	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<"\n";
	*/
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
		cout<<a[i]<<" ";
	}
}
