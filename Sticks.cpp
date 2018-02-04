#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[2]={0};
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		int j=0,found=0;
		//for(int i=0;i<n;i++)cout<<a[i]<<" ";
		//cout<<endl;
		for(int i=n-1;i>=0;i--){
			//cout<<a[i]<<" "<<a[i-1]<<endl;
			while(a[i]==a[i-1]&&j!=2){
				b[j]=a[i];
				j++;
				i-=2;
			}
			if(j==2){
				found=1;
				break;
			}
		}
		if(found==0)cout<<"-1"<<endl;
		else cout<<b[0]*b[1]<<endl;
		
	}
}
