#include<iostream>
using namespace std;
main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,m;
		cin>>n>>m;
		string s[n];
		for(int j=0;j<n;j++)cin>>s[j];
		int c=0;
		for(int j=0;j<n;j++){
			int l1=strlen(s[j]);
			int l2=strlen(s[j+1]);
//			int k=0;
//			while(k<l){
//				if(s[j][j]==s[j+1][k]){
//					c++;
//					break;
//				}
//				k++;
//			}
		int a1[26],a2[26];
        for (int k = 0 ; k < l1 ; k++)
           a1[s[j][k]-'a']+= 1;
 
        for (int k = 0 ; k < l2 ; k++)
           a2[s[j+1][k]-'a']+= 1;
           
        for (int k = 0 ;k<26 ;k++)
        {
            if (a1[k] != 0 && a2[k] != 0)
            {
                
            }
        }
    }
		}
	}
}
