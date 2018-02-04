#include<iostream>
using namespace std;
main()
{
	string s;
	getline(cin,s);
	cout<<"original string= "<<s<<" with length= "<<s.size()<<endl;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]<'a'||s[i]>='z')
		{
			s[i]=NULL;
		}
	}
	cout<<"changed string removing all non small alphabets= "<<s<<" with length= "<<s.size()<<endl;
}
