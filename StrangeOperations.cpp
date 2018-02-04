#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int sum=0,a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%2!=0){
			cout<<"even"<<endl;
		}
		else {
			if(k==1)cout<<"odd"<<endl;
			else cout<<"even"<<endl;
		}
		
	}
}
