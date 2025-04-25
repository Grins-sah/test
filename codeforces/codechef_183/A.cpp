#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string t;
	    cin>>t;
	    int x = 0;
	    vector<int> pre(n,-1);
	    for(int i = 1;i<n;i++){
               if(s[i-1]=='1') pre[i]=i-1;
               else pre[i]=pre[i-1];
	    }
	    int ans = 0;
	    int op = 0;
	    bool res = true;
        vector<int> v2;
	    for(int i = n-1;i>=0;i--){
	        if(s[i]!=t[i]){
	            if(pre[i]==-1){
	                res = false;
	                cout<<-1<<endl;
	                break;
	            }
	            op+=2*(i-pre[i])-1;
                for(int k = pre[i];k<i;k++){
                    v2.push_back(k);
                }
                for(int k = i-2;k>=pre[i];k--){
                    v2.push_back(k);
                } 
	            if(t[i]==1) for(int j = i+1;j<n;j++){
	                pre[j] = min(pre[j],i);
	            }
	            if(op>3*n){
	                cout<<-1<<endl;
	                res = false;
	                break;
	            }
	            
	            
	        }
	    }
	    if(res){
            cout<<op<<endl;
            for(auto x: v2){
                cout<<x+1<<" ";
            }
            cout<<endl;
        }
        
	    
	}

}
