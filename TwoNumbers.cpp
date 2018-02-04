#include<bits/stdc++.h>
using namespace std;
main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int a,b,n;
		cin>>a>>b>>n;
		if((n%2)!=0){
			a=a*pow(2,n/2+1);
			b=b*pow(2,n/2);
		}
		else {
			a=a*pow(2,n/2);
			b=b*pow(2,n/2);
		}
		if(a>=b)cout<<a/b<<endl;
		else cout<<b/a<<endl;
	}
}
