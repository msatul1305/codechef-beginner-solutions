#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int fs=0;
		if((n-1)%8==0)cout<<n+3<<"LB"<<endl;
		else if((n-2)%8==0)cout<<n+3<<"MB"<<endl;
		else if((n-3)%8==0)cout<<n+3<<"UB"<<endl;
		else if((n+1)%8==0)cout<<n+1<<"SU"<<endl;
		else if((n%8)==0)cout<<n-1<<"SL"<<endl;
		else if((n+2)%8==0)cout<<n-3<<"UB"<<endl;
		else if((n+3)%8==0)cout<<n-3<<"MB"<<endl;
		else if((n+4)%8==0)cout<<n-3<<"LB"<<endl;
	}
}
