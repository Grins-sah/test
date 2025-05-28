#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    vector<long long> arr(n);
	    unordered_map<long long,long long> m;
	    for(long long i = 0;i<n;i++) cin>>arr[i];
	    long long mex = 1;
	    long long ans = 0;
	    long long y = 1;
	    long long a = 0;
	    vector<long long> res(n,0);
	    vector<long long> v(1,0);
	    for(long long i = 0;i<n;i++){
	        if(arr[i]==1){
               ans+=y;
               a+=y;
               y++;
               mex++;
	            
	        }else{
	            
                ans=ans*2+a;
                a*=4;
                y*=2;
	        }
            res[i]=ans;
	    }
	    for(long long i = 0;i<n;i++){
	        cout<<res[i]<<" ";
	    }
	    cout<<endl;
	}

}
