#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c==180&&a>0&&b>0&&c>0)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
