#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		int a[26]={0};
		int q,c=0;
		for(int j=0;j<s.length();j++)
		{
			q=s[j];
			if(s[j]>=97)
			{
				a[q-97]++;
			}
		}
		//cout<<s<<endl;
		for(int j=0;j<26;j++)
		{
			//cout<<a[j]<<" ";
			if(a[j]==s.length()-a[j])
			{
				c=1;
				cout<<"YES"<<endl;
				break;
			}
			
		//cout<<a[j]<<" ";	
		}
		if(c==0)
		{
			cout<<"NO"<<endl;
		}
	}
}
