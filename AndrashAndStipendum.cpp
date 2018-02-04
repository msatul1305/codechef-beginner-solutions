#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		float sum=0.0;
		for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];	
		}
		int c=1;
		for(int i=0;i<n;i++){
			if(a[i]<=2){
				c=0;
				break;
			}
		}
		int avg=sum/n;
		int c1=0;
		if(avg>=4.0&&c==1){
			for(int i=0;i<n;i++){
				if(a[i]==5){
					c1=1;
				break;
				}
			}
		}
		if(c1==1)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		
		
	}
}
