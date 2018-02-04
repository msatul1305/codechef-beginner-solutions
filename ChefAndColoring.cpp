#include<iostream>
using namespace std;
main(){
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int nr=0,ng=0,nb=0;
		for(int i=0;i<n;i++){
			if(s[i]=='G')ng++;
			else if(s[i]=='B')nb++;
			else if(s[i]=='R')nr++;
		}
		int larg=0;
		if(nr>ng&&nr>nb)larg=nr;
		else if(ng>nb)larg=ng;
		else larg=nb;
		//cout<<nr<<ng<<nb<<n<<larg<<endl;
		cout<<n-larg<<endl;
	}
}
