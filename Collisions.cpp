#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string a[n];
		for(int i=0;i<n;i++){
				cin>>a[i];
			}
		int c[m]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[j][i]<<" ";
			if(a[j][i]=='1'){
				c[j]++;
				}
			}
			cout<<endl;
		}
		int count=0;
		for(int i=0;i<m;i++){
			cout<<c[i]<<" ";
			if(c[i]>1)count+=c[i];
		}
		cout<<endl;
		cout<<count<<endl;
	}
}
