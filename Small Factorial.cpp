#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int res=1;
		for(int j=1;j<=n;j++)
		{
			res=res*j;
		}
		cout<<res<<endl;
	}
}
