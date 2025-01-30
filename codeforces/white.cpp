#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    long long n;
	    cin>>n;
	    long long p;
	    cin>>p;
	    vector<long long> ans(n);
	    vector<long long> v(n);
	    for(long long i = 0;i<n;i++) cin>>v[i];
	    if(n<3){
	       for(long long i = 0;i<n;i++){
	           if(v[i]!=0){
	               if(i+1<n && v[i+1]==0) v[i]= v[i]%p==0? v[i]/p: v[i]/p +1;
	           }
	       } 
	        for(long long i = 0;i<n;i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	       continue;
	    }

	    vector<long long> pre(n,0);
	    vector<long long> post(n,0);
	    pre[0]=v[0];
	    post[n-1]=v[n-1];
	    for(long long i = 1;i<n;i++){
			if(v[i]==0) continue;
			else{
				pre[i]= max(v[i],pre[i-1]);
			}
	    }
	    for(long long i = n-2;i>=0;i--){
			if(v[i]==0) continue;
			else{
				post[i]= max(v[i],post[i+1]);
			}
	    }

	    for(long long i = 0;i<n;i++){
	        if(v[i]==0) continue;
	        long long diff = min(pre[i],post[i]);
	        if(diff==0) ans[i]=v[i]%p==0? v[i]/p: v[i]/p +1;
	        else{
	            ans[i]=diff%p==0? diff/p : diff/p +1;
	        }
	    }
	    for(long long i = 0;i<n;i++){
	        cout<<ans[i]<<" ";;
	    }
	    cout<<endl;
	}

}
