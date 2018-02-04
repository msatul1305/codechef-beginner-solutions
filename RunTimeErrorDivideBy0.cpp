#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"enter a b";
	cin>>a>>b;
	int c=a-b;
	cout<<a/b<<endl;
	cout<<a<<endl;
	try{
		if(c!=0)cout<<a/c;
		else throw c;
	}
	catch(int i){
		cout<<"Divide by 0 exception caught! :|";
	}
	
	//ncout<<a/c<<endl;
	
	cout<<b;
}
