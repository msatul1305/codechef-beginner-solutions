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
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int f;
		cin>>f;
		int fav[f];
		for(int j=0;j<f;j++)
		cin>>fav[j];
		int k=0;
		int c=0;
		for(int j=0;j<n;j++)
		{
			
			while(k<f)
			{
				if(a[j]==fav[k]){
					c++;
					j++;
					k++;
				}
				else {
					j++;
					//k++;
				}
			}
		}
		if(c==f)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
