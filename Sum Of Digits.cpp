#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,sum=0;
		cin>>n;
		while(n>0)
		{
			int r=n%10;
			sum=sum+r;
			n/=10;
		}
		cout<<sum<<endl;
	}
}
