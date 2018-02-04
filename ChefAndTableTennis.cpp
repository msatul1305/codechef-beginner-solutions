#include<iostream>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int w=0,l=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='0')l++;
			else w++;
			if(l==10&&w==10){
			//cout<<"tie";
			while((s[i]!='0'&&s[i+1]!='0')||(s[i]!='1'&&s[i+1]!='1')){
			i++;	
			}
			if(s[i-1]=='0'&&s[i]=='0')cout<<"LOSE"<<endl;
			else cout<<"WIN"<<endl;
			break;	
			}
			else if(l==11){
				cout<<"LOSE"<<endl;
				break;
			}
			else if(w==11){
			cout<<"WIN"<<endl;
			break;	
			}
		}
	}
}
