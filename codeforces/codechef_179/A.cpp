#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(long long i = 0;i<n;i++) {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<long long> pre(n,0);
        pre[0] = v[0];
        for(long long i =1;i<n;i++){
            pre[i] = v[i]+pre[i-1];
        }
        long long q;
        cin>>q;
        vector<vector<long long>>mi(q,vector<long long>(2));
        for(long long i = 0;i<q;i++){
            cin>>mi[i][0]>>mi[i][1];
        }
        for(long long i = 0;i<q;i++){
            long long x = mi[i][0];
            long long y = mi[i][1];
            long long ans = 0;
            long long j = 0;
            while(j<n && v[j]<x){
                j++;
            }
            if(j==n){
                ans+=abs(v[n-1]-x);
            }
                if(j==0){
                    ans+=abs(min(y,pre[j+1]-pre[j])-y);
                }
                else if(j==n-1){
                    ans+=abs(min(y,pre[j-1])-y);
                }else{
                    ans+=abs(min(y,pre[j-1]+pre[n-1]-pre[j])-y);
                }
            cout<<ans<<endl;
        }
    }
}