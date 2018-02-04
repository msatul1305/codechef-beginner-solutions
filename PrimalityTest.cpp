#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int n;
		cin>>n;
		int c=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				c=1;
				cout<<"no"<<endl;
				break;
			}
			
		}
		if(c==0)
		cout<<"yes"<<endl;
	}
}
