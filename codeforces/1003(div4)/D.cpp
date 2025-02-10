#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        long long n,m;
        cin>>n>>m;
        unordered_map<long long,vector<long long>> s;
        priority_queue<pair<long long,long long>> q;
        for(long long i = 0;i<n;i++){
            long long res = 0;
            for(long long j = 0;j<m;j++){
                long long x;
                cin>>x;
                s[i].push_back(x);
                
                res+=x;
                
            }
            q.push({res,i});
        }

        long long ans =0;
        long long res = 0;
        while(!q.empty()){
            long long i = q.top().second;
            for(long long j =0;j<s[i].size();j++){
                ans+=s[i][j];
                res+=ans;
            }
            q.pop();
        }
        cout<<res<<endl;
    }
}