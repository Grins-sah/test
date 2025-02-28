#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s1,s2,s3;
	    cin>>s1>>s2>>s3;
	    int x1 = 0,x2=0,x3=0,y1=0,y2=0,y3=0;
	    for(int i = 0;i<n;i++){
	        if(s1[i]=='1') x1++;
	        else y1++;
	        if(s2[i]=='1') x2++;
	        else y2++;
	       	if(s3[i]=='1') x3++;
	        else y3++;
	        
	    }
        int diff1 = 0;
        int diff2 = 0;
        if(abs(x1-y1)!=n){
            if(x1-y1>0)diff1=x1-y1;
            else diff2 = x1-y1;
        }
        if(abs(x2-y2)!=n){
            if(x2-y2>0)diff1+=x2-y2;
            else diff2 += x2-y2;
        }
        if(abs(x3-y3)!=n){
            if(x3-y3>0)diff1+=x3-y3;
            else diff2 += x3-y3;
        }
        if(diff2==-1*diff1) cout<<abs(diff1)<<endl;
        else cout<<-1<<endl;
        
        
	}

}
