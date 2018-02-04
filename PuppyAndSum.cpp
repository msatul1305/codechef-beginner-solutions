#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int d,n;
		cin>>d>>n;
		int sum=0;
		for(int i=0;i<d;i++)
		{
			sum=n*(n+1)/2;
			n=sum;
		}
		cout<<sum<<endl;
	}
}
