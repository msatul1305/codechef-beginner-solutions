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
		int j=0;
		int f=0,l=0;
		while(n>0)
		{
			int r=n%10;
			if(j==0)f=r;
			j++;
			n=n/10;
			if(n%10<10)l=r;
		}
		//cout<<"first= "<<f<<endl<<"last= "<<l<<endl;
		long long int sum=f+l;
		cout<<sum<<endl;
	}
}
