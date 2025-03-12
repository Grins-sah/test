#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
static bool cmp(pair<long long,long long>& p1,pair<long long,long long>& p2){
    return p1.first<p2.first;
}
vector<long long> findMaxSum(vector<int> nums1, vector<int>nums2, int k) {
    long long n = nums1.size();
    vector<pair<long long,long long>> v;
    unordered_map<long long,long long> m;
    for(long long i = 0;i<n;i++){
        v.push_back({nums1[i],nums2[i]});
        m[nums1[i]]=i;
    }
    sort(v.begin(),v.end());
    vector<long long> x(n,0);
    vector<long long> ans(n,0);
    
    x[m[v[0].first]]=0;
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    pq.push(v[0].second);
    ll sum = pq.top(); 
    int prev = v[0].first;
    ll SuperSum = 0;
    for(long long i = 1;i<n;i++){
        
        while(pq.size()>k){
            sum-= pq.top();
            pq.pop();
        }
        if(prev!=v[i].first)SuperSum = sum;
         cout<<i<<" "<<SuperSum<<" "<<sum<<" "<<prev<<v[i].first <<endl;
        x[m[v[i].first]]=v[i].first==prev ? SuperSum : sum;
        cout<<i<<" "<<SuperSum<<" "<<sum<<" "<<prev<<x[m[v[i].first]] <<endl;
        prev = v[i].first;
        pq.push(v[i].second);
        sum+=v[i].second;
        
    }
    return x;
    
    
}
int main(){
    vector<ll> v = findMaxSum({18,11,24,9,10,11,7,29,16},{28,26,27,4,2,19,23,1,2},1);
    for(auto ele :v) cout<<ele<<" ";
}