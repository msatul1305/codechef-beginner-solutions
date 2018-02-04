#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int l,r;
		cin>>l>>r;
		long long int sum=0;
		//int j;
		int k=l%6;
		k=6-k;
		int kk=r%6;
		
		int rr=r-kk;
		//j=l+k;
		int z=rr/6;
		int zz=l/6;
		//cout<<z;
		sum=6*((z*(z+1)/2)-(zz*(zz-1)/2));
		
//		while(j<=rr)
//		{	
//				sum+=j;
//				j+=6;
//			}
		cout<<sum<<endl;
	}
}
