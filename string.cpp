#include<iostream>
using namespace std;
main(){
	string s[5];
	for(int i=0;i<5;i++){
		cin>>s[i];
	}
	for(int i=0;i<5;i++){
		cout<<s[i][i]<<endl;
	}
}
