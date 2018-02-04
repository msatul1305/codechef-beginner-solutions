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
		int temp=n;
		int pal=0;
		while(n>0)
		{
			int r=n%10;
			pal=pal*10+r;
			n=n/10;
		}
		if(pal==temp)
		{
			cout<<"wins"<<endl;
		}
		else cout<<"losses"<<endl;
	}
}
