#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int diff=0,small=0,larg=0;
		if(n>m){
			small=m;
			larg=n;
		}
		else if(n<m){
			small=n;larg=m;
		}
		else if(n==m){
			small=larg=n;
		}
		diff=larg-small;
		if(diff<=k)
		{
			cout<<"0"<<endl;
		}
//		else if(diff<k)
//		{
//			cout<<diff<<endl;
//		}
		else 
		{
			cout<<larg-small-k<<endl;
		}
		
	}
}
