#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int fs=0;
		if((n-1)%8==0||(n-2)%8==0||(n-3)%8==0)fs=n+3;
		else if((n+1)%8==0)fs=n+1;
		else if((n%8==0))fs=n-1;
		else if((n+2)%8==0||(n+3)%8==0||(n+4)%8==0)fs=n-3;
		cout<<fs<<endl;
	}
}
