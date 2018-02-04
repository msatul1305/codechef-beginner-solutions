#include<iostream>
using namespace std;
main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int n1,n2;
		cin>>n1>>n2;
		long long int min=0,sum=0;
		if(n1>n2)min=n1;
		else min=n2;
		sum=n1+n2;
		cout<<min<<" "<<sum<<endl;
	}
}
