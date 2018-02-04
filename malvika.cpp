#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n;
		cin>>m;
		if(n==1)
		cout<<"0\n";
		else if(n==2)
		cout<<m<<"\n";
		else
		cout<<((n-1)+(m-1)*2)<<endl;
	}
}
