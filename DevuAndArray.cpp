#include<bits/stdc++.h>
using namespace std;
main(){
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
//	for(int i=0;i<n;i++)cout<<a[i]<<" ";
//	cout<<endl;
	int temp;
	for(int i=0;i<q;i++){
		cin>>temp;
		//cout<<temp<<" "<<a[0]<<" "<<a[n-1]<<endl;
		if(temp>=a[0]&&temp<=a[n-1])cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
