#include<bits/stdc++.h>
using namespace std;
#define ll long long
static bool cmp(vector<ll>& v1,vector<ll>& v2){
    return v1[0]<v2[0]; 
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<vector<ll>> v(n,vector<ll>(3));
    for(int i = 0;i<n;i++) cin>>v[i][0];
    for(int i = 0;i<n;i++) {
        cin>>v[i][1]; 
        v[i][2] = i;  
    }
    sort(v.begin(),v.end(),cmp);
    vector<ll> res(n);
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    ll sum = 0;
    for(int i = 0;i<n;i++){
        res[v[i][2]] = sum;
        if((int)pq.size()<k){
            pq.push(v[i][1]);
            sum+=v[i][1];
        }
        else if(k>0 && v[i][1]>pq.top()){
            sum -= pq.top();
            pq.pop();
            pq.push(v[i][1]);
            sum += v[i][1];
        }
    }

    for(int i = 0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
