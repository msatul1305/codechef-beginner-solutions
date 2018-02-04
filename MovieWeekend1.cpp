#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
		int n;
		cin>>n;
		int l[n],r[n];
		for(int i=0;i<n;i++){
			cin>>l[i];
		}
		for(int i=0;i<n;i++){
			cin>>r[i];
		}
		int c[n],larg=0,pos=0;
		for(int i=0;i<n;i++){
			c[i]=l[i]*r[i];
			if(c[i]>larg){
			larg=c[i];
			pos=i;	
			}
		} 
		//cout<<"pos="<<pos;
		int maxri=r[pos],minindex=pos;
		for(int i=0;i<n;i++){
			if(c[i]==larg&&i!=pos){
				if(r[i]>maxri){
					pos=i;
					maxri=r[pos];
				}
				}
			}
		//	cout<<"maxri="<<maxri<<endl;
			for(int i=0;i<pos;i++){
			if(c[i]==larg&&i!=pos){
				if(r[i]==maxri){
					pos=i;
					//cout<<"changed"<<pos<<endl;
					break;
				}
				}
			}
			cout<<pos+1<<endl;
		}
		
		
	}	
