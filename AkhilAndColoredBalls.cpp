#include<bits/stdc++.h>
#include<string.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s1="",s2="",s3="";
		cin>>s1>>s2;
		int l=s1.length();
		for(int i=0;i<l;i++){
			if(s1[i]=='W'&&s2[i]=='W')s3[i]='B';
			else if(s1[i]=='B'&&s2[i]=='B')s3[i]='W';
			else if(s1[i]=='W'&&s2[i]=='B')s3[i]='B';
			else if(s1[i]=='B'&&s2[i]=='W')s3[i]='W';
			cout<<s3[i];
		}
		cout<<endl;
	}
}
