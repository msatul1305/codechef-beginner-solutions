#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[100],b[50];
	int l;
	cin.get(a,100);
	strcpy(b,a);
	cout<<b<<endl<<a<<endl;
	strcat(b,a);
	cout<<b<<endl<<a<<endl;
	l=strlen(a);
	cout<<l<<endl;
	char x[10]="atul",y[10]="lambda";
	cout<<strcmp(x,y);
	strcpy(y,x);
	strrev(y);
	cout<<x<<endl;
	cout<<y;
	
}
