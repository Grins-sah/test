#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    string str= "ADVITIYA";
	string s;
	cin>>s;
	int ans = 0;
	for(int i = 0;i<8;i++){
	   int temp = str[i]-s[i];
	   if(temp!=0){
	       if(temp>0){
	           ans+=temp;
	       }else{
	           ans+=str[i]-'A'+'Z'-s[i]+1;
	       }
	   }
	}
	cout<<ans<<endl;
	}
	

}
