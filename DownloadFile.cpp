#include<bits/stdc++.h>
using namespace std;
main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,k;
		cin>>n>>k;
		long long int t[n],d[n];
		//long long int s=0;
		for(long long int i=0;i<n;i++){
			cin>>t[i]>>d[i];
			//s=s+t[i];
		}
		long long int pay=0;
		if(k!=0){
			long long int sum=k,j=0;
		for(long long int i=0;i<n&&sum>0;i++){
			sum-=t[i];
			j=i;
		}
//		while(k>0){
//			sum-=t[i];
//		}
		if(sum==0){
			j=j+1;
			for(;j<n;j++){
			pay=pay+(t[j]*d[j]);	
			}
		}
		else {
			t[j]=t[j]+sum;
			for(;j<n;j++){
			pay=pay+(t[j]*d[j]);
		}
	}
		}
//		else if(k==s){
//			cout<<"0"<<endl;
//		}
		else{
			for(long long int i=0;i<n;i++){
				pay+=(t[i]*d[i]);
			}
		}
		
	cout<<pay<<endl;
}
}
