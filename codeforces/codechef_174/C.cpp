#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i = 0;i<n;i++) cin>>v[i];

        int ans = -1;
	    for(int idx = 0;idx<n;idx++){
	       if(n-1-idx>1 && idx-0>1){
            ans = max(ans,v[idx]);
        }else if(n-1-idx==1 && idx-0==1){
            int temp = max(0,v[idx]-min(v[idx+1],v[idx-1]));
            temp= max(0,temp-max(v[idx+1],v[idx-1]));
            ans = max(ans,temp);
            
        }else if(n-1-idx==1){
            ans = max(ans,max(0,v[idx]-v[idx+1]));
        }else if(idx-0==1){
            ans=max(ans,max(0,v[idx]-v[idx-1]));
        }else{
            ans = max(ans,v[idx]);
        } 
	    }
        cout<<ans<<endl;
        
	    
	}

}