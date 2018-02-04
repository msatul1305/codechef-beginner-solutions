#include<iostream>
using namespace std;
main(){
	int i=0;
	for(int i=0;i<10;i++){
		cout<<i<<" ";
		if (i>5)goto label;
	}
	label:{
		cout<<"inside label"<<i<<endl;
	}
	cout<<"oL";
}
