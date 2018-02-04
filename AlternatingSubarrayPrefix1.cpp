#include<iostream>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++){
			int j=i;
			int c=1;
			while(j<n-1){
				if((a[j]>0&&a[j+1]<0)||(a[j]<0)&&a[j+1]>0){
					c++;
					j++;
				}
				else break;
			}
			if(c>1){
				for(int k=c;k>0;k--){
					if(k>1)i++;
					cout<<k<<" ";
					
				}
			}
			else cout<<c<<" ";
		}
		cout<<endl;
	}
} 
