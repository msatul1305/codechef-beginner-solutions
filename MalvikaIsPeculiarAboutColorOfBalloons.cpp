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
		int na=0,nb=0;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]=='a')
			na++;
			else if(s[j]=='b')nb++;
		}
		if(na>=nb)cout<<nb<<endl;
		else if(na<nb)cout<<na<<endl;
		else if(na==0||nb==0) cout<<"0"<<endl;
	}
}
