#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int c=0;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n-1;i++){
			int sum=a[i]*a[i+1];
			//cout<<sum<<endl;
			c=0;
			for(int j=0;j<n;j++){
				if(sum==a[j]){
					c=1;
					break;
				}
			}
			if(c==0)break;
		}
		if(c==1)cout<<"yes"<<endl;
			else cout<<"no"<<endl;
	}
}
