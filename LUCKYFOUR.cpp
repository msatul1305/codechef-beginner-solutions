#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		int c=0;
		while(n>0)
		{
			int r=n%10;
			if(r==4)
			c++;
			n=n/10;
		}
		cout<<c<<endl;
		
	}
}
