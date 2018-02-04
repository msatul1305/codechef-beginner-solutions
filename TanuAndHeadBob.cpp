#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		char ch;
		int n;
		cin>>n;
		int cn=0,cy=0,ci=0;
		for(int j=0;j<n;j++)
		{
			cin>>ch;
			if(ch=='N')
			cn++;
			else if(ch=='I')ci++;
			else if(ch=='Y')cy++;
		}
		if(ci>0)cout<<"INDIAN"<<endl;
		else if(cn>0&&cy==0)cout<<"NOT SURE"<<endl;
		else cout<<"NOT INDIAN"<<endl;
	}
}
