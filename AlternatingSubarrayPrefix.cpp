#include<iostream>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int no;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++){
			int j=i;
			int c=1;
			while(j<n-1){
				if((a[j]>0&&a[j+1]<0)||(a[j]<0)&&a[j+1]>0){
					c++;
					j++;
				}
				else {
					for(int k=j;k<n;k++)cout<<"1"<<endl;
				}break;
			}
			cout<<c<<" ";
			if(c==n-i&&i<n-1){
				no=i;
				goto label;
			}
		}
		label:
			{
				for(int i=no;i>1;i--)cout<<i<<" ";
			}
		cout<<endl;
	}
}
